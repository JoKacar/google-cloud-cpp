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
// source: google/cloud/compute/networks/v1/networks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_INTERNAL_NETWORKS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_INTERNAL_NETWORKS_REST_CONNECTION_IMPL_H

#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/compute/networks/v1/internal/networks_rest_stub.h"
#include "google/cloud/compute/networks/v1/internal/networks_retry_traits.h"
#include "google/cloud/compute/networks/v1/networks_connection.h"
#include "google/cloud/compute/networks/v1/networks_connection_idempotency_policy.h"
#include "google/cloud/compute/networks/v1/networks_options.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_networks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworksRestConnectionImpl
    : public compute_networks_v1::NetworksConnection {
 public:
  ~NetworksRestConnectionImpl() override = default;

  NetworksRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_networks_v1_internal::NetworksRestStub> stub,
    Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddPeering(google::cloud::cpp::compute::networks::v1::AddPeeringRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNetworks(google::cloud::cpp::compute::networks::v1::DeleteNetworksRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Network>
  GetNetworks(google::cloud::cpp::compute::networks::v1::GetNetworksRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworksGetEffectiveFirewallsResponse>
  GetEffectiveFirewalls(google::cloud::cpp::compute::networks::v1::GetEffectiveFirewallsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNetworks(google::cloud::cpp::compute::networks::v1::InsertNetworksRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::Network>
  ListNetworks(google::cloud::cpp::compute::networks::v1::ListNetworksRequest request) override;

  StreamRange<google::cloud::cpp::compute::v1::ExchangedPeeringRoute>
  ListPeeringRoutes(google::cloud::cpp::compute::networks::v1::ListPeeringRoutesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchNetworks(google::cloud::cpp::compute::networks::v1::PatchNetworksRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemovePeering(google::cloud::cpp::compute::networks::v1::RemovePeeringRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SwitchToCustomMode(google::cloud::cpp::compute::networks::v1::SwitchToCustomModeRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdatePeering(google::cloud::cpp::compute::networks::v1::UpdatePeeringRequest const& request) override;

 private:
  std::unique_ptr<compute_networks_v1::NetworksRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_networks_v1::NetworksRetryPolicyOption>()) {
      return options.get<compute_networks_v1::NetworksRetryPolicyOption>()->clone();
    }
    return options_.get<compute_networks_v1::NetworksRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_networks_v1::NetworksBackoffPolicyOption>()) {
      return options.get<compute_networks_v1::NetworksBackoffPolicyOption>()->clone();
    }
    return options_.get<compute_networks_v1::NetworksBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<compute_networks_v1::NetworksConnectionIdempotencyPolicy> idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_networks_v1::NetworksConnectionIdempotencyPolicyOption>()) {
      return options.get<compute_networks_v1::NetworksConnectionIdempotencyPolicyOption>()->clone();
    }
    return options_.get<compute_networks_v1::NetworksConnectionIdempotencyPolicyOption>()->
clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_networks_v1::NetworksPollingPolicyOption>()) {
      return options.get<compute_networks_v1::NetworksPollingPolicyOption>()->clone();
    }
    return options_.get<compute_networks_v1::NetworksPollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_networks_v1_internal::NetworksRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_networks_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_INTERNAL_NETWORKS_REST_CONNECTION_IMPL_H
