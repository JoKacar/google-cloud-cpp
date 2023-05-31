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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_NODE_GROUPS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_NODE_GROUPS_CONNECTION_H

#include "google/cloud/backoff_policy.h"
#include "google/cloud/compute/node_groups/v1/internal/node_groups_retry_traits.h"
#include "google/cloud/compute/node_groups/v1/node_groups_connection_idempotency_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/node_groups/v1/node_groups.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using NodeGroupsRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    compute_node_groups_v1_internal::NodeGroupsRetryTraits>;

using NodeGroupsLimitedTimeRetryPolicy = ::google::cloud::internal::LimitedTimeRetryPolicy<
    compute_node_groups_v1_internal::NodeGroupsRetryTraits>;

using NodeGroupsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_node_groups_v1_internal::NodeGroupsRetryTraits>;

/**
 * The `NodeGroupsConnection` object for `NodeGroupsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `NodeGroupsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `NodeGroupsClient`.
 *
 * To create a concrete instance, see `MakeNodeGroupsConnection()`.
 *
 * For mocking, see `compute_node_groups_v1_mocks::MockNodeGroupsConnection`.
 */
class NodeGroupsConnection {
 public:
  virtual ~NodeGroupsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddNodes(google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::NodeGroupAggregatedList>
  AggregatedListNodeGroups(google::cloud::cpp::compute::node_groups::v1::AggregatedListNodeGroupsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNodeGroups(google::cloud::cpp::compute::node_groups::v1::DeleteNodeGroupsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNodes(google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::NodeGroup>
  GetNodeGroups(google::cloud::cpp::compute::node_groups::v1::GetNodeGroupsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy>
  GetIamPolicy(google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNodeGroups(google::cloud::cpp::compute::node_groups::v1::InsertNodeGroupsRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::NodeGroup>
  ListNodeGroups(google::cloud::cpp::compute::node_groups::v1::ListNodeGroupsRequest request);

  virtual StreamRange<google::cloud::cpp::compute::v1::NodeGroupNode>
  ListNodes(google::cloud::cpp::compute::node_groups::v1::ListNodesRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchNodeGroups(google::cloud::cpp::compute::node_groups::v1::PatchNodeGroupsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy>
  SetIamPolicy(google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetNodeTemplate(google::cloud::cpp::compute::node_groups::v1::SetNodeTemplateRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::node_groups::v1::TestIamPermissionsRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_groups_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_NODE_GROUPS_CONNECTION_H
