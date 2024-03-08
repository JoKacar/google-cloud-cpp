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
// source: google/cloud/compute/accelerator_types/v1/accelerator_types.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ACCELERATOR_TYPES_V1_ACCELERATOR_TYPES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ACCELERATOR_TYPES_V1_ACCELERATOR_TYPES_CLIENT_H

#include "google/cloud/compute/accelerator_types/v1/accelerator_types_rest_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_accelerator_types_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the acceleratorTypes resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/acceleratorTypes
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
class AcceleratorTypesClient {
 public:
  explicit AcceleratorTypesClient(
      std::shared_ptr<AcceleratorTypesConnection> connection,
      Options opts = {});
  ~AcceleratorTypesClient();

  ///@{
  /// @name Copy and move support
  AcceleratorTypesClient(AcceleratorTypesClient const&) = default;
  AcceleratorTypesClient& operator=(AcceleratorTypesClient const&) = default;
  AcceleratorTypesClient(AcceleratorTypesClient&&) = default;
  AcceleratorTypesClient& operator=(AcceleratorTypesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(AcceleratorTypesClient const& a,
                         AcceleratorTypesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AcceleratorTypesClient const& a,
                         AcceleratorTypesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Retrieves an aggregated list of accelerator types. To prevent failure,
  /// Google recommends that you set the `returnPartialSuccess` parameter to
  /// `true`.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/acceleratorTypes/aggregatedList
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
  ///     [google.cloud.cpp.compute.v1.AcceleratorTypesScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.accelerator_types.v1.AggregatedListAcceleratorTypesRequest]: @cloud_cpp_reference_link{google/cloud/compute/accelerator_types/v1/accelerator_types.proto#L73}
  /// [google.cloud.cpp.compute.v1.AcceleratorTypesScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_002.proto#L281}
  ///
  // clang-format on
  StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::AcceleratorTypesScopedList>>
  AggregatedListAcceleratorTypes(std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves an aggregated list of accelerator types. To prevent failure,
  /// Google recommends that you set the `returnPartialSuccess` parameter to
  /// `true`.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/acceleratorTypes/aggregatedList
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.accelerator_types.v1.AggregatedListAcceleratorTypesRequest].
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
  ///     [google.cloud.cpp.compute.v1.AcceleratorTypesScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.accelerator_types.v1.AggregatedListAcceleratorTypesRequest]: @cloud_cpp_reference_link{google/cloud/compute/accelerator_types/v1/accelerator_types.proto#L73}
  /// [google.cloud.cpp.compute.v1.AcceleratorTypesScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_002.proto#L281}
  ///
  // clang-format on
  StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::AcceleratorTypesScopedList>>
  AggregatedListAcceleratorTypes(
      google::cloud::cpp::compute::accelerator_types::v1::
          AggregatedListAcceleratorTypesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified accelerator type.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/acceleratorTypes/get
  ///
  /// @param project  Project ID for this request.
  /// @param zone  The name of the zone for this request.
  /// @param accelerator_type  Name of the accelerator type to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.AcceleratorType])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.accelerator_types.v1.GetAcceleratorTypeRequest]: @cloud_cpp_reference_link{google/cloud/compute/accelerator_types/v1/accelerator_types.proto#L155}
  /// [google.cloud.cpp.compute.v1.AcceleratorType]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_002.proto#L30}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::AcceleratorType> GetAcceleratorType(
      std::string const& project, std::string const& zone,
      std::string const& accelerator_type, Options opts = {});

  // clang-format off
  ///
  /// Returns the specified accelerator type.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/acceleratorTypes/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.accelerator_types.v1.GetAcceleratorTypeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.AcceleratorType])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.accelerator_types.v1.GetAcceleratorTypeRequest]: @cloud_cpp_reference_link{google/cloud/compute/accelerator_types/v1/accelerator_types.proto#L155}
  /// [google.cloud.cpp.compute.v1.AcceleratorType]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_002.proto#L30}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::AcceleratorType> GetAcceleratorType(
      google::cloud::cpp::compute::accelerator_types::v1::
          GetAcceleratorTypeRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of accelerator types that are available to the specified
  /// project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/acceleratorTypes/list
  ///
  /// @param project  Project ID for this request.
  /// @param zone  The name of the zone for this request.
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
  ///     [google.cloud.cpp.compute.v1.AcceleratorType], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.accelerator_types.v1.ListAcceleratorTypesRequest]: @cloud_cpp_reference_link{google/cloud/compute/accelerator_types/v1/accelerator_types.proto#L169}
  /// [google.cloud.cpp.compute.v1.AcceleratorType]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_002.proto#L30}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::AcceleratorType>
  ListAcceleratorTypes(std::string const& project, std::string const& zone,
                       Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of accelerator types that are available to the specified
  /// project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/acceleratorTypes/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.accelerator_types.v1.ListAcceleratorTypesRequest].
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
  ///     [google.cloud.cpp.compute.v1.AcceleratorType], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.accelerator_types.v1.ListAcceleratorTypesRequest]: @cloud_cpp_reference_link{google/cloud/compute/accelerator_types/v1/accelerator_types.proto#L169}
  /// [google.cloud.cpp.compute.v1.AcceleratorType]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_002.proto#L30}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::AcceleratorType>
  ListAcceleratorTypes(google::cloud::cpp::compute::accelerator_types::v1::
                           ListAcceleratorTypesRequest request,
                       Options opts = {});

 private:
  std::shared_ptr<AcceleratorTypesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_accelerator_types_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ACCELERATOR_TYPES_V1_ACCELERATOR_TYPES_CLIENT_H
