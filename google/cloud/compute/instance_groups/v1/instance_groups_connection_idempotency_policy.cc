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
// source: google/cloud/compute/instance_groups/v1/instance_groups.proto

#include "google/cloud/compute/instance_groups/v1/instance_groups_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

InstanceGroupsConnectionIdempotencyPolicy::
    ~InstanceGroupsConnectionIdempotencyPolicy() = default;

std::unique_ptr<InstanceGroupsConnectionIdempotencyPolicy>
InstanceGroupsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<InstanceGroupsConnectionIdempotencyPolicy>(*this);
}

Idempotency InstanceGroupsConnectionIdempotencyPolicy::AddInstances(
    google::cloud::cpp::compute::instance_groups::v1::
        AddInstancesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
InstanceGroupsConnectionIdempotencyPolicy::AggregatedListInstanceGroups(
    google::cloud::cpp::compute::instance_groups::v1::
        AggregatedListInstanceGroupsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstanceGroupsConnectionIdempotencyPolicy::DeleteInstanceGroup(
    google::cloud::cpp::compute::instance_groups::v1::
        DeleteInstanceGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstanceGroupsConnectionIdempotencyPolicy::GetInstanceGroup(
    google::cloud::cpp::compute::instance_groups::v1::
        GetInstanceGroupRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstanceGroupsConnectionIdempotencyPolicy::InsertInstanceGroup(
    google::cloud::cpp::compute::instance_groups::v1::
        InsertInstanceGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstanceGroupsConnectionIdempotencyPolicy::ListInstanceGroups(
    google::cloud::cpp::compute::instance_groups::v1::
        ListInstanceGroupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency InstanceGroupsConnectionIdempotencyPolicy::ListInstances(
    google::cloud::cpp::compute::instance_groups::v1::
        ListInstancesRequest) {  // NOLINT
  return Idempotency::kNonIdempotent;
}

Idempotency InstanceGroupsConnectionIdempotencyPolicy::RemoveInstances(
    google::cloud::cpp::compute::instance_groups::v1::
        RemoveInstancesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstanceGroupsConnectionIdempotencyPolicy::SetNamedPorts(
    google::cloud::cpp::compute::instance_groups::v1::
        SetNamedPortsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<InstanceGroupsConnectionIdempotencyPolicy>
MakeDefaultInstanceGroupsConnectionIdempotencyPolicy() {
  return std::make_unique<InstanceGroupsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_groups_v1
}  // namespace cloud
}  // namespace google
