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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINER_INTERNAL_CLUSTER_MANAGER_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINER_INTERNAL_CLUSTER_MANAGER_LOGGING_DECORATOR_H

#include "google/cloud/container/internal/cluster_manager_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace container_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ClusterManagerLogging : public ClusterManagerStub {
 public:
  ~ClusterManagerLogging() override = default;
  ClusterManagerLogging(std::shared_ptr<ClusterManagerStub> child,
                        TracingOptions tracing_options,
                        std::set<std::string> components);

  StatusOr<google::container::v1::ListClustersResponse> ListClusters(
      grpc::ClientContext& context,
      google::container::v1::ListClustersRequest const& request) override;

  StatusOr<google::container::v1::Cluster> GetCluster(
      grpc::ClientContext& context,
      google::container::v1::GetClusterRequest const& request) override;

  StatusOr<google::container::v1::Operation> CreateCluster(
      grpc::ClientContext& context,
      google::container::v1::CreateClusterRequest const& request) override;

  StatusOr<google::container::v1::Operation> UpdateCluster(
      grpc::ClientContext& context,
      google::container::v1::UpdateClusterRequest const& request) override;

  StatusOr<google::container::v1::Operation> UpdateNodePool(
      grpc::ClientContext& context,
      google::container::v1::UpdateNodePoolRequest const& request) override;

  StatusOr<google::container::v1::Operation> SetNodePoolAutoscaling(
      grpc::ClientContext& context,
      google::container::v1::SetNodePoolAutoscalingRequest const& request)
      override;

  StatusOr<google::container::v1::Operation> SetLoggingService(
      grpc::ClientContext& context,
      google::container::v1::SetLoggingServiceRequest const& request) override;

  StatusOr<google::container::v1::Operation> SetMonitoringService(
      grpc::ClientContext& context,
      google::container::v1::SetMonitoringServiceRequest const& request)
      override;

  StatusOr<google::container::v1::Operation> SetAddonsConfig(
      grpc::ClientContext& context,
      google::container::v1::SetAddonsConfigRequest const& request) override;

  StatusOr<google::container::v1::Operation> SetLocations(
      grpc::ClientContext& context,
      google::container::v1::SetLocationsRequest const& request) override;

  StatusOr<google::container::v1::Operation> UpdateMaster(
      grpc::ClientContext& context,
      google::container::v1::UpdateMasterRequest const& request) override;

  StatusOr<google::container::v1::Operation> SetMasterAuth(
      grpc::ClientContext& context,
      google::container::v1::SetMasterAuthRequest const& request) override;

  StatusOr<google::container::v1::Operation> DeleteCluster(
      grpc::ClientContext& context,
      google::container::v1::DeleteClusterRequest const& request) override;

  StatusOr<google::container::v1::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context,
      google::container::v1::ListOperationsRequest const& request) override;

  StatusOr<google::container::v1::Operation> GetOperation(
      grpc::ClientContext& context,
      google::container::v1::GetOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context,
      google::container::v1::CancelOperationRequest const& request) override;

  StatusOr<google::container::v1::ServerConfig> GetServerConfig(
      grpc::ClientContext& context,
      google::container::v1::GetServerConfigRequest const& request) override;

  StatusOr<google::container::v1::GetJSONWebKeysResponse> GetJSONWebKeys(
      grpc::ClientContext& context,
      google::container::v1::GetJSONWebKeysRequest const& request) override;

  StatusOr<google::container::v1::ListNodePoolsResponse> ListNodePools(
      grpc::ClientContext& context,
      google::container::v1::ListNodePoolsRequest const& request) override;

  StatusOr<google::container::v1::NodePool> GetNodePool(
      grpc::ClientContext& context,
      google::container::v1::GetNodePoolRequest const& request) override;

  StatusOr<google::container::v1::Operation> CreateNodePool(
      grpc::ClientContext& context,
      google::container::v1::CreateNodePoolRequest const& request) override;

  StatusOr<google::container::v1::Operation> DeleteNodePool(
      grpc::ClientContext& context,
      google::container::v1::DeleteNodePoolRequest const& request) override;

  StatusOr<google::container::v1::Operation> RollbackNodePoolUpgrade(
      grpc::ClientContext& context,
      google::container::v1::RollbackNodePoolUpgradeRequest const& request)
      override;

  StatusOr<google::container::v1::Operation> SetNodePoolManagement(
      grpc::ClientContext& context,
      google::container::v1::SetNodePoolManagementRequest const& request)
      override;

  StatusOr<google::container::v1::Operation> SetLabels(
      grpc::ClientContext& context,
      google::container::v1::SetLabelsRequest const& request) override;

  StatusOr<google::container::v1::Operation> SetLegacyAbac(
      grpc::ClientContext& context,
      google::container::v1::SetLegacyAbacRequest const& request) override;

  StatusOr<google::container::v1::Operation> StartIPRotation(
      grpc::ClientContext& context,
      google::container::v1::StartIPRotationRequest const& request) override;

  StatusOr<google::container::v1::Operation> CompleteIPRotation(
      grpc::ClientContext& context,
      google::container::v1::CompleteIPRotationRequest const& request) override;

  StatusOr<google::container::v1::Operation> SetNodePoolSize(
      grpc::ClientContext& context,
      google::container::v1::SetNodePoolSizeRequest const& request) override;

  StatusOr<google::container::v1::Operation> SetNetworkPolicy(
      grpc::ClientContext& context,
      google::container::v1::SetNetworkPolicyRequest const& request) override;

  StatusOr<google::container::v1::Operation> SetMaintenancePolicy(
      grpc::ClientContext& context,
      google::container::v1::SetMaintenancePolicyRequest const& request)
      override;

  StatusOr<google::container::v1::ListUsableSubnetworksResponse>
  ListUsableSubnetworks(
      grpc::ClientContext& context,
      google::container::v1::ListUsableSubnetworksRequest const& request)
      override;

 private:
  std::shared_ptr<ClusterManagerStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // ClusterManagerLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace container_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINER_INTERNAL_CLUSTER_MANAGER_LOGGING_DECORATOR_H
