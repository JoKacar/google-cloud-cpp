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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_INTERNAL_NODE_GROUPS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_INTERNAL_NODE_GROUPS_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/node_groups/v1/internal/node_groups_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/node_groups/v1/node_groups.pb.h>
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_node_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NodeGroupsRestMetadata : public NodeGroupsRestStub {
 public:
  ~NodeGroupsRestMetadata() override = default;
  explicit NodeGroupsRestMetadata(std::shared_ptr<NodeGroupsRestStub> child);

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncAddNodes(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NodeGroupAggregatedList> AggregatedListNodeGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::node_groups::v1::AggregatedListNodeGroupsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDeleteNodeGroups(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::node_groups::v1::DeleteNodeGroupsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDeleteNodes(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NodeGroup> GetNodeGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::node_groups::v1::GetNodeGroupsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncInsertNodeGroups(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::node_groups::v1::InsertNodeGroupsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NodeGroupList> ListNodeGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::node_groups::v1::ListNodeGroupsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NodeGroupsListNodes> ListNodes(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::node_groups::v1::ListNodesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncPatchNodeGroups(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::node_groups::v1::PatchNodeGroupsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetNodeTemplate(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::node_groups::v1::SetNodeTemplateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse> TestIamPermissions(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::node_groups::v1::TestIamPermissionsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::zone_operations::v1::GetZoneOperationsRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::zone_operations::v1::DeleteZoneOperationsRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<NodeGroupsRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_groups_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_INTERNAL_NODE_GROUPS_REST_METADATA_DECORATOR_H
