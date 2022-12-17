// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/internal/rest_completion_queue_impl.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/testing_util/fake_completion_queue_impl.h"
#include "google/cloud/testing_util/status_matchers.h"
#include <gmock/gmock.h>
#include <chrono>
#include <deque>
#include <memory>
#include <thread>

namespace google {
namespace cloud {
namespace rest_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

using ::google::cloud::testing_util::FakeCompletionQueueImpl;
using ::testing::Contains;
using ::testing::Eq;

/// @test A regression test for #5141
TEST(RestCompletionQueueImplTest, TimerCancel) {
  // There are a lot of magical numbers in this test, there were tuned to #5141
  // 99 out of 100 times on my workstation.
  auto impl = absl::make_unique<RestCompletionQueueImpl>();
  CompletionQueue cq(std::move(impl));
  std::vector<std::thread> runners;
  std::generate_n(std::back_inserter(runners), 4, [&cq] {
    return std::thread([](CompletionQueue c) { c.Run(); }, cq);
  });

  using TimerFuture = future<StatusOr<std::chrono::system_clock::time_point>>;
  auto worker = [&](CompletionQueue cq) {
    for (int i = 0; i != 10000; ++i) {
      std::vector<TimerFuture> timers;
      for (int j = 0; j != 10; ++j) {
        timers.push_back(cq.MakeRelativeTimer(std::chrono::microseconds(10)));
      }
      cq.CancelAll();
      for (auto& t : timers) t.cancel();
    }
  };
  std::vector<std::thread> workers;
  std::generate_n(std::back_inserter(runners), 8,
                  [&] { return std::thread(worker, cq); });

  for (auto& t : workers) t.join();
  cq.Shutdown();
  for (auto& t : runners) t.join();
}

TEST(RestCompletionQueueImplTest, TimerSmokeTest) {
  auto impl = absl::make_unique<RestCompletionQueueImpl>();
  CompletionQueue cq(std::move(impl));
  std::thread t([&cq] { cq.Run(); });

  using ms = std::chrono::milliseconds;
  promise<void> wait_for_sleep;
  cq.MakeRelativeTimer(ms(2))
      .then([&wait_for_sleep](
                future<StatusOr<std::chrono::system_clock::time_point>>) {
        wait_for_sleep.set_value();
      })
      .get();

  auto f = wait_for_sleep.get_future();
  EXPECT_EQ(std::future_status::ready, f.wait_for(ms(0)));
  cq.Shutdown();
  t.join();
}

TEST(RestCompletionQueueImplTest, MockSmokeTest) {
  auto mock = std::make_shared<FakeCompletionQueueImpl>();
  CompletionQueue cq(mock);
  using ms = std::chrono::milliseconds;
  promise<void> wait_for_sleep;
  cq.MakeRelativeTimer(ms(20000)).then(
      [&wait_for_sleep](
          future<StatusOr<std::chrono::system_clock::time_point>>) {
        wait_for_sleep.set_value();
      });
  mock->SimulateCompletion(/*ok=*/true);

  auto f = wait_for_sleep.get_future();
  EXPECT_EQ(std::future_status::ready, f.wait_for(ms(0)));
  cq.Shutdown();
}

TEST(RestCompletionQueueImplTest, RunAsync) {
  auto impl = absl::make_unique<RestCompletionQueueImpl>();
  CompletionQueue cq(std::move(impl));

  std::thread runner([&cq] { cq.Run(); });

  std::promise<void> done_promise;
  cq.RunAsync([&done_promise](CompletionQueue&) { done_promise.set_value(); });

  auto done = done_promise.get_future();
  done.get();

  cq.Shutdown();
  runner.join();
}

TEST(RestCompletionQueueImplTest, RunAsyncVoid) {
  auto impl = absl::make_unique<RestCompletionQueueImpl>();
  CompletionQueue cq(std::move(impl));

  std::thread runner([&cq] { cq.Run(); });

  std::promise<void> done_promise;
  cq.RunAsync([&done_promise] { done_promise.set_value(); });

  auto done = done_promise.get_future();
  done.get();

  cq.Shutdown();
  runner.join();
}

TEST(RestCompletionQueueImplTest, RunAsyncCompletionQueueDestroyed) {
  auto cq_impl = std::make_shared<FakeCompletionQueueImpl>();

  std::promise<void> done_promise;
  {
    CompletionQueue cq(cq_impl);
    cq.RunAsync([&done_promise](CompletionQueue& cq) {
      done_promise.set_value();
      cq.Shutdown();
    });
  }
  cq_impl->SimulateCompletion(true);

  done_promise.get_future().get();
}

TEST(RestCompletionQueueImplTest, RunAsyncMoveOnly) {
  struct MoveOnly {
    promise<void> p;
    void operator()(CompletionQueue&) { p.set_value(); }
  };
  static_assert(!std::is_copy_assignable<MoveOnly>::value,
                "MoveOnly test type should not copy-assignable");

  promise<void> p;
  auto done = p.get_future();
  auto impl = absl::make_unique<RestCompletionQueueImpl>();
  CompletionQueue cq(std::move(impl));
  std::thread t{[&cq] { cq.Run(); }};
  cq.RunAsync(MoveOnly{std::move(p)});
  done.get();
  cq.Shutdown();
  t.join();
}

TEST(RestCompletionQueueImplTest, RunAsyncMoveOnlyVoid) {
  struct MoveOnly {
    promise<void> p;
    void operator()() { p.set_value(); }
  };
  static_assert(!std::is_copy_assignable<MoveOnly>::value,
                "MoveOnly test type should not copy-assignable");

  promise<void> p;
  auto done = p.get_future();
  auto impl = absl::make_unique<RestCompletionQueueImpl>();
  CompletionQueue cq(std::move(impl));
  std::thread t{[&cq] { cq.Run(); }};
  cq.RunAsync(MoveOnly{std::move(p)});
  done.get();
  cq.Shutdown();
  t.join();
}

TEST(RestCompletionQueueImplTest, RunAsyncThread) {
  auto impl = absl::make_unique<RestCompletionQueueImpl>();
  CompletionQueue cq(std::move(impl));

  std::set<std::thread::id> runner_ids;
  auto constexpr kRunners = 8;
  std::vector<std::thread> runners(kRunners);
  for (auto& t : runners) {
    promise<std::thread::id> started;
    auto f = started.get_future();
    t = std::thread(
        [&cq](promise<std::thread::id> p) {
          p.set_value(std::this_thread::get_id());
          cq.Run();
        },
        std::move(started));
    runner_ids.insert(f.get());
  }

  auto constexpr kIterations = 10000;
  std::vector<promise<std::thread::id>> pending(kIterations);
  std::vector<future<std::thread::id>> actual;
  for (int i = 0; i != kIterations; ++i) {
    auto& p = pending[i];
    actual.push_back(p.get_future());
    cq.RunAsync(
        [&p](CompletionQueue&) { p.set_value(std::this_thread::get_id()); });
  }

  for (auto& done : actual) {
    auto id = done.get();
    EXPECT_THAT(runner_ids, Contains(id));
  }

  cq.Shutdown();
  for (auto& t : runners) t.join();
}

// The purpose of this test is to model the "LRO per thread" paradigm which
// uses a new thread per LRO operation and only uses the CompletionQueue to
// join the thread after the work has been done.
TEST(RestCompletionQueueImplTest, RunAsyncSingleRunner) {
  auto impl = std::make_shared<RestCompletionQueueImpl>();
  CompletionQueue cq(impl);
  std::thread t{[&] { cq.Run(); }};

  auto constexpr kIterations = 100;
  std::atomic<int> threads_joined{0};
  std::vector<std::pair<future<void>, std::thread>> workers;
  std::vector<promise<void>> work;
  for (int i = 0; i != kIterations; ++i) {
    promise<void> p;
    work.push_back(std::move(p));
  }

  for (int i = 0; i != kIterations; ++i) {
    auto& p = work[i];
    auto f = p.get_future();
    workers.emplace_back(std::move(f), [&work, i]() { work[i].set_value(); });
  }

  std::vector<future<void>> results;
  for (auto& w : workers) {
    auto f = std::move(w.first);
    results.push_back(f.then(
        [t1 = std::move(w.second), cq, &threads_joined](auto f2) mutable {
          cq.RunAsync([t2 = std::move(t1), &threads_joined]() mutable {
            ASSERT_FALSE(std::this_thread::get_id() == t2.get_id());
            t2.join();
            ++threads_joined;
          });
          f2.get();
        }));
  }

  for (auto& r : results) {
    r.get();
  }

  cq.Shutdown();
  t.join();
  EXPECT_THAT(impl->run_async_counter(), Eq(kIterations));
  EXPECT_THAT(threads_joined, Eq(kIterations));
}

}  // namespace
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rest_internal
}  // namespace cloud
}  // namespace google
