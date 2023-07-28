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
// source: google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_TCP_PROXIES_V1_TARGET_TCP_PROXIES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_TCP_PROXIES_V1_TARGET_TCP_PROXIES_CLIENT_H

#include "google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_tcp_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the targetTcpProxies resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/targetTcpProxies
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
class TargetTcpProxiesClient {
 public:
  explicit TargetTcpProxiesClient(
      ExperimentalTag, std::shared_ptr<TargetTcpProxiesConnection> connection,
      Options opts = {});
  ~TargetTcpProxiesClient();

  ///@{
  /// @name Copy and move support
  TargetTcpProxiesClient(TargetTcpProxiesClient const&) = default;
  TargetTcpProxiesClient& operator=(TargetTcpProxiesClient const&) = default;
  TargetTcpProxiesClient(TargetTcpProxiesClient&&) = default;
  TargetTcpProxiesClient& operator=(TargetTcpProxiesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(TargetTcpProxiesClient const& a,
                         TargetTcpProxiesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(TargetTcpProxiesClient const& a,
                         TargetTcpProxiesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Retrieves the list of all TargetTcpProxy resources, regional and global,
  /// available to the specified project.
  ///
  /// @param project  Name of the project scoping this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetTcpProxyAggregatedList])
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
  /// [google.cloud.cpp.compute.target_tcp_proxies.v1.AggregatedListTargetTcpProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto#L116}
  /// [google.cloud.cpp.compute.v1.TargetTcpProxyAggregatedList]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L29622}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxyAggregatedList>
  AggregatedListTargetTcpProxies(std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of all TargetTcpProxy resources, regional and global,
  /// available to the specified project.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_tcp_proxies.v1.AggregatedListTargetTcpProxiesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetTcpProxyAggregatedList])
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
  /// [google.cloud.cpp.compute.target_tcp_proxies.v1.AggregatedListTargetTcpProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto#L116}
  /// [google.cloud.cpp.compute.v1.TargetTcpProxyAggregatedList]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L29622}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxyAggregatedList>
  AggregatedListTargetTcpProxies(
      google::cloud::cpp::compute::target_tcp_proxies::v1::
          AggregatedListTargetTcpProxiesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified TargetTcpProxy resource.
  ///
  /// @param project  Project ID for this request.
  /// @param target_tcp_proxy  Name of the TargetTcpProxy resource to delete.
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
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_tcp_proxies.v1.DeleteTargetTcpProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto#L190}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetTcpProxies(std::string const& project,
                         std::string const& target_tcp_proxy,
                         Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified TargetTcpProxy resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_tcp_proxies.v1.DeleteTargetTcpProxiesRequest].
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
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_tcp_proxies.v1.DeleteTargetTcpProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto#L190}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetTcpProxies(google::cloud::cpp::compute::target_tcp_proxies::v1::
                             DeleteTargetTcpProxiesRequest const& request,
                         Options opts = {});

  // clang-format off
  ///
  /// Returns the specified TargetTcpProxy resource.
  ///
  /// @param project  Project ID for this request.
  /// @param target_tcp_proxy  Name of the TargetTcpProxy resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetTcpProxy])
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
  /// [google.cloud.cpp.compute.target_tcp_proxies.v1.GetTargetTcpProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto#L214}
  /// [google.cloud.cpp.compute.v1.TargetTcpProxy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L29570}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy> GetTargetTcpProxies(
      std::string const& project, std::string const& target_tcp_proxy,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified TargetTcpProxy resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_tcp_proxies.v1.GetTargetTcpProxiesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetTcpProxy])
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
  /// [google.cloud.cpp.compute.target_tcp_proxies.v1.GetTargetTcpProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto#L214}
  /// [google.cloud.cpp.compute.v1.TargetTcpProxy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L29570}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy> GetTargetTcpProxies(
      google::cloud::cpp::compute::target_tcp_proxies::v1::
          GetTargetTcpProxiesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a TargetTcpProxy resource in the specified project using the data
  /// included in the request.
  ///
  /// @param project  Project ID for this request.
  /// @param target_tcp_proxy_resource  The TargetTcpProxy for this request.
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
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_tcp_proxies.v1.InsertTargetTcpProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto#L223}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetTcpProxies(std::string const& project,
                         google::cloud::cpp::compute::v1::TargetTcpProxy const&
                             target_tcp_proxy_resource,
                         Options opts = {});

  // clang-format off
  ///
  /// Creates a TargetTcpProxy resource in the specified project using the data
  /// included in the request.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_tcp_proxies.v1.InsertTargetTcpProxiesRequest].
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
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_tcp_proxies.v1.InsertTargetTcpProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto#L223}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetTcpProxies(google::cloud::cpp::compute::target_tcp_proxies::v1::
                             InsertTargetTcpProxiesRequest const& request,
                         Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of TargetTcpProxy resources available to the specified
  /// project.
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
  ///     [google.cloud.cpp.compute.v1.TargetTcpProxy], or rather,
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
  /// [google.cloud.cpp.compute.target_tcp_proxies.v1.ListTargetTcpProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto#L248}
  /// [google.cloud.cpp.compute.v1.TargetTcpProxy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L29570}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::TargetTcpProxy>
  ListTargetTcpProxies(std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of TargetTcpProxy resources available to the specified
  /// project.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_tcp_proxies.v1.ListTargetTcpProxiesRequest].
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
  ///     [google.cloud.cpp.compute.v1.TargetTcpProxy], or rather,
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
  /// [google.cloud.cpp.compute.target_tcp_proxies.v1.ListTargetTcpProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto#L248}
  /// [google.cloud.cpp.compute.v1.TargetTcpProxy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L29570}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::TargetTcpProxy>
  ListTargetTcpProxies(google::cloud::cpp::compute::target_tcp_proxies::v1::
                           ListTargetTcpProxiesRequest request,
                       Options opts = {});

  // clang-format off
  ///
  /// Changes the BackendService for TargetTcpProxy.
  ///
  /// @param project  Project ID for this request.
  /// @param target_tcp_proxy  Name of the TargetTcpProxy resource whose BackendService resource is to be
  ///  set.
  /// @param target_tcp_proxies_set_backend_service_request_resource  The TargetTcpProxiesSetBackendServiceRequest for this request.
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
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_tcp_proxies.v1.SetBackendServiceRequest]: @googleapis_reference_link{google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto#L313}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetBackendService(
      std::string const& project, std::string const& target_tcp_proxy,
      google::cloud::cpp::compute::v1::
          TargetTcpProxiesSetBackendServiceRequest const&
              target_tcp_proxies_set_backend_service_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Changes the BackendService for TargetTcpProxy.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_tcp_proxies.v1.SetBackendServiceRequest].
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
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_tcp_proxies.v1.SetBackendServiceRequest]: @googleapis_reference_link{google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto#L313}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetBackendService(google::cloud::cpp::compute::target_tcp_proxies::v1::
                        SetBackendServiceRequest const& request,
                    Options opts = {});

  // clang-format off
  ///
  /// Changes the ProxyHeaderType for TargetTcpProxy.
  ///
  /// @param project  Project ID for this request.
  /// @param target_tcp_proxy  Name of the TargetTcpProxy resource whose ProxyHeader is to be set.
  /// @param target_tcp_proxies_set_proxy_header_request_resource  The TargetTcpProxiesSetProxyHeaderRequest for this request.
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
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_tcp_proxies.v1.SetProxyHeaderRequest]: @googleapis_reference_link{google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto#L343}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetProxyHeader(
      std::string const& project, std::string const& target_tcp_proxy,
      google::cloud::cpp::compute::v1::
          TargetTcpProxiesSetProxyHeaderRequest const&
              target_tcp_proxies_set_proxy_header_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Changes the ProxyHeaderType for TargetTcpProxy.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_tcp_proxies.v1.SetProxyHeaderRequest].
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
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.target_tcp_proxies.v1.SetProxyHeaderRequest]: @googleapis_reference_link{google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto#L343}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetProxyHeader(
      google::cloud::cpp::compute::target_tcp_proxies::v1::
          SetProxyHeaderRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<TargetTcpProxiesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_tcp_proxies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_TCP_PROXIES_V1_TARGET_TCP_PROXIES_CLIENT_H
