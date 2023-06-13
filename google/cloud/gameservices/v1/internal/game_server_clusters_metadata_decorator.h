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
// source: google/cloud/gaming/v1/game_server_clusters_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_V1_INTERNAL_GAME_SERVER_CLUSTERS_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_V1_INTERNAL_GAME_SERVER_CLUSTERS_METADATA_DECORATOR_H

#include "google/cloud/gameservices/v1/internal/game_server_clusters_stub.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace gameservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GameServerClustersServiceMetadata : public GameServerClustersServiceStub {
 public:
  ~GameServerClustersServiceMetadata() override = default;
  GameServerClustersServiceMetadata(
      std::shared_ptr<GameServerClustersServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata);

  StatusOr<google::cloud::gaming::v1::ListGameServerClustersResponse>
  ListGameServerClusters(
      grpc::ClientContext& context,
      google::cloud::gaming::v1::ListGameServerClustersRequest const& request)
      override;

  StatusOr<google::cloud::gaming::v1::GameServerCluster> GetGameServerCluster(
      grpc::ClientContext& context,
      google::cloud::gaming::v1::GetGameServerClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateGameServerCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::gaming::v1::CreateGameServerClusterRequest const& request)
      override;

  StatusOr<google::cloud::gaming::v1::PreviewCreateGameServerClusterResponse>
  PreviewCreateGameServerCluster(
      grpc::ClientContext& context,
      google::cloud::gaming::v1::PreviewCreateGameServerClusterRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteGameServerCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::gaming::v1::DeleteGameServerClusterRequest const& request)
      override;

  StatusOr<google::cloud::gaming::v1::PreviewDeleteGameServerClusterResponse>
  PreviewDeleteGameServerCluster(
      grpc::ClientContext& context,
      google::cloud::gaming::v1::PreviewDeleteGameServerClusterRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateGameServerCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::gaming::v1::UpdateGameServerClusterRequest const& request)
      override;

  StatusOr<google::cloud::gaming::v1::PreviewUpdateGameServerClusterResponse>
  PreviewUpdateGameServerCluster(
      grpc::ClientContext& context,
      google::cloud::gaming::v1::PreviewUpdateGameServerClusterRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<GameServerClustersServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_V1_INTERNAL_GAME_SERVER_CLUSTERS_METADATA_DECORATOR_H
