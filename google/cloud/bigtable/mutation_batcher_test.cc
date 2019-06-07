// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "third_party/cloud_cpp/google/cloud/bigtable/mutation_batcher.h"
#include "third_party/cloud_cpp/google/cloud/bigtable/testing/mock_completion_queue.h"
#include "third_party/cloud_cpp/google/cloud/bigtable/testing/mock_mutate_rows_reader.h"
#include "third_party/cloud_cpp/google/cloud/bigtable/testing/table_test_fixture.h"
#include "third_party/cloud_cpp/google/cloud/future.h"
#include "third_party/cloud_cpp/google/cloud/testing_util/assert_ok.h"
#include "third_party/cloud_cpp/google/cloud/testing_util/chrono_literals.h"
#include "net/proto2/util/public/message_differencer.h"
#include "testing/base/public/gmock.h"

namespace google {
namespace cloud {
namespace bigtable {
inline namespace BIGTABLE_CLIENT_NS {
namespace {

namespace btproto = google::bigtable::v2;
namespace bt = ::google::cloud::bigtable;
using namespace ::testing;
using namespace google::cloud::testing_util::chrono_literals;
using bigtable::testing::MockClientAsyncReaderInterface;

std::size_t MutationSize(SingleRowMutation mut) {
  google::bigtable::v2::MutateRowsRequest::Entry entry;
  mut.MoveTo(&entry);
  return entry.ByteSizeLong();
}

struct ResultPiece {
  ResultPiece(std::vector<int> succeeded_mutations,
              std::vector<int> transiently_failed_mutations,
              std::vector<int> permanently_failed_mutations)
      : succeeded(std::move(succeeded_mutations)),
        transiently_failed(std::move(transiently_failed_mutations)),
        permanently_failed(std::move(permanently_failed_mutations)) {}

  std::vector<int> succeeded;
  std::vector<int> transiently_failed;
  std::vector<int> permanently_failed;
};

struct Exchange {
  Exchange(std::vector<SingleRowMutation> req, std::vector<ResultPiece> res)
      : req(std::move(req)), res(std::move(res)) {}

  std::vector<SingleRowMutation> req;
  std::vector<ResultPiece> res;
};

struct MutationState {
  MutationState() : admitted(), completed() {}

  bool admitted;
  bool completed;
  google::cloud::Status completion_status;
};

class MutationStates {
 public:
  MutationStates(std::vector<std::shared_ptr<MutationState>> states)
      : states_(std::move(states)) {}

  bool AllAdmitted() {
    return std::all_of(
        states_.begin(), states_.end(),
        [](std::shared_ptr<MutationState> state) { return state->admitted; });
  }

  bool AllCompleted() {
    return std::all_of(
        states_.begin(), states_.end(),
        [](std::shared_ptr<MutationState> state) { return state->completed; });
  }

  bool NoneAdmitted() {
    return std::none_of(
        states_.begin(), states_.end(),
        [](std::shared_ptr<MutationState> state) { return state->admitted; });
  }

  bool NoneCompleted() {
    return std::none_of(
        states_.begin(), states_.end(),
        [](std::shared_ptr<MutationState> state) { return state->completed; });
  }

  std::vector<std::shared_ptr<MutationState>> states_;
};

// Lambda returning lambdas. Given a ResultPiece, return a lambda filling a
// MutateRowsResponse accordingly.
auto generate_response_generator = [](ResultPiece const& result_piece) {
  return [result_piece](btproto::MutateRowsResponse* r, void*) {
    for (int idx : result_piece.succeeded) {
      auto& e = *r->add_entries();
      e.set_index(idx);
      e.mutable_status()->set_code(grpc::StatusCode::OK);
    }
    for (int idx : result_piece.transiently_failed) {
      auto& e = *r->add_entries();
      e.set_index(idx);
      e.mutable_status()->set_code(grpc::StatusCode::UNAVAILABLE);
    }
    for (int idx : result_piece.permanently_failed) {
      auto& e = *r->add_entries();
      e.set_index(idx);
      e.mutable_status()->set_code(grpc::StatusCode::PERMISSION_DENIED);
    }
  };
};

class MutationBatcherTest : public bigtable::testing::TableTestFixture {
 protected:
  MutationBatcherTest()
      : cq_impl_(std::make_shared<bigtable::testing::MockCompletionQueue>()),
        cq_(cq_impl_),
        batcher_(new MutationBatcher(table_)) {}

  void ExpectInteraction(std::vector<Exchange> const& interactions) {
    // gmock expectation matching starts form the latest added, so we need to
    // add them in the reverse order.
    for (auto exchange_it = interactions.crbegin();
         exchange_it != interactions.crend(); ++exchange_it) {
      auto exchange = *exchange_it;
      // Not making it a unique_ptr because we'll be passing it to a lambda
      // returning it as a unique_ptr.
      auto* reader =
          new MockClientAsyncReaderInterface<btproto::MutateRowsResponse>;
      EXPECT_CALL(*reader, Read(_, _))
          .WillOnce(Invoke([](btproto::MutateRowsResponse* r, void*) {}));
      // Just like in the outer loop, we need to reverse the order to counter
      // the gmocks expectation matching order (from latest added to first).
      for (auto result_piece_it = exchange.res.rbegin();
           result_piece_it != exchange.res.rend(); ++result_piece_it) {
        EXPECT_CALL(*reader, Read(_, _))
            .WillOnce(Invoke(generate_response_generator(*result_piece_it)))
            .RetiresOnSaturation();
      }

      EXPECT_CALL(*reader, Finish(_, _))
          .WillOnce(Invoke(
              [](grpc::Status* status, void*) { *status = grpc::Status::OK; }));
      EXPECT_CALL(*reader, StartCall(_)).Times(1);

      EXPECT_CALL(*client_, PrepareAsyncMutateRows(_, _, _))
          .WillOnce(Invoke([reader, exchange](
                               grpc::ClientContext*,
                               btproto::MutateRowsRequest const& r,
                               grpc::CompletionQueue*) {
            EXPECT_EQ(exchange.req.size(), r.entries_size());
            for (std::size_t i = 0; i != exchange.req.size(); ++i) {
              google::bigtable::v2::MutateRowsRequest::Entry expected;
              SingleRowMutation tmp(exchange.req[i]);
              tmp.MoveTo(&expected);

              std::string delta;
              proto2::util::MessageDifferencer differencer;
              differencer.ReportDifferencesToString(&delta);
              EXPECT_TRUE(
                  differencer.Compare(expected, r.entries(static_cast<int>(i))))
                  << delta;
            }
            return std::unique_ptr<
                MockClientAsyncReaderInterface<btproto::MutateRowsResponse>>(
                reader);
          }))
          .RetiresOnSaturation();
    }
  }

  void FinishSingleItemStream() {
    cq_impl_->SimulateCompletion(cq_, true);
    // state == PROCESSING
    cq_impl_->SimulateCompletion(cq_, true);
    // state == PROCESSING, 1 read
    cq_impl_->SimulateCompletion(cq_, false);
    // state == FINISHING
    cq_impl_->SimulateCompletion(cq_, true);
  }

  void OpenStream() {
    cq_impl_->SimulateCompletion(cq_, true);
    // state == PROCESSING
  }

  void ReadPiece() { cq_impl_->SimulateCompletion(cq_, true); }

  void FinishStream() {
    // state == PROCESSING
    cq_impl_->SimulateCompletion(cq_, false);
    // state == FINISHING
    cq_impl_->SimulateCompletion(cq_, true);
  }

  void FinishTimer() { cq_impl_->SimulateCompletion(cq_, true); }

  std::shared_ptr<MutationState> Apply(SingleRowMutation mut) {
    auto res = std::make_shared<MutationState>();
    auto admission_and_completion = batcher_->AsyncApply(cq_, std::move(mut));
    admission_and_completion.first.then([res](future<void> f) {
      f.get();
      res->admitted = true;
    });
    admission_and_completion.second.then(
        [res](future<google::cloud::Status> status) {
          res->completed = true;
          res->completion_status = status.get();
        });
    return res;
  }

  template <typename Iterator>
  MutationStates ApplyMany(Iterator begin, Iterator end) {
    std::vector<std::shared_ptr<MutationState>> res;
    for (; begin != end; ++begin) {
      res.emplace_back(Apply(*begin));
    }
    return MutationStates(std::move(res));
  }

  std::size_t NumOperationsOutstanding() { return cq_impl_->size(); }

  std::shared_ptr<bigtable::testing::MockCompletionQueue> cq_impl_;
  CompletionQueue cq_;
  std::unique_ptr<MutationBatcher> batcher_;
};

TEST(OptionsTest, Trivial) {
  MutationBatcher::Options opt = MutationBatcher::Options()
                                     .SetMaxMutationsPerBatch(1)
                                     .SetMaxSizePerBatch(2)
                                     .SetMaxBatches(3)
                                     .SetMaxOutstandingSize(4);
  ASSERT_EQ(1, opt.max_mutations_per_batch);
  ASSERT_EQ(2, opt.max_size_per_batch);
  ASSERT_EQ(3, opt.max_batches);
  ASSERT_EQ(4, opt.max_outstanding_size);
}

TEST_F(MutationBatcherTest, TrivialTest) {
  std::vector<SingleRowMutation> mutations(
      {SingleRowMutation("foo", {bt::SetCell("fam", "col", 0_ms, "baz")})});

  ExpectInteraction({{{mutations[0]}, {ResultPiece({0}, {}, {})}}});

  auto state = Apply(mutations[0]);
  EXPECT_TRUE(state->admitted);
  EXPECT_FALSE(state->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  FinishSingleItemStream();

  EXPECT_TRUE(state->completed);
  EXPECT_EQ(0U, NumOperationsOutstanding());
}

TEST_F(MutationBatcherTest, BatchIsFlushedImmediately) {
  std::vector<SingleRowMutation> mutations(
      {SingleRowMutation("foo", {bt::SetCell("fam", "col", 0_ms, "baz")}),
       SingleRowMutation("foo2", {bt::SetCell("fam", "col", 0_ms, "baz")}),
       SingleRowMutation("foo3", {bt::SetCell("fam", "col", 0_ms, "baz")})});
  batcher_.reset(new MutationBatcher(table_, MutationBatcher::Options()
                                                 .SetMaxMutationsPerBatch(10)
                                                 .SetMaxSizePerBatch(2000)
                                                 .SetMaxBatches(1)
                                                 .SetMaxOutstandingSize(4000)));

  ExpectInteraction(
      {Exchange({mutations[0]}, {ResultPiece({0}, {}, {})}),
       Exchange({mutations[1], mutations[2]}, {ResultPiece({0, 1}, {}, {})})});

  auto state0 = Apply(mutations[0]);
  EXPECT_TRUE(state0->admitted);
  EXPECT_FALSE(state0->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  auto state1 = ApplyMany(mutations.begin() + 1, mutations.end());
  EXPECT_TRUE(state1.AllAdmitted());
  EXPECT_TRUE(state1.NoneCompleted());
  EXPECT_EQ(1U, NumOperationsOutstanding());

  FinishSingleItemStream();

  EXPECT_TRUE(state0->completed);
  EXPECT_TRUE(state1.NoneCompleted());
  EXPECT_EQ(1U, NumOperationsOutstanding());

  FinishSingleItemStream();

  EXPECT_TRUE(state1.AllCompleted());
  EXPECT_EQ(0U, NumOperationsOutstanding());
}

class MutationBatcherBoolParamTest : public MutationBatcherTest,
                                     public WithParamInterface<bool> {};

TEST_P(MutationBatcherBoolParamTest, PerBatchLimitsAreObeyed) {
  // The first SingleRowMutation will trigger a flush. Before it completes,
  // we'll try to schedule the next 3 (total 5 mutation in them), but only 2
  // will be admitted because there is a limit of 2 mutations.
  std::vector<SingleRowMutation> mutations(
      {SingleRowMutation("foo1", {bt::SetCell("fam", "col", 0_ms, "baz")}),
       SingleRowMutation("foo2", {bt::SetCell("fam", "col", 0_ms, "baz"),
                                  bt::SetCell("fam", "col2", 0_ms, "baz"),
                                  bt::SetCell("fam", "col3", 0_ms, "baz")}),
       SingleRowMutation("foo3", {bt::SetCell("fam", "col", 0_ms, "baz")}),
       SingleRowMutation("foo4", {bt::SetCell("fam", "col", 0_ms, "baz")})});

  bool hit_batch_size_limit = GetParam();

  batcher_.reset(new MutationBatcher(
      table_, MutationBatcher::Options()
                  .SetMaxMutationsPerBatch(hit_batch_size_limit ? 1000 : 4)
                  .SetMaxSizePerBatch(hit_batch_size_limit
                                          ? (MutationSize(mutations[1]) +
                                             MutationSize(mutations[2]) +
                                             MutationSize(mutations[3]) - 1)
                                          : 2000)
                  .SetMaxBatches(1)
                  .SetMaxOutstandingSize(4000)));

  ExpectInteraction(
      {Exchange({mutations[0]}, {ResultPiece({0}, {}, {})}),
       // The only slot is now taken by the batch holding SingleRowMutation 0.
       Exchange({mutations[1], mutations[2]}, {ResultPiece({0, 1}, {}, {})}),
       // SingleRowMutations 1 and 2 fill up the batch, so mutation 3 won't fit.
       Exchange({mutations[3]}, {ResultPiece({0}, {}, {})})}
      // Therefore, mutation 3 is executed in its own batch.
  );

  auto state0 = Apply(mutations[0]);

  EXPECT_TRUE(state0->admitted);
  EXPECT_FALSE(state0->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  auto immediatelly_admitted =
      ApplyMany(mutations.begin() + 1, mutations.begin() + 3);
  auto initially_not_admitted = Apply(mutations[3]);

  EXPECT_TRUE(immediatelly_admitted.AllAdmitted());
  EXPECT_TRUE(immediatelly_admitted.NoneCompleted());
  EXPECT_FALSE(initially_not_admitted->admitted);
  EXPECT_FALSE(initially_not_admitted->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  FinishSingleItemStream();

  EXPECT_TRUE(state0->completed);
  EXPECT_TRUE(immediatelly_admitted.NoneCompleted());
  EXPECT_FALSE(initially_not_admitted->completed);
  EXPECT_TRUE(initially_not_admitted->admitted);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  FinishSingleItemStream();

  EXPECT_TRUE(immediatelly_admitted.AllCompleted());
  EXPECT_FALSE(initially_not_admitted->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  FinishSingleItemStream();

  EXPECT_TRUE(initially_not_admitted->completed);
  EXPECT_EQ(0U, NumOperationsOutstanding());
}

INSTANTIATE_TEST_CASE_P(SizeOrNumMutationsLimit, MutationBatcherBoolParamTest,
                        ::testing::Values(
                            // Test the #mutations limit
                            false,
                            // Test the size of mutations limit
                            true));

TEST_F(MutationBatcherTest, RequestsWithManyMutationsAreRejected) {
  std::vector<SingleRowMutation> mutations(
      {SingleRowMutation("foo", {bt::SetCell("fam", "col1", 0_ms, "baz"),
                                 bt::SetCell("fam", "col2", 0_ms, "baz"),
                                 bt::SetCell("fam", "col3", 0_ms, "baz")})});

  batcher_.reset(new MutationBatcher(
      table_, MutationBatcher::Options().SetMaxMutationsPerBatch(2)));

  auto state = Apply(mutations[0]);
  EXPECT_TRUE(state->admitted);
  EXPECT_TRUE(state->completed);
  EXPECT_FALSE(state->completion_status.ok());
  EXPECT_EQ(0U, NumOperationsOutstanding());
}

TEST_F(MutationBatcherTest, LargeMutationsAreRejected) {
  std::vector<SingleRowMutation> mutations(
      {SingleRowMutation("foo", {bt::SetCell("fam", "col3", 0_ms, "baz")})});

  batcher_.reset(
      new MutationBatcher(table_, MutationBatcher::Options().SetMaxSizePerBatch(
                                      MutationSize(mutations[0]) - 1)));

  auto state = Apply(mutations[0]);
  EXPECT_TRUE(state->admitted);
  EXPECT_TRUE(state->completed);
  EXPECT_FALSE(state->completion_status.ok());
  EXPECT_EQ(0U, NumOperationsOutstanding());
}

TEST_F(MutationBatcherTest, RequestsWithNoMutationsAreRejected) {
  std::vector<SingleRowMutation> mutations({SingleRowMutation("foo", {})});

  auto state = Apply(mutations[0]);
  EXPECT_TRUE(state->admitted);
  EXPECT_TRUE(state->completed);
  EXPECT_FALSE(state->completion_status.ok());
  EXPECT_EQ(0U, NumOperationsOutstanding());
}

TEST_F(MutationBatcherTest, ErrorsArePropagated) {
  std::vector<SingleRowMutation> mutations(
      {SingleRowMutation("foo", {bt::SetCell("fam", "col", 0_ms, "baz")}),
       SingleRowMutation("foo2", {bt::SetCell("fam", "col", 0_ms, "baz")}),
       SingleRowMutation("foo3", {bt::SetCell("fam", "col", 0_ms, "baz")})});
  batcher_.reset(
      new MutationBatcher(table_, MutationBatcher::Options().SetMaxBatches(1)));

  ExpectInteraction(
      {Exchange({mutations[0]}, {ResultPiece({0}, {}, {})}),
       Exchange({mutations[1], mutations[2]}, {ResultPiece({0}, {}, {1})})});

  auto state0 = Apply(mutations[0]);
  EXPECT_TRUE(state0->admitted);
  EXPECT_FALSE(state0->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  auto state1 = ApplyMany(mutations.begin() + 1, mutations.end());
  EXPECT_TRUE(state1.AllAdmitted());
  EXPECT_TRUE(state1.NoneCompleted());
  EXPECT_EQ(1U, NumOperationsOutstanding());

  FinishSingleItemStream();

  EXPECT_TRUE(state0->completed);
  EXPECT_TRUE(state1.NoneCompleted());
  EXPECT_EQ(1U, NumOperationsOutstanding());

  FinishSingleItemStream();

  EXPECT_TRUE(state1.AllCompleted());
  EXPECT_EQ(0U, NumOperationsOutstanding());
  EXPECT_STATUS_OK(state1.states_[0]->completion_status);
  EXPECT_FALSE(state1.states_[1]->completion_status.ok());
}

TEST_F(MutationBatcherTest, SmallMutationsDontSkipPending) {
  std::vector<SingleRowMutation> mutations(
      {SingleRowMutation("foo", {bt::SetCell("fam", "col", 0_ms, "baz")}),
       SingleRowMutation("foo2", {bt::SetCell("fam", "col", 0_ms, "baz")}),
       SingleRowMutation("foo3", {bt::SetCell("fam", "col1", 0_ms, "baz"),
                                  bt::SetCell("fam", "col2", 0_ms, "baz")}),
       SingleRowMutation("foo4", {bt::SetCell("fam", "col", 0_ms, "baz")})});
  batcher_.reset(new MutationBatcher(
      table_,
      MutationBatcher::Options().SetMaxBatches(1).SetMaxMutationsPerBatch(2)));

  // The first mutation flushes the batch immediately.
  // The second opens a new batch and waits until the first returns.
  // The third doesn't fit that batch, so becomes pending.
  // The fourth also becomes pending despite fitting in the open batch.

  ExpectInteraction({Exchange({mutations[0]}, {ResultPiece({0}, {}, {})}),
                     Exchange({mutations[1]}, {ResultPiece({0}, {}, {})}),
                     Exchange({mutations[2]}, {ResultPiece({0}, {}, {})}),
                     Exchange({mutations[3]}, {ResultPiece({0}, {}, {})})});

  auto state0 = Apply(mutations[0]);
  EXPECT_TRUE(state0->admitted);
  EXPECT_FALSE(state0->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  auto state1 = Apply(mutations[1]);
  EXPECT_TRUE(state1->admitted);
  EXPECT_FALSE(state1->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  auto state2 = Apply(mutations[2]);
  EXPECT_FALSE(state2->admitted);
  EXPECT_FALSE(state2->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  auto state3 = Apply(mutations[3]);
  EXPECT_FALSE(state3->admitted);
  EXPECT_FALSE(state3->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  FinishSingleItemStream();

  EXPECT_TRUE(state0->completed);
  EXPECT_FALSE(state1->completed);
  EXPECT_FALSE(state2->completed);
  EXPECT_FALSE(state3->completed);
  EXPECT_TRUE(state2->admitted);
  EXPECT_FALSE(state3->admitted);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  FinishSingleItemStream();

  EXPECT_TRUE(state1->completed);
  EXPECT_FALSE(state2->completed);
  EXPECT_FALSE(state3->completed);
  EXPECT_TRUE(state3->admitted);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  FinishSingleItemStream();

  EXPECT_TRUE(state2->completed);
  EXPECT_FALSE(state3->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  FinishSingleItemStream();

  EXPECT_TRUE(state3->completed);
  EXPECT_EQ(0U, NumOperationsOutstanding());
}

// Test that waiting until all pending operations finish works in a simple case.
TEST_F(MutationBatcherTest, WaitForNoPendingSimple) {
  std::vector<SingleRowMutation> mutations(
      {SingleRowMutation("foo", {bt::SetCell("fam", "col", 0_ms, "baz")}),
       SingleRowMutation("bar", {bt::SetCell("fam", "col", 0_ms, "baz")}),
       SingleRowMutation("baz", {bt::SetCell("fam", "col", 0_ms, "baz")})});

  batcher_.reset(new MutationBatcher(
      table_,
      MutationBatcher::Options().SetMaxMutationsPerBatch(2).SetMaxBatches(1)));

  ExpectInteraction(
      {{{mutations[0]}, {ResultPiece({0}, {}, {})}},
       {{mutations[1], mutations[2]}, {ResultPiece({0, 1}, {}, {})}}});

  auto no_more_pending1 = batcher_->AsyncWaitForNoPendingRequests();
  EXPECT_EQ(no_more_pending1.wait_for(1_ms), std::future_status::ready);
  no_more_pending1.get();

  auto state0 = Apply(mutations[0]);
  EXPECT_TRUE(state0->admitted);
  EXPECT_FALSE(state0->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());
  auto state1 = Apply(mutations[1]);
  auto state2 = Apply(mutations[2]);
  EXPECT_TRUE(state1->admitted);
  EXPECT_TRUE(state2->admitted);
  EXPECT_FALSE(state1->completed);
  EXPECT_FALSE(state2->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  auto no_more_pending2 = batcher_->AsyncWaitForNoPendingRequests();
  auto no_more_pending3 = batcher_->AsyncWaitForNoPendingRequests();
  EXPECT_EQ(no_more_pending2.wait_for(1_ms), std::future_status::timeout);
  EXPECT_EQ(no_more_pending3.wait_for(1_ms), std::future_status::timeout);

  FinishSingleItemStream();

  EXPECT_TRUE(state0->completed);
  EXPECT_TRUE(state1->admitted);
  EXPECT_TRUE(state2->admitted);
  EXPECT_FALSE(state1->completed);
  EXPECT_FALSE(state2->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  EXPECT_EQ(no_more_pending2.wait_for(1_ms), std::future_status::timeout);
  EXPECT_EQ(no_more_pending3.wait_for(1_ms), std::future_status::timeout);

  FinishSingleItemStream();

  EXPECT_TRUE(state1->completed);
  EXPECT_TRUE(state2->completed);
  EXPECT_EQ(0U, NumOperationsOutstanding());

  EXPECT_EQ(no_more_pending2.wait_for(1_ms), std::future_status::ready);
  EXPECT_EQ(no_more_pending3.wait_for(1_ms), std::future_status::ready);
}

// Test that pending and failed mutations are properly accounted.
TEST_F(MutationBatcherTest, WaitForNoPendingEdgeCases) {
  std::vector<SingleRowMutation> mutations(
      {SingleRowMutation("foo", {bt::SetCell("fam", "col", 0_ms, "baz")}),
       SingleRowMutation("foo2", {bt::SetCell("fam", "col", 0_ms, "baz")}),
       SingleRowMutation("foo3", {bt::SetCell("fam", "col", 0_ms, "baz"),
                                  bt::SetCell("fam", "col", 0_ms, "baz")})});

  batcher_.reset(new MutationBatcher(
      table_,
      MutationBatcher::Options().SetMaxMutationsPerBatch(1).SetMaxBatches(1)));
  ExpectInteraction({Exchange({mutations[0]}, {ResultPiece({}, {}, {0})}),
                     Exchange({mutations[1]}, {ResultPiece({}, {}, {0})})});

  auto state0 = Apply(mutations[0]);
  EXPECT_TRUE(state0->admitted);
  EXPECT_FALSE(state0->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  auto no_more_pending0 = batcher_->AsyncWaitForNoPendingRequests();
  EXPECT_EQ(no_more_pending0.wait_for(1_ms), std::future_status::timeout);

  auto state1 = Apply(mutations[1]);
  EXPECT_TRUE(state1->admitted);
  EXPECT_FALSE(state1->completed);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  auto no_more_pending1 = batcher_->AsyncWaitForNoPendingRequests();
  EXPECT_EQ(no_more_pending0.wait_for(1_ms), std::future_status::timeout);
  EXPECT_EQ(no_more_pending1.wait_for(1_ms), std::future_status::timeout);

  auto state2 = Apply(mutations[2]);
  EXPECT_TRUE(state2->admitted);
  EXPECT_TRUE(state2->completed);
  EXPECT_FALSE(state2->completion_status.ok());
  EXPECT_EQ(1U, NumOperationsOutstanding());

  auto no_more_pending2 = batcher_->AsyncWaitForNoPendingRequests();

  EXPECT_EQ(no_more_pending0.wait_for(1_ms), std::future_status::timeout);
  EXPECT_EQ(no_more_pending1.wait_for(1_ms), std::future_status::timeout);
  EXPECT_EQ(no_more_pending2.wait_for(1_ms), std::future_status::timeout);

  FinishSingleItemStream();

  EXPECT_TRUE(state0->completed);
  EXPECT_TRUE(state1->admitted);
  EXPECT_EQ(1U, NumOperationsOutstanding());

  EXPECT_EQ(no_more_pending0.wait_for(1_ms), std::future_status::timeout);
  EXPECT_EQ(no_more_pending1.wait_for(1_ms), std::future_status::timeout);
  EXPECT_EQ(no_more_pending2.wait_for(1_ms), std::future_status::timeout);

  FinishSingleItemStream();

  EXPECT_TRUE(state1->completed);
  EXPECT_FALSE(state1->completion_status.ok());
  EXPECT_EQ(0U, NumOperationsOutstanding());

  EXPECT_EQ(no_more_pending0.wait_for(1_ms), std::future_status::ready);
  EXPECT_EQ(no_more_pending1.wait_for(1_ms), std::future_status::ready);
  EXPECT_EQ(no_more_pending2.wait_for(1_ms), std::future_status::ready);
}

}  // namespace
}  // namespace BIGTABLE_CLIENT_NS
}  // namespace bigtable
}  // namespace cloud
}  // namespace google
