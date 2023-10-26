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
// source:
// google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_ADVERTISED_PREFIXES_V1_PUBLIC_ADVERTISED_PREFIXES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_ADVERTISED_PREFIXES_V1_PUBLIC_ADVERTISED_PREFIXES_CLIENT_H

#include "google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes_rest_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_public_advertised_prefixes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the publicAdvertisedPrefixes resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/publicAdvertisedPrefixes
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
class PublicAdvertisedPrefixesClient {
 public:
  explicit PublicAdvertisedPrefixesClient(
      std::shared_ptr<PublicAdvertisedPrefixesConnection> connection,
      Options opts = {});
  ~PublicAdvertisedPrefixesClient();

  ///@{
  /// @name Copy and move support
  PublicAdvertisedPrefixesClient(PublicAdvertisedPrefixesClient const&) =
      default;
  PublicAdvertisedPrefixesClient& operator=(
      PublicAdvertisedPrefixesClient const&) = default;
  PublicAdvertisedPrefixesClient(PublicAdvertisedPrefixesClient&&) = default;
  PublicAdvertisedPrefixesClient& operator=(PublicAdvertisedPrefixesClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(PublicAdvertisedPrefixesClient const& a,
                         PublicAdvertisedPrefixesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(PublicAdvertisedPrefixesClient const& a,
                         PublicAdvertisedPrefixesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Announces the specified PublicAdvertisedPrefix
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicAdvertisedPrefixes/announce
  ///
  /// @param project  Project ID for this request.
  /// @param public_advertised_prefix  The name of the public advertised prefix. It should comply with RFC1035.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_advertised_prefixes.v1.AnnounceRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto#L126}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Announce(
      std::string const& project, std::string const& public_advertised_prefix,
      Options opts = {});

  // clang-format off
  ///
  /// Announces the specified PublicAdvertisedPrefix
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicAdvertisedPrefixes/announce
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.public_advertised_prefixes.v1.AnnounceRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_advertised_prefixes.v1.AnnounceRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto#L126}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Announce(
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          AnnounceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified PublicAdvertisedPrefix
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicAdvertisedPrefixes/delete
  ///
  /// @param project  Project ID for this request.
  /// @param public_advertised_prefix  Name of the PublicAdvertisedPrefix resource to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_advertised_prefixes.v1.DeletePublicAdvertisedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto#L154}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePublicAdvertisedPrefix(std::string const& project,
                               std::string const& public_advertised_prefix,
                               Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified PublicAdvertisedPrefix
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicAdvertisedPrefixes/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.public_advertised_prefixes.v1.DeletePublicAdvertisedPrefixRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_advertised_prefixes.v1.DeletePublicAdvertisedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto#L154}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePublicAdvertisedPrefix(
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          DeletePublicAdvertisedPrefixRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified PublicAdvertisedPrefix resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicAdvertisedPrefixes/get
  ///
  /// @param project  Project ID for this request.
  /// @param public_advertised_prefix  Name of the PublicAdvertisedPrefix resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.PublicAdvertisedPrefix])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_advertised_prefixes.v1.GetPublicAdvertisedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto#L182}
  /// [google.cloud.cpp.compute.v1.PublicAdvertisedPrefix]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_086.proto#L27}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
  GetPublicAdvertisedPrefix(std::string const& project,
                            std::string const& public_advertised_prefix,
                            Options opts = {});

  // clang-format off
  ///
  /// Returns the specified PublicAdvertisedPrefix resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicAdvertisedPrefixes/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.public_advertised_prefixes.v1.GetPublicAdvertisedPrefixRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.PublicAdvertisedPrefix])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_advertised_prefixes.v1.GetPublicAdvertisedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto#L182}
  /// [google.cloud.cpp.compute.v1.PublicAdvertisedPrefix]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_086.proto#L27}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
  GetPublicAdvertisedPrefix(
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          GetPublicAdvertisedPrefixRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a PublicAdvertisedPrefix in the specified project using the
  /// parameters that are included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicAdvertisedPrefixes/insert
  ///
  /// @param project  Project ID for this request.
  /// @param public_advertised_prefix_resource  The PublicAdvertisedPrefix for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_advertised_prefixes.v1.InsertPublicAdvertisedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto#L195}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertPublicAdvertisedPrefix(
      std::string const& project,
      google::cloud::cpp::compute::v1::PublicAdvertisedPrefix const&
          public_advertised_prefix_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a PublicAdvertisedPrefix in the specified project using the
  /// parameters that are included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicAdvertisedPrefixes/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.public_advertised_prefixes.v1.InsertPublicAdvertisedPrefixRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_advertised_prefixes.v1.InsertPublicAdvertisedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto#L195}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertPublicAdvertisedPrefix(
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          InsertPublicAdvertisedPrefixRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists the PublicAdvertisedPrefixes for a project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicAdvertisedPrefixes/list
  ///
  /// @param project  Project ID for this request.
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
  ///     [google.cloud.cpp.compute.v1.PublicAdvertisedPrefix], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_advertised_prefixes.v1.ListPublicAdvertisedPrefixesRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto#L221}
  /// [google.cloud.cpp.compute.v1.PublicAdvertisedPrefix]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_086.proto#L27}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
  ListPublicAdvertisedPrefixes(std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Lists the PublicAdvertisedPrefixes for a project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicAdvertisedPrefixes/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.public_advertised_prefixes.v1.ListPublicAdvertisedPrefixesRequest].
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
  ///     [google.cloud.cpp.compute.v1.PublicAdvertisedPrefix], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_advertised_prefixes.v1.ListPublicAdvertisedPrefixesRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto#L221}
  /// [google.cloud.cpp.compute.v1.PublicAdvertisedPrefix]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_086.proto#L27}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::PublicAdvertisedPrefix>
  ListPublicAdvertisedPrefixes(
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          ListPublicAdvertisedPrefixesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Patches the specified Router resource with the data included in the
  /// request. This method supports PATCH semantics and uses JSON merge patch
  /// format and processing rules.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicAdvertisedPrefixes/patch
  ///
  /// @param project  Project ID for this request.
  /// @param public_advertised_prefix  Name of the PublicAdvertisedPrefix resource to patch.
  /// @param public_advertised_prefix_resource  The PublicAdvertisedPrefix for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_advertised_prefixes.v1.PatchPublicAdvertisedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto#L287}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPublicAdvertisedPrefix(
      std::string const& project, std::string const& public_advertised_prefix,
      google::cloud::cpp::compute::v1::PublicAdvertisedPrefix const&
          public_advertised_prefix_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Patches the specified Router resource with the data included in the
  /// request. This method supports PATCH semantics and uses JSON merge patch
  /// format and processing rules.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicAdvertisedPrefixes/patch
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.public_advertised_prefixes.v1.PatchPublicAdvertisedPrefixRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_advertised_prefixes.v1.PatchPublicAdvertisedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto#L287}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPublicAdvertisedPrefix(
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          PatchPublicAdvertisedPrefixRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Withdraws the specified PublicAdvertisedPrefix
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicAdvertisedPrefixes/withdraw
  ///
  /// @param project  Project ID for this request.
  /// @param public_advertised_prefix  The name of the public advertised prefix. It should comply with RFC1035.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_advertised_prefixes.v1.WithdrawRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto#L319}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Withdraw(
      std::string const& project, std::string const& public_advertised_prefix,
      Options opts = {});

  // clang-format off
  ///
  /// Withdraws the specified PublicAdvertisedPrefix
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicAdvertisedPrefixes/withdraw
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.public_advertised_prefixes.v1.WithdrawRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_advertised_prefixes.v1.WithdrawRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto#L319}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Withdraw(
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          WithdrawRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<PublicAdvertisedPrefixesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_advertised_prefixes_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_ADVERTISED_PREFIXES_V1_PUBLIC_ADVERTISED_PREFIXES_CLIENT_H
