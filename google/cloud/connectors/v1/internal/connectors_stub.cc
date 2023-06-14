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
// source: google/cloud/connectors/v1/connectors_service.proto

#include "google/cloud/connectors/v1/internal/connectors_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/connectors/v1/connectors_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace connectors_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConnectorsStub::~ConnectorsStub() = default;

StatusOr<google::cloud::connectors::v1::ListConnectionsResponse>
DefaultConnectorsStub::ListConnections(
    grpc::ClientContext& client_context,
    google::cloud::connectors::v1::ListConnectionsRequest const& request) {
  google::cloud::connectors::v1::ListConnectionsResponse response;
  auto status =
      grpc_stub_->ListConnections(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::connectors::v1::Connection>
DefaultConnectorsStub::GetConnection(
    grpc::ClientContext& client_context,
    google::cloud::connectors::v1::GetConnectionRequest const& request) {
  google::cloud::connectors::v1::Connection response;
  auto status = grpc_stub_->GetConnection(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConnectorsStub::AsyncCreateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::connectors::v1::CreateConnectionRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::connectors::v1::CreateConnectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::connectors::v1::CreateConnectionRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateConnection(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultConnectorsStub::AsyncUpdateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::connectors::v1::UpdateConnectionRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::connectors::v1::UpdateConnectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::connectors::v1::UpdateConnectionRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateConnection(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultConnectorsStub::AsyncDeleteConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::connectors::v1::DeleteConnectionRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::connectors::v1::DeleteConnectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::connectors::v1::DeleteConnectionRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteConnection(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::connectors::v1::ListProvidersResponse>
DefaultConnectorsStub::ListProviders(
    grpc::ClientContext& client_context,
    google::cloud::connectors::v1::ListProvidersRequest const& request) {
  google::cloud::connectors::v1::ListProvidersResponse response;
  auto status = grpc_stub_->ListProviders(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::connectors::v1::Provider>
DefaultConnectorsStub::GetProvider(
    grpc::ClientContext& client_context,
    google::cloud::connectors::v1::GetProviderRequest const& request) {
  google::cloud::connectors::v1::Provider response;
  auto status = grpc_stub_->GetProvider(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::connectors::v1::ListConnectorsResponse>
DefaultConnectorsStub::ListConnectors(
    grpc::ClientContext& client_context,
    google::cloud::connectors::v1::ListConnectorsRequest const& request) {
  google::cloud::connectors::v1::ListConnectorsResponse response;
  auto status = grpc_stub_->ListConnectors(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::connectors::v1::Connector>
DefaultConnectorsStub::GetConnector(
    grpc::ClientContext& client_context,
    google::cloud::connectors::v1::GetConnectorRequest const& request) {
  google::cloud::connectors::v1::Connector response;
  auto status = grpc_stub_->GetConnector(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::connectors::v1::ListConnectorVersionsResponse>
DefaultConnectorsStub::ListConnectorVersions(
    grpc::ClientContext& client_context,
    google::cloud::connectors::v1::ListConnectorVersionsRequest const&
        request) {
  google::cloud::connectors::v1::ListConnectorVersionsResponse response;
  auto status =
      grpc_stub_->ListConnectorVersions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::connectors::v1::ConnectorVersion>
DefaultConnectorsStub::GetConnectorVersion(
    grpc::ClientContext& client_context,
    google::cloud::connectors::v1::GetConnectorVersionRequest const& request) {
  google::cloud::connectors::v1::ConnectorVersion response;
  auto status =
      grpc_stub_->GetConnectorVersion(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>
DefaultConnectorsStub::GetConnectionSchemaMetadata(
    grpc::ClientContext& client_context,
    google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&
        request) {
  google::cloud::connectors::v1::ConnectionSchemaMetadata response;
  auto status = grpc_stub_->GetConnectionSchemaMetadata(&client_context,
                                                        request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConnectorsStub::AsyncRefreshConnectionSchemaMetadata(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::connectors::v1::RefreshConnectionSchemaMetadataRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::connectors::v1::RefreshConnectionSchemaMetadataRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::connectors::v1::
                 RefreshConnectionSchemaMetadataRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRefreshConnectionSchemaMetadata(context,
                                                                request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::connectors::v1::ListRuntimeEntitySchemasResponse>
DefaultConnectorsStub::ListRuntimeEntitySchemas(
    grpc::ClientContext& client_context,
    google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest const&
        request) {
  google::cloud::connectors::v1::ListRuntimeEntitySchemasResponse response;
  auto status =
      grpc_stub_->ListRuntimeEntitySchemas(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::connectors::v1::ListRuntimeActionSchemasResponse>
DefaultConnectorsStub::ListRuntimeActionSchemas(
    grpc::ClientContext& client_context,
    google::cloud::connectors::v1::ListRuntimeActionSchemasRequest const&
        request) {
  google::cloud::connectors::v1::ListRuntimeActionSchemasResponse response;
  auto status =
      grpc_stub_->ListRuntimeActionSchemas(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::connectors::v1::RuntimeConfig>
DefaultConnectorsStub::GetRuntimeConfig(
    grpc::ClientContext& client_context,
    google::cloud::connectors::v1::GetRuntimeConfigRequest const& request) {
  google::cloud::connectors::v1::RuntimeConfig response;
  auto status =
      grpc_stub_->GetRuntimeConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::connectors::v1::Settings>
DefaultConnectorsStub::GetGlobalSettings(
    grpc::ClientContext& client_context,
    google::cloud::connectors::v1::GetGlobalSettingsRequest const& request) {
  google::cloud::connectors::v1::Settings response;
  auto status =
      grpc_stub_->GetGlobalSettings(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultConnectorsStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultConnectorsStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace connectors_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
