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
// source: google/cloud/dialogflow/v2/session_entity_type.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_SESSION_ENTITY_TYPES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_SESSION_ENTITY_TYPES_CLIENT_H

#include "google/cloud/dialogflow_es/session_entity_types_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing
/// [SessionEntityTypes][google.cloud.dialogflow.v2.SessionEntityType].
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
/// [google.cloud.dialogflow.v2.SessionEntityType]:
/// @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L174}
///
class SessionEntityTypesClient {
 public:
  explicit SessionEntityTypesClient(
      std::shared_ptr<SessionEntityTypesConnection> connection,
      Options opts = {});
  ~SessionEntityTypesClient();

  ///@{
  /// @name Copy and move support
  SessionEntityTypesClient(SessionEntityTypesClient const&) = default;
  SessionEntityTypesClient& operator=(SessionEntityTypesClient const&) =
      default;
  SessionEntityTypesClient(SessionEntityTypesClient&&) = default;
  SessionEntityTypesClient& operator=(SessionEntityTypesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(SessionEntityTypesClient const& a,
                         SessionEntityTypesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SessionEntityTypesClient const& a,
                         SessionEntityTypesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns the list of all session entity types in the specified session.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param parent  Required. The session to list all session entity types from.
  ///  Format: `projects/<Project ID>/agent/sessions/<Session ID>` or
  ///  `projects/<Project ID>/agent/environments/<Environment ID>/users/<User ID>/
  ///  sessions/<Session ID>`.
  ///  If `Environment ID` is not specified, we assume default 'draft'
  ///  environment. If `User ID` is not specified, we assume default '-' user.
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
  ///     [google.cloud.dialogflow.v2.SessionEntityType], or rather,
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
  /// [google.cloud.dialogflow.v2.ListSessionEntityTypesRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L230}
  /// [google.cloud.dialogflow.v2.SessionEntityType]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L174}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::v2::SessionEntityType>
  ListSessionEntityTypes(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Returns the list of all session entity types in the specified session.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.ListSessionEntityTypesRequest].
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
  ///     [google.cloud.dialogflow.v2.SessionEntityType], or rather,
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
  /// [google.cloud.dialogflow.v2.ListSessionEntityTypesRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L230}
  /// [google.cloud.dialogflow.v2.SessionEntityType]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L174}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::v2::SessionEntityType>
  ListSessionEntityTypes(
      google::cloud::dialogflow::v2::ListSessionEntityTypesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified session entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param name  Required. The name of the session entity type. Format:
  ///  @n
  ///  @code
  ///  projects/<Project ID>/agent/sessions/<Session ID>/entityTypes/<Entity Type Display Name>
  ///  @endcode
  ///  @n
  ///  or
  ///  @n
  ///  @code
  ///  projects/<Project ID>/agent/environments/<Environment ID>/users/<User ID>/sessions/<Session ID>/entityTypes/<Entity Type Display Name>
  ///  @endcode
  ///  If `Environment ID` is not specified, we assume default 'draft'
  ///  environment. If `User ID` is not specified, we assume default '-' user.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.SessionEntityType])
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
  /// [google.cloud.dialogflow.v2.GetSessionEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L266}
  /// [google.cloud.dialogflow.v2.SessionEntityType]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L174}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  GetSessionEntityType(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified session entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.GetSessionEntityTypeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.SessionEntityType])
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
  /// [google.cloud.dialogflow.v2.GetSessionEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L266}
  /// [google.cloud.dialogflow.v2.SessionEntityType]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L174}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  GetSessionEntityType(
      google::cloud::dialogflow::v2::GetSessionEntityTypeRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a session entity type.
  ///
  /// If the specified session entity type already exists, overrides the session
  /// entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param parent  Required. The session to create a session entity type for.
  ///  Format: `projects/<Project ID>/agent/sessions/<Session ID>` or
  ///  `projects/<Project ID>/agent/environments/<Environment ID>/users/<User ID>/
  ///  sessions/<Session ID>`.
  ///  If `Environment ID` is not specified, we assume default 'draft'
  ///  environment. If `User ID` is not specified, we assume default '-' user.
  /// @param session_entity_type  Required. The session entity type to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.SessionEntityType])
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
  /// [google.cloud.dialogflow.v2.CreateSessionEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L284}
  /// [google.cloud.dialogflow.v2.SessionEntityType]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L174}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  CreateSessionEntityType(
      std::string const& parent,
      google::cloud::dialogflow::v2::SessionEntityType const&
          session_entity_type,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a session entity type.
  ///
  /// If the specified session entity type already exists, overrides the session
  /// entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.CreateSessionEntityTypeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.SessionEntityType])
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
  /// [google.cloud.dialogflow.v2.CreateSessionEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L284}
  /// [google.cloud.dialogflow.v2.SessionEntityType]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L174}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  CreateSessionEntityType(
      google::cloud::dialogflow::v2::CreateSessionEntityTypeRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified session entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param session_entity_type  Required. The session entity type to update.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.SessionEntityType])
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
  /// [google.cloud.dialogflow.v2.SessionEntityType]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L174}
  /// [google.cloud.dialogflow.v2.UpdateSessionEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L305}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  UpdateSessionEntityType(
      google::cloud::dialogflow::v2::SessionEntityType const&
          session_entity_type,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified session entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param session_entity_type  Required. The session entity type to update.
  /// @param update_mask  Optional. The mask to control which fields get updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.SessionEntityType])
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
  /// [google.cloud.dialogflow.v2.SessionEntityType]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L174}
  /// [google.cloud.dialogflow.v2.UpdateSessionEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L305}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  UpdateSessionEntityType(
      google::cloud::dialogflow::v2::SessionEntityType const&
          session_entity_type,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates the specified session entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.UpdateSessionEntityTypeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.SessionEntityType])
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
  /// [google.cloud.dialogflow.v2.SessionEntityType]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L174}
  /// [google.cloud.dialogflow.v2.UpdateSessionEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L305}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  UpdateSessionEntityType(
      google::cloud::dialogflow::v2::UpdateSessionEntityTypeRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified session entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param name  Required. The name of the entity type to delete. Format:
  ///  @n
  ///  @code
  ///  projects/<Project ID>/agent/sessions/<Session ID>/entityTypes/<Entity Type Display Name>
  ///  @endcode
  ///  @n
  ///  or
  ///  @n
  ///  @code
  ///  projects/<Project ID>/agent/environments/<Environment ID>/users/<User ID>/sessions/<Session ID>/entityTypes/<Entity Type Display Name>
  ///  @endcode
  ///  If `Environment ID` is not specified, we assume default 'draft'
  ///  environment. If `User ID` is not specified, we assume default '-' user.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.DeleteSessionEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L317}
  ///
  // clang-format on
  Status DeleteSessionEntityType(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified session entity type.
  ///
  /// This method doesn't work with Google Assistant integration.
  /// Contact Dialogflow support if you need to use session entities
  /// with Google Assistant integration.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.DeleteSessionEntityTypeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.DeleteSessionEntityTypeRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/session_entity_type.proto#L317}
  ///
  // clang-format on
  Status DeleteSessionEntityType(
      google::cloud::dialogflow::v2::DeleteSessionEntityTypeRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<SessionEntityTypesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_SESSION_ENTITY_TYPES_CLIENT_H
