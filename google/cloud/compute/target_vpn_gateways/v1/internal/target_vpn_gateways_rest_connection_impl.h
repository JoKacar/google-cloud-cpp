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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_VPN_GATEWAYS_V1_INTERNAL_TARGET_VPN_GATEWAYS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_VPN_GATEWAYS_V1_INTERNAL_TARGET_VPN_GATEWAYS_REST_CONNECTION_IMPL_H

#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/compute/target_vpn_gateways/v1/internal/target_vpn_gateways_rest_stub.h"
#include "google/cloud/compute/target_vpn_gateways/v1/internal/target_vpn_gateways_retry_traits.h"
#include "google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways_connection.h"
#include "google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways_connection_idempotency_policy.h"
#include "google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways_options.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_vpn_gateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TargetVpnGatewaysRestConnectionImpl
    : public compute_target_vpn_gateways_v1::TargetVpnGatewaysConnection {
 public:
  ~TargetVpnGatewaysRestConnectionImpl() override = default;

  TargetVpnGatewaysRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_target_vpn_gateways_v1_internal::TargetVpnGatewaysRestStub> stub,
    Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::cpp::compute::v1::TargetVpnGatewayAggregatedList>
  AggregatedListTargetVpnGateways(google::cloud::cpp::compute::target_vpn_gateways::v1::AggregatedListTargetVpnGatewaysRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetVpnGateways(google::cloud::cpp::compute::target_vpn_gateways::v1::DeleteTargetVpnGatewaysRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetVpnGateway>
  GetTargetVpnGateways(google::cloud::cpp::compute::target_vpn_gateways::v1::GetTargetVpnGatewaysRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetVpnGateways(google::cloud::cpp::compute::target_vpn_gateways::v1::InsertTargetVpnGatewaysRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::TargetVpnGateway>
  ListTargetVpnGateways(google::cloud::cpp::compute::target_vpn_gateways::v1::ListTargetVpnGatewaysRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetLabels(google::cloud::cpp::compute::target_vpn_gateways::v1::SetLabelsRequest const& request) override;

 private:
  std::unique_ptr<compute_target_vpn_gateways_v1::TargetVpnGatewaysRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_target_vpn_gateways_v1::TargetVpnGatewaysRetryPolicyOption>()) {
      return options.get<compute_target_vpn_gateways_v1::TargetVpnGatewaysRetryPolicyOption>()->clone();
    }
    return options_.get<compute_target_vpn_gateways_v1::TargetVpnGatewaysRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_target_vpn_gateways_v1::TargetVpnGatewaysBackoffPolicyOption>()) {
      return options.get<compute_target_vpn_gateways_v1::TargetVpnGatewaysBackoffPolicyOption>()->clone();
    }
    return options_.get<compute_target_vpn_gateways_v1::TargetVpnGatewaysBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<compute_target_vpn_gateways_v1::TargetVpnGatewaysConnectionIdempotencyPolicy> idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_target_vpn_gateways_v1::TargetVpnGatewaysConnectionIdempotencyPolicyOption>()) {
      return options.get<compute_target_vpn_gateways_v1::TargetVpnGatewaysConnectionIdempotencyPolicyOption>()->clone();
    }
    return options_.get<compute_target_vpn_gateways_v1::TargetVpnGatewaysConnectionIdempotencyPolicyOption>()->
clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_target_vpn_gateways_v1::TargetVpnGatewaysPollingPolicyOption>()) {
      return options.get<compute_target_vpn_gateways_v1::TargetVpnGatewaysPollingPolicyOption>()->clone();
    }
    return options_.get<compute_target_vpn_gateways_v1::TargetVpnGatewaysPollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_target_vpn_gateways_v1_internal::TargetVpnGatewaysRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_vpn_gateways_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_VPN_GATEWAYS_V1_INTERNAL_TARGET_VPN_GATEWAYS_REST_CONNECTION_IMPL_H
