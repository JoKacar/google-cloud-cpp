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
// source: google/iam/v2/policy.proto

#include "google/cloud/policytroubleshooter/iam/v3/internal/policies_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace policytroubleshooter_iam_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PoliciesTracingConnection::PoliciesTracingConnection(
    std::shared_ptr<policytroubleshooter_iam_v3::PoliciesConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::iam::v2::Policy> PoliciesTracingConnection::ListPolicies(
    google::iam::v2::ListPoliciesRequest request) {
  auto span = internal::MakeSpan(
      "policytroubleshooter_iam_v3::PoliciesConnection::ListPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListPolicies(std::move(request));
  return internal::MakeTracedStreamRange<google::iam::v2::Policy>(
      std::move(span), std::move(sr));
}

StatusOr<google::iam::v2::Policy> PoliciesTracingConnection::GetPolicy(
    google::iam::v2::GetPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "policytroubleshooter_iam_v3::PoliciesConnection::GetPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPolicy(request));
}

future<StatusOr<google::iam::v2::Policy>>
PoliciesTracingConnection::CreatePolicy(
    google::iam::v2::CreatePolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "policytroubleshooter_iam_v3::PoliciesConnection::CreatePolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreatePolicy(request));
}

future<StatusOr<google::iam::v2::Policy>>
PoliciesTracingConnection::UpdatePolicy(
    google::iam::v2::UpdatePolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "policytroubleshooter_iam_v3::PoliciesConnection::UpdatePolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdatePolicy(request));
}

future<StatusOr<google::iam::v2::Policy>>
PoliciesTracingConnection::DeletePolicy(
    google::iam::v2::DeletePolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "policytroubleshooter_iam_v3::PoliciesConnection::DeletePolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeletePolicy(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<policytroubleshooter_iam_v3::PoliciesConnection>
MakePoliciesTracingConnection(
    std::shared_ptr<policytroubleshooter_iam_v3::PoliciesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<PoliciesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace policytroubleshooter_iam_v3_internal
}  // namespace cloud
}  // namespace google
