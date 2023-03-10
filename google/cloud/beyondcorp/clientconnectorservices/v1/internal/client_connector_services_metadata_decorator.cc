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
// source:
// google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto

#include "google/cloud/beyondcorp/clientconnectorservices/v1/internal/client_connector_services_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_clientconnectorservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ClientConnectorServicesServiceMetadata::ClientConnectorServicesServiceMetadata(
    std::shared_ptr<ClientConnectorServicesServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
             ListClientConnectorServicesResponse>
ClientConnectorServicesServiceMetadata::ListClientConnectorServices(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::clientconnectorservices::v1::
        ListClientConnectorServicesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListClientConnectorServices(context, request);
}

StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
             ClientConnectorService>
ClientConnectorServicesServiceMetadata::GetClientConnectorService(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::clientconnectorservices::v1::
        GetClientConnectorServiceRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetClientConnectorService(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ClientConnectorServicesServiceMetadata::AsyncCreateClientConnectorService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::clientconnectorservices::v1::
        CreateClientConnectorServiceRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateClientConnectorService(cq, std::move(context),
                                                   request);
}

future<StatusOr<google::longrunning::Operation>>
ClientConnectorServicesServiceMetadata::AsyncUpdateClientConnectorService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::clientconnectorservices::v1::
        UpdateClientConnectorServiceRequest const& request) {
  SetMetadata(*context, "client_connector_service.name=" +
                            request.client_connector_service().name());
  return child_->AsyncUpdateClientConnectorService(cq, std::move(context),
                                                   request);
}

future<StatusOr<google::longrunning::Operation>>
ClientConnectorServicesServiceMetadata::AsyncDeleteClientConnectorService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::clientconnectorservices::v1::
        DeleteClientConnectorServiceRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteClientConnectorService(cq, std::move(context),
                                                   request);
}

future<StatusOr<google::longrunning::Operation>>
ClientConnectorServicesServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ClientConnectorServicesServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void ClientConnectorServicesServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void ClientConnectorServicesServiceMetadata::SetMetadata(
    grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_clientconnectorservices_v1_internal
}  // namespace cloud
}  // namespace google
