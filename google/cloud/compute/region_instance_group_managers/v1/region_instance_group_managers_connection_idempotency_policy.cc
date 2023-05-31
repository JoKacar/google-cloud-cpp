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
// source: google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers.proto

#include "google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_instance_group_managers_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

RegionInstanceGroupManagersConnectionIdempotencyPolicy::~RegionInstanceGroupManagersConnectionIdempotencyPolicy() = default;

std::unique_ptr<RegionInstanceGroupManagersConnectionIdempotencyPolicy>
RegionInstanceGroupManagersConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<RegionInstanceGroupManagersConnectionIdempotencyPolicy>(*this);
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::AbandonInstances(google::cloud::cpp::compute::region_instance_group_managers::v1::AbandonInstancesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::ApplyUpdatesToInstances(google::cloud::cpp::compute::region_instance_group_managers::v1::ApplyUpdatesToInstancesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::CreateInstances(google::cloud::cpp::compute::region_instance_group_managers::v1::CreateInstancesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::DeleteRegionInstanceGroupManagers(google::cloud::cpp::compute::region_instance_group_managers::v1::DeleteRegionInstanceGroupManagersRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::DeleteInstances(google::cloud::cpp::compute::region_instance_group_managers::v1::DeleteInstancesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::DeletePerInstanceConfigs(google::cloud::cpp::compute::region_instance_group_managers::v1::DeletePerInstanceConfigsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::GetRegionInstanceGroupManagers(google::cloud::cpp::compute::region_instance_group_managers::v1::GetRegionInstanceGroupManagersRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::InsertRegionInstanceGroupManagers(google::cloud::cpp::compute::region_instance_group_managers::v1::InsertRegionInstanceGroupManagersRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::ListRegionInstanceGroupManagers(google::cloud::cpp::compute::region_instance_group_managers::v1::ListRegionInstanceGroupManagersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::ListErrors(google::cloud::cpp::compute::region_instance_group_managers::v1::ListErrorsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::ListManagedInstances(google::cloud::cpp::compute::region_instance_group_managers::v1::ListManagedInstancesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::ListPerInstanceConfigs(google::cloud::cpp::compute::region_instance_group_managers::v1::ListPerInstanceConfigsRequest) {  // NOLINT
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::PatchRegionInstanceGroupManagers(google::cloud::cpp::compute::region_instance_group_managers::v1::PatchRegionInstanceGroupManagersRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::PatchPerInstanceConfigs(google::cloud::cpp::compute::region_instance_group_managers::v1::PatchPerInstanceConfigsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::RecreateInstances(google::cloud::cpp::compute::region_instance_group_managers::v1::RecreateInstancesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::Resize(google::cloud::cpp::compute::region_instance_group_managers::v1::ResizeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::SetInstanceTemplate(google::cloud::cpp::compute::region_instance_group_managers::v1::SetInstanceTemplateRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::SetTargetPools(google::cloud::cpp::compute::region_instance_group_managers::v1::SetTargetPoolsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionInstanceGroupManagersConnectionIdempotencyPolicy::UpdatePerInstanceConfigs(google::cloud::cpp::compute::region_instance_group_managers::v1::UpdatePerInstanceConfigsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<RegionInstanceGroupManagersConnectionIdempotencyPolicy>
    MakeDefaultRegionInstanceGroupManagersConnectionIdempotencyPolicy() {
  return std::make_unique<RegionInstanceGroupManagersConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_group_managers_v1
}  // namespace cloud
}  // namespace google
