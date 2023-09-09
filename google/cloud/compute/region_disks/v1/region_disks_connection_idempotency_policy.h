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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_DISKS_V1_REGION_DISKS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_DISKS_V1_REGION_DISKS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_disks/v1/region_disks.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_disks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionDisksConnectionIdempotencyPolicy {
 public:
  virtual ~RegionDisksConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<RegionDisksConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency AddResourcePolicies(
      google::cloud::cpp::compute::region_disks::v1::
          AddResourcePoliciesRequest const& request);

  virtual google::cloud::Idempotency BulkInsert(
      google::cloud::cpp::compute::region_disks::v1::BulkInsertRequest const&
          request);

  virtual google::cloud::Idempotency CreateSnapshot(
      google::cloud::cpp::compute::region_disks::v1::
          CreateSnapshotRequest const& request);

  virtual google::cloud::Idempotency DeleteRegionDisk(
      google::cloud::cpp::compute::region_disks::v1::
          DeleteRegionDiskRequest const& request);

  virtual google::cloud::Idempotency GetRegionDisk(
      google::cloud::cpp::compute::region_disks::v1::GetRegionDiskRequest const&
          request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::cloud::cpp::compute::region_disks::v1::GetIamPolicyRequest const&
          request);

  virtual google::cloud::Idempotency InsertRegionDisk(
      google::cloud::cpp::compute::region_disks::v1::
          InsertRegionDiskRequest const& request);

  virtual google::cloud::Idempotency ListRegionDisks(
      google::cloud::cpp::compute::region_disks::v1::ListRegionDisksRequest
          request);

  virtual google::cloud::Idempotency RemoveResourcePolicies(
      google::cloud::cpp::compute::region_disks::v1::
          RemoveResourcePoliciesRequest const& request);

  virtual google::cloud::Idempotency Resize(
      google::cloud::cpp::compute::region_disks::v1::ResizeRequest const&
          request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::cloud::cpp::compute::region_disks::v1::SetIamPolicyRequest const&
          request);

  virtual google::cloud::Idempotency SetLabels(
      google::cloud::cpp::compute::region_disks::v1::SetLabelsRequest const&
          request);

  virtual google::cloud::Idempotency StartAsyncReplication(
      google::cloud::cpp::compute::region_disks::v1::
          StartAsyncReplicationRequest const& request);

  virtual google::cloud::Idempotency StopAsyncReplication(
      google::cloud::cpp::compute::region_disks::v1::
          StopAsyncReplicationRequest const& request);

  virtual google::cloud::Idempotency StopGroupAsyncReplication(
      google::cloud::cpp::compute::region_disks::v1::
          StopGroupAsyncReplicationRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::cloud::cpp::compute::region_disks::v1::
          TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency UpdateRegionDisk(
      google::cloud::cpp::compute::region_disks::v1::
          UpdateRegionDiskRequest const& request);
};

std::unique_ptr<RegionDisksConnectionIdempotencyPolicy>
MakeDefaultRegionDisksConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_disks_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_DISKS_V1_REGION_DISKS_CONNECTION_IDEMPOTENCY_POLICY_H
