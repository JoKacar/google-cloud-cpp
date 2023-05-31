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
// source: google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_GATEWAYS_V1_INTERNAL_VPN_GATEWAYS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_GATEWAYS_V1_INTERNAL_VPN_GATEWAYS_TRACING_CONNECTION_H

#include "google/cloud/compute/vpn_gateways/v1/vpn_gateways_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_vpn_gateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class VpnGatewaysTracingConnection
    : public compute_vpn_gateways_v1::VpnGatewaysConnection {
 public:
  ~VpnGatewaysTracingConnection() override = default;

  explicit VpnGatewaysTracingConnection(
    std::shared_ptr<compute_vpn_gateways_v1::VpnGatewaysConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::compute::v1::VpnGatewayAggregatedList>
  AggregatedListVpnGateways(google::cloud::cpp::compute::vpn_gateways::v1::AggregatedListVpnGatewaysRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteVpnGateways(google::cloud::cpp::compute::vpn_gateways::v1::DeleteVpnGatewaysRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::VpnGateway>
  GetVpnGateways(google::cloud::cpp::compute::vpn_gateways::v1::GetVpnGatewaysRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::VpnGatewaysGetStatusResponse>
  GetStatus(google::cloud::cpp::compute::vpn_gateways::v1::GetStatusRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertVpnGateways(google::cloud::cpp::compute::vpn_gateways::v1::InsertVpnGatewaysRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::VpnGateway>
  ListVpnGateways(google::cloud::cpp::compute::vpn_gateways::v1::ListVpnGatewaysRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetLabels(google::cloud::cpp::compute::vpn_gateways::v1::SetLabelsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::vpn_gateways::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<compute_vpn_gateways_v1::VpnGatewaysConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_vpn_gateways_v1::VpnGatewaysConnection>
MakeVpnGatewaysTracingConnection(
    std::shared_ptr<compute_vpn_gateways_v1::VpnGatewaysConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_vpn_gateways_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_GATEWAYS_V1_INTERNAL_VPN_GATEWAYS_TRACING_CONNECTION_H
