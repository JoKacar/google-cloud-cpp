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
// google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto

#include "google/cloud/compute/region_network_endpoint_groups/v1/internal/region_network_endpoint_groups_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_network_endpoint_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegionNetworkEndpointGroupsTracingConnection::
    RegionNetworkEndpointGroupsTracingConnection(
        std::shared_ptr<compute_region_network_endpoint_groups_v1::
                            RegionNetworkEndpointGroupsConnection>
            child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsTracingConnection::AttachNetworkEndpoints(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        AttachNetworkEndpointsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_endpoint_groups_v1::"
      "RegionNetworkEndpointGroupsConnection::AttachNetworkEndpoints");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->AttachNetworkEndpoints(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsTracingConnection::DeleteNetworkEndpointGroup(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        DeleteNetworkEndpointGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_endpoint_groups_v1::"
      "RegionNetworkEndpointGroupsConnection::DeleteNetworkEndpointGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteNetworkEndpointGroup(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsTracingConnection::DetachNetworkEndpoints(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        DetachNetworkEndpointsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_endpoint_groups_v1::"
      "RegionNetworkEndpointGroupsConnection::DetachNetworkEndpoints");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DetachNetworkEndpoints(request));
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
RegionNetworkEndpointGroupsTracingConnection::GetNetworkEndpointGroup(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        GetNetworkEndpointGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_endpoint_groups_v1::"
      "RegionNetworkEndpointGroupsConnection::GetNetworkEndpointGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNetworkEndpointGroup(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsTracingConnection::InsertNetworkEndpointGroup(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        InsertNetworkEndpointGroupRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_network_endpoint_groups_v1::"
      "RegionNetworkEndpointGroupsConnection::InsertNetworkEndpointGroup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertNetworkEndpointGroup(request));
}

StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
RegionNetworkEndpointGroupsTracingConnection::ListRegionNetworkEndpointGroups(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        ListRegionNetworkEndpointGroupsRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_network_endpoint_groups_v1::"
      "RegionNetworkEndpointGroupsConnection::ListRegionNetworkEndpointGroups");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListRegionNetworkEndpointGroups(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::NetworkEndpointGroup>(std::move(span),
                                                             std::move(sr));
}

StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>
RegionNetworkEndpointGroupsTracingConnection::ListNetworkEndpoints(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        ListNetworkEndpointsRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_network_endpoint_groups_v1::"
      "RegionNetworkEndpointGroupsConnection::ListNetworkEndpoints");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListNetworkEndpoints(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>(
      std::move(span), std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_region_network_endpoint_groups_v1::
                    RegionNetworkEndpointGroupsConnection>
MakeRegionNetworkEndpointGroupsTracingConnection(
    std::shared_ptr<compute_region_network_endpoint_groups_v1::
                        RegionNetworkEndpointGroupsConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RegionNetworkEndpointGroupsTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_network_endpoint_groups_v1_internal
}  // namespace cloud
}  // namespace google
