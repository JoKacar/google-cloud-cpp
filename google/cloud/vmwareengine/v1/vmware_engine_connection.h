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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_VMWARE_ENGINE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_VMWARE_ENGINE_CONNECTION_H

#include "google/cloud/vmwareengine/v1/internal/vmware_engine_retry_traits.h"
#include "google/cloud/vmwareengine/v1/vmware_engine_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/vmwareengine/v1/vmwareengine.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace vmwareengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `VmwareEngineConnection`.
class VmwareEngineRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<VmwareEngineRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `VmwareEngineConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class VmwareEngineLimitedErrorCountRetryPolicy
    : public VmwareEngineRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit VmwareEngineLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  VmwareEngineLimitedErrorCountRetryPolicy(
      VmwareEngineLimitedErrorCountRetryPolicy&& rhs) noexcept
      : VmwareEngineLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  VmwareEngineLimitedErrorCountRetryPolicy(
      VmwareEngineLimitedErrorCountRetryPolicy const& rhs) noexcept
      : VmwareEngineLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<VmwareEngineRetryPolicy> clone() const override {
    return std::make_unique<VmwareEngineLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = VmwareEngineRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      vmwareengine_v1_internal::VmwareEngineRetryTraits>
      impl_;
};

/**
 * A retry policy for `VmwareEngineConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class VmwareEngineLimitedTimeRetryPolicy : public VmwareEngineRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit VmwareEngineLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  VmwareEngineLimitedTimeRetryPolicy(
      VmwareEngineLimitedTimeRetryPolicy&& rhs) noexcept
      : VmwareEngineLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  VmwareEngineLimitedTimeRetryPolicy(
      VmwareEngineLimitedTimeRetryPolicy const& rhs) noexcept
      : VmwareEngineLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<VmwareEngineRetryPolicy> clone() const override {
    return std::make_unique<VmwareEngineLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = VmwareEngineRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      vmwareengine_v1_internal::VmwareEngineRetryTraits>
      impl_;
};

/**
 * The `VmwareEngineConnection` object for `VmwareEngineClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `VmwareEngineClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `VmwareEngineClient`.
 *
 * To create a concrete instance, see `MakeVmwareEngineConnection()`.
 *
 * For mocking, see `vmwareengine_v1_mocks::MockVmwareEngineConnection`.
 */
class VmwareEngineConnection {
 public:
  virtual ~VmwareEngineConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::vmwareengine::v1::PrivateCloud>
  ListPrivateClouds(
      google::cloud::vmwareengine::v1::ListPrivateCloudsRequest request);

  virtual StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>
  GetPrivateCloud(
      google::cloud::vmwareengine::v1::GetPrivateCloudRequest const& request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  CreatePrivateCloud(
      google::cloud::vmwareengine::v1::CreatePrivateCloudRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  UpdatePrivateCloud(
      google::cloud::vmwareengine::v1::UpdatePrivateCloudRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  DeletePrivateCloud(
      google::cloud::vmwareengine::v1::DeletePrivateCloudRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  UndeletePrivateCloud(
      google::cloud::vmwareengine::v1::UndeletePrivateCloudRequest const&
          request);

  virtual StreamRange<google::cloud::vmwareengine::v1::Cluster> ListClusters(
      google::cloud::vmwareengine::v1::ListClustersRequest request);

  virtual StatusOr<google::cloud::vmwareengine::v1::Cluster> GetCluster(
      google::cloud::vmwareengine::v1::GetClusterRequest const& request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::Cluster>>
  CreateCluster(
      google::cloud::vmwareengine::v1::CreateClusterRequest const& request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::Cluster>>
  UpdateCluster(
      google::cloud::vmwareengine::v1::UpdateClusterRequest const& request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteCluster(
      google::cloud::vmwareengine::v1::DeleteClusterRequest const& request);

  virtual StreamRange<google::cloud::vmwareengine::v1::Node> ListNodes(
      google::cloud::vmwareengine::v1::ListNodesRequest request);

  virtual StatusOr<google::cloud::vmwareengine::v1::Node> GetNode(
      google::cloud::vmwareengine::v1::GetNodeRequest const& request);

  virtual StreamRange<google::cloud::vmwareengine::v1::ExternalAddress>
  ListExternalAddresses(
      google::cloud::vmwareengine::v1::ListExternalAddressesRequest request);

  virtual StreamRange<google::cloud::vmwareengine::v1::ExternalAddress>
  FetchNetworkPolicyExternalAddresses(
      google::cloud::vmwareengine::v1::
          FetchNetworkPolicyExternalAddressesRequest request);

  virtual StatusOr<google::cloud::vmwareengine::v1::ExternalAddress>
  GetExternalAddress(
      google::cloud::vmwareengine::v1::GetExternalAddressRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::ExternalAddress>>
  CreateExternalAddress(
      google::cloud::vmwareengine::v1::CreateExternalAddressRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::ExternalAddress>>
  UpdateExternalAddress(
      google::cloud::vmwareengine::v1::UpdateExternalAddressRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteExternalAddress(
      google::cloud::vmwareengine::v1::DeleteExternalAddressRequest const&
          request);

  virtual StreamRange<google::cloud::vmwareengine::v1::Subnet> ListSubnets(
      google::cloud::vmwareengine::v1::ListSubnetsRequest request);

  virtual StatusOr<google::cloud::vmwareengine::v1::Subnet> GetSubnet(
      google::cloud::vmwareengine::v1::GetSubnetRequest const& request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::Subnet>>
  UpdateSubnet(
      google::cloud::vmwareengine::v1::UpdateSubnetRequest const& request);

  virtual StreamRange<google::cloud::vmwareengine::v1::ExternalAccessRule>
  ListExternalAccessRules(
      google::cloud::vmwareengine::v1::ListExternalAccessRulesRequest request);

  virtual StatusOr<google::cloud::vmwareengine::v1::ExternalAccessRule>
  GetExternalAccessRule(
      google::cloud::vmwareengine::v1::GetExternalAccessRuleRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::ExternalAccessRule>>
  CreateExternalAccessRule(
      google::cloud::vmwareengine::v1::CreateExternalAccessRuleRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::ExternalAccessRule>>
  UpdateExternalAccessRule(
      google::cloud::vmwareengine::v1::UpdateExternalAccessRuleRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteExternalAccessRule(
      google::cloud::vmwareengine::v1::DeleteExternalAccessRuleRequest const&
          request);

  virtual StreamRange<google::cloud::vmwareengine::v1::LoggingServer>
  ListLoggingServers(
      google::cloud::vmwareengine::v1::ListLoggingServersRequest request);

  virtual StatusOr<google::cloud::vmwareengine::v1::LoggingServer>
  GetLoggingServer(
      google::cloud::vmwareengine::v1::GetLoggingServerRequest const& request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::LoggingServer>>
  CreateLoggingServer(
      google::cloud::vmwareengine::v1::CreateLoggingServerRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::LoggingServer>>
  UpdateLoggingServer(
      google::cloud::vmwareengine::v1::UpdateLoggingServerRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteLoggingServer(
      google::cloud::vmwareengine::v1::DeleteLoggingServerRequest const&
          request);

  virtual StreamRange<google::cloud::vmwareengine::v1::NodeType> ListNodeTypes(
      google::cloud::vmwareengine::v1::ListNodeTypesRequest request);

  virtual StatusOr<google::cloud::vmwareengine::v1::NodeType> GetNodeType(
      google::cloud::vmwareengine::v1::GetNodeTypeRequest const& request);

  virtual StatusOr<google::cloud::vmwareengine::v1::Credentials>
  ShowNsxCredentials(
      google::cloud::vmwareengine::v1::ShowNsxCredentialsRequest const&
          request);

  virtual StatusOr<google::cloud::vmwareengine::v1::Credentials>
  ShowVcenterCredentials(
      google::cloud::vmwareengine::v1::ShowVcenterCredentialsRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  ResetNsxCredentials(
      google::cloud::vmwareengine::v1::ResetNsxCredentialsRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  ResetVcenterCredentials(
      google::cloud::vmwareengine::v1::ResetVcenterCredentialsRequest const&
          request);

  virtual StatusOr<google::cloud::vmwareengine::v1::DnsForwarding>
  GetDnsForwarding(
      google::cloud::vmwareengine::v1::GetDnsForwardingRequest const& request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::DnsForwarding>>
  UpdateDnsForwarding(
      google::cloud::vmwareengine::v1::UpdateDnsForwardingRequest const&
          request);

  virtual StatusOr<google::cloud::vmwareengine::v1::NetworkPeering>
  GetNetworkPeering(
      google::cloud::vmwareengine::v1::GetNetworkPeeringRequest const& request);

  virtual StreamRange<google::cloud::vmwareengine::v1::NetworkPeering>
  ListNetworkPeerings(
      google::cloud::vmwareengine::v1::ListNetworkPeeringsRequest request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::NetworkPeering>>
  CreateNetworkPeering(
      google::cloud::vmwareengine::v1::CreateNetworkPeeringRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteNetworkPeering(
      google::cloud::vmwareengine::v1::DeleteNetworkPeeringRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::NetworkPeering>>
  UpdateNetworkPeering(
      google::cloud::vmwareengine::v1::UpdateNetworkPeeringRequest const&
          request);

  virtual StreamRange<google::cloud::vmwareengine::v1::PeeringRoute>
  ListPeeringRoutes(
      google::cloud::vmwareengine::v1::ListPeeringRoutesRequest request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>>
  CreateHcxActivationKey(
      google::cloud::vmwareengine::v1::CreateHcxActivationKeyRequest const&
          request);

  virtual StreamRange<google::cloud::vmwareengine::v1::HcxActivationKey>
  ListHcxActivationKeys(
      google::cloud::vmwareengine::v1::ListHcxActivationKeysRequest request);

  virtual StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>
  GetHcxActivationKey(
      google::cloud::vmwareengine::v1::GetHcxActivationKeyRequest const&
          request);

  virtual StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>
  GetNetworkPolicy(
      google::cloud::vmwareengine::v1::GetNetworkPolicyRequest const& request);

  virtual StreamRange<google::cloud::vmwareengine::v1::NetworkPolicy>
  ListNetworkPolicies(
      google::cloud::vmwareengine::v1::ListNetworkPoliciesRequest request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>
  CreateNetworkPolicy(
      google::cloud::vmwareengine::v1::CreateNetworkPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>
  UpdateNetworkPolicy(
      google::cloud::vmwareengine::v1::UpdateNetworkPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteNetworkPolicy(
      google::cloud::vmwareengine::v1::DeleteNetworkPolicyRequest const&
          request);

  virtual StreamRange<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>
  ListManagementDnsZoneBindings(
      google::cloud::vmwareengine::v1::ListManagementDnsZoneBindingsRequest
          request);

  virtual StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>
  GetManagementDnsZoneBinding(
      google::cloud::vmwareengine::v1::GetManagementDnsZoneBindingRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>
  CreateManagementDnsZoneBinding(
      google::cloud::vmwareengine::v1::
          CreateManagementDnsZoneBindingRequest const& request);

  virtual future<
      StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>
  UpdateManagementDnsZoneBinding(
      google::cloud::vmwareengine::v1::
          UpdateManagementDnsZoneBindingRequest const& request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteManagementDnsZoneBinding(
      google::cloud::vmwareengine::v1::
          DeleteManagementDnsZoneBindingRequest const& request);

  virtual future<
      StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>
  RepairManagementDnsZoneBinding(
      google::cloud::vmwareengine::v1::
          RepairManagementDnsZoneBindingRequest const& request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>
  CreateVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::CreateVmwareEngineNetworkRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>
  UpdateVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::UpdateVmwareEngineNetworkRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::DeleteVmwareEngineNetworkRequest const&
          request);

  virtual StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>
  GetVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::GetVmwareEngineNetworkRequest const&
          request);

  virtual StreamRange<google::cloud::vmwareengine::v1::VmwareEngineNetwork>
  ListVmwareEngineNetworks(
      google::cloud::vmwareengine::v1::ListVmwareEngineNetworksRequest request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>
  CreatePrivateConnection(
      google::cloud::vmwareengine::v1::CreatePrivateConnectionRequest const&
          request);

  virtual StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>
  GetPrivateConnection(
      google::cloud::vmwareengine::v1::GetPrivateConnectionRequest const&
          request);

  virtual StreamRange<google::cloud::vmwareengine::v1::PrivateConnection>
  ListPrivateConnections(
      google::cloud::vmwareengine::v1::ListPrivateConnectionsRequest request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>
  UpdatePrivateConnection(
      google::cloud::vmwareengine::v1::UpdatePrivateConnectionRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeletePrivateConnection(
      google::cloud::vmwareengine::v1::DeletePrivateConnectionRequest const&
          request);

  virtual StreamRange<google::cloud::vmwareengine::v1::PeeringRoute>
  ListPrivateConnectionPeeringRoutes(
      google::cloud::vmwareengine::v1::ListPrivateConnectionPeeringRoutesRequest
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::DnsBindPermission>>
  GrantDnsBindPermission(
      google::cloud::vmwareengine::v1::GrantDnsBindPermissionRequest const&
          request);

  virtual StatusOr<google::cloud::vmwareengine::v1::DnsBindPermission>
  GetDnsBindPermission(
      google::cloud::vmwareengine::v1::GetDnsBindPermissionRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::DnsBindPermission>>
  RevokeDnsBindPermission(
      google::cloud::vmwareengine::v1::RevokeDnsBindPermissionRequest const&
          request);
};

/**
 * A factory function to construct an object of type `VmwareEngineConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of VmwareEngineClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `VmwareEngineConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::vmwareengine_v1::VmwareEnginePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `VmwareEngineConnection` created by
 * this function.
 */
std::shared_ptr<VmwareEngineConnection> MakeVmwareEngineConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmwareengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_VMWARE_ENGINE_CONNECTION_H
