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
// source: google/cloud/aiplatform/v1/featurestore_online_service.proto

#include "google/cloud/aiplatform/v1/featurestore_online_serving_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FeaturestoreOnlineServingServiceClient::FeaturestoreOnlineServingServiceClient(
    std::shared_ptr<FeaturestoreOnlineServingServiceConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
FeaturestoreOnlineServingServiceClient::
    ~FeaturestoreOnlineServingServiceClient() = default;

StatusOr<google::cloud::aiplatform::v1::ReadFeatureValuesResponse>
FeaturestoreOnlineServingServiceClient::ReadFeatureValues(
    std::string const& entity_type, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ReadFeatureValuesRequest request;
  request.set_entity_type(entity_type);
  return connection_->ReadFeatureValues(request);
}

StatusOr<google::cloud::aiplatform::v1::ReadFeatureValuesResponse>
FeaturestoreOnlineServingServiceClient::ReadFeatureValues(
    google::cloud::aiplatform::v1::ReadFeatureValuesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ReadFeatureValues(request);
}

StreamRange<google::cloud::aiplatform::v1::ReadFeatureValuesResponse>
FeaturestoreOnlineServingServiceClient::StreamingReadFeatureValues(
    std::string const& entity_type, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::StreamingReadFeatureValuesRequest request;
  request.set_entity_type(entity_type);
  return connection_->StreamingReadFeatureValues(request);
}

StreamRange<google::cloud::aiplatform::v1::ReadFeatureValuesResponse>
FeaturestoreOnlineServingServiceClient::StreamingReadFeatureValues(
    google::cloud::aiplatform::v1::StreamingReadFeatureValuesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StreamingReadFeatureValues(request);
}

StatusOr<google::cloud::aiplatform::v1::WriteFeatureValuesResponse>
FeaturestoreOnlineServingServiceClient::WriteFeatureValues(
    std::string const& entity_type,
    std::vector<google::cloud::aiplatform::v1::WriteFeatureValuesPayload> const&
        payloads,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::WriteFeatureValuesRequest request;
  request.set_entity_type(entity_type);
  *request.mutable_payloads() = {payloads.begin(), payloads.end()};
  return connection_->WriteFeatureValues(request);
}

StatusOr<google::cloud::aiplatform::v1::WriteFeatureValuesResponse>
FeaturestoreOnlineServingServiceClient::WriteFeatureValues(
    google::cloud::aiplatform::v1::WriteFeatureValuesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->WriteFeatureValues(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
