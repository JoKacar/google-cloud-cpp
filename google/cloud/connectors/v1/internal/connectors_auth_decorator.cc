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

#include "google/cloud/connectors/v1/internal/connectors_auth_decorator.h"
#include <google/cloud/connectors/v1/connectors_service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace connectors_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConnectorsAuth::ConnectorsAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ConnectorsStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::connectors::v1::ListConnectionsResponse>
ConnectorsAuth::ListConnections(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListConnectionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListConnections(context, request);
}

StatusOr<google::cloud::connectors::v1::Connection>
ConnectorsAuth::GetConnection(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetConnectionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetConnection(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsAuth::AsyncCreateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::connectors::v1::CreateConnectionRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateConnection(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsAuth::AsyncUpdateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::connectors::v1::UpdateConnectionRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateConnection(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsAuth::AsyncDeleteConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::connectors::v1::DeleteConnectionRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteConnection(cq, *std::move(context), request);
      });
}

StatusOr<google::cloud::connectors::v1::ListProvidersResponse>
ConnectorsAuth::ListProviders(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListProvidersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListProviders(context, request);
}

StatusOr<google::cloud::connectors::v1::Provider> ConnectorsAuth::GetProvider(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetProviderRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetProvider(context, request);
}

StatusOr<google::cloud::connectors::v1::ListConnectorsResponse>
ConnectorsAuth::ListConnectors(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListConnectorsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListConnectors(context, request);
}

StatusOr<google::cloud::connectors::v1::Connector> ConnectorsAuth::GetConnector(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetConnectorRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetConnector(context, request);
}

StatusOr<google::cloud::connectors::v1::ListConnectorVersionsResponse>
ConnectorsAuth::ListConnectorVersions(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListConnectorVersionsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListConnectorVersions(context, request);
}

StatusOr<google::cloud::connectors::v1::ConnectorVersion>
ConnectorsAuth::GetConnectorVersion(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetConnectorVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetConnectorVersion(context, request);
}

StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>
ConnectorsAuth::GetConnectionSchemaMetadata(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetConnectionSchemaMetadata(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsAuth::AsyncRefreshConnectionSchemaMetadata(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::connectors::v1::RefreshConnectionSchemaMetadataRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRefreshConnectionSchemaMetadata(
            cq, *std::move(context), request);
      });
}

StatusOr<google::cloud::connectors::v1::ListRuntimeEntitySchemasResponse>
ConnectorsAuth::ListRuntimeEntitySchemas(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRuntimeEntitySchemas(context, request);
}

StatusOr<google::cloud::connectors::v1::ListRuntimeActionSchemasResponse>
ConnectorsAuth::ListRuntimeActionSchemas(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListRuntimeActionSchemasRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRuntimeActionSchemas(context, request);
}

StatusOr<google::cloud::connectors::v1::RuntimeConfig>
ConnectorsAuth::GetRuntimeConfig(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetRuntimeConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetRuntimeConfig(context, request);
}

StatusOr<google::cloud::connectors::v1::Settings>
ConnectorsAuth::GetGlobalSettings(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetGlobalSettingsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetGlobalSettings(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> ConnectorsAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace connectors_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
