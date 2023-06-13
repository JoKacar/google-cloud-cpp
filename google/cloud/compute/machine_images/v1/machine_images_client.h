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
// source: google/cloud/compute/machine_images/v1/machine_images.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_MACHINE_IMAGES_V1_MACHINE_IMAGES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_MACHINE_IMAGES_V1_MACHINE_IMAGES_CLIENT_H

#include "google/cloud/compute/machine_images/v1/machine_images_rest_connection.h"
#include "google/cloud/experimental_tag.h"
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
namespace compute_machine_images_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the machineImages resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/machineImages
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
class MachineImagesClient {
 public:
  explicit MachineImagesClient(
      ExperimentalTag, std::shared_ptr<MachineImagesConnection> connection,
      Options opts = {});
  ~MachineImagesClient();

  ///@{
  /// @name Copy and move support
  MachineImagesClient(MachineImagesClient const&) = default;
  MachineImagesClient& operator=(MachineImagesClient const&) = default;
  MachineImagesClient(MachineImagesClient&&) = default;
  MachineImagesClient& operator=(MachineImagesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(MachineImagesClient const& a,
                         MachineImagesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(MachineImagesClient const& a,
                         MachineImagesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified machine image. Deleting a machine image is permanent
  /// and cannot be undone.
  ///
  /// @param project  Project ID for this request.
  /// @param machine_image  The name of the machine image to delete.
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
  /// [google.cloud.cpp.compute.machine_images.v1.DeleteMachineImagesRequest]: @googleapis_reference_link{google/cloud/compute/machine_images/v1/machine_images.proto#L118}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteMachineImages(std::string const& project,
                      std::string const& machine_image, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified machine image. Deleting a machine image is permanent
  /// and cannot be undone.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.machine_images.v1.DeleteMachineImagesRequest].
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
  /// [google.cloud.cpp.compute.machine_images.v1.DeleteMachineImagesRequest]: @googleapis_reference_link{google/cloud/compute/machine_images/v1/machine_images.proto#L118}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteMachineImages(google::cloud::cpp::compute::machine_images::v1::
                          DeleteMachineImagesRequest const& request,
                      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified machine image.
  ///
  /// @param project  Project ID for this request.
  /// @param machine_image  The name of the machine image.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.MachineImage])
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
  /// [google.cloud.cpp.compute.machine_images.v1.GetMachineImagesRequest]: @googleapis_reference_link{google/cloud/compute/machine_images/v1/machine_images.proto#L154}
  /// [google.cloud.cpp.compute.v1.MachineImage]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L13402}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::MachineImage> GetMachineImages(
      std::string const& project, std::string const& machine_image,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified machine image.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.machine_images.v1.GetMachineImagesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.MachineImage])
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
  /// [google.cloud.cpp.compute.machine_images.v1.GetMachineImagesRequest]: @googleapis_reference_link{google/cloud/compute/machine_images/v1/machine_images.proto#L154}
  /// [google.cloud.cpp.compute.v1.MachineImage]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L13402}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::MachineImage> GetMachineImages(
      google::cloud::cpp::compute::machine_images::v1::
          GetMachineImagesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the access control policy for a resource. May be empty if no such
  /// policy or resource exists.
  ///
  /// @param project  Project ID for this request.
  /// @param resource  Name or id of the resource for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Policy])
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
  /// [google.cloud.cpp.compute.machine_images.v1.GetIamPolicyRequest]: @googleapis_reference_link{google/cloud/compute/machine_images/v1/machine_images.proto#L142}
  /// [google.cloud.cpp.compute.v1.Policy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L18680}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      std::string const& project, std::string const& resource,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the access control policy for a resource. May be empty if no such
  /// policy or resource exists.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.machine_images.v1.GetIamPolicyRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Policy])
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
  /// [google.cloud.cpp.compute.machine_images.v1.GetIamPolicyRequest]: @googleapis_reference_link{google/cloud/compute/machine_images/v1/machine_images.proto#L142}
  /// [google.cloud.cpp.compute.v1.Policy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L18680}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::machine_images::v1::
          GetIamPolicyRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a machine image in the specified project using the data that is
  /// included in the request. If you are creating a new machine image to update
  /// an existing instance, your new machine image should use the same network
  /// or, if applicable, the same subnetwork as the original instance.
  ///
  /// @param project  Project ID for this request.
  /// @param machine_image_resource  The MachineImage for this request.
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
  /// [google.cloud.cpp.compute.machine_images.v1.InsertMachineImagesRequest]: @googleapis_reference_link{google/cloud/compute/machine_images/v1/machine_images.proto#L163}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertMachineImages(std::string const& project,
                      google::cloud::cpp::compute::v1::MachineImage const&
                          machine_image_resource,
                      Options opts = {});

  // clang-format off
  ///
  /// Creates a machine image in the specified project using the data that is
  /// included in the request. If you are creating a new machine image to update
  /// an existing instance, your new machine image should use the same network
  /// or, if applicable, the same subnetwork as the original instance.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.machine_images.v1.InsertMachineImagesRequest].
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
  /// [google.cloud.cpp.compute.machine_images.v1.InsertMachineImagesRequest]: @googleapis_reference_link{google/cloud/compute/machine_images/v1/machine_images.proto#L163}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertMachineImages(google::cloud::cpp::compute::machine_images::v1::
                          InsertMachineImagesRequest const& request,
                      Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of machine images that are contained within the specified
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
  ///     [google.cloud.cpp.compute.v1.MachineImage], or rather,
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
  /// [google.cloud.cpp.compute.machine_images.v1.ListMachineImagesRequest]: @googleapis_reference_link{google/cloud/compute/machine_images/v1/machine_images.proto#L191}
  /// [google.cloud.cpp.compute.v1.MachineImage]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L13402}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::MachineImage> ListMachineImages(
      std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of machine images that are contained within the specified
  /// project.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.machine_images.v1.ListMachineImagesRequest].
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
  ///     [google.cloud.cpp.compute.v1.MachineImage], or rather,
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
  /// [google.cloud.cpp.compute.machine_images.v1.ListMachineImagesRequest]: @googleapis_reference_link{google/cloud/compute/machine_images/v1/machine_images.proto#L191}
  /// [google.cloud.cpp.compute.v1.MachineImage]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L13402}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::MachineImage> ListMachineImages(
      google::cloud::cpp::compute::machine_images::v1::ListMachineImagesRequest
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the access control policy on the specified resource. Replaces any
  /// existing policy.
  ///
  /// @param project  Project ID for this request.
  /// @param resource  Name or id of the resource for this request.
  /// @param global_set_policy_request_resource  The GlobalSetPolicyRequest for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Policy])
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
  /// [google.cloud.cpp.compute.machine_images.v1.SetIamPolicyRequest]: @googleapis_reference_link{google/cloud/compute/machine_images/v1/machine_images.proto#L256}
  /// [google.cloud.cpp.compute.v1.Policy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L18680}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      std::string const& project, std::string const& resource,
      google::cloud::cpp::compute::v1::GlobalSetPolicyRequest const&
          global_set_policy_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the access control policy on the specified resource. Replaces any
  /// existing policy.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.machine_images.v1.SetIamPolicyRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Policy])
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
  /// [google.cloud.cpp.compute.machine_images.v1.SetIamPolicyRequest]: @googleapis_reference_link{google/cloud/compute/machine_images/v1/machine_images.proto#L256}
  /// [google.cloud.cpp.compute.v1.Policy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L18680}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::machine_images::v1::
          SetIamPolicyRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns permissions that a caller has on the specified resource.
  ///
  /// @param project  Project ID for this request.
  /// @param resource  Name or id of the resource for this request.
  /// @param test_permissions_request_resource  The TestPermissionsRequest for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TestPermissionsResponse])
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
  /// [google.cloud.cpp.compute.machine_images.v1.TestIamPermissionsRequest]: @googleapis_reference_link{google/cloud/compute/machine_images/v1/machine_images.proto#L270}
  /// [google.cloud.cpp.compute.v1.TestPermissionsResponse]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L28944}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(
      std::string const& project, std::string const& resource,
      google::cloud::cpp::compute::v1::TestPermissionsRequest const&
          test_permissions_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Returns permissions that a caller has on the specified resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.machine_images.v1.TestIamPermissionsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TestPermissionsResponse])
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
  /// [google.cloud.cpp.compute.machine_images.v1.TestIamPermissionsRequest]: @googleapis_reference_link{google/cloud/compute/machine_images/v1/machine_images.proto#L270}
  /// [google.cloud.cpp.compute.v1.TestPermissionsResponse]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L28944}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::machine_images::v1::
                         TestIamPermissionsRequest const& request,
                     Options opts = {});

 private:
  std::shared_ptr<MachineImagesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_machine_images_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_MACHINE_IMAGES_V1_MACHINE_IMAGES_CLIENT_H
