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
// google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_NETWORK_ENDPOINT_GROUPS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_NETWORK_ENDPOINT_GROUPS_TRACING_CONNECTION_H

#include "google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups_connection.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_network_endpoint_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class NetworkEndpointGroupsTracingConnection
    : public compute_network_endpoint_groups_v1::
          NetworkEndpointGroupsConnection {
 public:
  ~NetworkEndpointGroupsTracingConnection() override = default;

  explicit NetworkEndpointGroupsTracingConnection(
      std::shared_ptr<
          compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection>
          child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroupAggregatedList>
  AggregatedListNetworkEndpointGroups(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          AggregatedListNetworkEndpointGroupsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AttachNetworkEndpoints(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          AttachNetworkEndpointsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNetworkEndpointGroups(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          DeleteNetworkEndpointGroupsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DetachNetworkEndpoints(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          DetachNetworkEndpointsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  GetNetworkEndpointGroups(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          GetNetworkEndpointGroupsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNetworkEndpointGroups(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          InsertNetworkEndpointGroupsRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  ListNetworkEndpointGroups(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          ListNetworkEndpointGroupsRequest request) override;

  StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>
  ListNetworkEndpoints(google::cloud::cpp::compute::network_endpoint_groups::
                           v1::ListNetworkEndpointsRequest request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::network_endpoint_groups::v1::
                         TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<
      compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<
    compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection>
MakeNetworkEndpointGroupsTracingConnection(
    std::shared_ptr<
        compute_network_endpoint_groups_v1::NetworkEndpointGroupsConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_endpoint_groups_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_NETWORK_ENDPOINT_GROUPS_TRACING_CONNECTION_H
