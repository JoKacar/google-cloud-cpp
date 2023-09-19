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
// source: google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTP_PROXIES_V1_TARGET_HTTP_PROXIES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTP_PROXIES_V1_TARGET_HTTP_PROXIES_CLIENT_H

#include "google/cloud/compute/target_http_proxies/v1/target_http_proxies_rest_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_http_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the targetHttpProxies resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/targetHttpProxies
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
class TargetHttpProxiesClient {
 public:
  explicit TargetHttpProxiesClient(
      std::shared_ptr<TargetHttpProxiesConnection> connection,
      Options opts = {});
  ~TargetHttpProxiesClient();

  ///@{
  /// @name Copy and move support
  TargetHttpProxiesClient(TargetHttpProxiesClient const&) = default;
  TargetHttpProxiesClient& operator=(TargetHttpProxiesClient const&) = default;
  TargetHttpProxiesClient(TargetHttpProxiesClient&&) = default;
  TargetHttpProxiesClient& operator=(TargetHttpProxiesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(TargetHttpProxiesClient const& a,
                         TargetHttpProxiesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(TargetHttpProxiesClient const& a,
                         TargetHttpProxiesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Retrieves the list of all TargetHttpProxy resources, regional and global,
  /// available to the specified project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetHttpProxies/aggregatedList
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
  ///     [google.cloud.cpp.compute.v1.TargetHttpProxiesScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_http_proxies.v1.AggregatedListTargetHttpProxiesRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto#L128}
  /// [google.cloud.cpp.compute.v1.TargetHttpProxiesScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_119.proto#L26}
  ///
  // clang-format on
  StreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::TargetHttpProxiesScopedList>>
  AggregatedListTargetHttpProxies(std::string const& project,
                                  Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of all TargetHttpProxy resources, regional and global,
  /// available to the specified project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetHttpProxies/aggregatedList
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_http_proxies.v1.AggregatedListTargetHttpProxiesRequest].
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
  ///     [google.cloud.cpp.compute.v1.TargetHttpProxiesScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_http_proxies.v1.AggregatedListTargetHttpProxiesRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto#L128}
  /// [google.cloud.cpp.compute.v1.TargetHttpProxiesScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_119.proto#L26}
  ///
  // clang-format on
  StreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::TargetHttpProxiesScopedList>>
  AggregatedListTargetHttpProxies(
      google::cloud::cpp::compute::target_http_proxies::v1::
          AggregatedListTargetHttpProxiesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified TargetHttpProxy resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetHttpProxies/delete
  ///
  /// @param project  Project ID for this request.
  /// @param target_http_proxy  Name of the TargetHttpProxy resource to delete.
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
  /// [google.cloud.cpp.compute.target_http_proxies.v1.DeleteTargetHttpProxyRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto#L202}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetHttpProxy(std::string const& project,
                        std::string const& target_http_proxy,
                        Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified TargetHttpProxy resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetHttpProxies/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_http_proxies.v1.DeleteTargetHttpProxyRequest].
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
  /// [google.cloud.cpp.compute.target_http_proxies.v1.DeleteTargetHttpProxyRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto#L202}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetHttpProxy(google::cloud::cpp::compute::target_http_proxies::v1::
                            DeleteTargetHttpProxyRequest const& request,
                        Options opts = {});

  // clang-format off
  ///
  /// Returns the specified TargetHttpProxy resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetHttpProxies/get
  ///
  /// @param project  Project ID for this request.
  /// @param target_http_proxy  Name of the TargetHttpProxy resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetHttpProxy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_http_proxies.v1.GetTargetHttpProxyRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto#L226}
  /// [google.cloud.cpp.compute.v1.TargetHttpProxy]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_120.proto#L34}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxy> GetTargetHttpProxy(
      std::string const& project, std::string const& target_http_proxy,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified TargetHttpProxy resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetHttpProxies/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_http_proxies.v1.GetTargetHttpProxyRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetHttpProxy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_http_proxies.v1.GetTargetHttpProxyRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto#L226}
  /// [google.cloud.cpp.compute.v1.TargetHttpProxy]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_120.proto#L34}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxy> GetTargetHttpProxy(
      google::cloud::cpp::compute::target_http_proxies::v1::
          GetTargetHttpProxyRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a TargetHttpProxy resource in the specified project using the data
  /// included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetHttpProxies/insert
  ///
  /// @param project  Project ID for this request.
  /// @param target_http_proxy_resource  The TargetHttpProxy for this request.
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
  /// [google.cloud.cpp.compute.target_http_proxies.v1.InsertTargetHttpProxyRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto#L235}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetHttpProxy(std::string const& project,
                        google::cloud::cpp::compute::v1::TargetHttpProxy const&
                            target_http_proxy_resource,
                        Options opts = {});

  // clang-format off
  ///
  /// Creates a TargetHttpProxy resource in the specified project using the data
  /// included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetHttpProxies/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_http_proxies.v1.InsertTargetHttpProxyRequest].
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
  /// [google.cloud.cpp.compute.target_http_proxies.v1.InsertTargetHttpProxyRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto#L235}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetHttpProxy(google::cloud::cpp::compute::target_http_proxies::v1::
                            InsertTargetHttpProxyRequest const& request,
                        Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of TargetHttpProxy resources available to the specified
  /// project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetHttpProxies/list
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
  ///     [google.cloud.cpp.compute.v1.TargetHttpProxy], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_http_proxies.v1.ListTargetHttpProxiesRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto#L260}
  /// [google.cloud.cpp.compute.v1.TargetHttpProxy]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_120.proto#L34}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::TargetHttpProxy>
  ListTargetHttpProxies(std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of TargetHttpProxy resources available to the specified
  /// project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetHttpProxies/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_http_proxies.v1.ListTargetHttpProxiesRequest].
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
  ///     [google.cloud.cpp.compute.v1.TargetHttpProxy], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_http_proxies.v1.ListTargetHttpProxiesRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto#L260}
  /// [google.cloud.cpp.compute.v1.TargetHttpProxy]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_120.proto#L34}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::TargetHttpProxy>
  ListTargetHttpProxies(google::cloud::cpp::compute::target_http_proxies::v1::
                            ListTargetHttpProxiesRequest request,
                        Options opts = {});

  // clang-format off
  ///
  /// Patches the specified TargetHttpProxy resource with the data included in
  /// the request. This method supports PATCH semantics and uses JSON merge patch
  /// format and processing rules.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetHttpProxies/patch
  ///
  /// @param project  Project ID for this request.
  /// @param target_http_proxy  Name of the TargetHttpProxy resource to patch.
  /// @param target_http_proxy_resource  The TargetHttpProxy for this request.
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
  /// [google.cloud.cpp.compute.target_http_proxies.v1.PatchTargetHttpProxyRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto#L325}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchTargetHttpProxy(std::string const& project,
                       std::string const& target_http_proxy,
                       google::cloud::cpp::compute::v1::TargetHttpProxy const&
                           target_http_proxy_resource,
                       Options opts = {});

  // clang-format off
  ///
  /// Patches the specified TargetHttpProxy resource with the data included in
  /// the request. This method supports PATCH semantics and uses JSON merge patch
  /// format and processing rules.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetHttpProxies/patch
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_http_proxies.v1.PatchTargetHttpProxyRequest].
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
  /// [google.cloud.cpp.compute.target_http_proxies.v1.PatchTargetHttpProxyRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto#L325}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchTargetHttpProxy(google::cloud::cpp::compute::target_http_proxies::v1::
                           PatchTargetHttpProxyRequest const& request,
                       Options opts = {});

  // clang-format off
  ///
  /// Changes the URL map for TargetHttpProxy.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetHttpProxies/setUrlMap
  ///
  /// @param project  Project ID for this request.
  /// @param target_http_proxy  Name of the TargetHttpProxy to set a URL map for.
  /// @param url_map_reference_resource  The UrlMapReference for this request.
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
  /// [google.cloud.cpp.compute.target_http_proxies.v1.SetUrlMapRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto#L353}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetUrlMap(
      std::string const& project, std::string const& target_http_proxy,
      google::cloud::cpp::compute::v1::UrlMapReference const&
          url_map_reference_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Changes the URL map for TargetHttpProxy.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/targetHttpProxies/setUrlMap
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_http_proxies.v1.SetUrlMapRequest].
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
  /// [google.cloud.cpp.compute.target_http_proxies.v1.SetUrlMapRequest]: @cloud_cpp_reference_link{google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto#L353}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetUrlMap(
      google::cloud::cpp::compute::target_http_proxies::v1::
          SetUrlMapRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<TargetHttpProxiesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_http_proxies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTP_PROXIES_V1_TARGET_HTTP_PROXIES_CLIENT_H
