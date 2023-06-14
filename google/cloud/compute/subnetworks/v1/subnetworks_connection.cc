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
// source: google/cloud/compute/subnetworks/v1/subnetworks.proto

#include "google/cloud/compute/subnetworks/v1/subnetworks_connection.h"
#include "google/cloud/compute/subnetworks/v1/internal/subnetworks_option_defaults.h"
#include "google/cloud/compute/subnetworks/v1/internal/subnetworks_tracing_connection.h"
#include "google/cloud/compute/subnetworks/v1/subnetworks_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_subnetworks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SubnetworksConnection::~SubnetworksConnection() = default;

StatusOr<google::cloud::cpp::compute::v1::SubnetworkAggregatedList>
SubnetworksConnection::AggregatedListSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::
        AggregatedListSubnetworksRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksConnection::DeleteSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::
        DeleteSubnetworksRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksConnection::ExpandIpCidrRange(
    google::cloud::cpp::compute::subnetworks::v1::
        ExpandIpCidrRangeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Subnetwork>
SubnetworksConnection::GetSubnetworks(google::cloud::cpp::compute::subnetworks::
                                          v1::GetSubnetworksRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
SubnetworksConnection::GetIamPolicy(
    google::cloud::cpp::compute::subnetworks::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksConnection::InsertSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::
        InsertSubnetworksRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::Subnetwork>
SubnetworksConnection::ListSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::
        ListSubnetworksRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::Subnetwork>>();
}

StreamRange<google::cloud::cpp::compute::v1::UsableSubnetwork>
SubnetworksConnection::ListUsable(
    google::cloud::cpp::compute::subnetworks::v1::
        ListUsableRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::UsableSubnetwork>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksConnection::PatchSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::
        PatchSubnetworksRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
SubnetworksConnection::SetIamPolicy(
    google::cloud::cpp::compute::subnetworks::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksConnection::SetPrivateIpGoogleAccess(
    google::cloud::cpp::compute::subnetworks::v1::
        SetPrivateIpGoogleAccessRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
SubnetworksConnection::TestIamPermissions(
    google::cloud::cpp::compute::subnetworks::v1::
        TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_subnetworks_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
