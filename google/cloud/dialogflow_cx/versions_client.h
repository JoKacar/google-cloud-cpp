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
// source: google/cloud/dialogflow/cx/v3/version.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_VERSIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_VERSIONS_CLIENT_H

#include "google/cloud/dialogflow_cx/versions_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing [Versions][google.cloud.dialogflow.cx.v3.Version].
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
/// [google.cloud.dialogflow.cx.v3.Version]:
/// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L148}
///
class VersionsClient {
 public:
  explicit VersionsClient(std::shared_ptr<VersionsConnection> connection,
                          Options opts = {});
  ~VersionsClient();

  ///@{
  /// @name Copy and move support
  VersionsClient(VersionsClient const&) = default;
  VersionsClient& operator=(VersionsClient const&) = default;
  VersionsClient(VersionsClient&&) = default;
  VersionsClient& operator=(VersionsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(VersionsClient const& a, VersionsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(VersionsClient const& a, VersionsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns the list of all versions in the specified
  /// [Flow][google.cloud.dialogflow.cx.v3.Flow].
  ///
  /// @param parent  Required. The [Flow][google.cloud.dialogflow.cx.v3.Flow] to list all
  ///  versions for. Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent ID>/flows/<Flow ID>`.
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
  ///     [google.cloud.dialogflow.cx.v3.Version], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.Flow]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/flow.proto#L252}
  /// [google.cloud.dialogflow.cx.v3.ListVersionsRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L195}
  /// [google.cloud.dialogflow.cx.v3.Version]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L148}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::cx::v3::Version> ListVersions(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Returns the list of all versions in the specified
  /// [Flow][google.cloud.dialogflow.cx.v3.Flow].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.ListVersionsRequest].
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
  ///     [google.cloud.dialogflow.cx.v3.Version], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.Flow]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/flow.proto#L252}
  /// [google.cloud.dialogflow.cx.v3.ListVersionsRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L195}
  /// [google.cloud.dialogflow.cx.v3.Version]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L148}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::cx::v3::Version> ListVersions(
      google::cloud::dialogflow::cx::v3::ListVersionsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified [Version][google.cloud.dialogflow.cx.v3.Version].
  ///
  /// @param name  Required. The name of the [Version][google.cloud.dialogflow.cx.v3.Version].
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent ID>/flows/<Flow ID>/versions/<Version ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Version])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.GetVersionRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L229}
  /// [google.cloud.dialogflow.cx.v3.Version]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L148}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Version> GetVersion(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified [Version][google.cloud.dialogflow.cx.v3.Version].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.GetVersionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Version])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.GetVersionRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L229}
  /// [google.cloud.dialogflow.cx.v3.Version]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L148}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Version> GetVersion(
      google::cloud::dialogflow::cx::v3::GetVersionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a [Version][google.cloud.dialogflow.cx.v3.Version] in the specified
  /// [Flow][google.cloud.dialogflow.cx.v3.Flow].
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [CreateVersionOperationMetadata][google.cloud.dialogflow.cx.v3.CreateVersionOperationMetadata]
  /// - `response`: [Version][google.cloud.dialogflow.cx.v3.Version]
  ///
  /// @param parent  Required. The [Flow][google.cloud.dialogflow.cx.v3.Flow] to create an
  ///  [Version][google.cloud.dialogflow.cx.v3.Version] for. Format:
  ///  `projects/<Project ID>/locations/<Location ID>/agents/<Agent ID>/flows/<Flow ID>`.
  /// @param version  Required. The version to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.dialogflow.cx.v3.Version] proto message.
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
  /// [google.cloud.dialogflow.cx.v3.CreateVersionOperationMetadata]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L138}
  /// [google.cloud.dialogflow.cx.v3.CreateVersionRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L243}
  /// [google.cloud.dialogflow.cx.v3.Flow]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/flow.proto#L252}
  /// [google.cloud.dialogflow.cx.v3.Version]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L148}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dialogflow::cx::v3::Version>> CreateVersion(
      std::string const& parent,
      google::cloud::dialogflow::cx::v3::Version const& version,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a [Version][google.cloud.dialogflow.cx.v3.Version] in the specified
  /// [Flow][google.cloud.dialogflow.cx.v3.Flow].
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [CreateVersionOperationMetadata][google.cloud.dialogflow.cx.v3.CreateVersionOperationMetadata]
  /// - `response`: [Version][google.cloud.dialogflow.cx.v3.Version]
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.CreateVersionRequest].
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
  ///     [google.cloud.dialogflow.cx.v3.Version] proto message.
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
  /// [google.cloud.dialogflow.cx.v3.CreateVersionOperationMetadata]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L138}
  /// [google.cloud.dialogflow.cx.v3.CreateVersionRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L243}
  /// [google.cloud.dialogflow.cx.v3.Flow]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/flow.proto#L252}
  /// [google.cloud.dialogflow.cx.v3.Version]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L148}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dialogflow::cx::v3::Version>> CreateVersion(
      google::cloud::dialogflow::cx::v3::CreateVersionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified [Version][google.cloud.dialogflow.cx.v3.Version].
  ///
  /// @param version  Required. The version to update.
  /// @param update_mask  Required. The mask to control which fields get updated. Currently only
  ///  `description` and `display_name` can be updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Version])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.UpdateVersionRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L261}
  /// [google.cloud.dialogflow.cx.v3.Version]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L148}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Version> UpdateVersion(
      google::cloud::dialogflow::cx::v3::Version const& version,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates the specified [Version][google.cloud.dialogflow.cx.v3.Version].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.UpdateVersionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Version])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.UpdateVersionRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L261}
  /// [google.cloud.dialogflow.cx.v3.Version]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L148}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Version> UpdateVersion(
      google::cloud::dialogflow::cx::v3::UpdateVersionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified [Version][google.cloud.dialogflow.cx.v3.Version].
  ///
  /// @param name  Required. The name of the [Version][google.cloud.dialogflow.cx.v3.Version]
  ///  to delete. Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent ID>/flows/<Flow ID>/versions/<Version ID>`.
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
  /// [google.cloud.dialogflow.cx.v3.DeleteVersionRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L273}
  /// [google.cloud.dialogflow.cx.v3.Version]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L148}
  ///
  // clang-format on
  Status DeleteVersion(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified [Version][google.cloud.dialogflow.cx.v3.Version].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.DeleteVersionRequest].
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
  /// [google.cloud.dialogflow.cx.v3.DeleteVersionRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L273}
  /// [google.cloud.dialogflow.cx.v3.Version]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L148}
  ///
  // clang-format on
  Status DeleteVersion(
      google::cloud::dialogflow::cx::v3::DeleteVersionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Loads resources in the specified version to the draft flow.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`: An empty [Struct
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#struct)
  /// - `response`: An [Empty
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#empty)
  ///
  /// @param name  Required. The [Version][google.cloud.dialogflow.cx.v3.Version] to be loaded
  ///  to draft flow. Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent ID>/flows/<Flow ID>/versions/<Version ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.protobuf.Struct] proto message.
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
  /// [google.cloud.dialogflow.cx.v3.LoadVersionRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L287}
  /// [google.protobuf.Struct]: @googleapis_reference_link{google/protobuf/struct.proto#L51}
  ///
  // clang-format on
  future<StatusOr<google::protobuf::Struct>> LoadVersion(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Loads resources in the specified version to the draft flow.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`: An empty [Struct
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#struct)
  /// - `response`: An [Empty
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#empty)
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.LoadVersionRequest].
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
  ///     [google.protobuf.Struct] proto message.
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
  /// [google.cloud.dialogflow.cx.v3.LoadVersionRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L287}
  /// [google.protobuf.Struct]: @googleapis_reference_link{google/protobuf/struct.proto#L51}
  ///
  // clang-format on
  future<StatusOr<google::protobuf::Struct>> LoadVersion(
      google::cloud::dialogflow::cx::v3::LoadVersionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Compares the specified base version with target version.
  ///
  /// @param base_version  Required. Name of the base flow version to compare with the target version.
  ///  Use version ID `0` to indicate the draft version of the specified flow.
  ///  @n
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/
  ///  <Agent ID>/flows/<Flow ID>/versions/<Version ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.CompareVersionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.CompareVersionsRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L307}
  /// [google.cloud.dialogflow.cx.v3.CompareVersionsResponse]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L343}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::CompareVersionsResponse>
  CompareVersions(std::string const& base_version, Options opts = {});

  // clang-format off
  ///
  /// Compares the specified base version with target version.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.CompareVersionsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.CompareVersionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.CompareVersionsRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L307}
  /// [google.cloud.dialogflow.cx.v3.CompareVersionsResponse]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L343}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::CompareVersionsResponse>
  CompareVersions(
      google::cloud::dialogflow::cx::v3::CompareVersionsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<VersionsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_VERSIONS_CLIENT_H
