// Copyright 2023 Google LLC
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
// source: google/cloud/aiplatform/v1/prediction_service.proto

#include "google/cloud/aiplatform/v1/internal/prediction_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/prediction_service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PredictionServiceMetadata::PredictionServiceMetadata(
    std::shared_ptr<PredictionServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::aiplatform::v1::PredictResponse>
PredictionServiceMetadata::Predict(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::PredictRequest const& request) {
  SetMetadata(context, "endpoint=" + request.endpoint());
  return child_->Predict(context, request);
}

StatusOr<google::api::HttpBody> PredictionServiceMetadata::RawPredict(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::RawPredictRequest const& request) {
  SetMetadata(context, "endpoint=" + request.endpoint());
  return child_->RawPredict(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ExplainResponse>
PredictionServiceMetadata::Explain(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ExplainRequest const& request) {
  SetMetadata(context, "endpoint=" + request.endpoint());
  return child_->Explain(context, request);
}

void PredictionServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void PredictionServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
