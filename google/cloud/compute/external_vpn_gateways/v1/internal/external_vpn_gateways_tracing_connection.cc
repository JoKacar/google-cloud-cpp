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
// source: google/cloud/compute/external_vpn_gateways/v1/external_vpn_gateways.proto

#include "google/cloud/compute/external_vpn_gateways/v1/internal/external_vpn_gateways_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_external_vpn_gateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ExternalVpnGatewaysTracingConnection::ExternalVpnGatewaysTracingConnection(
    std::shared_ptr<compute_external_vpn_gateways_v1::ExternalVpnGatewaysConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ExternalVpnGatewaysTracingConnection::DeleteExternalVpnGateways(google::cloud::cpp::compute::external_vpn_gateways::v1::DeleteExternalVpnGatewaysRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_external_vpn_gateways_v1::ExternalVpnGatewaysConnection::DeleteExternalVpnGateways");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteExternalVpnGateways(request));
}

StatusOr<google::cloud::cpp::compute::v1::ExternalVpnGateway>
ExternalVpnGatewaysTracingConnection::GetExternalVpnGateways(google::cloud::cpp::compute::external_vpn_gateways::v1::GetExternalVpnGatewaysRequest const& request) {
  auto span = internal::MakeSpan("compute_external_vpn_gateways_v1::ExternalVpnGatewaysConnection::GetExternalVpnGateways");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetExternalVpnGateways(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ExternalVpnGatewaysTracingConnection::InsertExternalVpnGateways(google::cloud::cpp::compute::external_vpn_gateways::v1::InsertExternalVpnGatewaysRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_external_vpn_gateways_v1::ExternalVpnGatewaysConnection::InsertExternalVpnGateways");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->InsertExternalVpnGateways(request));
}

StreamRange<google::cloud::cpp::compute::v1::ExternalVpnGateway>
ExternalVpnGatewaysTracingConnection::ListExternalVpnGateways(google::cloud::cpp::compute::external_vpn_gateways::v1::ListExternalVpnGatewaysRequest request) {
  auto span = internal::MakeSpan("compute_external_vpn_gateways_v1::ExternalVpnGatewaysConnection::ListExternalVpnGateways");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListExternalVpnGateways(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::cpp::compute::v1::ExternalVpnGateway>(
        std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ExternalVpnGatewaysTracingConnection::SetLabels(google::cloud::cpp::compute::external_vpn_gateways::v1::SetLabelsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_external_vpn_gateways_v1::ExternalVpnGatewaysConnection::SetLabels");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetLabels(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ExternalVpnGatewaysTracingConnection::TestIamPermissions(google::cloud::cpp::compute::external_vpn_gateways::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan("compute_external_vpn_gateways_v1::ExternalVpnGatewaysConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_external_vpn_gateways_v1::ExternalVpnGatewaysConnection>
MakeExternalVpnGatewaysTracingConnection(
    std::shared_ptr<compute_external_vpn_gateways_v1::ExternalVpnGatewaysConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ExternalVpnGatewaysTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_external_vpn_gateways_v1_internal
}  // namespace cloud
}  // namespace google
