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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_VPN_GATEWAYS_V1_MOCKS_MOCK_TARGET_VPN_GATEWAYS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_VPN_GATEWAYS_V1_MOCKS_MOCK_TARGET_VPN_GATEWAYS_CONNECTION_H

#include "google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways_connection.h"
#include <gmock/gmock.h>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_target_vpn_gateways_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `TargetVpnGatewaysConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `TargetVpnGatewaysClient`. To do so,
 * construct an object of type `TargetVpnGatewaysClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockTargetVpnGatewaysConnection
    : public compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TargetVpnGatewayAggregatedList>,
      AggregatedListTargetVpnGateways,
      (google::cloud::cpp::compute::target_vpn_gateways::v1::
           AggregatedListTargetVpnGatewaysRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteTargetVpnGateways,
              (google::cloud::cpp::compute::target_vpn_gateways::v1::
                   DeleteTargetVpnGatewaysRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::TargetVpnGateway>,
              GetTargetVpnGateways,
              (google::cloud::cpp::compute::target_vpn_gateways::v1::
                   GetTargetVpnGatewaysRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertTargetVpnGateways,
              (google::cloud::cpp::compute::target_vpn_gateways::v1::
                   InsertTargetVpnGatewaysRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::cpp::compute::v1::TargetVpnGateway>,
              ListTargetVpnGateways,
              (google::cloud::cpp::compute::target_vpn_gateways::v1::
                   ListTargetVpnGatewaysRequest request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetLabels,
              (google::cloud::cpp::compute::target_vpn_gateways::v1::
                   SetLabelsRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_vpn_gateways_v1_mocks
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_VPN_GATEWAYS_V1_MOCKS_MOCK_TARGET_VPN_GATEWAYS_CONNECTION_H
