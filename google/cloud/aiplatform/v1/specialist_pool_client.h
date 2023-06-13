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
// source: google/cloud/aiplatform/v1/specialist_pool_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_SPECIALIST_POOL_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_SPECIALIST_POOL_CLIENT_H

#include "google/cloud/aiplatform/v1/specialist_pool_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// A service for creating and managing Customer SpecialistPools.
/// When customers start Data Labeling jobs, they can reuse/create Specialist
/// Pools to bring their own Specialists to label the data.
/// Customers can add/remove Managers for the Specialist Pool on Cloud console,
/// then Managers will get email notifications to manage Specialists and tasks
/// on CrowdCompute console.
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
class SpecialistPoolServiceClient {
 public:
  explicit SpecialistPoolServiceClient(
      std::shared_ptr<SpecialistPoolServiceConnection> connection,
      Options opts = {});
  ~SpecialistPoolServiceClient();

  ///@{
  /// @name Copy and move support
  SpecialistPoolServiceClient(SpecialistPoolServiceClient const&) = default;
  SpecialistPoolServiceClient& operator=(SpecialistPoolServiceClient const&) =
      default;
  SpecialistPoolServiceClient(SpecialistPoolServiceClient&&) = default;
  SpecialistPoolServiceClient& operator=(SpecialistPoolServiceClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(SpecialistPoolServiceClient const& a,
                         SpecialistPoolServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SpecialistPoolServiceClient const& a,
                         SpecialistPoolServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a SpecialistPool.
  ///
  /// @param parent  Required. The parent Project name for the new SpecialistPool.
  ///  The form is `projects/{project}/locations/{location}`.
  /// @param specialist_pool  Required. The SpecialistPool to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.aiplatform.v1.SpecialistPool] proto message.
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
  /// [google.cloud.aiplatform.v1.CreateSpecialistPoolRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool_service.proto#L109}
  /// [google.cloud.aiplatform.v1.SpecialistPool]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool.proto#L36}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::SpecialistPool>>
  CreateSpecialistPool(
      std::string const& parent,
      google::cloud::aiplatform::v1::SpecialistPool const& specialist_pool,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a SpecialistPool.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.CreateSpecialistPoolRequest].
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
  ///     [google.cloud.aiplatform.v1.SpecialistPool] proto message.
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
  /// [google.cloud.aiplatform.v1.CreateSpecialistPoolRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool_service.proto#L109}
  /// [google.cloud.aiplatform.v1.SpecialistPool]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool.proto#L36}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::SpecialistPool>>
  CreateSpecialistPool(
      google::cloud::aiplatform::v1::CreateSpecialistPoolRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets a SpecialistPool.
  ///
  /// @param name  Required. The name of the SpecialistPool resource.
  ///  The form is
  ///  `projects/{project}/locations/{location}/specialistPools/{specialist_pool}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.SpecialistPool])
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
  /// [google.cloud.aiplatform.v1.GetSpecialistPoolRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool_service.proto#L132}
  /// [google.cloud.aiplatform.v1.SpecialistPool]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool.proto#L36}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::SpecialistPool> GetSpecialistPool(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets a SpecialistPool.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.GetSpecialistPoolRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.SpecialistPool])
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
  /// [google.cloud.aiplatform.v1.GetSpecialistPoolRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool_service.proto#L132}
  /// [google.cloud.aiplatform.v1.SpecialistPool]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool.proto#L36}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::SpecialistPool> GetSpecialistPool(
      google::cloud::aiplatform::v1::GetSpecialistPoolRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists SpecialistPools in a Location.
  ///
  /// @param parent  Required. The name of the SpecialistPool's parent resource.
  ///  Format: `projects/{project}/locations/{location}`
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
  ///     [google.cloud.aiplatform.v1.SpecialistPool], or rather,
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
  /// [google.cloud.aiplatform.v1.ListSpecialistPoolsRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool_service.proto#L146}
  /// [google.cloud.aiplatform.v1.SpecialistPool]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool.proto#L36}
  ///
  // clang-format on
  StreamRange<google::cloud::aiplatform::v1::SpecialistPool>
  ListSpecialistPools(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists SpecialistPools in a Location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.ListSpecialistPoolsRequest].
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
  ///     [google.cloud.aiplatform.v1.SpecialistPool], or rather,
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
  /// [google.cloud.aiplatform.v1.ListSpecialistPoolsRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool_service.proto#L146}
  /// [google.cloud.aiplatform.v1.SpecialistPool]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool.proto#L36}
  ///
  // clang-format on
  StreamRange<google::cloud::aiplatform::v1::SpecialistPool>
  ListSpecialistPools(
      google::cloud::aiplatform::v1::ListSpecialistPoolsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a SpecialistPool as well as all Specialists in the pool.
  ///
  /// @param name  Required. The resource name of the SpecialistPool to delete. Format:
  ///  `projects/{project}/locations/{location}/specialistPools/{specialist_pool}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.aiplatform.v1.DeleteOperationMetadata] proto message.
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
  /// [google.cloud.aiplatform.v1.DeleteOperationMetadata]: @googleapis_reference_link{google/cloud/aiplatform/v1/operation.proto#L52}
  /// [google.cloud.aiplatform.v1.DeleteSpecialistPoolRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool_service.proto#L183}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteSpecialistPool(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a SpecialistPool as well as all Specialists in the pool.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.DeleteSpecialistPoolRequest].
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
  ///     [google.cloud.aiplatform.v1.DeleteOperationMetadata] proto message.
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
  /// [google.cloud.aiplatform.v1.DeleteOperationMetadata]: @googleapis_reference_link{google/cloud/aiplatform/v1/operation.proto#L52}
  /// [google.cloud.aiplatform.v1.DeleteSpecialistPoolRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool_service.proto#L183}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteSpecialistPool(
      google::cloud::aiplatform::v1::DeleteSpecialistPoolRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a SpecialistPool.
  ///
  /// @param specialist_pool  Required. The SpecialistPool which replaces the resource on the server.
  /// @param update_mask  Required. The update mask applies to the resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.aiplatform.v1.SpecialistPool] proto message.
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
  /// [google.cloud.aiplatform.v1.SpecialistPool]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool.proto#L36}
  /// [google.cloud.aiplatform.v1.UpdateSpecialistPoolRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool_service.proto#L201}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::SpecialistPool>>
  UpdateSpecialistPool(
      google::cloud::aiplatform::v1::SpecialistPool const& specialist_pool,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates a SpecialistPool.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.UpdateSpecialistPoolRequest].
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
  ///     [google.cloud.aiplatform.v1.SpecialistPool] proto message.
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
  /// [google.cloud.aiplatform.v1.SpecialistPool]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool.proto#L36}
  /// [google.cloud.aiplatform.v1.UpdateSpecialistPoolRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/specialist_pool_service.proto#L201}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::SpecialistPool>>
  UpdateSpecialistPool(
      google::cloud::aiplatform::v1::UpdateSpecialistPoolRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<SpecialistPoolServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_SPECIALIST_POOL_CLIENT_H
