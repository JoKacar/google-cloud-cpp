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
// source: google/cloud/dialogflow/cx/v3/session.proto

#include "google/cloud/dialogflow_cx/internal/sessions_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/session.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SessionsMetadata::SessionsMetadata(
    std::shared_ptr<SessionsStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::dialogflow::cx::v3::DetectIntentResponse>
SessionsMetadata::DetectIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::DetectIntentRequest const& request) {
  SetMetadata(context, "session=" + request.session());
  return child_->DetectIntent(context, request);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::dialogflow::cx::v3::StreamingDetectIntentRequest,
    google::cloud::dialogflow::cx::v3::StreamingDetectIntentResponse>>
SessionsMetadata::AsyncStreamingDetectIntent(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  SetMetadata(*context);
  return child_->AsyncStreamingDetectIntent(cq, std::move(context));
}

StatusOr<google::cloud::dialogflow::cx::v3::MatchIntentResponse>
SessionsMetadata::MatchIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::MatchIntentRequest const& request) {
  SetMetadata(context, "session=" + request.session());
  return child_->MatchIntent(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::FulfillIntentResponse>
SessionsMetadata::FulfillIntent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::FulfillIntentRequest const& request) {
  SetMetadata(context, "match_intent_request.session=" +
                           request.match_intent_request().session());
  return child_->FulfillIntent(context, request);
}

void SessionsMetadata::SetMetadata(grpc::ClientContext& context,
                                   std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void SessionsMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
