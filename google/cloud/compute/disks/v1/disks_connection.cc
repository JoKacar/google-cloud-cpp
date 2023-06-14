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
// source: google/cloud/compute/disks/v1/disks.proto

#include "google/cloud/compute/disks/v1/disks_connection.h"
#include "google/cloud/compute/disks/v1/disks_options.h"
#include "google/cloud/compute/disks/v1/internal/disks_option_defaults.h"
#include "google/cloud/compute/disks/v1/internal/disks_tracing_connection.h"
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
namespace compute_disks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DisksConnection::~DisksConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksConnection::AddResourcePolicies(
    google::cloud::cpp::compute::disks::v1::AddResourcePoliciesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::DiskAggregatedList>
DisksConnection::AggregatedListDisks(
    google::cloud::cpp::compute::disks::v1::AggregatedListDisksRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksConnection::CreateSnapshot(
    google::cloud::cpp::compute::disks::v1::CreateSnapshotRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksConnection::DeleteDisks(
    google::cloud::cpp::compute::disks::v1::DeleteDisksRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Disk> DisksConnection::GetDisks(
    google::cloud::cpp::compute::disks::v1::GetDisksRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Policy> DisksConnection::GetIamPolicy(
    google::cloud::cpp::compute::disks::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksConnection::InsertDisks(
    google::cloud::cpp::compute::disks::v1::InsertDisksRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::Disk> DisksConnection::ListDisks(
    google::cloud::cpp::compute::disks::v1::
        ListDisksRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::Disk>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksConnection::RemoveResourcePolicies(
    google::cloud::cpp::compute::disks::v1::
        RemoveResourcePoliciesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksConnection::Resize(
    google::cloud::cpp::compute::disks::v1::ResizeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Policy> DisksConnection::SetIamPolicy(
    google::cloud::cpp::compute::disks::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksConnection::SetLabels(
    google::cloud::cpp::compute::disks::v1::SetLabelsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
DisksConnection::TestIamPermissions(
    google::cloud::cpp::compute::disks::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksConnection::UpdateDisks(
    google::cloud::cpp::compute::disks::v1::UpdateDisksRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_disks_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
