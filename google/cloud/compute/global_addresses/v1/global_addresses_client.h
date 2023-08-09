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
// source: google/cloud/compute/global_addresses/v1/global_addresses.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ADDRESSES_V1_GLOBAL_ADDRESSES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ADDRESSES_V1_GLOBAL_ADDRESSES_CLIENT_H

#include "google/cloud/compute/global_addresses/v1/global_addresses_rest_connection.h"
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
namespace compute_global_addresses_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the globalAddresses resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/globalAddresses
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
class GlobalAddressesClient {
 public:
  explicit GlobalAddressesClient(
      ExperimentalTag, std::shared_ptr<GlobalAddressesConnection> connection,
      Options opts = {});
  ~GlobalAddressesClient();

  ///@{
  /// @name Copy and move support
  GlobalAddressesClient(GlobalAddressesClient const&) = default;
  GlobalAddressesClient& operator=(GlobalAddressesClient const&) = default;
  GlobalAddressesClient(GlobalAddressesClient&&) = default;
  GlobalAddressesClient& operator=(GlobalAddressesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(GlobalAddressesClient const& a,
                         GlobalAddressesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(GlobalAddressesClient const& a,
                         GlobalAddressesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified address resource.
  ///
  /// @param project  Project ID for this request.
  /// @param address  Name of the address resource to delete.
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
  /// [google.cloud.cpp.compute.global_addresses.v1.DeleteGlobalAddressesRequest]: @googleapis_reference_link{google/cloud/compute/global_addresses/v1/global_addresses.proto#L108}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteGlobalAddresses(std::string const& project, std::string const& address,
                        Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified address resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_addresses.v1.DeleteGlobalAddressesRequest].
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
  /// [google.cloud.cpp.compute.global_addresses.v1.DeleteGlobalAddressesRequest]: @googleapis_reference_link{google/cloud/compute/global_addresses/v1/global_addresses.proto#L108}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteGlobalAddresses(google::cloud::cpp::compute::global_addresses::v1::
                            DeleteGlobalAddressesRequest const& request,
                        Options opts = {});

  // clang-format off
  ///
  /// Returns the specified address resource.
  ///
  /// @param project  Project ID for this request.
  /// @param address  Name of the address resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Address])
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
  /// [google.cloud.cpp.compute.global_addresses.v1.GetGlobalAddressesRequest]: @googleapis_reference_link{google/cloud/compute/global_addresses/v1/global_addresses.proto#L132}
  /// [google.cloud.cpp.compute.v1.Address]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_003.proto#L30}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Address> GetGlobalAddresses(
      std::string const& project, std::string const& address,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified address resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_addresses.v1.GetGlobalAddressesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Address])
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
  /// [google.cloud.cpp.compute.global_addresses.v1.GetGlobalAddressesRequest]: @googleapis_reference_link{google/cloud/compute/global_addresses/v1/global_addresses.proto#L132}
  /// [google.cloud.cpp.compute.v1.Address]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_003.proto#L30}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Address> GetGlobalAddresses(
      google::cloud::cpp::compute::global_addresses::v1::
          GetGlobalAddressesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an address resource in the specified project by using the data
  /// included in the request.
  ///
  /// @param project  Project ID for this request.
  /// @param address_resource  The Address for this request.
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
  /// [google.cloud.cpp.compute.global_addresses.v1.InsertGlobalAddressesRequest]: @googleapis_reference_link{google/cloud/compute/global_addresses/v1/global_addresses.proto#L141}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertGlobalAddresses(
      std::string const& project,
      google::cloud::cpp::compute::v1::Address const& address_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an address resource in the specified project by using the data
  /// included in the request.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_addresses.v1.InsertGlobalAddressesRequest].
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
  /// [google.cloud.cpp.compute.global_addresses.v1.InsertGlobalAddressesRequest]: @googleapis_reference_link{google/cloud/compute/global_addresses/v1/global_addresses.proto#L141}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertGlobalAddresses(google::cloud::cpp::compute::global_addresses::v1::
                            InsertGlobalAddressesRequest const& request,
                        Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of global addresses.
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
  ///     [google.cloud.cpp.compute.v1.Address], or rather,
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
  /// [google.cloud.cpp.compute.global_addresses.v1.ListGlobalAddressesRequest]: @googleapis_reference_link{google/cloud/compute/global_addresses/v1/global_addresses.proto#L166}
  /// [google.cloud.cpp.compute.v1.Address]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_003.proto#L30}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::Address> ListGlobalAddresses(
      std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of global addresses.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_addresses.v1.ListGlobalAddressesRequest].
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
  ///     [google.cloud.cpp.compute.v1.Address], or rather,
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
  /// [google.cloud.cpp.compute.global_addresses.v1.ListGlobalAddressesRequest]: @googleapis_reference_link{google/cloud/compute/global_addresses/v1/global_addresses.proto#L166}
  /// [google.cloud.cpp.compute.v1.Address]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_003.proto#L30}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::Address> ListGlobalAddresses(
      google::cloud::cpp::compute::global_addresses::v1::
          ListGlobalAddressesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Moves the specified address resource from one project to another project.
  ///
  /// @param project  Source project ID which the Address is moved from.
  /// @param address  Name of the address resource to move.
  /// @param global_addresses_move_request_resource  The GlobalAddressesMoveRequest for this request.
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
  /// [google.cloud.cpp.compute.global_addresses.v1.MoveRequest]: @googleapis_reference_link{google/cloud/compute/global_addresses/v1/global_addresses.proto#L231}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Move(
      std::string const& project, std::string const& address,
      google::cloud::cpp::compute::v1::GlobalAddressesMoveRequest const&
          global_addresses_move_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Moves the specified address resource from one project to another project.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_addresses.v1.MoveRequest].
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
  /// [google.cloud.cpp.compute.global_addresses.v1.MoveRequest]: @googleapis_reference_link{google/cloud/compute/global_addresses/v1/global_addresses.proto#L231}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Move(
      google::cloud::cpp::compute::global_addresses::v1::MoveRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on a GlobalAddress. To learn more about labels, read the
  /// Labeling Resources documentation.
  ///
  /// @param project  Project ID for this request.
  /// @param resource  Name or id of the resource for this request.
  /// @param global_set_labels_request_resource  The GlobalSetLabelsRequest for this request.
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
  /// [google.cloud.cpp.compute.global_addresses.v1.SetLabelsRequest]: @googleapis_reference_link{google/cloud/compute/global_addresses/v1/global_addresses.proto#L260}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      std::string const& project, std::string const& resource,
      google::cloud::cpp::compute::v1::GlobalSetLabelsRequest const&
          global_set_labels_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on a GlobalAddress. To learn more about labels, read the
  /// Labeling Resources documentation.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.global_addresses.v1.SetLabelsRequest].
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
  /// [google.cloud.cpp.compute.global_addresses.v1.SetLabelsRequest]: @googleapis_reference_link{google/cloud/compute/global_addresses/v1/global_addresses.proto#L260}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::global_addresses::v1::SetLabelsRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<GlobalAddressesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_addresses_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ADDRESSES_V1_GLOBAL_ADDRESSES_CLIENT_H
