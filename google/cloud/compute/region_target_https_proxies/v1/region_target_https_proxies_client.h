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
// google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_HTTPS_PROXIES_V1_REGION_TARGET_HTTPS_PROXIES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_HTTPS_PROXIES_V1_REGION_TARGET_HTTPS_PROXIES_CLIENT_H

#include "google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_target_https_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the regionTargetHttpsProxies resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/regionTargetHttpsProxies
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
class RegionTargetHttpsProxiesClient {
 public:
  explicit RegionTargetHttpsProxiesClient(
      ExperimentalTag,
      std::shared_ptr<RegionTargetHttpsProxiesConnection> connection,
      Options opts = {});
  ~RegionTargetHttpsProxiesClient();

  ///@{
  /// @name Copy and move support
  RegionTargetHttpsProxiesClient(RegionTargetHttpsProxiesClient const&) =
      default;
  RegionTargetHttpsProxiesClient& operator=(
      RegionTargetHttpsProxiesClient const&) = default;
  RegionTargetHttpsProxiesClient(RegionTargetHttpsProxiesClient&&) = default;
  RegionTargetHttpsProxiesClient& operator=(RegionTargetHttpsProxiesClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(RegionTargetHttpsProxiesClient const& a,
                         RegionTargetHttpsProxiesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RegionTargetHttpsProxiesClient const& a,
                         RegionTargetHttpsProxiesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified TargetHttpsProxy resource.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param target_https_proxy  Name of the TargetHttpsProxy resource to delete.
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
  /// [google.cloud.cpp.compute.region_target_https_proxies.v1.DeleteRegionTargetHttpsProxiesRequest]: @googleapis_reference_link{google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto#L124}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionTargetHttpsProxies(std::string const& project,
                                 std::string const& region,
                                 std::string const& target_https_proxy,
                                 Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified TargetHttpsProxy resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_target_https_proxies.v1.DeleteRegionTargetHttpsProxiesRequest].
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
  /// [google.cloud.cpp.compute.region_target_https_proxies.v1.DeleteRegionTargetHttpsProxiesRequest]: @googleapis_reference_link{google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto#L124}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionTargetHttpsProxies(
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          DeleteRegionTargetHttpsProxiesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified TargetHttpsProxy resource in the specified region.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param target_https_proxy  Name of the TargetHttpsProxy resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetHttpsProxy])
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
  /// [google.cloud.cpp.compute.region_target_https_proxies.v1.GetRegionTargetHttpsProxiesRequest]: @googleapis_reference_link{google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto#L154}
  /// [google.cloud.cpp.compute.v1.TargetHttpsProxy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_122.proto#L33}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
  GetRegionTargetHttpsProxies(std::string const& project,
                              std::string const& region,
                              std::string const& target_https_proxy,
                              Options opts = {});

  // clang-format off
  ///
  /// Returns the specified TargetHttpsProxy resource in the specified region.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_target_https_proxies.v1.GetRegionTargetHttpsProxiesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetHttpsProxy])
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
  /// [google.cloud.cpp.compute.region_target_https_proxies.v1.GetRegionTargetHttpsProxiesRequest]: @googleapis_reference_link{google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto#L154}
  /// [google.cloud.cpp.compute.v1.TargetHttpsProxy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_122.proto#L33}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
  GetRegionTargetHttpsProxies(
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          GetRegionTargetHttpsProxiesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a TargetHttpsProxy resource in the specified project and region
  /// using the data included in the request.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param target_https_proxy_resource  The TargetHttpsProxy for this request.
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
  /// [google.cloud.cpp.compute.region_target_https_proxies.v1.InsertRegionTargetHttpsProxiesRequest]: @googleapis_reference_link{google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto#L166}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionTargetHttpsProxies(
      std::string const& project, std::string const& region,
      google::cloud::cpp::compute::v1::TargetHttpsProxy const&
          target_https_proxy_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a TargetHttpsProxy resource in the specified project and region
  /// using the data included in the request.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_target_https_proxies.v1.InsertRegionTargetHttpsProxiesRequest].
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
  /// [google.cloud.cpp.compute.region_target_https_proxies.v1.InsertRegionTargetHttpsProxiesRequest]: @googleapis_reference_link{google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto#L166}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionTargetHttpsProxies(
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          InsertRegionTargetHttpsProxiesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of TargetHttpsProxy resources available to the specified
  /// project in the specified region.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
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
  ///     [google.cloud.cpp.compute.v1.TargetHttpsProxy], or rather,
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
  /// [google.cloud.cpp.compute.region_target_https_proxies.v1.ListRegionTargetHttpsProxiesRequest]: @googleapis_reference_link{google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto#L197}
  /// [google.cloud.cpp.compute.v1.TargetHttpsProxy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_122.proto#L33}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::TargetHttpsProxy>
  ListRegionTargetHttpsProxies(std::string const& project,
                               std::string const& region, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of TargetHttpsProxy resources available to the specified
  /// project in the specified region.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_target_https_proxies.v1.ListRegionTargetHttpsProxiesRequest].
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
  ///     [google.cloud.cpp.compute.v1.TargetHttpsProxy], or rather,
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
  /// [google.cloud.cpp.compute.region_target_https_proxies.v1.ListRegionTargetHttpsProxiesRequest]: @googleapis_reference_link{google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto#L197}
  /// [google.cloud.cpp.compute.v1.TargetHttpsProxy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_122.proto#L33}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::TargetHttpsProxy>
  ListRegionTargetHttpsProxies(
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          ListRegionTargetHttpsProxiesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Patches the specified regional TargetHttpsProxy resource with the data
  /// included in the request. This method supports PATCH semantics and uses JSON
  /// merge patch format and processing rules.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param target_https_proxy  Name of the TargetHttpsProxy resource to patch.
  /// @param target_https_proxy_resource  The TargetHttpsProxy for this request.
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
  /// [google.cloud.cpp.compute.region_target_https_proxies.v1.PatchRegionTargetHttpsProxiesRequest]: @googleapis_reference_link{google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto#L265}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRegionTargetHttpsProxies(
      std::string const& project, std::string const& region,
      std::string const& target_https_proxy,
      google::cloud::cpp::compute::v1::TargetHttpsProxy const&
          target_https_proxy_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Patches the specified regional TargetHttpsProxy resource with the data
  /// included in the request. This method supports PATCH semantics and uses JSON
  /// merge patch format and processing rules.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_target_https_proxies.v1.PatchRegionTargetHttpsProxiesRequest].
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
  /// [google.cloud.cpp.compute.region_target_https_proxies.v1.PatchRegionTargetHttpsProxiesRequest]: @googleapis_reference_link{google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto#L265}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRegionTargetHttpsProxies(
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          PatchRegionTargetHttpsProxiesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Replaces SslCertificates for TargetHttpsProxy.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param target_https_proxy  Name of the TargetHttpsProxy resource to set an SslCertificates resource
  ///  for.
  /// @param region_target_https_proxies_set_ssl_certificates_request_resource  The RegionTargetHttpsProxiesSetSslCertificatesRequest for this request.
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
  /// [google.cloud.cpp.compute.region_target_https_proxies.v1.SetSslCertificatesRequest]: @googleapis_reference_link{google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto#L299}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSslCertificates(
      std::string const& project, std::string const& region,
      std::string const& target_https_proxy,
      google::cloud::cpp::compute::v1::
          RegionTargetHttpsProxiesSetSslCertificatesRequest const&
              region_target_https_proxies_set_ssl_certificates_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Replaces SslCertificates for TargetHttpsProxy.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_target_https_proxies.v1.SetSslCertificatesRequest].
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
  /// [google.cloud.cpp.compute.region_target_https_proxies.v1.SetSslCertificatesRequest]: @googleapis_reference_link{google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto#L299}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSslCertificates(google::cloud::cpp::compute::region_target_https_proxies::
                         v1::SetSslCertificatesRequest const& request,
                     Options opts = {});

  // clang-format off
  ///
  /// Changes the URL map for TargetHttpsProxy.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param target_https_proxy  Name of the TargetHttpsProxy to set a URL map for.
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
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_target_https_proxies.v1.SetUrlMapRequest]: @googleapis_reference_link{google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto#L336}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetUrlMap(
      std::string const& project, std::string const& region,
      std::string const& target_https_proxy,
      google::cloud::cpp::compute::v1::UrlMapReference const&
          url_map_reference_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Changes the URL map for TargetHttpsProxy.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_target_https_proxies.v1.SetUrlMapRequest].
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
  /// [google.cloud.cpp.compute.region_target_https_proxies.v1.SetUrlMapRequest]: @googleapis_reference_link{google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto#L336}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetUrlMap(
      google::cloud::cpp::compute::region_target_https_proxies::v1::
          SetUrlMapRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<RegionTargetHttpsProxiesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_target_https_proxies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_HTTPS_PROXIES_V1_REGION_TARGET_HTTPS_PROXIES_CLIENT_H
