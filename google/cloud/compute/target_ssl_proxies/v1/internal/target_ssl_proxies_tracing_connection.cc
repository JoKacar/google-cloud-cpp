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
// source: google/cloud/compute/target_ssl_proxies/v1/target_ssl_proxies.proto

#include "google/cloud/compute/target_ssl_proxies/v1/internal/target_ssl_proxies_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_target_ssl_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TargetSslProxiesTracingConnection::TargetSslProxiesTracingConnection(
    std::shared_ptr<compute_target_ssl_proxies_v1::TargetSslProxiesConnection>
        child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetSslProxiesTracingConnection::DeleteTargetSslProxies(
    google::cloud::cpp::compute::target_ssl_proxies::v1::
        DeleteTargetSslProxiesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_ssl_proxies_v1::TargetSslProxiesConnection::"
      "DeleteTargetSslProxies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteTargetSslProxies(request));
}

StatusOr<google::cloud::cpp::compute::v1::TargetSslProxy>
TargetSslProxiesTracingConnection::GetTargetSslProxies(
    google::cloud::cpp::compute::target_ssl_proxies::v1::
        GetTargetSslProxiesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_ssl_proxies_v1::TargetSslProxiesConnection::"
      "GetTargetSslProxies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTargetSslProxies(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetSslProxiesTracingConnection::InsertTargetSslProxies(
    google::cloud::cpp::compute::target_ssl_proxies::v1::
        InsertTargetSslProxiesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_ssl_proxies_v1::TargetSslProxiesConnection::"
      "InsertTargetSslProxies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertTargetSslProxies(request));
}

StreamRange<google::cloud::cpp::compute::v1::TargetSslProxy>
TargetSslProxiesTracingConnection::ListTargetSslProxies(
    google::cloud::cpp::compute::target_ssl_proxies::v1::
        ListTargetSslProxiesRequest request) {
  auto span = internal::MakeSpan(
      "compute_target_ssl_proxies_v1::TargetSslProxiesConnection::"
      "ListTargetSslProxies");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListTargetSslProxies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::TargetSslProxy>(std::move(span),
                                                       std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetSslProxiesTracingConnection::SetBackendService(
    google::cloud::cpp::compute::target_ssl_proxies::v1::
        SetBackendServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_ssl_proxies_v1::TargetSslProxiesConnection::"
      "SetBackendService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetBackendService(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetSslProxiesTracingConnection::SetCertificateMap(
    google::cloud::cpp::compute::target_ssl_proxies::v1::
        SetCertificateMapRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_ssl_proxies_v1::TargetSslProxiesConnection::"
      "SetCertificateMap");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetCertificateMap(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetSslProxiesTracingConnection::SetProxyHeader(
    google::cloud::cpp::compute::target_ssl_proxies::v1::
        SetProxyHeaderRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_ssl_proxies_v1::TargetSslProxiesConnection::"
      "SetProxyHeader");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetProxyHeader(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetSslProxiesTracingConnection::SetSslCertificates(
    google::cloud::cpp::compute::target_ssl_proxies::v1::
        SetSslCertificatesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_ssl_proxies_v1::TargetSslProxiesConnection::"
      "SetSslCertificates");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetSslCertificates(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetSslProxiesTracingConnection::SetSslPolicy(
    google::cloud::cpp::compute::target_ssl_proxies::v1::
        SetSslPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_ssl_proxies_v1::TargetSslProxiesConnection::"
      "SetSslPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetSslPolicy(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_target_ssl_proxies_v1::TargetSslProxiesConnection>
MakeTargetSslProxiesTracingConnection(
    std::shared_ptr<compute_target_ssl_proxies_v1::TargetSslProxiesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<TargetSslProxiesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_ssl_proxies_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
