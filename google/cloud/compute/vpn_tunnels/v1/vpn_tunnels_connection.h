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
// source: google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_TUNNELS_V1_VPN_TUNNELS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_TUNNELS_V1_VPN_TUNNELS_CONNECTION_H

#include "google/cloud/compute/vpn_tunnels/v1/internal/vpn_tunnels_retry_traits.h"
#include "google/cloud/compute/vpn_tunnels/v1/vpn_tunnels_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_vpn_tunnels_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using VpnTunnelsRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    compute_vpn_tunnels_v1_internal::VpnTunnelsRetryTraits>;

using VpnTunnelsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_vpn_tunnels_v1_internal::VpnTunnelsRetryTraits>;

using VpnTunnelsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_vpn_tunnels_v1_internal::VpnTunnelsRetryTraits>;

/**
 * The `VpnTunnelsConnection` object for `VpnTunnelsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `VpnTunnelsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `VpnTunnelsClient`.
 *
 * To create a concrete instance, see `MakeVpnTunnelsConnection()`.
 *
 * For mocking, see `compute_vpn_tunnels_v1_mocks::MockVpnTunnelsConnection`.
 */
class VpnTunnelsConnection {
 public:
  virtual ~VpnTunnelsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::cpp::compute::v1::VpnTunnelAggregatedList>
  AggregatedListVpnTunnels(google::cloud::cpp::compute::vpn_tunnels::v1::
                               AggregatedListVpnTunnelsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteVpnTunnels(google::cloud::cpp::compute::vpn_tunnels::v1::
                       DeleteVpnTunnelsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::VpnTunnel> GetVpnTunnels(
      google::cloud::cpp::compute::vpn_tunnels::v1::GetVpnTunnelsRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertVpnTunnels(google::cloud::cpp::compute::vpn_tunnels::v1::
                       InsertVpnTunnelsRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::VpnTunnel>
  ListVpnTunnels(
      google::cloud::cpp::compute::vpn_tunnels::v1::ListVpnTunnelsRequest
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetLabels(
      google::cloud::cpp::compute::vpn_tunnels::v1::SetLabelsRequest const&
          request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_vpn_tunnels_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_TUNNELS_V1_VPN_TUNNELS_CONNECTION_H
