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

#include "google/cloud/compute/network_firewall_policies/v1/internal/network_firewall_policies_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_firewall_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NetworkFirewallPoliciesTracingConnection::
    NetworkFirewallPoliciesTracingConnection(
        std::shared_ptr<compute_network_firewall_policies_v1::
                            NetworkFirewallPoliciesConnection>
            child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesTracingConnection::AddAssociation(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        AddAssociationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":AddAssociation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->AddAssociation(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesTracingConnection::AddRule(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        AddRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":AddRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->AddRule(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesTracingConnection::CloneRules(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        CloneRulesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":CloneRules");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CloneRules(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesTracingConnection::DeleteNetworkFirewallPolicies(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        DeleteNetworkFirewallPoliciesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":DeleteNetworkFirewallPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteNetworkFirewallPolicies(request));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
NetworkFirewallPoliciesTracingConnection::GetNetworkFirewallPolicies(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetNetworkFirewallPoliciesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":GetNetworkFirewallPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNetworkFirewallPolicies(request));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
NetworkFirewallPoliciesTracingConnection::GetAssociation(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetAssociationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":GetAssociation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAssociation(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NetworkFirewallPoliciesTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
NetworkFirewallPoliciesTracingConnection::GetRule(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":GetRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRule(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesTracingConnection::InsertNetworkFirewallPolicies(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        InsertNetworkFirewallPoliciesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":InsertNetworkFirewallPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertNetworkFirewallPolicies(request));
}

StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>
NetworkFirewallPoliciesTracingConnection::ListNetworkFirewallPolicies(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        ListNetworkFirewallPoliciesRequest request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":ListNetworkFirewallPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListNetworkFirewallPolicies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::FirewallPolicy>(std::move(span),
                                                       std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesTracingConnection::PatchNetworkFirewallPolicies(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        PatchNetworkFirewallPoliciesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":PatchNetworkFirewallPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchNetworkFirewallPolicies(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesTracingConnection::PatchRule(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        PatchRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":PatchRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->PatchRule(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesTracingConnection::RemoveAssociation(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        RemoveAssociationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":RemoveAssociation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RemoveAssociation(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesTracingConnection::RemoveRule(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        RemoveRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":RemoveRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RemoveRule(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NetworkFirewallPoliciesTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NetworkFirewallPoliciesTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection:"
      ":TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<
    compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection>
MakeNetworkFirewallPoliciesTracingConnection(
    std::shared_ptr<
        compute_network_firewall_policies_v1::NetworkFirewallPoliciesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<NetworkFirewallPoliciesTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_firewall_policies_v1_internal
}  // namespace cloud
}  // namespace google
