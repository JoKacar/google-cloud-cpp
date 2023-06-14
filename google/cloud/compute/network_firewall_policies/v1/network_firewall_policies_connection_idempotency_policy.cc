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
// source:
// google/cloud/compute/network_firewall_policies/v1/network_firewall_policies.proto

#include "google/cloud/compute/network_firewall_policies/v1/network_firewall_policies_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_network_firewall_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

NetworkFirewallPoliciesConnectionIdempotencyPolicy::
    ~NetworkFirewallPoliciesConnectionIdempotencyPolicy() = default;

std::unique_ptr<NetworkFirewallPoliciesConnectionIdempotencyPolicy>
NetworkFirewallPoliciesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<NetworkFirewallPoliciesConnectionIdempotencyPolicy>(
      *this);
}

Idempotency NetworkFirewallPoliciesConnectionIdempotencyPolicy::AddAssociation(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        AddAssociationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkFirewallPoliciesConnectionIdempotencyPolicy::AddRule(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        AddRuleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkFirewallPoliciesConnectionIdempotencyPolicy::CloneRules(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        CloneRulesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkFirewallPoliciesConnectionIdempotencyPolicy::
    DeleteNetworkFirewallPolicies(
        google::cloud::cpp::compute::network_firewall_policies::v1::
            DeleteNetworkFirewallPoliciesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
NetworkFirewallPoliciesConnectionIdempotencyPolicy::GetNetworkFirewallPolicies(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetNetworkFirewallPoliciesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetworkFirewallPoliciesConnectionIdempotencyPolicy::GetAssociation(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetAssociationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetworkFirewallPoliciesConnectionIdempotencyPolicy::GetIamPolicy(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetworkFirewallPoliciesConnectionIdempotencyPolicy::GetRule(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetRuleRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetworkFirewallPoliciesConnectionIdempotencyPolicy::
    InsertNetworkFirewallPolicies(
        google::cloud::cpp::compute::network_firewall_policies::v1::
            InsertNetworkFirewallPoliciesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
NetworkFirewallPoliciesConnectionIdempotencyPolicy::ListNetworkFirewallPolicies(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        ListNetworkFirewallPoliciesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetworkFirewallPoliciesConnectionIdempotencyPolicy::
    PatchNetworkFirewallPolicies(
        google::cloud::cpp::compute::network_firewall_policies::v1::
            PatchNetworkFirewallPoliciesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkFirewallPoliciesConnectionIdempotencyPolicy::PatchRule(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        PatchRuleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
NetworkFirewallPoliciesConnectionIdempotencyPolicy::RemoveAssociation(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        RemoveAssociationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkFirewallPoliciesConnectionIdempotencyPolicy::RemoveRule(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        RemoveRuleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkFirewallPoliciesConnectionIdempotencyPolicy::SetIamPolicy(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        SetIamPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
NetworkFirewallPoliciesConnectionIdempotencyPolicy::TestIamPermissions(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        TestIamPermissionsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<NetworkFirewallPoliciesConnectionIdempotencyPolicy>
MakeDefaultNetworkFirewallPoliciesConnectionIdempotencyPolicy() {
  return std::make_unique<NetworkFirewallPoliciesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_firewall_policies_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
