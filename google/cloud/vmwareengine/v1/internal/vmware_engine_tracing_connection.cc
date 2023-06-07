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

#include "google/cloud/vmwareengine/v1/internal/vmware_engine_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace vmwareengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

VmwareEngineTracingConnection::VmwareEngineTracingConnection(
    std::shared_ptr<vmwareengine_v1::VmwareEngineConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::vmwareengine::v1::PrivateCloud>
VmwareEngineTracingConnection::ListPrivateClouds(
    google::cloud::vmwareengine::v1::ListPrivateCloudsRequest request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::ListPrivateClouds");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListPrivateClouds(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::vmwareengine::v1::PrivateCloud>(std::move(span),
                                                     std::move(sr));
}

StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>
VmwareEngineTracingConnection::GetPrivateCloud(
    google::cloud::vmwareengine::v1::GetPrivateCloudRequest const& request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::GetPrivateCloud");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPrivateCloud(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
VmwareEngineTracingConnection::CreatePrivateCloud(
    google::cloud::vmwareengine::v1::CreatePrivateCloudRequest const& request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::CreatePrivateCloud");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreatePrivateCloud(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
VmwareEngineTracingConnection::UpdatePrivateCloud(
    google::cloud::vmwareengine::v1::UpdatePrivateCloudRequest const& request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::UpdatePrivateCloud");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdatePrivateCloud(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
VmwareEngineTracingConnection::DeletePrivateCloud(
    google::cloud::vmwareengine::v1::DeletePrivateCloudRequest const& request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::DeletePrivateCloud");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeletePrivateCloud(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
VmwareEngineTracingConnection::UndeletePrivateCloud(
    google::cloud::vmwareengine::v1::UndeletePrivateCloudRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::UndeletePrivateCloud");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UndeletePrivateCloud(request));
}

StreamRange<google::cloud::vmwareengine::v1::Cluster>
VmwareEngineTracingConnection::ListClusters(
    google::cloud::vmwareengine::v1::ListClustersRequest request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::ListClusters");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListClusters(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::vmwareengine::v1::Cluster>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::vmwareengine::v1::Cluster>
VmwareEngineTracingConnection::GetCluster(
    google::cloud::vmwareengine::v1::GetClusterRequest const& request) {
  auto span =
      internal::MakeSpan("vmwareengine_v1::VmwareEngineConnection::GetCluster");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCluster(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::Cluster>>
VmwareEngineTracingConnection::CreateCluster(
    google::cloud::vmwareengine::v1::CreateClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::CreateCluster");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateCluster(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::Cluster>>
VmwareEngineTracingConnection::UpdateCluster(
    google::cloud::vmwareengine::v1::UpdateClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::UpdateCluster");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateCluster(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
VmwareEngineTracingConnection::DeleteCluster(
    google::cloud::vmwareengine::v1::DeleteClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::DeleteCluster");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteCluster(request));
}

StreamRange<google::cloud::vmwareengine::v1::Subnet>
VmwareEngineTracingConnection::ListSubnets(
    google::cloud::vmwareengine::v1::ListSubnetsRequest request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::ListSubnets");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListSubnets(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::vmwareengine::v1::Subnet>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::vmwareengine::v1::Subnet>
VmwareEngineTracingConnection::GetSubnet(
    google::cloud::vmwareengine::v1::GetSubnetRequest const& request) {
  auto span =
      internal::MakeSpan("vmwareengine_v1::VmwareEngineConnection::GetSubnet");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSubnet(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::Subnet>>
VmwareEngineTracingConnection::UpdateSubnet(
    google::cloud::vmwareengine::v1::UpdateSubnetRequest const& request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::UpdateSubnet");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateSubnet(request));
}

StreamRange<google::cloud::vmwareengine::v1::NodeType>
VmwareEngineTracingConnection::ListNodeTypes(
    google::cloud::vmwareengine::v1::ListNodeTypesRequest request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::ListNodeTypes");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListNodeTypes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::vmwareengine::v1::NodeType>(std::move(span),
                                                 std::move(sr));
}

StatusOr<google::cloud::vmwareengine::v1::NodeType>
VmwareEngineTracingConnection::GetNodeType(
    google::cloud::vmwareengine::v1::GetNodeTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::GetNodeType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNodeType(request));
}

StatusOr<google::cloud::vmwareengine::v1::Credentials>
VmwareEngineTracingConnection::ShowNsxCredentials(
    google::cloud::vmwareengine::v1::ShowNsxCredentialsRequest const& request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::ShowNsxCredentials");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ShowNsxCredentials(request));
}

StatusOr<google::cloud::vmwareengine::v1::Credentials>
VmwareEngineTracingConnection::ShowVcenterCredentials(
    google::cloud::vmwareengine::v1::ShowVcenterCredentialsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::ShowVcenterCredentials");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ShowVcenterCredentials(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
VmwareEngineTracingConnection::ResetNsxCredentials(
    google::cloud::vmwareengine::v1::ResetNsxCredentialsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::ResetNsxCredentials");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ResetNsxCredentials(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
VmwareEngineTracingConnection::ResetVcenterCredentials(
    google::cloud::vmwareengine::v1::ResetVcenterCredentialsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::ResetVcenterCredentials");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ResetVcenterCredentials(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>>
VmwareEngineTracingConnection::CreateHcxActivationKey(
    google::cloud::vmwareengine::v1::CreateHcxActivationKeyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::CreateHcxActivationKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateHcxActivationKey(request));
}

StreamRange<google::cloud::vmwareengine::v1::HcxActivationKey>
VmwareEngineTracingConnection::ListHcxActivationKeys(
    google::cloud::vmwareengine::v1::ListHcxActivationKeysRequest request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::ListHcxActivationKeys");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListHcxActivationKeys(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::vmwareengine::v1::HcxActivationKey>(std::move(span),
                                                         std::move(sr));
}

StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>
VmwareEngineTracingConnection::GetHcxActivationKey(
    google::cloud::vmwareengine::v1::GetHcxActivationKeyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::GetHcxActivationKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetHcxActivationKey(request));
}

StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>
VmwareEngineTracingConnection::GetNetworkPolicy(
    google::cloud::vmwareengine::v1::GetNetworkPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::GetNetworkPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNetworkPolicy(request));
}

StreamRange<google::cloud::vmwareengine::v1::NetworkPolicy>
VmwareEngineTracingConnection::ListNetworkPolicies(
    google::cloud::vmwareengine::v1::ListNetworkPoliciesRequest request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::ListNetworkPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListNetworkPolicies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::vmwareengine::v1::NetworkPolicy>(std::move(span),
                                                      std::move(sr));
}

future<StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>
VmwareEngineTracingConnection::CreateNetworkPolicy(
    google::cloud::vmwareengine::v1::CreateNetworkPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::CreateNetworkPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateNetworkPolicy(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>
VmwareEngineTracingConnection::UpdateNetworkPolicy(
    google::cloud::vmwareengine::v1::UpdateNetworkPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::UpdateNetworkPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateNetworkPolicy(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
VmwareEngineTracingConnection::DeleteNetworkPolicy(
    google::cloud::vmwareengine::v1::DeleteNetworkPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::DeleteNetworkPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteNetworkPolicy(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>
VmwareEngineTracingConnection::CreateVmwareEngineNetwork(
    google::cloud::vmwareengine::v1::CreateVmwareEngineNetworkRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::CreateVmwareEngineNetwork");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateVmwareEngineNetwork(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>
VmwareEngineTracingConnection::UpdateVmwareEngineNetwork(
    google::cloud::vmwareengine::v1::UpdateVmwareEngineNetworkRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::UpdateVmwareEngineNetwork");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateVmwareEngineNetwork(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
VmwareEngineTracingConnection::DeleteVmwareEngineNetwork(
    google::cloud::vmwareengine::v1::DeleteVmwareEngineNetworkRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::DeleteVmwareEngineNetwork");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteVmwareEngineNetwork(request));
}

StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>
VmwareEngineTracingConnection::GetVmwareEngineNetwork(
    google::cloud::vmwareengine::v1::GetVmwareEngineNetworkRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::GetVmwareEngineNetwork");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetVmwareEngineNetwork(request));
}

StreamRange<google::cloud::vmwareengine::v1::VmwareEngineNetwork>
VmwareEngineTracingConnection::ListVmwareEngineNetworks(
    google::cloud::vmwareengine::v1::ListVmwareEngineNetworksRequest request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::ListVmwareEngineNetworks");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListVmwareEngineNetworks(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::vmwareengine::v1::VmwareEngineNetwork>(std::move(span),
                                                            std::move(sr));
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>
VmwareEngineTracingConnection::CreatePrivateConnection(
    google::cloud::vmwareengine::v1::CreatePrivateConnectionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::CreatePrivateConnection");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreatePrivateConnection(request));
}

StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>
VmwareEngineTracingConnection::GetPrivateConnection(
    google::cloud::vmwareengine::v1::GetPrivateConnectionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::GetPrivateConnection");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPrivateConnection(request));
}

StreamRange<google::cloud::vmwareengine::v1::PrivateConnection>
VmwareEngineTracingConnection::ListPrivateConnections(
    google::cloud::vmwareengine::v1::ListPrivateConnectionsRequest request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::ListPrivateConnections");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListPrivateConnections(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::vmwareengine::v1::PrivateConnection>(std::move(span),
                                                          std::move(sr));
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>
VmwareEngineTracingConnection::UpdatePrivateConnection(
    google::cloud::vmwareengine::v1::UpdatePrivateConnectionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::UpdatePrivateConnection");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdatePrivateConnection(request));
}

future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
VmwareEngineTracingConnection::DeletePrivateConnection(
    google::cloud::vmwareengine::v1::DeletePrivateConnectionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::DeletePrivateConnection");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeletePrivateConnection(request));
}

StreamRange<google::cloud::vmwareengine::v1::PeeringRoute>
VmwareEngineTracingConnection::ListPrivateConnectionPeeringRoutes(
    google::cloud::vmwareengine::v1::ListPrivateConnectionPeeringRoutesRequest
        request) {
  auto span = internal::MakeSpan(
      "vmwareengine_v1::VmwareEngineConnection::"
      "ListPrivateConnectionPeeringRoutes");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListPrivateConnectionPeeringRoutes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::vmwareengine::v1::PeeringRoute>(std::move(span),
                                                     std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<vmwareengine_v1::VmwareEngineConnection>
MakeVmwareEngineTracingConnection(
    std::shared_ptr<vmwareengine_v1::VmwareEngineConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<VmwareEngineTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmwareengine_v1_internal
}  // namespace cloud
}  // namespace google
