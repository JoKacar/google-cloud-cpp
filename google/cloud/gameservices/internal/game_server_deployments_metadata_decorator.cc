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

#include "google/cloud/gameservices/internal/game_server_deployments_metadata_decorator.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gaming/v1/game_server_deployments_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gameservices_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GameServerDeploymentsServiceMetadata::GameServerDeploymentsServiceMetadata(
    std::shared_ptr<GameServerDeploymentsServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::gaming::v1::ListGameServerDeploymentsResponse>
GameServerDeploymentsServiceMetadata::ListGameServerDeployments(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::ListGameServerDeploymentsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListGameServerDeployments(context, request);
}

StatusOr<google::cloud::gaming::v1::GameServerDeployment>
GameServerDeploymentsServiceMetadata::GetGameServerDeployment(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::GetGameServerDeploymentRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetGameServerDeployment(context, request);
}

future<StatusOr<google::longrunning::Operation>>
GameServerDeploymentsServiceMetadata::AsyncCreateGameServerDeployment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::CreateGameServerDeploymentRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateGameServerDeployment(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
GameServerDeploymentsServiceMetadata::AsyncDeleteGameServerDeployment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::DeleteGameServerDeploymentRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteGameServerDeployment(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
GameServerDeploymentsServiceMetadata::AsyncUpdateGameServerDeployment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::UpdateGameServerDeploymentRequest const& request) {
  SetMetadata(*context, "game_server_deployment.name=" + request.game_server_deployment().name());
  return child_->AsyncUpdateGameServerDeployment(cq, std::move(context), request);
}

StatusOr<google::cloud::gaming::v1::GameServerDeploymentRollout>
GameServerDeploymentsServiceMetadata::GetGameServerDeploymentRollout(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::GetGameServerDeploymentRolloutRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetGameServerDeploymentRollout(context, request);
}

future<StatusOr<google::longrunning::Operation>>
GameServerDeploymentsServiceMetadata::AsyncUpdateGameServerDeploymentRollout(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::UpdateGameServerDeploymentRolloutRequest const& request) {
  SetMetadata(*context, "rollout.name=" + request.rollout().name());
  return child_->AsyncUpdateGameServerDeploymentRollout(cq, std::move(context), request);
}

StatusOr<google::cloud::gaming::v1::PreviewGameServerDeploymentRolloutResponse>
GameServerDeploymentsServiceMetadata::PreviewGameServerDeploymentRollout(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::PreviewGameServerDeploymentRolloutRequest const& request) {
  SetMetadata(context, "rollout.name=" + request.rollout().name());
  return child_->PreviewGameServerDeploymentRollout(context, request);
}

StatusOr<google::cloud::gaming::v1::FetchDeploymentStateResponse>
GameServerDeploymentsServiceMetadata::FetchDeploymentState(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::FetchDeploymentStateRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->FetchDeploymentState(context, request);
}

future<StatusOr<google::longrunning::Operation>>
GameServerDeploymentsServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> GameServerDeploymentsServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void GameServerDeploymentsServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  context.AddMetadata("x-goog-api-client", api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_internal
}  // namespace cloud
}  // namespace google
