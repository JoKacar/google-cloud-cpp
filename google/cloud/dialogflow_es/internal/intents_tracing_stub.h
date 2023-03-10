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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_INTENTS_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_INTENTS_TRACING_STUB_H

#include "google/cloud/dialogflow_es/internal/intents_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class IntentsTracingStub : public IntentsStub {
 public:
  ~IntentsTracingStub() override = default;

  explicit IntentsTracingStub(std::shared_ptr<IntentsStub> child);

  StatusOr<google::cloud::dialogflow::v2::ListIntentsResponse> ListIntents(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::ListIntentsRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Intent> GetIntent(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::GetIntentRequest const& request) override;

  StatusOr<google::cloud::dialogflow::v2::Intent> CreateIntent(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::CreateIntentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Intent> UpdateIntent(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::UpdateIntentRequest const& request)
      override;

  Status DeleteIntent(grpc::ClientContext& context,
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
  std::shared_ptr<IntentsStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<IntentsStub> MakeIntentsTracingStub(
    std::shared_ptr<IntentsStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_INTENTS_TRACING_STUB_H
