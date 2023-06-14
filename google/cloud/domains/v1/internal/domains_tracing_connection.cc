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
// source: google/cloud/domains/v1/domains.proto

#include "google/cloud/domains/v1/internal/domains_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace domains_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DomainsTracingConnection::DomainsTracingConnection(
    std::shared_ptr<domains_v1::DomainsConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::domains::v1::SearchDomainsResponse>
DomainsTracingConnection::SearchDomains(
    google::cloud::domains::v1::SearchDomainsRequest const& request) {
  auto span =
      internal::MakeSpan("domains_v1::DomainsConnection::SearchDomains");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SearchDomains(request));
}

StatusOr<google::cloud::domains::v1::RetrieveRegisterParametersResponse>
DomainsTracingConnection::RetrieveRegisterParameters(
    google::cloud::domains::v1::RetrieveRegisterParametersRequest const&
        request) {
  auto span = internal::MakeSpan(
      "domains_v1::DomainsConnection::RetrieveRegisterParameters");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RetrieveRegisterParameters(request));
}

future<StatusOr<google::cloud::domains::v1::Registration>>
DomainsTracingConnection::RegisterDomain(
    google::cloud::domains::v1::RegisterDomainRequest const& request) {
  auto span =
      internal::MakeSpan("domains_v1::DomainsConnection::RegisterDomain");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RegisterDomain(request));
}

StatusOr<google::cloud::domains::v1::RetrieveTransferParametersResponse>
DomainsTracingConnection::RetrieveTransferParameters(
    google::cloud::domains::v1::RetrieveTransferParametersRequest const&
        request) {
  auto span = internal::MakeSpan(
      "domains_v1::DomainsConnection::RetrieveTransferParameters");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RetrieveTransferParameters(request));
}

future<StatusOr<google::cloud::domains::v1::Registration>>
DomainsTracingConnection::TransferDomain(
    google::cloud::domains::v1::TransferDomainRequest const& request) {
  auto span =
      internal::MakeSpan("domains_v1::DomainsConnection::TransferDomain");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->TransferDomain(request));
}

StreamRange<google::cloud::domains::v1::Registration>
DomainsTracingConnection::ListRegistrations(
    google::cloud::domains::v1::ListRegistrationsRequest request) {
  auto span =
      internal::MakeSpan("domains_v1::DomainsConnection::ListRegistrations");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListRegistrations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::domains::v1::Registration>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::domains::v1::Registration>
DomainsTracingConnection::GetRegistration(
    google::cloud::domains::v1::GetRegistrationRequest const& request) {
  auto span =
      internal::MakeSpan("domains_v1::DomainsConnection::GetRegistration");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRegistration(request));
}

future<StatusOr<google::cloud::domains::v1::Registration>>
DomainsTracingConnection::UpdateRegistration(
    google::cloud::domains::v1::UpdateRegistrationRequest const& request) {
  auto span =
      internal::MakeSpan("domains_v1::DomainsConnection::UpdateRegistration");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateRegistration(request));
}

future<StatusOr<google::cloud::domains::v1::Registration>>
DomainsTracingConnection::ConfigureManagementSettings(
    google::cloud::domains::v1::ConfigureManagementSettingsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "domains_v1::DomainsConnection::ConfigureManagementSettings");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ConfigureManagementSettings(request));
}

future<StatusOr<google::cloud::domains::v1::Registration>>
DomainsTracingConnection::ConfigureDnsSettings(
    google::cloud::domains::v1::ConfigureDnsSettingsRequest const& request) {
  auto span =
      internal::MakeSpan("domains_v1::DomainsConnection::ConfigureDnsSettings");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ConfigureDnsSettings(request));
}

future<StatusOr<google::cloud::domains::v1::Registration>>
DomainsTracingConnection::ConfigureContactSettings(
    google::cloud::domains::v1::ConfigureContactSettingsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "domains_v1::DomainsConnection::ConfigureContactSettings");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ConfigureContactSettings(request));
}

future<StatusOr<google::cloud::domains::v1::Registration>>
DomainsTracingConnection::ExportRegistration(
    google::cloud::domains::v1::ExportRegistrationRequest const& request) {
  auto span =
      internal::MakeSpan("domains_v1::DomainsConnection::ExportRegistration");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ExportRegistration(request));
}

future<StatusOr<google::cloud::domains::v1::OperationMetadata>>
DomainsTracingConnection::DeleteRegistration(
    google::cloud::domains::v1::DeleteRegistrationRequest const& request) {
  auto span =
      internal::MakeSpan("domains_v1::DomainsConnection::DeleteRegistration");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteRegistration(request));
}

StatusOr<google::cloud::domains::v1::AuthorizationCode>
DomainsTracingConnection::RetrieveAuthorizationCode(
    google::cloud::domains::v1::RetrieveAuthorizationCodeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "domains_v1::DomainsConnection::RetrieveAuthorizationCode");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RetrieveAuthorizationCode(request));
}

StatusOr<google::cloud::domains::v1::AuthorizationCode>
DomainsTracingConnection::ResetAuthorizationCode(
    google::cloud::domains::v1::ResetAuthorizationCodeRequest const& request) {
  auto span = internal::MakeSpan(
      "domains_v1::DomainsConnection::ResetAuthorizationCode");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ResetAuthorizationCode(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<domains_v1::DomainsConnection> MakeDomainsTracingConnection(
    std::shared_ptr<domains_v1::DomainsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<DomainsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace domains_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
