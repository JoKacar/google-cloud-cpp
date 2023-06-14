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
// source: google/cloud/run/v2/service.proto

#include "google/cloud/run/v2/internal/services_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace run_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ServicesTracingConnection::ServicesTracingConnection(
    std::shared_ptr<run_v2::ServicesConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::run::v2::Service>>
ServicesTracingConnection::CreateService(
    google::cloud::run::v2::CreateServiceRequest const& request) {
  auto span = internal::MakeSpan("run_v2::ServicesConnection::CreateService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateService(request));
}

StatusOr<google::cloud::run::v2::Service> ServicesTracingConnection::GetService(
    google::cloud::run::v2::GetServiceRequest const& request) {
  auto span = internal::MakeSpan("run_v2::ServicesConnection::GetService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetService(request));
}

StreamRange<google::cloud::run::v2::Service>
ServicesTracingConnection::ListServices(
    google::cloud::run::v2::ListServicesRequest request) {
  auto span = internal::MakeSpan("run_v2::ServicesConnection::ListServices");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListServices(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::run::v2::Service>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::run::v2::Service>>
ServicesTracingConnection::UpdateService(
    google::cloud::run::v2::UpdateServiceRequest const& request) {
  auto span = internal::MakeSpan("run_v2::ServicesConnection::UpdateService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateService(request));
}

future<StatusOr<google::cloud::run::v2::Service>>
ServicesTracingConnection::DeleteService(
    google::cloud::run::v2::DeleteServiceRequest const& request) {
  auto span = internal::MakeSpan("run_v2::ServicesConnection::DeleteService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteService(request));
}

StatusOr<google::iam::v1::Policy> ServicesTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan("run_v2::ServicesConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy> ServicesTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan("run_v2::ServicesConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ServicesTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span =
      internal::MakeSpan("run_v2::ServicesConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<run_v2::ServicesConnection> MakeServicesTracingConnection(
    std::shared_ptr<run_v2::ServicesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ServicesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
