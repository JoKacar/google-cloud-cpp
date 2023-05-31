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
// source: google/cloud/compute/security_policies/v1/security_policies.proto

#include "google/cloud/compute/security_policies/v1/internal/security_policies_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_security_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SecurityPoliciesTracingConnection::SecurityPoliciesTracingConnection(
    std::shared_ptr<compute_security_policies_v1::SecurityPoliciesConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesTracingConnection::AddRule(google::cloud::cpp::compute::security_policies::v1::AddRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_security_policies_v1::SecurityPoliciesConnection::AddRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->AddRule(request));
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPoliciesAggregatedList>
SecurityPoliciesTracingConnection::AggregatedListSecurityPolicies(google::cloud::cpp::compute::security_policies::v1::AggregatedListSecurityPoliciesRequest const& request) {
  auto span = internal::MakeSpan("compute_security_policies_v1::SecurityPoliciesConnection::AggregatedListSecurityPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AggregatedListSecurityPolicies(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesTracingConnection::DeleteSecurityPolicies(google::cloud::cpp::compute::security_policies::v1::DeleteSecurityPoliciesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_security_policies_v1::SecurityPoliciesConnection::DeleteSecurityPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteSecurityPolicies(request));
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy>
SecurityPoliciesTracingConnection::GetSecurityPolicies(google::cloud::cpp::compute::security_policies::v1::GetSecurityPoliciesRequest const& request) {
  auto span = internal::MakeSpan("compute_security_policies_v1::SecurityPoliciesConnection::GetSecurityPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSecurityPolicies(request));
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyRule>
SecurityPoliciesTracingConnection::GetRule(google::cloud::cpp::compute::security_policies::v1::GetRuleRequest const& request) {
  auto span = internal::MakeSpan("compute_security_policies_v1::SecurityPoliciesConnection::GetRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRule(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesTracingConnection::InsertSecurityPolicies(google::cloud::cpp::compute::security_policies::v1::InsertSecurityPoliciesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_security_policies_v1::SecurityPoliciesConnection::InsertSecurityPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->InsertSecurityPolicies(request));
}

StreamRange<google::cloud::cpp::compute::v1::SecurityPolicy>
SecurityPoliciesTracingConnection::ListSecurityPolicies(google::cloud::cpp::compute::security_policies::v1::ListSecurityPoliciesRequest request) {
  auto span = internal::MakeSpan("compute_security_policies_v1::SecurityPoliciesConnection::ListSecurityPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListSecurityPolicies(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::cpp::compute::v1::SecurityPolicy>(
        std::move(span), std::move(sr));
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPoliciesListPreconfiguredExpressionSetsResponse>
SecurityPoliciesTracingConnection::ListPreconfiguredExpressionSets(google::cloud::cpp::compute::security_policies::v1::ListPreconfiguredExpressionSetsRequest const& request) {
  auto span = internal::MakeSpan("compute_security_policies_v1::SecurityPoliciesConnection::ListPreconfiguredExpressionSets");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ListPreconfiguredExpressionSets(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesTracingConnection::PatchSecurityPolicies(google::cloud::cpp::compute::security_policies::v1::PatchSecurityPoliciesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_security_policies_v1::SecurityPoliciesConnection::PatchSecurityPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->PatchSecurityPolicies(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesTracingConnection::PatchRule(google::cloud::cpp::compute::security_policies::v1::PatchRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_security_policies_v1::SecurityPoliciesConnection::PatchRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->PatchRule(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesTracingConnection::RemoveRule(google::cloud::cpp::compute::security_policies::v1::RemoveRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_security_policies_v1::SecurityPoliciesConnection::RemoveRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RemoveRule(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesTracingConnection::SetLabels(google::cloud::cpp::compute::security_policies::v1::SetLabelsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_security_policies_v1::SecurityPoliciesConnection::SetLabels");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetLabels(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_security_policies_v1::SecurityPoliciesConnection>
MakeSecurityPoliciesTracingConnection(
    std::shared_ptr<compute_security_policies_v1::SecurityPoliciesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<SecurityPoliciesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_security_policies_v1_internal
}  // namespace cloud
}  // namespace google
