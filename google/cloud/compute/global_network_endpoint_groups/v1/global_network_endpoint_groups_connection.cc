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
// source: google/cloud/compute/global_network_endpoint_groups/v1/global_network_endpoint_groups.proto

#include "google/cloud/compute/global_network_endpoint_groups/v1/global_network_endpoint_groups_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/compute/global_network_endpoint_groups/v1/global_network_endpoint_groups_options.h"
#include "google/cloud/compute/global_network_endpoint_groups/v1/internal/global_network_endpoint_groups_option_defaults.h"
#include "google/cloud/compute/global_network_endpoint_groups/v1/internal/global_network_endpoint_groups_tracing_connection.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_network_endpoint_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GlobalNetworkEndpointGroupsConnection::~GlobalNetworkEndpointGroupsConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalNetworkEndpointGroupsConnection::AttachNetworkEndpoints(
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::AttachNetworkEndpointsRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::cpp::compute::v1::Operation>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalNetworkEndpointGroupsConnection::DeleteGlobalNetworkEndpointGroups(
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::DeleteGlobalNetworkEndpointGroupsRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::cpp::compute::v1::Operation>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalNetworkEndpointGroupsConnection::DetachNetworkEndpoints(
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::DetachNetworkEndpointsRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::cpp::compute::v1::Operation>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
GlobalNetworkEndpointGroupsConnection::GetGlobalNetworkEndpointGroups(
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::GetGlobalNetworkEndpointGroupsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalNetworkEndpointGroupsConnection::InsertGlobalNetworkEndpointGroups(
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::InsertGlobalNetworkEndpointGroupsRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::cpp::compute::v1::Operation>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup> GlobalNetworkEndpointGroupsConnection::ListGlobalNetworkEndpointGroups(
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::ListGlobalNetworkEndpointGroupsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>>();
}

StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus> GlobalNetworkEndpointGroupsConnection::ListNetworkEndpoints(
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::ListNetworkEndpointsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_network_endpoint_groups_v1
}  // namespace cloud
}  // namespace google
