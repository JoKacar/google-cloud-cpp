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

#include "google/cloud/domains/v1/domains_connection.h"
#include "google/cloud/domains/v1/domains_options.h"
#include "google/cloud/domains/v1/internal/domains_connection_impl.h"
#include "google/cloud/domains/v1/internal/domains_option_defaults.h"
#include "google/cloud/domains/v1/internal/domains_stub_factory.h"
#include "google/cloud/domains/v1/internal/domains_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace domains_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DomainsConnection::~DomainsConnection() = default;

StatusOr<google::cloud::domains::v1::SearchDomainsResponse>
DomainsConnection::SearchDomains(
    google::cloud::domains::v1::SearchDomainsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::domains::v1::RetrieveRegisterParametersResponse>
DomainsConnection::RetrieveRegisterParameters(
    google::cloud::domains::v1::RetrieveRegisterParametersRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::domains::v1::Registration>>
DomainsConnection::RegisterDomain(
    google::cloud::domains::v1::RegisterDomainRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::domains::v1::Registration>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::domains::v1::RetrieveTransferParametersResponse>
DomainsConnection::RetrieveTransferParameters(
    google::cloud::domains::v1::RetrieveTransferParametersRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::domains::v1::Registration>>
DomainsConnection::TransferDomain(
    google::cloud::domains::v1::TransferDomainRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::domains::v1::Registration>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::domains::v1::Registration>
DomainsConnection::ListRegistrations(
    google::cloud::domains::v1::
        ListRegistrationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::domains::v1::Registration>>();
}

StatusOr<google::cloud::domains::v1::Registration>
DomainsConnection::GetRegistration(
    google::cloud::domains::v1::GetRegistrationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::domains::v1::Registration>>
DomainsConnection::UpdateRegistration(
    google::cloud::domains::v1::UpdateRegistrationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::domains::v1::Registration>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::domains::v1::Registration>>
DomainsConnection::ConfigureManagementSettings(
    google::cloud::domains::v1::ConfigureManagementSettingsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::domains::v1::Registration>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::domains::v1::Registration>>
DomainsConnection::ConfigureDnsSettings(
    google::cloud::domains::v1::ConfigureDnsSettingsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::domains::v1::Registration>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::domains::v1::Registration>>
DomainsConnection::ConfigureContactSettings(
    google::cloud::domains::v1::ConfigureContactSettingsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::domains::v1::Registration>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::domains::v1::Registration>>
DomainsConnection::ExportRegistration(
    google::cloud::domains::v1::ExportRegistrationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::domains::v1::Registration>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::domains::v1::OperationMetadata>>
DomainsConnection::DeleteRegistration(
    google::cloud::domains::v1::DeleteRegistrationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::domains::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::domains::v1::AuthorizationCode>
DomainsConnection::RetrieveAuthorizationCode(
    google::cloud::domains::v1::RetrieveAuthorizationCodeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::domains::v1::AuthorizationCode>
DomainsConnection::ResetAuthorizationCode(
    google::cloud::domains::v1::ResetAuthorizationCodeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<DomainsConnection> MakeDomainsConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 DomainsPolicyOptionList>(options, __func__);
  options = domains_v1_internal::DomainsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      domains_v1_internal::CreateDefaultDomainsStub(background->cq(), options);
  return domains_v1_internal::MakeDomainsTracingConnection(
      std::make_shared<domains_v1_internal::DomainsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace domains_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
