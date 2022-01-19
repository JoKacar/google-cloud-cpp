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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_INTERNAL_GAME_SERVER_DEPLOYMENTS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_INTERNAL_GAME_SERVER_DEPLOYMENTS_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/gaming/v1/game_server_deployments_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gameservices_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GameServerDeploymentsServiceStub {
 public:
  virtual ~GameServerDeploymentsServiceStub() = 0;

  virtual StatusOr<google::cloud::gaming::v1::ListGameServerDeploymentsResponse> ListGameServerDeployments(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::ListGameServerDeploymentsRequest const& request) = 0;

  virtual StatusOr<google::cloud::gaming::v1::GameServerDeployment> GetGameServerDeployment(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::GetGameServerDeploymentRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateGameServerDeployment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gaming::v1::CreateGameServerDeploymentRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteGameServerDeployment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gaming::v1::DeleteGameServerDeploymentRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateGameServerDeployment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gaming::v1::UpdateGameServerDeploymentRequest const& request) = 0;

  virtual StatusOr<google::cloud::gaming::v1::GameServerDeploymentRollout> GetGameServerDeploymentRollout(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::GetGameServerDeploymentRolloutRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateGameServerDeploymentRollout(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gaming::v1::UpdateGameServerDeploymentRolloutRequest const& request) = 0;

  virtual StatusOr<google::cloud::gaming::v1::PreviewGameServerDeploymentRolloutResponse> PreviewGameServerDeploymentRollout(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::PreviewGameServerDeploymentRolloutRequest const& request) = 0;

  virtual StatusOr<google::cloud::gaming::v1::FetchDeploymentStateResponse> FetchDeploymentState(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::FetchDeploymentStateRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultGameServerDeploymentsServiceStub : public GameServerDeploymentsServiceStub {
 public:
  DefaultGameServerDeploymentsServiceStub(
      std::unique_ptr<google::cloud::gaming::v1::GameServerDeploymentsService::StubInterface> grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface> operations)
      : grpc_stub_(std::move(grpc_stub)),
        operations_(std::move(operations)) {}

  StatusOr<google::cloud::gaming::v1::ListGameServerDeploymentsResponse>
  ListGameServerDeployments(
    grpc::ClientContext& client_context,
    google::cloud::gaming::v1::ListGameServerDeploymentsRequest const& request) override;

  StatusOr<google::cloud::gaming::v1::GameServerDeployment>
  GetGameServerDeployment(
    grpc::ClientContext& client_context,
    google::cloud::gaming::v1::GetGameServerDeploymentRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateGameServerDeployment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gaming::v1::CreateGameServerDeploymentRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteGameServerDeployment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gaming::v1::DeleteGameServerDeploymentRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateGameServerDeployment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gaming::v1::UpdateGameServerDeploymentRequest const& request) override;

  StatusOr<google::cloud::gaming::v1::GameServerDeploymentRollout>
  GetGameServerDeploymentRollout(
    grpc::ClientContext& client_context,
    google::cloud::gaming::v1::GetGameServerDeploymentRolloutRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateGameServerDeploymentRollout(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gaming::v1::UpdateGameServerDeploymentRolloutRequest const& request) override;

  StatusOr<google::cloud::gaming::v1::PreviewGameServerDeploymentRolloutResponse>
  PreviewGameServerDeploymentRollout(
    grpc::ClientContext& client_context,
    google::cloud::gaming::v1::PreviewGameServerDeploymentRolloutRequest const& request) override;

  StatusOr<google::cloud::gaming::v1::FetchDeploymentStateResponse>
  FetchDeploymentState(
    grpc::ClientContext& client_context,
    google::cloud::gaming::v1::FetchDeploymentStateRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::gaming::v1::GameServerDeploymentsService::StubInterface> grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_INTERNAL_GAME_SERVER_DEPLOYMENTS_STUB_H
