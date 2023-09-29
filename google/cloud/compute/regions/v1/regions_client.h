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
// source: google/cloud/compute/regions/v1/regions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGIONS_V1_REGIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGIONS_V1_REGIONS_CLIENT_H

#include "google/cloud/compute/regions/v1/regions_rest_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_regions_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the regions resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/regions
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
class RegionsClient {
 public:
  explicit RegionsClient(std::shared_ptr<RegionsConnection> connection,
                         Options opts = {});
  ~RegionsClient();

  ///@{
  /// @name Copy and move support
  RegionsClient(RegionsClient const&) = default;
  RegionsClient& operator=(RegionsClient const&) = default;
  RegionsClient(RegionsClient&&) = default;
  RegionsClient& operator=(RegionsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(RegionsClient const& a, RegionsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RegionsClient const& a, RegionsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns the specified Region resource. To decrease latency for this method,
  /// you can optionally omit any unneeded information from the response by using
  /// a field mask. This practice is especially recommended for unused quota
  /// information (the `quotas` field). To exclude one or more fields, set your
  /// request's `fields` query parameter to only include the fields you need. For
  /// example, to only include the `id` and `selfLink` fields, add the query
  /// parameter `?fields=id,selfLink` to your request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regions/get
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Region])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.regions.v1.GetRegionRequest]: @cloud_cpp_reference_link{google/cloud/compute/regions/v1/regions.proto#L72}
  /// [google.cloud.cpp.compute.v1.Region]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_090.proto#L29}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Region> GetRegion(
      std::string const& project, std::string const& region, Options opts = {});

  // clang-format off
  ///
  /// Returns the specified Region resource. To decrease latency for this method,
  /// you can optionally omit any unneeded information from the response by using
  /// a field mask. This practice is especially recommended for unused quota
  /// information (the `quotas` field). To exclude one or more fields, set your
  /// request's `fields` query parameter to only include the fields you need. For
  /// example, to only include the `id` and `selfLink` fields, add the query
  /// parameter `?fields=id,selfLink` to your request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regions/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.regions.v1.GetRegionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Region])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.regions.v1.GetRegionRequest]: @cloud_cpp_reference_link{google/cloud/compute/regions/v1/regions.proto#L72}
  /// [google.cloud.cpp.compute.v1.Region]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_090.proto#L29}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Region> GetRegion(
      google::cloud::cpp::compute::regions::v1::GetRegionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of region resources available to the specified project.
  /// To decrease latency for this method, you can optionally omit any unneeded
  /// information from the response by using a field mask. This practice is
  /// especially recommended for unused quota information (the `items.quotas`
  /// field). To exclude one or more fields, set your request's `fields` query
  /// parameter to only include the fields you need. For example, to only include
  /// the `id` and `selfLink` fields, add the query parameter
  /// `?fields=id,selfLink` to your request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regions/list
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
  ///     [google.cloud.cpp.compute.v1.Region], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.regions.v1.ListRegionsRequest]: @cloud_cpp_reference_link{google/cloud/compute/regions/v1/regions.proto#L81}
  /// [google.cloud.cpp.compute.v1.Region]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_090.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::Region> ListRegions(
      std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of region resources available to the specified project.
  /// To decrease latency for this method, you can optionally omit any unneeded
  /// information from the response by using a field mask. This practice is
  /// especially recommended for unused quota information (the `items.quotas`
  /// field). To exclude one or more fields, set your request's `fields` query
  /// parameter to only include the fields you need. For example, to only include
  /// the `id` and `selfLink` fields, add the query parameter
  /// `?fields=id,selfLink` to your request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regions/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.regions.v1.ListRegionsRequest].
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
  ///     [google.cloud.cpp.compute.v1.Region], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.regions.v1.ListRegionsRequest]: @cloud_cpp_reference_link{google/cloud/compute/regions/v1/regions.proto#L81}
  /// [google.cloud.cpp.compute.v1.Region]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_090.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::Region> ListRegions(
      google::cloud::cpp::compute::regions::v1::ListRegionsRequest request,
      Options opts = {});

 private:
  std::shared_ptr<RegionsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_regions_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGIONS_V1_REGIONS_CLIENT_H
