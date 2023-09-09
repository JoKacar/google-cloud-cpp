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
// source: google/cloud/compute/region_disks/v1/region_disks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_DISKS_V1_INTERNAL_REGION_DISKS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_DISKS_V1_INTERNAL_REGION_DISKS_TRACING_CONNECTION_H

#include "google/cloud/compute/region_disks/v1/region_disks_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_disks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class RegionDisksTracingConnection
    : public compute_region_disks_v1::RegionDisksConnection {
 public:
  ~RegionDisksTracingConnection() override = default;

  explicit RegionDisksTracingConnection(
      std::shared_ptr<compute_region_disks_v1::RegionDisksConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddResourcePolicies(google::cloud::cpp::compute::region_disks::v1::
                          AddResourcePoliciesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> BulkInsert(
      google::cloud::cpp::compute::region_disks::v1::BulkInsertRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> CreateSnapshot(
      google::cloud::cpp::compute::region_disks::v1::
          CreateSnapshotRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteRegionDisk(
      google::cloud::cpp::compute::region_disks::v1::
          DeleteRegionDiskRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Disk> GetRegionDisk(
      google::cloud::cpp::compute::region_disks::v1::GetRegionDiskRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::region_disks::v1::GetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertRegionDisk(
      google::cloud::cpp::compute::region_disks::v1::
          InsertRegionDiskRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::Disk> ListRegionDisks(
      google::cloud::cpp::compute::region_disks::v1::ListRegionDisksRequest
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveResourcePolicies(
      google::cloud::cpp::compute::region_disks::v1::
          RemoveResourcePoliciesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Resize(
      google::cloud::cpp::compute::region_disks::v1::ResizeRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::region_disks::v1::SetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::region_disks::v1::SetLabelsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StartAsyncReplication(
      google::cloud::cpp::compute::region_disks::v1::
          StartAsyncReplicationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StopAsyncReplication(google::cloud::cpp::compute::region_disks::v1::
                           StopAsyncReplicationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StopGroupAsyncReplication(
      google::cloud::cpp::compute::region_disks::v1::
          StopGroupAsyncReplicationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::region_disks::v1::
                         TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateRegionDisk(
      google::cloud::cpp::compute::region_disks::v1::
          UpdateRegionDiskRequest const& request) override;

 private:
  std::shared_ptr<compute_region_disks_v1::RegionDisksConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_region_disks_v1::RegionDisksConnection>
MakeRegionDisksTracingConnection(
    std::shared_ptr<compute_region_disks_v1::RegionDisksConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_disks_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_DISKS_V1_INTERNAL_REGION_DISKS_TRACING_CONNECTION_H
