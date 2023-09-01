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
// google/cloud/compute/global_organization_operations/v1/global_organization_operations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ORGANIZATION_OPERATIONS_V1_GLOBAL_ORGANIZATION_OPERATIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ORGANIZATION_OPERATIONS_V1_GLOBAL_ORGANIZATION_OPERATIONS_CLIENT_H

#include "google/cloud/compute/global_organization_operations/v1/global_organization_operations_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_organization_operations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the globalOrganizationOperations resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/globalOrganizationOperations
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
class GlobalOrganizationOperationsClient {
 public:
  explicit GlobalOrganizationOperationsClient(
      ExperimentalTag,
      std::shared_ptr<GlobalOrganizationOperationsConnection> connection,
      Options opts = {});
  ~GlobalOrganizationOperationsClient();

  ///@{
  /// @name Copy and move support
  GlobalOrganizationOperationsClient(
      GlobalOrganizationOperationsClient const&) = default;
  GlobalOrganizationOperationsClient& operator=(
      GlobalOrganizationOperationsClient const&) = default;
  GlobalOrganizationOperationsClient(GlobalOrganizationOperationsClient&&) =
      default;
  GlobalOrganizationOperationsClient& operator=(
      GlobalOrganizationOperationsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(GlobalOrganizationOperationsClient const& a,
                         GlobalOrganizationOperationsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(GlobalOrganizationOperationsClient const& a,
                         GlobalOrganizationOperationsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified Operations resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalOrganizationOperations/delete
  ///
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
  /// [google.cloud.cpp.compute.global_organization_operations.v1.DeleteGlobalOrganizationOperationsRequest]: @googleapis_reference_link{google/cloud/compute/global_organization_operations/v1/global_organization_operations.proto#L75}
  ///
  // clang-format on
  Status DeleteGlobalOrganizationOperations(std::string const& operation,
                                            Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified Operations resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalOrganizationOperations/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_organization_operations.v1.DeleteGlobalOrganizationOperationsRequest].
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
  /// [google.cloud.cpp.compute.global_organization_operations.v1.DeleteGlobalOrganizationOperationsRequest]: @googleapis_reference_link{google/cloud/compute/global_organization_operations/v1/global_organization_operations.proto#L75}
  ///
  // clang-format on
  Status DeleteGlobalOrganizationOperations(
      google::cloud::cpp::compute::global_organization_operations::v1::
          DeleteGlobalOrganizationOperationsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified Operations resource. Gets a list of operations by
  /// making a `list()` request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalOrganizationOperations/get
  ///
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
  /// [google.cloud.cpp.compute.global_organization_operations.v1.GetGlobalOrganizationOperationsRequest]: @googleapis_reference_link{google/cloud/compute/global_organization_operations/v1/global_organization_operations.proto#L84}
  /// [google.cloud.cpp.compute.v1.Operation]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_029.proto#L98}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation>
  GetGlobalOrganizationOperations(std::string const& operation,
                                  Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified Operations resource. Gets a list of operations by
  /// making a `list()` request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalOrganizationOperations/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_organization_operations.v1.GetGlobalOrganizationOperationsRequest].
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
  /// [google.cloud.cpp.compute.global_organization_operations.v1.GetGlobalOrganizationOperationsRequest]: @googleapis_reference_link{google/cloud/compute/global_organization_operations/v1/global_organization_operations.proto#L84}
  /// [google.cloud.cpp.compute.v1.Operation]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_029.proto#L98}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation>
  GetGlobalOrganizationOperations(
      google::cloud::cpp::compute::global_organization_operations::v1::
          GetGlobalOrganizationOperationsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of Operation resources contained within the specified
  /// organization.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/globalOrganizationOperations/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_organization_operations.v1.ListGlobalOrganizationOperationsRequest].
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
  /// [google.cloud.cpp.compute.global_organization_operations.v1.ListGlobalOrganizationOperationsRequest]: @googleapis_reference_link{google/cloud/compute/global_organization_operations/v1/global_organization_operations.proto#L93}
  /// [google.cloud.cpp.compute.v1.Operation]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_029.proto#L98}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::Operation>
  ListGlobalOrganizationOperations(
      google::cloud::cpp::compute::global_organization_operations::v1::
          ListGlobalOrganizationOperationsRequest request,
      Options opts = {});

 private:
  std::shared_ptr<GlobalOrganizationOperationsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_organization_operations_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ORGANIZATION_OPERATIONS_V1_GLOBAL_ORGANIZATION_OPERATIONS_CLIENT_H
