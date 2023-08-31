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
// source: google/cloud/dialogflow/v2/context.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_CONTEXTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_CONTEXTS_CLIENT_H

#include "google/cloud/dialogflow_es/contexts_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing [Contexts][google.cloud.dialogflow.v2.Context].
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
/// [google.cloud.dialogflow.v2.Context]:
/// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
///
class ContextsClient {
 public:
  explicit ContextsClient(std::shared_ptr<ContextsConnection> connection,
                          Options opts = {});
  ~ContextsClient();

  ///@{
  /// @name Copy and move support
  ContextsClient(ContextsClient const&) = default;
  ContextsClient& operator=(ContextsClient const&) = default;
  ContextsClient(ContextsClient&&) = default;
  ContextsClient& operator=(ContextsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ContextsClient const& a, ContextsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ContextsClient const& a, ContextsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns the list of all contexts in the specified session.
  ///
  /// @param parent  Required. The session to list all contexts from.
  ///  Format: `projects/<Project ID>/agent/sessions/<Session ID>` or
  ///  `projects/<Project ID>/agent/environments/<Environment ID>/users/<User
  ///  ID>/sessions/<Session ID>`.
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
  ///     [google.cloud.dialogflow.v2.Context], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Context]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.ListContextsRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L225}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::v2::Context> ListContexts(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Returns the list of all contexts in the specified session.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.ListContextsRequest].
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
  ///     [google.cloud.dialogflow.v2.Context], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Context]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.ListContextsRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L225}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::v2::Context> ListContexts(
      google::cloud::dialogflow::v2::ListContextsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified context.
  ///
  /// @param name  Required. The name of the context. Format:
  ///  @n
  ///  @code
  ///  projects/<Project ID>/agent/sessions/<Session ID>/contexts/<Context ID>
  ///  @endcode
  ///  @n
  ///  or
  ///  @n
  ///  @code
  ///  projects/<Project ID>/agent/environments/<Environment ID>/users/<User ID>/sessions/<Session ID>/contexts/<Context ID>`
  ///  @endcode
  ///  If `Environment ID` is not specified, we assume default 'draft'
  ///  environment. If `User ID` is not specified, we assume default '-' user.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Context])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Context]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.GetContextRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L261}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Context> GetContext(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified context.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.GetContextRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Context])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Context]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.GetContextRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L261}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Context> GetContext(
      google::cloud::dialogflow::v2::GetContextRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a context.
  ///
  /// If the specified context already exists, overrides the context.
  ///
  /// @param parent  Required. The session to create a context for.
  ///  Format: `projects/<Project ID>/agent/sessions/<Session ID>` or
  ///  `projects/<Project ID>/agent/environments/<Environment ID>/users/<User
  ///  ID>/sessions/<Session ID>`.
  ///  If `Environment ID` is not specified, we assume default 'draft'
  ///  environment. If `User ID` is not specified, we assume default '-' user.
  /// @param context  Required. The context to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Context])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Context]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.CreateContextRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L278}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Context> CreateContext(
      std::string const& parent,
      google::cloud::dialogflow::v2::Context const& context, Options opts = {});

  // clang-format off
  ///
  /// Creates a context.
  ///
  /// If the specified context already exists, overrides the context.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.CreateContextRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Context])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Context]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.CreateContextRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L278}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Context> CreateContext(
      google::cloud::dialogflow::v2::CreateContextRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified context.
  ///
  /// @param context  Required. The context to update.
  /// @param update_mask  Optional. The mask to control which fields get updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Context])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Context]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.UpdateContextRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L298}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Context> UpdateContext(
      google::cloud::dialogflow::v2::Context const& context,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates the specified context.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.UpdateContextRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Context])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Context]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.UpdateContextRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L298}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Context> UpdateContext(
      google::cloud::dialogflow::v2::UpdateContextRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified context.
  ///
  /// @param name  Required. The name of the context to delete. Format:
  ///  @n
  ///  @code
  ///  projects/<Project ID>/agent/sessions/<Session ID>/contexts/<Context ID>
  ///  @endcode
  ///  @n
  ///  or
  ///  @n
  ///  @code
  ///  projects/<Project ID>/agent/environments/<Environment ID>/users/<User ID>/sessions/<Session ID>/contexts/<Context ID>`
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
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.DeleteContextRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L309}
  ///
  // clang-format on
  Status DeleteContext(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified context.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.DeleteContextRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.DeleteContextRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L309}
  ///
  // clang-format on
  Status DeleteContext(
      google::cloud::dialogflow::v2::DeleteContextRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes all active contexts in the specified session.
  ///
  /// @param parent  Required. The name of the session to delete all contexts from. Format:
  ///  @n
  ///  @code
  ///  projects/<Project ID>/agent/sessions/<Session ID>
  ///  @endcode
  ///  @n
  ///  or
  ///  @n
  ///  @code
  ///  projects/<Project ID>/agent/environments/<Environment ID>/users/<User ID>/sessions/<Session ID>
  ///  @endcode
  ///  If `Environment ID` is not specified we assume default 'draft' environment.
  ///  If `User ID` is not specified, we assume default '-' user.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.DeleteAllContextsRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L326}
  ///
  // clang-format on
  Status DeleteAllContexts(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Deletes all active contexts in the specified session.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.DeleteAllContextsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.DeleteAllContextsRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L326}
  ///
  // clang-format on
  Status DeleteAllContexts(
      google::cloud::dialogflow::v2::DeleteAllContextsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ContextsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_CONTEXTS_CLIENT_H
