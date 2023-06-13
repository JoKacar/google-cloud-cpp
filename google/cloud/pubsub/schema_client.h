// Copyright 2023 Google LLC
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
// source: google/pubsub/v1/schema.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_SCHEMA_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_SCHEMA_CLIENT_H

#include "google/cloud/pubsub/schema_connection.h"
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
namespace pubsub {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for doing schema-related operations.
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
class SchemaServiceClient {
 public:
  explicit SchemaServiceClient(
      std::shared_ptr<SchemaServiceConnection> connection, Options opts = {});
  ~SchemaServiceClient();

  ///@{
  /// @name Copy and move support
  SchemaServiceClient(SchemaServiceClient const&) = default;
  SchemaServiceClient& operator=(SchemaServiceClient const&) = default;
  SchemaServiceClient(SchemaServiceClient&&) = default;
  SchemaServiceClient& operator=(SchemaServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(SchemaServiceClient const& a,
                         SchemaServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SchemaServiceClient const& a,
                         SchemaServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a schema.
  ///
  /// @param parent  Required. The name of the project in which to create the schema.
  ///  Format is `projects/{project-id}`.
  /// @param schema  Required. The schema object to create.
  ///  @n
  ///  This schema's `name` parameter is ignored. The schema object returned
  ///  by CreateSchema will have a `name` made using the given `parent` and
  ///  `schema_id`.
  /// @param schema_id  The ID to use for the schema, which will become the final component of
  ///  the schema's resource name.
  ///  @n
  ///  See https://cloud.google.com/pubsub/docs/admin#resource_names for resource
  ///  name constraints.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.pubsub.v1.Schema])
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
  /// [google.pubsub.v1.CreateSchemaRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L185}
  /// [google.pubsub.v1.Schema]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L130}
  ///
  // clang-format on
  StatusOr<google::pubsub::v1::Schema> CreateSchema(
      std::string const& parent, google::pubsub::v1::Schema const& schema,
      std::string const& schema_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a schema.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.pubsub.v1.CreateSchemaRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.pubsub.v1.Schema])
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
  /// [google.pubsub.v1.CreateSchemaRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L185}
  /// [google.pubsub.v1.Schema]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L130}
  ///
  // clang-format on
  StatusOr<google::pubsub::v1::Schema> CreateSchema(
      google::pubsub::v1::CreateSchemaRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets a schema.
  ///
  /// @param name  Required. The name of the schema to get.
  ///  Format is `projects/{project}/schemas/{schema}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.pubsub.v1.Schema])
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
  /// [google.pubsub.v1.GetSchemaRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L211}
  /// [google.pubsub.v1.Schema]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L130}
  ///
  // clang-format on
  StatusOr<google::pubsub::v1::Schema> GetSchema(std::string const& name,
                                                 Options opts = {});

  // clang-format off
  ///
  /// Gets a schema.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.pubsub.v1.GetSchemaRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.pubsub.v1.Schema])
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
  /// [google.pubsub.v1.GetSchemaRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L211}
  /// [google.pubsub.v1.Schema]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L130}
  ///
  // clang-format on
  StatusOr<google::pubsub::v1::Schema> GetSchema(
      google::pubsub::v1::GetSchemaRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Lists schemas in a project.
  ///
  /// @param parent  Required. The name of the project in which to list schemas.
  ///  Format is `projects/{project-id}`.
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
  ///     [google.pubsub.v1.Schema], or rather,
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
  /// [google.pubsub.v1.ListSchemasRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L225}
  /// [google.pubsub.v1.Schema]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L130}
  ///
  // clang-format on
  StreamRange<google::pubsub::v1::Schema> ListSchemas(std::string const& parent,
                                                      Options opts = {});

  // clang-format off
  ///
  /// Lists schemas in a project.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.pubsub.v1.ListSchemasRequest].
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
  ///     [google.pubsub.v1.Schema], or rather,
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
  /// [google.pubsub.v1.ListSchemasRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L225}
  /// [google.pubsub.v1.Schema]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L130}
  ///
  // clang-format on
  StreamRange<google::pubsub::v1::Schema> ListSchemas(
      google::pubsub::v1::ListSchemasRequest request, Options opts = {});

  // clang-format off
  ///
  /// Lists all schema revisions for the named schema.
  ///
  /// @param name  Required. The name of the schema to list revisions for.
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
  ///     [google.pubsub.v1.Schema], or rather,
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
  /// [google.pubsub.v1.ListSchemaRevisionsRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L260}
  /// [google.pubsub.v1.Schema]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L130}
  ///
  // clang-format on
  StreamRange<google::pubsub::v1::Schema> ListSchemaRevisions(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Lists all schema revisions for the named schema.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.pubsub.v1.ListSchemaRevisionsRequest].
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
  ///     [google.pubsub.v1.Schema], or rather,
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
  /// [google.pubsub.v1.ListSchemaRevisionsRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L260}
  /// [google.pubsub.v1.Schema]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L130}
  ///
  // clang-format on
  StreamRange<google::pubsub::v1::Schema> ListSchemaRevisions(
      google::pubsub::v1::ListSchemaRevisionsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Commits a new schema revision to an existing schema.
  ///
  /// @param name  Required. The name of the schema we are revising.
  ///  Format is `projects/{project}/schemas/{schema}`.
  /// @param schema  Required. The schema revision to commit.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.pubsub.v1.Schema])
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
  /// [google.pubsub.v1.CommitSchemaRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L291}
  /// [google.pubsub.v1.Schema]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L130}
  ///
  // clang-format on
  StatusOr<google::pubsub::v1::Schema> CommitSchema(
      std::string const& name, google::pubsub::v1::Schema const& schema,
      Options opts = {});

  // clang-format off
  ///
  /// Commits a new schema revision to an existing schema.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.pubsub.v1.CommitSchemaRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.pubsub.v1.Schema])
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
  /// [google.pubsub.v1.CommitSchemaRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L291}
  /// [google.pubsub.v1.Schema]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L130}
  ///
  // clang-format on
  StatusOr<google::pubsub::v1::Schema> CommitSchema(
      google::pubsub::v1::CommitSchemaRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new schema revision that is a copy of the provided revision_id.
  ///
  /// @param name  Required. The schema being rolled back with revision id.
  /// @param revision_id  Required. The revision ID to roll back to.
  ///  It must be a revision of the same schema.
  ///  @n
  ///    Example: c7cfa2a8
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.pubsub.v1.Schema])
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
  /// [google.pubsub.v1.RollbackSchemaRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L304}
  /// [google.pubsub.v1.Schema]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L130}
  ///
  // clang-format on
  StatusOr<google::pubsub::v1::Schema> RollbackSchema(
      std::string const& name, std::string const& revision_id,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new schema revision that is a copy of the provided revision_id.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.pubsub.v1.RollbackSchemaRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.pubsub.v1.Schema])
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
  /// [google.pubsub.v1.RollbackSchemaRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L304}
  /// [google.pubsub.v1.Schema]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L130}
  ///
  // clang-format on
  StatusOr<google::pubsub::v1::Schema> RollbackSchema(
      google::pubsub::v1::RollbackSchemaRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a specific schema revision.
  ///
  /// @param name  Required. The name of the schema revision to be deleted, with a revision ID
  ///  explicitly included.
  ///  @n
  ///  Example: `projects/123/schemas/my-schema@c7cfa2a8`
  /// @param revision_id  Optional. This field is deprecated and should not be used for specifying
  ///  the revision ID. The revision ID should be specified via the `name`
  ///  parameter.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.pubsub.v1.Schema])
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
  /// [google.pubsub.v1.DeleteSchemaRevisionRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L319}
  /// [google.pubsub.v1.Schema]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L130}
  ///
  // clang-format on
  StatusOr<google::pubsub::v1::Schema> DeleteSchemaRevision(
      std::string const& name, std::string const& revision_id,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a specific schema revision.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.pubsub.v1.DeleteSchemaRevisionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.pubsub.v1.Schema])
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
  /// [google.pubsub.v1.DeleteSchemaRevisionRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L319}
  /// [google.pubsub.v1.Schema]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L130}
  ///
  // clang-format on
  StatusOr<google::pubsub::v1::Schema> DeleteSchemaRevision(
      google::pubsub::v1::DeleteSchemaRevisionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a schema.
  ///
  /// @param name  Required. Name of the schema to delete.
  ///  Format is `projects/{project}/schemas/{schema}`.
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
  /// [google.pubsub.v1.DeleteSchemaRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L337}
  ///
  // clang-format on
  Status DeleteSchema(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a schema.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.pubsub.v1.DeleteSchemaRequest].
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
  /// [google.pubsub.v1.DeleteSchemaRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L337}
  ///
  // clang-format on
  Status DeleteSchema(google::pubsub::v1::DeleteSchemaRequest const& request,
                      Options opts = {});

  // clang-format off
  ///
  /// Validates a schema.
  ///
  /// @param parent  Required. The name of the project in which to validate schemas.
  ///  Format is `projects/{project-id}`.
  /// @param schema  Required. The schema object to validate.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.pubsub.v1.ValidateSchemaResponse])
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
  /// [google.pubsub.v1.ValidateSchemaRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L347}
  /// [google.pubsub.v1.ValidateSchemaResponse]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L363}
  ///
  // clang-format on
  StatusOr<google::pubsub::v1::ValidateSchemaResponse> ValidateSchema(
      std::string const& parent, google::pubsub::v1::Schema const& schema,
      Options opts = {});

  // clang-format off
  ///
  /// Validates a schema.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.pubsub.v1.ValidateSchemaRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.pubsub.v1.ValidateSchemaResponse])
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
  /// [google.pubsub.v1.ValidateSchemaRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L347}
  /// [google.pubsub.v1.ValidateSchemaResponse]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L363}
  ///
  // clang-format on
  StatusOr<google::pubsub::v1::ValidateSchemaResponse> ValidateSchema(
      google::pubsub::v1::ValidateSchemaRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Validates a message against a schema.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.pubsub.v1.ValidateMessageRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.pubsub.v1.ValidateMessageResponse])
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
  /// [google.pubsub.v1.ValidateMessageRequest]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L366}
  /// [google.pubsub.v1.ValidateMessageResponse]: @googleapis_reference_link{google/pubsub/v1/schema.proto#L397}
  ///
  // clang-format on
  StatusOr<google::pubsub::v1::ValidateMessageResponse> ValidateMessage(
      google::pubsub::v1::ValidateMessageRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<SchemaServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_SCHEMA_CLIENT_H
