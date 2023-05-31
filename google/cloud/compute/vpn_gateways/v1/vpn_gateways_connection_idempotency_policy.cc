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

#include "google/cloud/compute/vpn_gateways/v1/vpn_gateways_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_vpn_gateways_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

VpnGatewaysConnectionIdempotencyPolicy::~VpnGatewaysConnectionIdempotencyPolicy() = default;

std::unique_ptr<VpnGatewaysConnectionIdempotencyPolicy>
VpnGatewaysConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<VpnGatewaysConnectionIdempotencyPolicy>(*this);
}

Idempotency VpnGatewaysConnectionIdempotencyPolicy::AggregatedListVpnGateways(google::cloud::cpp::compute::vpn_gateways::v1::AggregatedListVpnGatewaysRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency VpnGatewaysConnectionIdempotencyPolicy::DeleteVpnGateways(google::cloud::cpp::compute::vpn_gateways::v1::DeleteVpnGatewaysRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VpnGatewaysConnectionIdempotencyPolicy::GetVpnGateways(google::cloud::cpp::compute::vpn_gateways::v1::GetVpnGatewaysRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency VpnGatewaysConnectionIdempotencyPolicy::GetStatus(google::cloud::cpp::compute::vpn_gateways::v1::GetStatusRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency VpnGatewaysConnectionIdempotencyPolicy::InsertVpnGateways(google::cloud::cpp::compute::vpn_gateways::v1::InsertVpnGatewaysRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VpnGatewaysConnectionIdempotencyPolicy::ListVpnGateways(google::cloud::cpp::compute::vpn_gateways::v1::ListVpnGatewaysRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency VpnGatewaysConnectionIdempotencyPolicy::SetLabels(google::cloud::cpp::compute::vpn_gateways::v1::SetLabelsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VpnGatewaysConnectionIdempotencyPolicy::TestIamPermissions(google::cloud::cpp::compute::vpn_gateways::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<VpnGatewaysConnectionIdempotencyPolicy>
    MakeDefaultVpnGatewaysConnectionIdempotencyPolicy() {
  return std::make_unique<VpnGatewaysConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_vpn_gateways_v1
}  // namespace cloud
}  // namespace google
