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
// source:
// google/cloud/compute/region_instance_groups/v1/region_instance_groups.proto

#include "google/cloud/compute/region_instance_groups/v1/region_instance_groups_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_instance_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

RegionInstanceGroupsConnectionIdempotencyPolicy::
    ~RegionInstanceGroupsConnectionIdempotencyPolicy() = default;

std::unique_ptr<RegionInstanceGroupsConnectionIdempotencyPolicy>
RegionInstanceGroupsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<RegionInstanceGroupsConnectionIdempotencyPolicy>(
      *this);
}

Idempotency
RegionInstanceGroupsConnectionIdempotencyPolicy::GetRegionInstanceGroups(
    google::cloud::cpp::compute::region_instance_groups::v1::
        GetRegionInstanceGroupsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
RegionInstanceGroupsConnectionIdempotencyPolicy::ListRegionInstanceGroups(
    google::cloud::cpp::compute::region_instance_groups::v1::
        ListRegionInstanceGroupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RegionInstanceGroupsConnectionIdempotencyPolicy::ListInstances(
    google::cloud::cpp::compute::region_instance_groups::v1::
        ListInstancesRequest) {  // NOLINT
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupsConnectionIdempotencyPolicy::SetNamedPorts(
    google::cloud::cpp::compute::region_instance_groups::v1::
        SetNamedPortsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<RegionInstanceGroupsConnectionIdempotencyPolicy>
MakeDefaultRegionInstanceGroupsConnectionIdempotencyPolicy() {
  return std::make_unique<RegionInstanceGroupsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_groups_v1
}  // namespace cloud
}  // namespace google
