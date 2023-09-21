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

#include "google/cloud/compute/node_groups/v1/node_groups_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NodeGroupsClient::NodeGroupsClient(
    ExperimentalTag, std::shared_ptr<NodeGroupsConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
NodeGroupsClient::~NodeGroupsClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsClient::AddNodes(
    std::string const& project, std::string const& zone,
    std::string const& node_group,
    google::cloud::cpp::compute::v1::NodeGroupsAddNodesRequest const&
        node_groups_add_nodes_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_groups::v1::AddNodesRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_node_group(node_group);
  *request.mutable_node_groups_add_nodes_request_resource() =
      node_groups_add_nodes_request_resource;
  return connection_->AddNodes(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsClient::AddNodes(
    google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddNodes(request);
}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::NodeGroupsScopedList>>
NodeGroupsClient::AggregatedListNodeGroups(std::string const& project,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_groups::v1::AggregatedListNodeGroupsRequest
      request;
  request.set_project(project);
  return connection_->AggregatedListNodeGroups(request);
}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::NodeGroupsScopedList>>
NodeGroupsClient::AggregatedListNodeGroups(
    google::cloud::cpp::compute::node_groups::v1::
        AggregatedListNodeGroupsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListNodeGroups(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsClient::DeleteNodeGroup(std::string const& project,
                                  std::string const& zone,
                                  std::string const& node_group, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_groups::v1::DeleteNodeGroupRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_node_group(node_group);
  return connection_->DeleteNodeGroup(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsClient::DeleteNodeGroup(
    google::cloud::cpp::compute::node_groups::v1::DeleteNodeGroupRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNodeGroup(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsClient::DeleteNodes(
    std::string const& project, std::string const& zone,
    std::string const& node_group,
    google::cloud::cpp::compute::v1::NodeGroupsDeleteNodesRequest const&
        node_groups_delete_nodes_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_node_group(node_group);
  *request.mutable_node_groups_delete_nodes_request_resource() =
      node_groups_delete_nodes_request_resource;
  return connection_->DeleteNodes(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsClient::DeleteNodes(
    google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNodes(request);
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroup>
NodeGroupsClient::GetNodeGroup(std::string const& project,
                               std::string const& zone,
                               std::string const& node_group, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_groups::v1::GetNodeGroupRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_node_group(node_group);
  return connection_->GetNodeGroup(request);
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroup>
NodeGroupsClient::GetNodeGroup(
    google::cloud::cpp::compute::node_groups::v1::GetNodeGroupRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetNodeGroup(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeGroupsClient::GetIamPolicy(std::string const& project,
                               std::string const& zone,
                               std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeGroupsClient::GetIamPolicy(
    google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsClient::InsertNodeGroup(
    std::string const& project, std::string const& zone,
    std::int32_t initial_node_count,
    google::cloud::cpp::compute::v1::NodeGroup const& node_group_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_groups::v1::InsertNodeGroupRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_initial_node_count(initial_node_count);
  *request.mutable_node_group_resource() = node_group_resource;
  return connection_->InsertNodeGroup(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsClient::InsertNodeGroup(
    google::cloud::cpp::compute::node_groups::v1::InsertNodeGroupRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertNodeGroup(request);
}

StreamRange<google::cloud::cpp::compute::v1::NodeGroup>
NodeGroupsClient::ListNodeGroups(std::string const& project,
                                 std::string const& zone, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_groups::v1::ListNodeGroupsRequest request;
  request.set_project(project);
  request.set_zone(zone);
  return connection_->ListNodeGroups(request);
}

StreamRange<google::cloud::cpp::compute::v1::NodeGroup>
NodeGroupsClient::ListNodeGroups(
    google::cloud::cpp::compute::node_groups::v1::ListNodeGroupsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListNodeGroups(std::move(request));
}

StreamRange<google::cloud::cpp::compute::v1::NodeGroupNode>
NodeGroupsClient::ListNodes(std::string const& project, std::string const& zone,
                            std::string const& node_group, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_groups::v1::ListNodesRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_node_group(node_group);
  return connection_->ListNodes(request);
}

StreamRange<google::cloud::cpp::compute::v1::NodeGroupNode>
NodeGroupsClient::ListNodes(
    google::cloud::cpp::compute::node_groups::v1::ListNodesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListNodes(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsClient::PatchNodeGroup(
    std::string const& project, std::string const& zone,
    std::string const& node_group,
    google::cloud::cpp::compute::v1::NodeGroup const& node_group_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_groups::v1::PatchNodeGroupRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_node_group(node_group);
  *request.mutable_node_group_resource() = node_group_resource;
  return connection_->PatchNodeGroup(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsClient::PatchNodeGroup(
    google::cloud::cpp::compute::node_groups::v1::PatchNodeGroupRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchNodeGroup(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeGroupsClient::SetIamPolicy(
    std::string const& project, std::string const& zone,
    std::string const& resource,
    google::cloud::cpp::compute::v1::ZoneSetPolicyRequest const&
        zone_set_policy_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_resource(resource);
  *request.mutable_zone_set_policy_request_resource() =
      zone_set_policy_request_resource;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeGroupsClient::SetIamPolicy(
    google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsClient::SetNodeTemplate(
    std::string const& project, std::string const& zone,
    std::string const& node_group,
    google::cloud::cpp::compute::v1::NodeGroupsSetNodeTemplateRequest const&
        node_groups_set_node_template_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_groups::v1::SetNodeTemplateRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_node_group(node_group);
  *request.mutable_node_groups_set_node_template_request_resource() =
      node_groups_set_node_template_request_resource;
  return connection_->SetNodeTemplate(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsClient::SetNodeTemplate(
    google::cloud::cpp::compute::node_groups::v1::SetNodeTemplateRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetNodeTemplate(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsClient::SimulateMaintenanceEvent(
    std::string const& project, std::string const& zone,
    std::string const& node_group,
    google::cloud::cpp::compute::v1::
        NodeGroupsSimulateMaintenanceEventRequest const&
            node_groups_simulate_maintenance_event_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_groups::v1::SimulateMaintenanceEventRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_node_group(node_group);
  *request.mutable_node_groups_simulate_maintenance_event_request_resource() =
      node_groups_simulate_maintenance_event_request_resource;
  return connection_->SimulateMaintenanceEvent(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsClient::SimulateMaintenanceEvent(
    google::cloud::cpp::compute::node_groups::v1::
        SimulateMaintenanceEventRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SimulateMaintenanceEvent(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NodeGroupsClient::TestIamPermissions(
    std::string const& project, std::string const& zone,
    std::string const& resource,
    google::cloud::cpp::compute::v1::TestPermissionsRequest const&
        test_permissions_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::node_groups::v1::TestIamPermissionsRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_resource(resource);
  *request.mutable_test_permissions_request_resource() =
      test_permissions_request_resource;
  return connection_->TestIamPermissions(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NodeGroupsClient::TestIamPermissions(
    google::cloud::cpp::compute::node_groups::v1::
        TestIamPermissionsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_groups_v1
}  // namespace cloud
}  // namespace google
