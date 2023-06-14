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

#include "google/cloud/domains/v1/internal/domains_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/domains/v1/domains.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace domains_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DomainsLogging::DomainsLogging(std::shared_ptr<DomainsStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::domains::v1::SearchDomainsResponse>
DomainsLogging::SearchDomains(
    grpc::ClientContext& context,
    google::cloud::domains::v1::SearchDomainsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::domains::v1::SearchDomainsRequest const& request) {
        return child_->SearchDomains(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::domains::v1::RetrieveRegisterParametersResponse>
DomainsLogging::RetrieveRegisterParameters(
    grpc::ClientContext& context,
    google::cloud::domains::v1::RetrieveRegisterParametersRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::domains::v1::RetrieveRegisterParametersRequest const&
              request) {
        return child_->RetrieveRegisterParameters(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DomainsLogging::AsyncRegisterDomain(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::domains::v1::RegisterDomainRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::domains::v1::RegisterDomainRequest const& request) {
        return child_->AsyncRegisterDomain(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::domains::v1::RetrieveTransferParametersResponse>
DomainsLogging::RetrieveTransferParameters(
    grpc::ClientContext& context,
    google::cloud::domains::v1::RetrieveTransferParametersRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::domains::v1::RetrieveTransferParametersRequest const&
              request) {
        return child_->RetrieveTransferParameters(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DomainsLogging::AsyncTransferDomain(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::domains::v1::TransferDomainRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::domains::v1::TransferDomainRequest const& request) {
        return child_->AsyncTransferDomain(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::domains::v1::ListRegistrationsResponse>
DomainsLogging::ListRegistrations(
    grpc::ClientContext& context,
    google::cloud::domains::v1::ListRegistrationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::domains::v1::ListRegistrationsRequest const& request) {
        return child_->ListRegistrations(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::domains::v1::Registration>
DomainsLogging::GetRegistration(
    grpc::ClientContext& context,
    google::cloud::domains::v1::GetRegistrationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::domains::v1::GetRegistrationRequest const& request) {
        return child_->GetRegistration(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DomainsLogging::AsyncUpdateRegistration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::domains::v1::UpdateRegistrationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::domains::v1::UpdateRegistrationRequest const&
                 request) {
        return child_->AsyncUpdateRegistration(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DomainsLogging::AsyncConfigureManagementSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::domains::v1::ConfigureManagementSettingsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::domains::v1::ConfigureManagementSettingsRequest const&
              request) {
        return child_->AsyncConfigureManagementSettings(cq, std::move(context),
                                                        request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DomainsLogging::AsyncConfigureDnsSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::domains::v1::ConfigureDnsSettingsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::domains::v1::ConfigureDnsSettingsRequest const&
                 request) {
        return child_->AsyncConfigureDnsSettings(cq, std::move(context),
                                                 request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DomainsLogging::AsyncConfigureContactSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::domains::v1::ConfigureContactSettingsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::domains::v1::ConfigureContactSettingsRequest const&
                 request) {
        return child_->AsyncConfigureContactSettings(cq, std::move(context),
                                                     request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DomainsLogging::AsyncExportRegistration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::domains::v1::ExportRegistrationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::domains::v1::ExportRegistrationRequest const&
                 request) {
        return child_->AsyncExportRegistration(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DomainsLogging::AsyncDeleteRegistration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::domains::v1::DeleteRegistrationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::domains::v1::DeleteRegistrationRequest const&
                 request) {
        return child_->AsyncDeleteRegistration(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::domains::v1::AuthorizationCode>
DomainsLogging::RetrieveAuthorizationCode(
    grpc::ClientContext& context,
    google::cloud::domains::v1::RetrieveAuthorizationCodeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::domains::v1::RetrieveAuthorizationCodeRequest const&
                 request) {
        return child_->RetrieveAuthorizationCode(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::domains::v1::AuthorizationCode>
DomainsLogging::ResetAuthorizationCode(
    grpc::ClientContext& context,
    google::cloud::domains::v1::ResetAuthorizationCodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::domains::v1::ResetAuthorizationCodeRequest const&
                 request) {
        return child_->ResetAuthorizationCode(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DomainsLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> DomainsLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace domains_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
