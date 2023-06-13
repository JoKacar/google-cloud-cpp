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
// source: google/cloud/gaming/v1/game_server_configs_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_V1_GAME_SERVER_CONFIGS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_V1_GAME_SERVER_CONFIGS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/gaming/v1/game_server_configs_service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace gameservices_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GameServerConfigsServiceConnectionIdempotencyPolicy {
 public:
  virtual ~GameServerConfigsServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<GameServerConfigsServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency ListGameServerConfigs(
      google::cloud::gaming::v1::ListGameServerConfigsRequest request);

  virtual google::cloud::Idempotency GetGameServerConfig(
      google::cloud::gaming::v1::GetGameServerConfigRequest const& request);

  virtual google::cloud::Idempotency CreateGameServerConfig(
      google::cloud::gaming::v1::CreateGameServerConfigRequest const& request);

  virtual google::cloud::Idempotency DeleteGameServerConfig(
      google::cloud::gaming::v1::DeleteGameServerConfigRequest const& request);
};

std::unique_ptr<GameServerConfigsServiceConnectionIdempotencyPolicy>
MakeDefaultGameServerConfigsServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_V1_GAME_SERVER_CONFIGS_CONNECTION_IDEMPOTENCY_POLICY_H
