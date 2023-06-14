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
// source: google/cloud/gaming/v1/game_server_deployments_service.proto

#include "google/cloud/gameservices/v1/internal/game_server_deployments_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gaming/v1/game_server_deployments_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace gameservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GameServerDeploymentsServiceStub::~GameServerDeploymentsServiceStub() = default;

StatusOr<google::cloud::gaming::v1::ListGameServerDeploymentsResponse>
DefaultGameServerDeploymentsServiceStub::ListGameServerDeployments(
    grpc::ClientContext& client_context,
    google::cloud::gaming::v1::ListGameServerDeploymentsRequest const&
        request) {
  google::cloud::gaming::v1::ListGameServerDeploymentsResponse response;
  auto status = grpc_stub_->ListGameServerDeployments(&client_context, request,
                                                      &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gaming::v1::GameServerDeployment>
DefaultGameServerDeploymentsServiceStub::GetGameServerDeployment(
    grpc::ClientContext& client_context,
    google::cloud::gaming::v1::GetGameServerDeploymentRequest const& request) {
  google::cloud::gaming::v1::GameServerDeployment response;
  auto status =
      grpc_stub_->GetGameServerDeployment(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultGameServerDeploymentsServiceStub::AsyncCreateGameServerDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::CreateGameServerDeploymentRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gaming::v1::CreateGameServerDeploymentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gaming::v1::CreateGameServerDeploymentRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateGameServerDeployment(context, request,
                                                           cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultGameServerDeploymentsServiceStub::AsyncDeleteGameServerDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::DeleteGameServerDeploymentRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gaming::v1::DeleteGameServerDeploymentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gaming::v1::DeleteGameServerDeploymentRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteGameServerDeployment(context, request,
                                                           cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultGameServerDeploymentsServiceStub::AsyncUpdateGameServerDeployment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::UpdateGameServerDeploymentRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gaming::v1::UpdateGameServerDeploymentRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gaming::v1::UpdateGameServerDeploymentRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateGameServerDeployment(context, request,
                                                           cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::gaming::v1::GameServerDeploymentRollout>
DefaultGameServerDeploymentsServiceStub::GetGameServerDeploymentRollout(
    grpc::ClientContext& client_context,
    google::cloud::gaming::v1::GetGameServerDeploymentRolloutRequest const&
        request) {
  google::cloud::gaming::v1::GameServerDeploymentRollout response;
  auto status = grpc_stub_->GetGameServerDeploymentRollout(&client_context,
                                                           request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultGameServerDeploymentsServiceStub::AsyncUpdateGameServerDeploymentRollout(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::UpdateGameServerDeploymentRolloutRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gaming::v1::UpdateGameServerDeploymentRolloutRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gaming::v1::
                 UpdateGameServerDeploymentRolloutRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateGameServerDeploymentRollout(context,
                                                                  request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::gaming::v1::PreviewGameServerDeploymentRolloutResponse>
DefaultGameServerDeploymentsServiceStub::PreviewGameServerDeploymentRollout(
    grpc::ClientContext& client_context,
    google::cloud::gaming::v1::PreviewGameServerDeploymentRolloutRequest const&
        request) {
  google::cloud::gaming::v1::PreviewGameServerDeploymentRolloutResponse
      response;
  auto status = grpc_stub_->PreviewGameServerDeploymentRollout(
      &client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gaming::v1::FetchDeploymentStateResponse>
DefaultGameServerDeploymentsServiceStub::FetchDeploymentState(
    grpc::ClientContext& client_context,
    google::cloud::gaming::v1::FetchDeploymentStateRequest const& request) {
  google::cloud::gaming::v1::FetchDeploymentStateResponse response;
  auto status =
      grpc_stub_->FetchDeploymentState(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultGameServerDeploymentsServiceStub::AsyncGetOperation(
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

future<Status> DefaultGameServerDeploymentsServiceStub::AsyncCancelOperation(
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
}  // namespace gameservices_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
