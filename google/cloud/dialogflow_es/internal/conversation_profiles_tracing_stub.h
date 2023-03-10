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
// source: google/cloud/dialogflow/v2/conversation_profile.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_PROFILES_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_PROFILES_TRACING_STUB_H

#include "google/cloud/dialogflow_es/internal/conversation_profiles_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ConversationProfilesTracingStub : public ConversationProfilesStub {
 public:
  ~ConversationProfilesTracingStub() override = default;

  explicit ConversationProfilesTracingStub(
      std::shared_ptr<ConversationProfilesStub> child);

  StatusOr<google::cloud::dialogflow::v2::ListConversationProfilesResponse>
  ListConversationProfiles(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::ListConversationProfilesRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
  GetConversationProfile(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::GetConversationProfileRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
  CreateConversationProfile(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::CreateConversationProfileRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::ConversationProfile>
  UpdateConversationProfile(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::UpdateConversationProfileRequest const&
          request) override;

  Status DeleteConversationProfile(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::DeleteConversationProfileRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncSetSuggestionFeatureConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::v2::SetSuggestionFeatureConfigRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncClearSuggestionFeatureConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::v2::ClearSuggestionFeatureConfigRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<ConversationProfilesStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<ConversationProfilesStub> MakeConversationProfilesTracingStub(
    std::shared_ptr<ConversationProfilesStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_PROFILES_TRACING_STUB_H
