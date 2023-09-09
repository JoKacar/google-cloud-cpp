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
// source: google/cloud/compute/region_ssl_policies/v1/region_ssl_policies.proto

#include "google/cloud/compute/region_ssl_policies/v1/region_ssl_policies_connection.h"
#include "google/cloud/compute/region_ssl_policies/v1/internal/region_ssl_policies_option_defaults.h"
#include "google/cloud/compute/region_ssl_policies/v1/internal/region_ssl_policies_tracing_connection.h"
#include "google/cloud/compute/region_ssl_policies/v1/region_ssl_policies_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_ssl_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionSslPoliciesConnection::~RegionSslPoliciesConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesConnection::DeleteRegionSslPolicy(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        DeleteRegionSslPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::SslPolicy>
RegionSslPoliciesConnection::GetRegionSslPolicy(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        GetRegionSslPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesConnection::InsertRegionSslPolicy(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        InsertRegionSslPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::SslPolicy>
RegionSslPoliciesConnection::ListRegionSslPolicies(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        ListRegionSslPoliciesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::SslPolicy>>();
}

StatusOr<
    google::cloud::cpp::compute::v1::SslPoliciesListAvailableFeaturesResponse>
RegionSslPoliciesConnection::ListAvailableFeatures(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        ListAvailableFeaturesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesConnection::PatchRegionSslPolicy(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        PatchRegionSslPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_ssl_policies_v1
}  // namespace cloud
}  // namespace google
