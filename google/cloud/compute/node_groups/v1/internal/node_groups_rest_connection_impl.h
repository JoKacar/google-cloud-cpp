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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_INTERNAL_NODE_GROUPS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_INTERNAL_NODE_GROUPS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/node_groups/v1/internal/node_groups_rest_stub.h"
#include "google/cloud/compute/node_groups/v1/internal/node_groups_retry_traits.h"
#include "google/cloud/compute/node_groups/v1/node_groups_connection.h"
#include "google/cloud/compute/node_groups/v1/node_groups_connection_idempotency_policy.h"
#include "google/cloud/compute/node_groups/v1/node_groups_options.h"
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
namespace compute_node_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NodeGroupsRestConnectionImpl
    : public compute_node_groups_v1::NodeGroupsConnection {
 public:
  ~NodeGroupsRestConnectionImpl() override = default;

  NodeGroupsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_node_groups_v1_internal::NodeGroupsRestStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddNodes(
      google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::NodeGroupAggregatedList>
  AggregatedListNodeGroups(
      google::cloud::cpp::compute::node_groups::v1::
          AggregatedListNodeGroupsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteNodeGroups(
      google::cloud::cpp::compute::node_groups::v1::
          DeleteNodeGroupsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteNodes(
      google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::NodeGroup> GetNodeGroups(
      google::cloud::cpp::compute::node_groups::v1::GetNodeGroupsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertNodeGroups(
      google::cloud::cpp::compute::node_groups::v1::
          InsertNodeGroupsRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::NodeGroup> ListNodeGroups(
      google::cloud::cpp::compute::node_groups::v1::ListNodeGroupsRequest
          request) override;

  StreamRange<google::cloud::cpp::compute::v1::NodeGroupNode> ListNodes(
      google::cloud::cpp::compute::node_groups::v1::ListNodesRequest request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchNodeGroups(
      google::cloud::cpp::compute::node_groups::v1::
          PatchNodeGroupsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetNodeTemplate(
      google::cloud::cpp::compute::node_groups::v1::
          SetNodeTemplateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::node_groups::v1::
                         TestIamPermissionsRequest const& request) override;

 private:
  std::unique_ptr<compute_node_groups_v1::NodeGroupsRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_node_groups_v1::NodeGroupsRetryPolicyOption>()) {
      return options.get<compute_node_groups_v1::NodeGroupsRetryPolicyOption>()
          ->clone();
    }
    return options_.get<compute_node_groups_v1::NodeGroupsRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_node_groups_v1::NodeGroupsBackoffPolicyOption>()) {
      return options
          .get<compute_node_groups_v1::NodeGroupsBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_node_groups_v1::NodeGroupsBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<compute_node_groups_v1::NodeGroupsConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_node_groups_v1::
                        NodeGroupsConnectionIdempotencyPolicyOption>()) {
      return options
          .get<compute_node_groups_v1::
                   NodeGroupsConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_node_groups_v1::
                 NodeGroupsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_node_groups_v1::NodeGroupsPollingPolicyOption>()) {
      return options
          .get<compute_node_groups_v1::NodeGroupsPollingPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_node_groups_v1::NodeGroupsPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_node_groups_v1_internal::NodeGroupsRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_groups_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_INTERNAL_NODE_GROUPS_REST_CONNECTION_IMPL_H
