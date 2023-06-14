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
// source: google/cloud/kms/inventory/v1/key_tracking_service.proto

#include "google/cloud/kms/inventory/v1/key_tracking_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace kms_inventory_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

KeyTrackingServiceClient::KeyTrackingServiceClient(
    std::shared_ptr<KeyTrackingServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
KeyTrackingServiceClient::~KeyTrackingServiceClient() = default;

StatusOr<google::cloud::kms::inventory::v1::ProtectedResourcesSummary>
KeyTrackingServiceClient::GetProtectedResourcesSummary(std::string const& name,
                                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::kms::inventory::v1::GetProtectedResourcesSummaryRequest
      request;
  request.set_name(name);
  return connection_->GetProtectedResourcesSummary(request);
}

StatusOr<google::cloud::kms::inventory::v1::ProtectedResourcesSummary>
KeyTrackingServiceClient::GetProtectedResourcesSummary(
    google::cloud::kms::inventory::v1::
        GetProtectedResourcesSummaryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetProtectedResourcesSummary(request);
}

StreamRange<google::cloud::kms::inventory::v1::ProtectedResource>
KeyTrackingServiceClient::SearchProtectedResources(
    std::string const& scope, std::string const& crypto_key, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::kms::inventory::v1::SearchProtectedResourcesRequest request;
  request.set_scope(scope);
  request.set_crypto_key(crypto_key);
  return connection_->SearchProtectedResources(request);
}

StreamRange<google::cloud::kms::inventory::v1::ProtectedResource>
KeyTrackingServiceClient::SearchProtectedResources(
    google::cloud::kms::inventory::v1::SearchProtectedResourcesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchProtectedResources(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_inventory_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
