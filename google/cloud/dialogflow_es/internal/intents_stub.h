// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/dialogflow/v2/intent.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_INTENTS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_INTENTS_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/v2/intent.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <google/protobuf/struct.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IntentsStub {
 public:
  virtual ~IntentsStub() = 0;

  virtual StatusOr<google::cloud::dialogflow::v2::ListIntentsResponse>
  ListIntents(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::ListIntentsRequest const& request) = 0;

  virtual StatusOr<google::cloud::dialogflow::v2::Intent> GetIntent(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::GetIntentRequest const& request) = 0;

  virtual StatusOr<google::cloud::dialogflow::v2::Intent> CreateIntent(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::CreateIntentRequest const& request) = 0;

  virtual StatusOr<google::cloud::dialogflow::v2::Intent> UpdateIntent(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::UpdateIntentRequest const& request) = 0;

  virtual Status DeleteIntent(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::DeleteIntentRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncBatchUpdateIntents(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::v2::BatchUpdateIntentsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncBatchDeleteIntents(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::v2::BatchDeleteIntentsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultIntentsStub : public IntentsStub {
 public:
  DefaultIntentsStub(
      std::unique_ptr<google::cloud::dialogflow::v2::Intents::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::dialogflow::v2::ListIntentsResponse> ListIntents(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::v2::ListIntentsRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Intent> GetIntent(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::v2::GetIntentRequest const& request) override;

  StatusOr<google::cloud::dialogflow::v2::Intent> CreateIntent(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::v2::CreateIntentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Intent> UpdateIntent(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::v2::UpdateIntentRequest const& request)
      override;

  Status DeleteIntent(grpc::ClientContext& client_context,
                      google::cloud::dialogflow::v2::DeleteIntentRequest const&
                          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchUpdateIntents(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::v2::BatchUpdateIntentsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchDeleteIntents(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::v2::BatchDeleteIntentsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::dialogflow::v2::Intents::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_INTENTS_STUB_H
