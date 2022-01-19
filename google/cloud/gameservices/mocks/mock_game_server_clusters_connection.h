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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_MOCKS_MOCK_GAME_SERVER_CLUSTERS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_MOCKS_MOCK_GAME_SERVER_CLUSTERS_CONNECTION_H

#include "google/cloud/gameservices/game_server_clusters_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace gameservices_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MockGameServerClustersServiceConnection : public gameservices::GameServerClustersServiceConnection {
 public:
  MOCK_METHOD(StreamRange<google::cloud::gaming::v1::GameServerCluster>,
  ListGameServerClusters,
  (google::cloud::gaming::v1::ListGameServerClustersRequest request), (override));

  MOCK_METHOD(StatusOr<google::cloud::gaming::v1::GameServerCluster>,
  GetGameServerCluster,
  (google::cloud::gaming::v1::GetGameServerClusterRequest const& request), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::gaming::v1::GameServerCluster>>,
  CreateGameServerCluster,
  (google::cloud::gaming::v1::CreateGameServerClusterRequest const& request), (override));

  MOCK_METHOD(StatusOr<google::cloud::gaming::v1::PreviewCreateGameServerClusterResponse>,
  PreviewCreateGameServerCluster,
  (google::cloud::gaming::v1::PreviewCreateGameServerClusterRequest const& request), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>,
  DeleteGameServerCluster,
  (google::cloud::gaming::v1::DeleteGameServerClusterRequest const& request), (override));

  MOCK_METHOD(StatusOr<google::cloud::gaming::v1::PreviewDeleteGameServerClusterResponse>,
  PreviewDeleteGameServerCluster,
  (google::cloud::gaming::v1::PreviewDeleteGameServerClusterRequest const& request), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::gaming::v1::GameServerCluster>>,
  UpdateGameServerCluster,
  (google::cloud::gaming::v1::UpdateGameServerClusterRequest const& request), (override));

  MOCK_METHOD(StatusOr<google::cloud::gaming::v1::PreviewUpdateGameServerClusterResponse>,
  PreviewUpdateGameServerCluster,
  (google::cloud::gaming::v1::PreviewUpdateGameServerClusterRequest const& request), (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_MOCKS_MOCK_GAME_SERVER_CLUSTERS_CONNECTION_H
