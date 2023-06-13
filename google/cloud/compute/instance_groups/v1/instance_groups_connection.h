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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUPS_V1_INSTANCE_GROUPS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUPS_V1_INSTANCE_GROUPS_CONNECTION_H

#include "google/cloud/compute/instance_groups/v1/instance_groups_connection_idempotency_policy.h"
#include "google/cloud/compute/instance_groups/v1/internal/instance_groups_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/instance_groups/v1/instance_groups.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_instance_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using InstanceGroupsRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        compute_instance_groups_v1_internal::InstanceGroupsRetryTraits>;

using InstanceGroupsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_instance_groups_v1_internal::InstanceGroupsRetryTraits>;

using InstanceGroupsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_instance_groups_v1_internal::InstanceGroupsRetryTraits>;

/**
 * The `InstanceGroupsConnection` object for `InstanceGroupsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `InstanceGroupsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `InstanceGroupsClient`.
 *
 * To create a concrete instance, see `MakeInstanceGroupsConnection()`.
 *
 * For mocking, see
 * `compute_instance_groups_v1_mocks::MockInstanceGroupsConnection`.
 */
class InstanceGroupsConnection {
 public:
  virtual ~InstanceGroupsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddInstances(google::cloud::cpp::compute::instance_groups::v1::
                   AddInstancesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::InstanceGroupAggregatedList>
  AggregatedListInstanceGroups(
      google::cloud::cpp::compute::instance_groups::v1::
          AggregatedListInstanceGroupsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInstanceGroups(google::cloud::cpp::compute::instance_groups::v1::
                           DeleteInstanceGroupsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::InstanceGroup>
  GetInstanceGroups(google::cloud::cpp::compute::instance_groups::v1::
                        GetInstanceGroupsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertInstanceGroups(google::cloud::cpp::compute::instance_groups::v1::
                           InsertInstanceGroupsRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::InstanceGroup>
  ListInstanceGroups(google::cloud::cpp::compute::instance_groups::v1::
                         ListInstanceGroupsRequest request);

  virtual StreamRange<google::cloud::cpp::compute::v1::InstanceWithNamedPorts>
  ListInstances(
      google::cloud::cpp::compute::instance_groups::v1::ListInstancesRequest
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveInstances(google::cloud::cpp::compute::instance_groups::v1::
                      RemoveInstancesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetNamedPorts(google::cloud::cpp::compute::instance_groups::v1::
                    SetNamedPortsRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_groups_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUPS_V1_INSTANCE_GROUPS_CONNECTION_H
