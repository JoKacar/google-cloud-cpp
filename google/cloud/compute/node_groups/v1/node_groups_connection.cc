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
// source: google/cloud/compute/node_groups/v1/node_groups.proto

#include "google/cloud/compute/node_groups/v1/node_groups_connection.h"
#include "google/cloud/compute/node_groups/v1/internal/node_groups_option_defaults.h"
#include "google/cloud/compute/node_groups/v1/internal/node_groups_tracing_connection.h"
#include "google/cloud/compute/node_groups/v1/node_groups_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NodeGroupsConnection::~NodeGroupsConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsConnection::AddNodes(
    google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroupAggregatedList>
NodeGroupsConnection::AggregatedListNodeGroups(
    google::cloud::cpp::compute::node_groups::v1::
        AggregatedListNodeGroupsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsConnection::DeleteNodeGroups(
    google::cloud::cpp::compute::node_groups::v1::
        DeleteNodeGroupsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsConnection::DeleteNodes(
    google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroup>
NodeGroupsConnection::GetNodeGroups(
    google::cloud::cpp::compute::node_groups::v1::GetNodeGroupsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeGroupsConnection::GetIamPolicy(
    google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsConnection::InsertNodeGroups(
    google::cloud::cpp::compute::node_groups::v1::
        InsertNodeGroupsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::NodeGroup>
NodeGroupsConnection::ListNodeGroups(
    google::cloud::cpp::compute::node_groups::v1::
        ListNodeGroupsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::NodeGroup>>();
}

StreamRange<google::cloud::cpp::compute::v1::NodeGroupNode>
NodeGroupsConnection::ListNodes(
    google::cloud::cpp::compute::node_groups::v1::
        ListNodesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::NodeGroupNode>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsConnection::PatchNodeGroups(google::cloud::cpp::compute::node_groups::
                                          v1::PatchNodeGroupsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeGroupsConnection::SetIamPolicy(
    google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsConnection::SetNodeTemplate(google::cloud::cpp::compute::node_groups::
                                          v1::SetNodeTemplateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NodeGroupsConnection::TestIamPermissions(
    google::cloud::cpp::compute::node_groups::v1::
        TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_groups_v1
}  // namespace cloud
}  // namespace google
