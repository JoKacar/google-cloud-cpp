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
// source: google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_VPN_GATEWAYS_V1_INTERNAL_TARGET_VPN_GATEWAYS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_VPN_GATEWAYS_V1_INTERNAL_TARGET_VPN_GATEWAYS_TRACING_CONNECTION_H

#include "google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_vpn_gateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TargetVpnGatewaysTracingConnection
    : public compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection {
 public:
  ~TargetVpnGatewaysTracingConnection() override = default;

  explicit TargetVpnGatewaysTracingConnection(
      std::shared_ptr<
          compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection>
          child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::compute::v1::TargetVpnGatewayAggregatedList>
  AggregatedListTargetVpnGateways(
      google::cloud::cpp::compute::target_vpn_gateways::v1::
          AggregatedListTargetVpnGatewaysRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetVpnGateway(
      google::cloud::cpp::compute::target_vpn_gateways::v1::
          DeleteTargetVpnGatewayRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetVpnGateway>
  GetTargetVpnGateway(google::cloud::cpp::compute::target_vpn_gateways::v1::
                          GetTargetVpnGatewayRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetVpnGateway(
      google::cloud::cpp::compute::target_vpn_gateways::v1::
          InsertTargetVpnGatewayRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::TargetVpnGateway>
  ListTargetVpnGateways(google::cloud::cpp::compute::target_vpn_gateways::v1::
                            ListTargetVpnGatewaysRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::target_vpn_gateways::v1::
          SetLabelsRequest const& request) override;

 private:
  std::shared_ptr<compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection>
MakeTargetVpnGatewaysTracingConnection(
    std::shared_ptr<compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_vpn_gateways_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_VPN_GATEWAYS_V1_INTERNAL_TARGET_VPN_GATEWAYS_TRACING_CONNECTION_H
