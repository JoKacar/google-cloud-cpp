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
// google/cloud/compute/instance_group_managers/v1/instance_group_managers.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGERS_V1_INSTANCE_GROUP_MANAGERS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGERS_V1_INSTANCE_GROUP_MANAGERS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/instance_group_managers/v1/instance_group_managers.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_instance_group_managers_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstanceGroupManagersConnectionIdempotencyPolicy {
 public:
  virtual ~InstanceGroupManagersConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<InstanceGroupManagersConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency AbandonInstances(
      google::cloud::cpp::compute::instance_group_managers::v1::
          AbandonInstancesRequest const& request);

  virtual google::cloud::Idempotency AggregatedListInstanceGroupManagers(
      google::cloud::cpp::compute::instance_group_managers::v1::
          AggregatedListInstanceGroupManagersRequest const& request);

  virtual google::cloud::Idempotency ApplyUpdatesToInstances(
      google::cloud::cpp::compute::instance_group_managers::v1::
          ApplyUpdatesToInstancesRequest const& request);

  virtual google::cloud::Idempotency CreateInstances(
      google::cloud::cpp::compute::instance_group_managers::v1::
          CreateInstancesRequest const& request);

  virtual google::cloud::Idempotency DeleteInstanceGroupManagers(
      google::cloud::cpp::compute::instance_group_managers::v1::
          DeleteInstanceGroupManagersRequest const& request);

  virtual google::cloud::Idempotency DeleteInstances(
      google::cloud::cpp::compute::instance_group_managers::v1::
          DeleteInstancesRequest const& request);

  virtual google::cloud::Idempotency DeletePerInstanceConfigs(
      google::cloud::cpp::compute::instance_group_managers::v1::
          DeletePerInstanceConfigsRequest const& request);

  virtual google::cloud::Idempotency GetInstanceGroupManagers(
      google::cloud::cpp::compute::instance_group_managers::v1::
          GetInstanceGroupManagersRequest const& request);

  virtual google::cloud::Idempotency InsertInstanceGroupManagers(
      google::cloud::cpp::compute::instance_group_managers::v1::
          InsertInstanceGroupManagersRequest const& request);

  virtual google::cloud::Idempotency ListInstanceGroupManagers(
      google::cloud::cpp::compute::instance_group_managers::v1::
          ListInstanceGroupManagersRequest request);

  virtual google::cloud::Idempotency ListErrors(
      google::cloud::cpp::compute::instance_group_managers::v1::
          ListErrorsRequest request);

  virtual google::cloud::Idempotency ListManagedInstances(
      google::cloud::cpp::compute::instance_group_managers::v1::
          ListManagedInstancesRequest const& request);

  virtual google::cloud::Idempotency ListPerInstanceConfigs(
      google::cloud::cpp::compute::instance_group_managers::v1::
          ListPerInstanceConfigsRequest request);

  virtual google::cloud::Idempotency PatchInstanceGroupManagers(
      google::cloud::cpp::compute::instance_group_managers::v1::
          PatchInstanceGroupManagersRequest const& request);

  virtual google::cloud::Idempotency PatchPerInstanceConfigs(
      google::cloud::cpp::compute::instance_group_managers::v1::
          PatchPerInstanceConfigsRequest const& request);

  virtual google::cloud::Idempotency RecreateInstances(
      google::cloud::cpp::compute::instance_group_managers::v1::
          RecreateInstancesRequest const& request);

  virtual google::cloud::Idempotency Resize(
      google::cloud::cpp::compute::instance_group_managers::v1::
          ResizeRequest const& request);

  virtual google::cloud::Idempotency SetInstanceTemplate(
      google::cloud::cpp::compute::instance_group_managers::v1::
          SetInstanceTemplateRequest const& request);

  virtual google::cloud::Idempotency SetTargetPools(
      google::cloud::cpp::compute::instance_group_managers::v1::
          SetTargetPoolsRequest const& request);

  virtual google::cloud::Idempotency UpdatePerInstanceConfigs(
      google::cloud::cpp::compute::instance_group_managers::v1::
          UpdatePerInstanceConfigsRequest const& request);
};

std::unique_ptr<InstanceGroupManagersConnectionIdempotencyPolicy>
MakeDefaultInstanceGroupManagersConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_group_managers_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUP_MANAGERS_V1_INSTANCE_GROUP_MANAGERS_CONNECTION_IDEMPOTENCY_POLICY_H
