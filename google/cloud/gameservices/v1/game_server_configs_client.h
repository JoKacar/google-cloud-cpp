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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_V1_GAME_SERVER_CONFIGS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_V1_GAME_SERVER_CONFIGS_CLIENT_H

#include "google/cloud/gameservices/v1/game_server_configs_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace gameservices_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The game server config configures the game servers in an Agones fleet.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class GameServerConfigsServiceClient {
 public:
  explicit GameServerConfigsServiceClient(
      std::shared_ptr<GameServerConfigsServiceConnection> connection,
      Options opts = {});
  ~GameServerConfigsServiceClient();

  ///@{
  /// @name Copy and move support
  GameServerConfigsServiceClient(GameServerConfigsServiceClient const&) =
      default;
  GameServerConfigsServiceClient& operator=(
      GameServerConfigsServiceClient const&) = default;
  GameServerConfigsServiceClient(GameServerConfigsServiceClient&&) = default;
  GameServerConfigsServiceClient& operator=(GameServerConfigsServiceClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(GameServerConfigsServiceClient const& a,
                         GameServerConfigsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(GameServerConfigsServiceClient const& a,
                         GameServerConfigsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists game server configs in a given project, location, and game server
  /// deployment.
  ///
  /// @param parent  Required. The parent resource name, in the following form:
  ///  `projects/{project}/locations/{location}/gameServerDeployments/{deployment}/configs/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.gaming.v1.GameServerConfig], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.gaming.v1.GameServerConfig]: @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L141}
  /// [google.cloud.gaming.v1.ListGameServerConfigsRequest]: @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::gaming::v1::GameServerConfig>
  ListGameServerConfigs(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists game server configs in a given project, location, and game server
  /// deployment.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.gaming.v1.ListGameServerConfigsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.gaming.v1.GameServerConfig], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.gaming.v1.GameServerConfig]: @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L141}
  /// [google.cloud.gaming.v1.ListGameServerConfigsRequest]: @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::gaming::v1::GameServerConfig>
  ListGameServerConfigs(
      google::cloud::gaming::v1::ListGameServerConfigsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single game server config.
  ///
  /// @param name  Required. The name of the game server config to retrieve, in the following form:
  ///  `projects/{project}/locations/{location}/gameServerDeployments/{deployment}/configs/{config}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.gaming.v1.GameServerConfig])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.gaming.v1.GameServerConfig]: @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L141}
  /// [google.cloud.gaming.v1.GetGameServerConfigRequest]: @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L71}
  ///
  // clang-format on
  StatusOr<google::cloud::gaming::v1::GameServerConfig> GetGameServerConfig(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single game server config.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.gaming.v1.GetGameServerConfigRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.gaming.v1.GameServerConfig])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.gaming.v1.GameServerConfig]: @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L141}
  /// [google.cloud.gaming.v1.GetGameServerConfigRequest]: @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L71}
  ///
  // clang-format on
  StatusOr<google::cloud::gaming::v1::GameServerConfig> GetGameServerConfig(
      google::cloud::gaming::v1::GetGameServerConfigRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new game server config in a given project, location, and game
  /// server deployment. Game server configs are immutable, and are not applied
  /// until referenced in the game server deployment rollout resource.
  ///
  /// @param parent  Required. The parent resource name, in the following form:
  ///  `projects/{project}/locations/{location}/gameServerDeployments/{deployment}/`.
  /// @param game_server_config  Required. The game server config resource to be created.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.gaming.v1.GameServerConfig] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.gaming.v1.CreateGameServerConfigRequest]: @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L83}
  /// [google.cloud.gaming.v1.GameServerConfig]: @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L141}
  ///
  // clang-format on
  future<StatusOr<google::cloud::gaming::v1::GameServerConfig>>
  CreateGameServerConfig(
      std::string const& parent,
      google::cloud::gaming::v1::GameServerConfig const& game_server_config,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new game server config in a given project, location, and game
  /// server deployment. Game server configs are immutable, and are not applied
  /// until referenced in the game server deployment rollout resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.gaming.v1.CreateGameServerConfigRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.gaming.v1.GameServerConfig] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.gaming.v1.CreateGameServerConfigRequest]: @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L83}
  /// [google.cloud.gaming.v1.GameServerConfig]: @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L141}
  ///
  // clang-format on
  future<StatusOr<google::cloud::gaming::v1::GameServerConfig>>
  CreateGameServerConfig(
      google::cloud::gaming::v1::CreateGameServerConfigRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a single game server config. The deletion will fail if the game
  /// server config is referenced in a game server deployment rollout.
  ///
  /// @param name  Required. The name of the game server config to delete, in the following form:
  ///  `projects/{project}/locations/{location}/gameServerDeployments/{deployment}/configs/{config}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.gaming.v1.OperationMetadata] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.gaming.v1.DeleteGameServerConfigRequest]: @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L101}
  /// [google.cloud.gaming.v1.OperationMetadata]: @googleapis_reference_link{google/cloud/gaming/v1/common.proto#L28}
  ///
  // clang-format on
  future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
  DeleteGameServerConfig(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a single game server config. The deletion will fail if the game
  /// server config is referenced in a game server deployment rollout.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.gaming.v1.DeleteGameServerConfigRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.gaming.v1.OperationMetadata] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.gaming.v1.DeleteGameServerConfigRequest]: @googleapis_reference_link{google/cloud/gaming/v1/game_server_configs.proto#L101}
  /// [google.cloud.gaming.v1.OperationMetadata]: @googleapis_reference_link{google/cloud/gaming/v1/common.proto#L28}
  ///
  // clang-format on
  future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
  DeleteGameServerConfig(
      google::cloud::gaming::v1::DeleteGameServerConfigRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<GameServerConfigsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_V1_GAME_SERVER_CONFIGS_CLIENT_H
