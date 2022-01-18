// Copyright 2022 Google LLC
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
// source: google/container/v1/cluster_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINER_CLUSTER_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINER_CLUSTER_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/container/v1/cluster_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace container {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ClusterManagerConnectionIdempotencyPolicy {
 public:
  virtual ~ClusterManagerConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<ClusterManagerConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::internal::Idempotency ListClusters(
      google::container::v1::ListClustersRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency GetCluster(
      google::container::v1::GetClusterRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency CreateCluster(
      google::container::v1::CreateClusterRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency UpdateCluster(
      google::container::v1::UpdateClusterRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency UpdateNodePool(
      google::container::v1::UpdateNodePoolRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency SetNodePoolAutoscaling(
      google::container::v1::SetNodePoolAutoscalingRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency SetLoggingService(
      google::container::v1::SetLoggingServiceRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency SetMonitoringService(
      google::container::v1::SetMonitoringServiceRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency SetAddonsConfig(
      google::container::v1::SetAddonsConfigRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency SetLocations(
      google::container::v1::SetLocationsRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency UpdateMaster(
      google::container::v1::UpdateMasterRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency SetMasterAuth(
      google::container::v1::SetMasterAuthRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency DeleteCluster(
      google::container::v1::DeleteClusterRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency ListOperations(
      google::container::v1::ListOperationsRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency GetOperation(
      google::container::v1::GetOperationRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency CancelOperation(
      google::container::v1::CancelOperationRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency GetServerConfig(
      google::container::v1::GetServerConfigRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency GetJSONWebKeys(
      google::container::v1::GetJSONWebKeysRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency ListNodePools(
      google::container::v1::ListNodePoolsRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency GetNodePool(
      google::container::v1::GetNodePoolRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency CreateNodePool(
      google::container::v1::CreateNodePoolRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency DeleteNodePool(
      google::container::v1::DeleteNodePoolRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency RollbackNodePoolUpgrade(
      google::container::v1::RollbackNodePoolUpgradeRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency SetNodePoolManagement(
      google::container::v1::SetNodePoolManagementRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency SetLabels(
      google::container::v1::SetLabelsRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency SetLegacyAbac(
      google::container::v1::SetLegacyAbacRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency StartIPRotation(
      google::container::v1::StartIPRotationRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency CompleteIPRotation(
      google::container::v1::CompleteIPRotationRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency SetNodePoolSize(
      google::container::v1::SetNodePoolSizeRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency SetNetworkPolicy(
      google::container::v1::SetNetworkPolicyRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency SetMaintenancePolicy(
      google::container::v1::SetMaintenancePolicyRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency ListUsableSubnetworks(
      google::container::v1::ListUsableSubnetworksRequest request) = 0;
};

std::unique_ptr<ClusterManagerConnectionIdempotencyPolicy>
MakeDefaultClusterManagerConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace container
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINER_CLUSTER_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H
