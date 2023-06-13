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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUPS_V1_INTERNAL_INSTANCE_GROUPS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUPS_V1_INTERNAL_INSTANCE_GROUPS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/instance_groups/v1/instance_groups_connection.h"
#include "google/cloud/compute/instance_groups/v1/instance_groups_connection_idempotency_policy.h"
#include "google/cloud/compute/instance_groups/v1/instance_groups_options.h"
#include "google/cloud/compute/instance_groups/v1/internal/instance_groups_rest_stub.h"
#include "google/cloud/compute/instance_groups/v1/internal/instance_groups_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_instance_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstanceGroupsRestConnectionImpl
    : public compute_instance_groups_v1::InstanceGroupsConnection {
 public:
  ~InstanceGroupsRestConnectionImpl() override = default;

  InstanceGroupsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          compute_instance_groups_v1_internal::InstanceGroupsRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddInstances(
      google::cloud::cpp::compute::instance_groups::v1::
          AddInstancesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceGroupAggregatedList>
  AggregatedListInstanceGroups(
      google::cloud::cpp::compute::instance_groups::v1::
          AggregatedListInstanceGroupsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInstanceGroups(google::cloud::cpp::compute::instance_groups::v1::
                           DeleteInstanceGroupsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceGroup> GetInstanceGroups(
      google::cloud::cpp::compute::instance_groups::v1::
          GetInstanceGroupsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertInstanceGroups(google::cloud::cpp::compute::instance_groups::v1::
                           InsertInstanceGroupsRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::InstanceGroup>
  ListInstanceGroups(google::cloud::cpp::compute::instance_groups::v1::
                         ListInstanceGroupsRequest request) override;

  StreamRange<google::cloud::cpp::compute::v1::InstanceWithNamedPorts>
  ListInstances(
      google::cloud::cpp::compute::instance_groups::v1::ListInstancesRequest
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> RemoveInstances(
      google::cloud::cpp::compute::instance_groups::v1::
          RemoveInstancesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetNamedPorts(
      google::cloud::cpp::compute::instance_groups::v1::
          SetNamedPortsRequest const& request) override;

 private:
  std::unique_ptr<compute_instance_groups_v1::InstanceGroupsRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            compute_instance_groups_v1::InstanceGroupsRetryPolicyOption>()) {
      return options
          .get<compute_instance_groups_v1::InstanceGroupsRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_instance_groups_v1::InstanceGroupsRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            compute_instance_groups_v1::InstanceGroupsBackoffPolicyOption>()) {
      return options
          .get<compute_instance_groups_v1::InstanceGroupsBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_instance_groups_v1::InstanceGroupsBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<
      compute_instance_groups_v1::InstanceGroupsConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_instance_groups_v1::
                        InstanceGroupsConnectionIdempotencyPolicyOption>()) {
      return options
          .get<compute_instance_groups_v1::
                   InstanceGroupsConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_instance_groups_v1::
                 InstanceGroupsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            compute_instance_groups_v1::InstanceGroupsPollingPolicyOption>()) {
      return options
          .get<compute_instance_groups_v1::InstanceGroupsPollingPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_instance_groups_v1::InstanceGroupsPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_instance_groups_v1_internal::InstanceGroupsRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_groups_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUPS_V1_INTERNAL_INSTANCE_GROUPS_REST_CONNECTION_IMPL_H
