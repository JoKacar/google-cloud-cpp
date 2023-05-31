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
// source: google/cloud/compute/region_operations/v1/region_operations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_OPERATIONS_V1_REGION_OPERATIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_OPERATIONS_V1_REGION_OPERATIONS_CLIENT_H

#include "google/cloud/compute/region_operations/v1/region_operations_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_operations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the regionOperations resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/regionOperations
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
class RegionOperationsClient {
 public:
  explicit RegionOperationsClient(ExperimentalTag, std::shared_ptr<RegionOperationsConnection> connection, Options opts = {});
  ~RegionOperationsClient();

  ///@{
  /// @name Copy and move support
  RegionOperationsClient(RegionOperationsClient const&) = default;
  RegionOperationsClient& operator=(RegionOperationsClient const&) = default;
  RegionOperationsClient(RegionOperationsClient&&) = default;
  RegionOperationsClient& operator=(RegionOperationsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(RegionOperationsClient const& a, RegionOperationsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RegionOperationsClient const& a, RegionOperationsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified region-specific Operations resource.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param operation  Name of the Operations resource to delete.
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
  /// [google.cloud.cpp.compute.region_operations.v1.DeleteRegionOperationsRequest]: @googleapis_reference_link{google/cloud/compute/region_operations/v1/region_operations.proto#L81}
  ///
  // clang-format on
  Status
  DeleteRegionOperations(std::string const& project, std::string const& region, std::string const& operation, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified region-specific Operations resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_operations.v1.DeleteRegionOperationsRequest].
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
  /// [google.cloud.cpp.compute.region_operations.v1.DeleteRegionOperationsRequest]: @googleapis_reference_link{google/cloud/compute/region_operations/v1/region_operations.proto#L81}
  ///
  // clang-format on
  Status
  DeleteRegionOperations(google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified region-specific Operations resource.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param operation  Name of the Operations resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Operation])
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
  /// [google.cloud.cpp.compute.region_operations.v1.GetRegionOperationsRequest]: @googleapis_reference_link{google/cloud/compute/region_operations/v1/region_operations.proto#L93}
  /// [google.cloud.cpp.compute.v1.Operation]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L17443}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation>
  GetRegionOperations(std::string const& project, std::string const& region, std::string const& operation, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified region-specific Operations resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_operations.v1.GetRegionOperationsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Operation])
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
  /// [google.cloud.cpp.compute.region_operations.v1.GetRegionOperationsRequest]: @googleapis_reference_link{google/cloud/compute/region_operations/v1/region_operations.proto#L93}
  /// [google.cloud.cpp.compute.v1.Operation]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L17443}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation>
  GetRegionOperations(google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of Operation resources contained within the specified
  /// region.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
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
  ///     [google.cloud.cpp.compute.v1.Operation], or rather,
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
  /// [google.cloud.cpp.compute.region_operations.v1.ListRegionOperationsRequest]: @googleapis_reference_link{google/cloud/compute/region_operations/v1/region_operations.proto#L105}
  /// [google.cloud.cpp.compute.v1.Operation]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L17443}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::Operation>
  ListRegionOperations(std::string const& project, std::string const& region, Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of Operation resources contained within the specified
  /// region.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_operations.v1.ListRegionOperationsRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation], or rather,
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
  /// [google.cloud.cpp.compute.region_operations.v1.ListRegionOperationsRequest]: @googleapis_reference_link{google/cloud/compute/region_operations/v1/region_operations.proto#L105}
  /// [google.cloud.cpp.compute.v1.Operation]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L17443}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::Operation>
  ListRegionOperations(google::cloud::cpp::compute::region_operations::v1::ListRegionOperationsRequest request, Options opts = {});

  // clang-format off
  ///
  /// Waits for the specified Operation resource to return as `DONE` or for the
  /// request to approach the 2 minute deadline, and retrieves the specified
  /// Operation resource. This method differs from the `GET` method in that it
  /// waits for no more than the default deadline (2 minutes) and then returns
  /// the current state of the operation, which might be `DONE` or still in
  /// progress. This method is called on a best-effort basis. Specifically: - In
  /// uncommon cases, when the server is overloaded, the request might return
  /// before the default deadline is reached, or might return after zero seconds.
  /// - If the default deadline is reached, there is no guarantee that the
  /// operation is actually done when the method returns. Be prepared to retry if
  /// the operation is not `DONE`. 
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param operation  Name of the Operations resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Operation])
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
  /// [google.cloud.cpp.compute.region_operations.v1.WaitRequest]: @googleapis_reference_link{google/cloud/compute/region_operations/v1/region_operations.proto#L173}
  /// [google.cloud.cpp.compute.v1.Operation]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L17443}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation>
  Wait(std::string const& project, std::string const& region, std::string const& operation, Options opts = {});

  // clang-format off
  ///
  /// Waits for the specified Operation resource to return as `DONE` or for the
  /// request to approach the 2 minute deadline, and retrieves the specified
  /// Operation resource. This method differs from the `GET` method in that it
  /// waits for no more than the default deadline (2 minutes) and then returns
  /// the current state of the operation, which might be `DONE` or still in
  /// progress. This method is called on a best-effort basis. Specifically: - In
  /// uncommon cases, when the server is overloaded, the request might return
  /// before the default deadline is reached, or might return after zero seconds.
  /// - If the default deadline is reached, there is no guarantee that the
  /// operation is actually done when the method returns. Be prepared to retry if
  /// the operation is not `DONE`. 
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_operations.v1.WaitRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Operation])
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
  /// [google.cloud.cpp.compute.region_operations.v1.WaitRequest]: @googleapis_reference_link{google/cloud/compute/region_operations/v1/region_operations.proto#L173}
  /// [google.cloud.cpp.compute.v1.Operation]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L17443}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation>
  Wait(google::cloud::cpp::compute::region_operations::v1::WaitRequest const& request, Options opts = {});

 private:
  std::shared_ptr<RegionOperationsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_operations_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_OPERATIONS_V1_REGION_OPERATIONS_CLIENT_H
