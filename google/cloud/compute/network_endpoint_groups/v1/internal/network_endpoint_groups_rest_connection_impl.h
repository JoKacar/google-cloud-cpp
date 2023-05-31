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
// source: google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_NETWORK_ENDPOINT_GROUPS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_NETWORK_ENDPOINT_GROUPS_REST_CONNECTION_IMPL_H

#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/compute/network_endpoint_groups/v1/internal/network_endpoint_groups_rest_stub.h"
#include "google/cloud/compute/network_endpoint_groups/v1/internal/network_endpoint_groups_retry_traits.h"
#include "google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups_connection.h"
#include "google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups_connection_idempotency_policy.h"
#include "google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups_options.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_endpoint_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworkEndpointGroupsRestConnectionImpl
    : public compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection {
 public:
  ~NetworkEndpointGroupsRestConnectionImpl() override = default;

  NetworkEndpointGroupsRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_network_endpoint_groups_v1_internal::NetworkEndpointGroupsRestStub> stub,
    Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroupAggregatedList>
  AggregatedListNetworkEndpointGroups(google::cloud::cpp::compute::network_endpoint_groups::v1::AggregatedListNetworkEndpointGroupsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AttachNetworkEndpoints(google::cloud::cpp::compute::network_endpoint_groups::v1::AttachNetworkEndpointsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNetworkEndpointGroups(google::cloud::cpp::compute::network_endpoint_groups::v1::DeleteNetworkEndpointGroupsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DetachNetworkEndpoints(google::cloud::cpp::compute::network_endpoint_groups::v1::DetachNetworkEndpointsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  GetNetworkEndpointGroups(google::cloud::cpp::compute::network_endpoint_groups::v1::GetNetworkEndpointGroupsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNetworkEndpointGroups(google::cloud::cpp::compute::network_endpoint_groups::v1::InsertNetworkEndpointGroupsRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  ListNetworkEndpointGroups(google::cloud::cpp::compute::network_endpoint_groups::v1::ListNetworkEndpointGroupsRequest request) override;

  StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>
  ListNetworkEndpoints(google::cloud::cpp::compute::network_endpoint_groups::v1::ListNetworkEndpointsRequest request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::network_endpoint_groups::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::unique_ptr<compute_network_endpoint_groups_v1::NetworkEndpointGroupsRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_network_endpoint_groups_v1::NetworkEndpointGroupsRetryPolicyOption>()) {
      return options.get<compute_network_endpoint_groups_v1::NetworkEndpointGroupsRetryPolicyOption>()->clone();
    }
    return options_.get<compute_network_endpoint_groups_v1::NetworkEndpointGroupsRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_network_endpoint_groups_v1::NetworkEndpointGroupsBackoffPolicyOption>()) {
      return options.get<compute_network_endpoint_groups_v1::NetworkEndpointGroupsBackoffPolicyOption>()->clone();
    }
    return options_.get<compute_network_endpoint_groups_v1::NetworkEndpointGroupsBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnectionIdempotencyPolicy> idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnectionIdempotencyPolicyOption>()) {
      return options.get<compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnectionIdempotencyPolicyOption>()->clone();
    }
    return options_.get<compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnectionIdempotencyPolicyOption>()->
clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_network_endpoint_groups_v1::NetworkEndpointGroupsPollingPolicyOption>()) {
      return options.get<compute_network_endpoint_groups_v1::NetworkEndpointGroupsPollingPolicyOption>()->clone();
    }
    return options_.get<compute_network_endpoint_groups_v1::NetworkEndpointGroupsPollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_network_endpoint_groups_v1_internal::NetworkEndpointGroupsRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_endpoint_groups_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_NETWORK_ENDPOINT_GROUPS_REST_CONNECTION_IMPL_H
