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
// google/cloud/compute/global_network_endpoint_groups/v1/global_network_endpoint_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_GLOBAL_NETWORK_ENDPOINT_GROUPS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_GLOBAL_NETWORK_ENDPOINT_GROUPS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/global_network_endpoint_groups/v1/global_network_endpoint_groups_connection.h"
#include "google/cloud/compute/global_network_endpoint_groups/v1/global_network_endpoint_groups_connection_idempotency_policy.h"
#include "google/cloud/compute/global_network_endpoint_groups/v1/global_network_endpoint_groups_options.h"
#include "google/cloud/compute/global_network_endpoint_groups/v1/internal/global_network_endpoint_groups_rest_stub.h"
#include "google/cloud/compute/global_network_endpoint_groups/v1/internal/global_network_endpoint_groups_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_network_endpoint_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GlobalNetworkEndpointGroupsRestConnectionImpl
    : public compute_global_network_endpoint_groups_v1::
          GlobalNetworkEndpointGroupsConnection {
 public:
  ~GlobalNetworkEndpointGroupsRestConnectionImpl() override = default;

  GlobalNetworkEndpointGroupsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_global_network_endpoint_groups_v1_internal::
                          GlobalNetworkEndpointGroupsRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AttachNetworkEndpoints(
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          AttachNetworkEndpointsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteGlobalNetworkEndpointGroup(
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          DeleteGlobalNetworkEndpointGroupRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DetachNetworkEndpoints(
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          DetachNetworkEndpointsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  GetGlobalNetworkEndpointGroup(
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          GetGlobalNetworkEndpointGroupRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertGlobalNetworkEndpointGroup(
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          InsertGlobalNetworkEndpointGroupRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  ListGlobalNetworkEndpointGroups(
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          ListGlobalNetworkEndpointGroupsRequest request) override;

  StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>
  ListNetworkEndpoints(
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          ListNetworkEndpointsRequest request) override;

 private:
  static std::unique_ptr<compute_global_network_endpoint_groups_v1::
                             GlobalNetworkEndpointGroupsRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_global_network_endpoint_groups_v1::
                 GlobalNetworkEndpointGroupsRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_global_network_endpoint_groups_v1::
                 GlobalNetworkEndpointGroupsBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_global_network_endpoint_groups_v1::
          GlobalNetworkEndpointGroupsConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_global_network_endpoint_groups_v1::
                 GlobalNetworkEndpointGroupsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_global_network_endpoint_groups_v1::
                 GlobalNetworkEndpointGroupsPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_global_network_endpoint_groups_v1_internal::
                      GlobalNetworkEndpointGroupsRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_network_endpoint_groups_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_GLOBAL_NETWORK_ENDPOINT_GROUPS_REST_CONNECTION_IMPL_H
