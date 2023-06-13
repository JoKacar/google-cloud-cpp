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
// source: google/cloud/vmwareengine/v1/vmwareengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_INTERNAL_VMWARE_ENGINE_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_INTERNAL_VMWARE_ENGINE_TRACING_CONNECTION_H

#include "google/cloud/vmwareengine/v1/vmware_engine_connection.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace vmwareengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class VmwareEngineTracingConnection
    : public vmwareengine_v1::VmwareEngineConnection {
 public:
  ~VmwareEngineTracingConnection() override = default;

  explicit VmwareEngineTracingConnection(
      std::shared_ptr<vmwareengine_v1::VmwareEngineConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::vmwareengine::v1::PrivateCloud> ListPrivateClouds(
      google::cloud::vmwareengine::v1::ListPrivateCloudsRequest request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::PrivateCloud> GetPrivateCloud(
      google::cloud::vmwareengine::v1::GetPrivateCloudRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  CreatePrivateCloud(
      google::cloud::vmwareengine::v1::CreatePrivateCloudRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  UpdatePrivateCloud(
      google::cloud::vmwareengine::v1::UpdatePrivateCloudRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  DeletePrivateCloud(
      google::cloud::vmwareengine::v1::DeletePrivateCloudRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  UndeletePrivateCloud(
      google::cloud::vmwareengine::v1::UndeletePrivateCloudRequest const&
          request) override;

  StreamRange<google::cloud::vmwareengine::v1::Cluster> ListClusters(
      google::cloud::vmwareengine::v1::ListClustersRequest request) override;

  StatusOr<google::cloud::vmwareengine::v1::Cluster> GetCluster(
      google::cloud::vmwareengine::v1::GetClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::Cluster>> CreateCluster(
      google::cloud::vmwareengine::v1::CreateClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::Cluster>> UpdateCluster(
      google::cloud::vmwareengine::v1::UpdateClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteCluster(google::cloud::vmwareengine::v1::DeleteClusterRequest const&
                    request) override;

  StreamRange<google::cloud::vmwareengine::v1::Subnet> ListSubnets(
      google::cloud::vmwareengine::v1::ListSubnetsRequest request) override;

  StatusOr<google::cloud::vmwareengine::v1::Subnet> GetSubnet(
      google::cloud::vmwareengine::v1::GetSubnetRequest const& request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::Subnet>> UpdateSubnet(
      google::cloud::vmwareengine::v1::UpdateSubnetRequest const& request)
      override;

  StreamRange<google::cloud::vmwareengine::v1::NodeType> ListNodeTypes(
      google::cloud::vmwareengine::v1::ListNodeTypesRequest request) override;

  StatusOr<google::cloud::vmwareengine::v1::NodeType> GetNodeType(
      google::cloud::vmwareengine::v1::GetNodeTypeRequest const& request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::Credentials> ShowNsxCredentials(
      google::cloud::vmwareengine::v1::ShowNsxCredentialsRequest const& request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::Credentials> ShowVcenterCredentials(
      google::cloud::vmwareengine::v1::ShowVcenterCredentialsRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  ResetNsxCredentials(
      google::cloud::vmwareengine::v1::ResetNsxCredentialsRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  ResetVcenterCredentials(
      google::cloud::vmwareengine::v1::ResetVcenterCredentialsRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>>
  CreateHcxActivationKey(
      google::cloud::vmwareengine::v1::CreateHcxActivationKeyRequest const&
          request) override;

  StreamRange<google::cloud::vmwareengine::v1::HcxActivationKey>
  ListHcxActivationKeys(
      google::cloud::vmwareengine::v1::ListHcxActivationKeysRequest request)
      override;

  StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>
  GetHcxActivationKey(
      google::cloud::vmwareengine::v1::GetHcxActivationKeyRequest const&
          request) override;

  StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy> GetNetworkPolicy(
      google::cloud::vmwareengine::v1::GetNetworkPolicyRequest const& request)
      override;

  StreamRange<google::cloud::vmwareengine::v1::NetworkPolicy>
  ListNetworkPolicies(
      google::cloud::vmwareengine::v1::ListNetworkPoliciesRequest request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>
  CreateNetworkPolicy(
      google::cloud::vmwareengine::v1::CreateNetworkPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>
  UpdateNetworkPolicy(
      google::cloud::vmwareengine::v1::UpdateNetworkPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteNetworkPolicy(
      google::cloud::vmwareengine::v1::DeleteNetworkPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>
  CreateVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::CreateVmwareEngineNetworkRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>
  UpdateVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::UpdateVmwareEngineNetworkRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::DeleteVmwareEngineNetworkRequest const&
          request) override;

  StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>
  GetVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::GetVmwareEngineNetworkRequest const&
          request) override;

  StreamRange<google::cloud::vmwareengine::v1::VmwareEngineNetwork>
  ListVmwareEngineNetworks(
      google::cloud::vmwareengine::v1::ListVmwareEngineNetworksRequest request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>
  CreatePrivateConnection(
      google::cloud::vmwareengine::v1::CreatePrivateConnectionRequest const&
          request) override;

  StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>
  GetPrivateConnection(
      google::cloud::vmwareengine::v1::GetPrivateConnectionRequest const&
          request) override;

  StreamRange<google::cloud::vmwareengine::v1::PrivateConnection>
  ListPrivateConnections(
      google::cloud::vmwareengine::v1::ListPrivateConnectionsRequest request)
      override;

  future<StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>
  UpdatePrivateConnection(
      google::cloud::vmwareengine::v1::UpdatePrivateConnectionRequest const&
          request) override;

  future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeletePrivateConnection(
      google::cloud::vmwareengine::v1::DeletePrivateConnectionRequest const&
          request) override;

  StreamRange<google::cloud::vmwareengine::v1::PeeringRoute>
  ListPrivateConnectionPeeringRoutes(
      google::cloud::vmwareengine::v1::ListPrivateConnectionPeeringRoutesRequest
          request) override;

 private:
  std::shared_ptr<vmwareengine_v1::VmwareEngineConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<vmwareengine_v1::VmwareEngineConnection>
MakeVmwareEngineTracingConnection(
    std::shared_ptr<vmwareengine_v1::VmwareEngineConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmwareengine_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_INTERNAL_VMWARE_ENGINE_TRACING_CONNECTION_H
