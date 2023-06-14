// Copyright 2022 Google LLC
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
// source: google/monitoring/v3/alert_service.proto

#include "google/cloud/monitoring/v3/internal/alert_policy_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AlertPolicyServiceTracingConnection::AlertPolicyServiceTracingConnection(
    std::shared_ptr<monitoring_v3::AlertPolicyServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::monitoring::v3::AlertPolicy>
AlertPolicyServiceTracingConnection::ListAlertPolicies(
    google::monitoring::v3::ListAlertPoliciesRequest request) {
  auto span = internal::MakeSpan(
      "monitoring_v3::AlertPolicyServiceConnection::ListAlertPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListAlertPolicies(std::move(request));
  return internal::MakeTracedStreamRange<google::monitoring::v3::AlertPolicy>(
      std::move(span), std::move(sr));
}

StatusOr<google::monitoring::v3::AlertPolicy>
AlertPolicyServiceTracingConnection::GetAlertPolicy(
    google::monitoring::v3::GetAlertPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring_v3::AlertPolicyServiceConnection::GetAlertPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAlertPolicy(request));
}

StatusOr<google::monitoring::v3::AlertPolicy>
AlertPolicyServiceTracingConnection::CreateAlertPolicy(
    google::monitoring::v3::CreateAlertPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring_v3::AlertPolicyServiceConnection::CreateAlertPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateAlertPolicy(request));
}

Status AlertPolicyServiceTracingConnection::DeleteAlertPolicy(
    google::monitoring::v3::DeleteAlertPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring_v3::AlertPolicyServiceConnection::DeleteAlertPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteAlertPolicy(request));
}

StatusOr<google::monitoring::v3::AlertPolicy>
AlertPolicyServiceTracingConnection::UpdateAlertPolicy(
    google::monitoring::v3::UpdateAlertPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring_v3::AlertPolicyServiceConnection::UpdateAlertPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateAlertPolicy(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<monitoring_v3::AlertPolicyServiceConnection>
MakeAlertPolicyServiceTracingConnection(
    std::shared_ptr<monitoring_v3::AlertPolicyServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<AlertPolicyServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
