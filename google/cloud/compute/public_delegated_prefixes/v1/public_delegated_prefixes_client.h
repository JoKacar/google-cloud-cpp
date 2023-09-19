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
// google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_PUBLIC_DELEGATED_PREFIXES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_PUBLIC_DELEGATED_PREFIXES_CLIENT_H

#include "google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes_rest_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace compute_public_delegated_prefixes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the publicDelegatedPrefixes resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/publicDelegatedPrefixes
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
class PublicDelegatedPrefixesClient {
 public:
  explicit PublicDelegatedPrefixesClient(
      std::shared_ptr<PublicDelegatedPrefixesConnection> connection,
      Options opts = {});
  ~PublicDelegatedPrefixesClient();

  ///@{
  /// @name Copy and move support
  PublicDelegatedPrefixesClient(PublicDelegatedPrefixesClient const&) = default;
  PublicDelegatedPrefixesClient& operator=(
      PublicDelegatedPrefixesClient const&) = default;
  PublicDelegatedPrefixesClient(PublicDelegatedPrefixesClient&&) = default;
  PublicDelegatedPrefixesClient& operator=(PublicDelegatedPrefixesClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(PublicDelegatedPrefixesClient const& a,
                         PublicDelegatedPrefixesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(PublicDelegatedPrefixesClient const& a,
                         PublicDelegatedPrefixesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists all PublicDelegatedPrefix resources owned by the specific project
  /// across all scopes.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicDelegatedPrefixes/aggregatedList
  ///
  /// @param project  Name of the project scoping this request.
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
  ///     [google.cloud.cpp.compute.v1.PublicDelegatedPrefixesScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_delegated_prefixes.v1.AggregatedListPublicDelegatedPrefixesRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto#L118}
  /// [google.cloud.cpp.compute.v1.PublicDelegatedPrefixesScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_089.proto#L136}
  ///
  // clang-format on
  StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                         PublicDelegatedPrefixesScopedList>>
  AggregatedListPublicDelegatedPrefixes(std::string const& project,
                                        Options opts = {});

  // clang-format off
  ///
  /// Lists all PublicDelegatedPrefix resources owned by the specific project
  /// across all scopes.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicDelegatedPrefixes/aggregatedList
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.public_delegated_prefixes.v1.AggregatedListPublicDelegatedPrefixesRequest].
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
  ///     [google.cloud.cpp.compute.v1.PublicDelegatedPrefixesScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_delegated_prefixes.v1.AggregatedListPublicDelegatedPrefixesRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto#L118}
  /// [google.cloud.cpp.compute.v1.PublicDelegatedPrefixesScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_089.proto#L136}
  ///
  // clang-format on
  StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                         PublicDelegatedPrefixesScopedList>>
  AggregatedListPublicDelegatedPrefixes(
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          AggregatedListPublicDelegatedPrefixesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified PublicDelegatedPrefix in the given region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicDelegatedPrefixes/delete
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region of this request.
  /// @param public_delegated_prefix  Name of the PublicDelegatedPrefix resource to delete.
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
  /// [google.cloud.cpp.compute.public_delegated_prefixes.v1.DeletePublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto#L192}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePublicDelegatedPrefix(std::string const& project,
                              std::string const& region,
                              std::string const& public_delegated_prefix,
                              Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified PublicDelegatedPrefix in the given region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicDelegatedPrefixes/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.public_delegated_prefixes.v1.DeletePublicDelegatedPrefixRequest].
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
  /// [google.cloud.cpp.compute.public_delegated_prefixes.v1.DeletePublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto#L192}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePublicDelegatedPrefix(
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          DeletePublicDelegatedPrefixRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified PublicDelegatedPrefix resource in the given region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicDelegatedPrefixes/get
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region of this request.
  /// @param public_delegated_prefix  Name of the PublicDelegatedPrefix resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.PublicDelegatedPrefix])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_delegated_prefixes.v1.GetPublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto#L222}
  /// [google.cloud.cpp.compute.v1.PublicDelegatedPrefix]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_088.proto#L29}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  GetPublicDelegatedPrefix(std::string const& project,
                           std::string const& region,
                           std::string const& public_delegated_prefix,
                           Options opts = {});

  // clang-format off
  ///
  /// Returns the specified PublicDelegatedPrefix resource in the given region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicDelegatedPrefixes/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.public_delegated_prefixes.v1.GetPublicDelegatedPrefixRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.PublicDelegatedPrefix])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_delegated_prefixes.v1.GetPublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto#L222}
  /// [google.cloud.cpp.compute.v1.PublicDelegatedPrefix]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_088.proto#L29}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  GetPublicDelegatedPrefix(
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          GetPublicDelegatedPrefixRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a PublicDelegatedPrefix in the specified project in the given
  /// region using the parameters that are included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicDelegatedPrefixes/insert
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region of this request.
  /// @param public_delegated_prefix_resource  The PublicDelegatedPrefix for this request.
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
  /// [google.cloud.cpp.compute.public_delegated_prefixes.v1.InsertPublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto#L234}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertPublicDelegatedPrefix(
      std::string const& project, std::string const& region,
      google::cloud::cpp::compute::v1::PublicDelegatedPrefix const&
          public_delegated_prefix_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a PublicDelegatedPrefix in the specified project in the given
  /// region using the parameters that are included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicDelegatedPrefixes/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.public_delegated_prefixes.v1.InsertPublicDelegatedPrefixRequest].
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
  /// [google.cloud.cpp.compute.public_delegated_prefixes.v1.InsertPublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto#L234}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertPublicDelegatedPrefix(
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          InsertPublicDelegatedPrefixRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists the PublicDelegatedPrefixes for a project in the given region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicDelegatedPrefixes/list
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region of this request.
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
  ///     [google.cloud.cpp.compute.v1.PublicDelegatedPrefix], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_delegated_prefixes.v1.ListPublicDelegatedPrefixesRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto#L265}
  /// [google.cloud.cpp.compute.v1.PublicDelegatedPrefix]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_088.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  ListPublicDelegatedPrefixes(std::string const& project,
                              std::string const& region, Options opts = {});

  // clang-format off
  ///
  /// Lists the PublicDelegatedPrefixes for a project in the given region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicDelegatedPrefixes/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.public_delegated_prefixes.v1.ListPublicDelegatedPrefixesRequest].
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
  ///     [google.cloud.cpp.compute.v1.PublicDelegatedPrefix], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.public_delegated_prefixes.v1.ListPublicDelegatedPrefixesRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto#L265}
  /// [google.cloud.cpp.compute.v1.PublicDelegatedPrefix]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_088.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  ListPublicDelegatedPrefixes(
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          ListPublicDelegatedPrefixesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Patches the specified PublicDelegatedPrefix resource with the data included
  /// in the request. This method supports PATCH semantics and uses JSON merge
  /// patch format and processing rules.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicDelegatedPrefixes/patch
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param public_delegated_prefix  Name of the PublicDelegatedPrefix resource to patch.
  /// @param public_delegated_prefix_resource  The PublicDelegatedPrefix for this request.
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
  /// [google.cloud.cpp.compute.public_delegated_prefixes.v1.PatchPublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto#L333}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPublicDelegatedPrefix(
      std::string const& project, std::string const& region,
      std::string const& public_delegated_prefix,
      google::cloud::cpp::compute::v1::PublicDelegatedPrefix const&
          public_delegated_prefix_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Patches the specified PublicDelegatedPrefix resource with the data included
  /// in the request. This method supports PATCH semantics and uses JSON merge
  /// patch format and processing rules.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/publicDelegatedPrefixes/patch
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.public_delegated_prefixes.v1.PatchPublicDelegatedPrefixRequest].
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
  /// [google.cloud.cpp.compute.public_delegated_prefixes.v1.PatchPublicDelegatedPrefixRequest]: @cloud_cpp_reference_link{google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto#L333}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPublicDelegatedPrefix(
      google::cloud::cpp::compute::public_delegated_prefixes::v1::
          PatchPublicDelegatedPrefixRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<PublicDelegatedPrefixesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_delegated_prefixes_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_PUBLIC_DELEGATED_PREFIXES_CLIENT_H
