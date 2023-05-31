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
// source: google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_GATEWAYS_V1_VPN_GATEWAYS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_GATEWAYS_V1_VPN_GATEWAYS_CLIENT_H

#include "google/cloud/compute/vpn_gateways/v1/vpn_gateways_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace compute_vpn_gateways_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the vpnGateways resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/vpnGateways
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
class VpnGatewaysClient {
 public:
  explicit VpnGatewaysClient(ExperimentalTag, std::shared_ptr<VpnGatewaysConnection> connection, Options opts = {});
  ~VpnGatewaysClient();

  ///@{
  /// @name Copy and move support
  VpnGatewaysClient(VpnGatewaysClient const&) = default;
  VpnGatewaysClient& operator=(VpnGatewaysClient const&) = default;
  VpnGatewaysClient(VpnGatewaysClient&&) = default;
  VpnGatewaysClient& operator=(VpnGatewaysClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(VpnGatewaysClient const& a, VpnGatewaysClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(VpnGatewaysClient const& a, VpnGatewaysClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Retrieves an aggregated list of VPN gateways.
  ///
  /// @param project  Project ID for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.VpnGatewayAggregatedList])
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
  /// [google.cloud.cpp.compute.v1.VpnGatewayAggregatedList]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L29904}
  /// [google.cloud.cpp.compute.vpn_gateways.v1.AggregatedListVpnGatewaysRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L109}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::VpnGatewayAggregatedList>
  AggregatedListVpnGateways(std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves an aggregated list of VPN gateways.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.vpn_gateways.v1.AggregatedListVpnGatewaysRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.VpnGatewayAggregatedList])
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
  /// [google.cloud.cpp.compute.v1.VpnGatewayAggregatedList]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L29904}
  /// [google.cloud.cpp.compute.vpn_gateways.v1.AggregatedListVpnGatewaysRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L109}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::VpnGatewayAggregatedList>
  AggregatedListVpnGateways(google::cloud::cpp::compute::vpn_gateways::v1::AggregatedListVpnGatewaysRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified VPN gateway.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param vpn_gateway  Name of the VPN gateway to delete.
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
  /// [google.cloud.cpp.compute.vpn_gateways.v1.DeleteVpnGatewaysRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L183}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteVpnGateways(std::string const& project, std::string const& region, std::string const& vpn_gateway, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified VPN gateway.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.vpn_gateways.v1.DeleteVpnGatewaysRequest].
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
  /// [google.cloud.cpp.compute.vpn_gateways.v1.DeleteVpnGatewaysRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L183}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteVpnGateways(google::cloud::cpp::compute::vpn_gateways::v1::DeleteVpnGatewaysRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Returns the specified VPN gateway.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param vpn_gateway  Name of the VPN gateway to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.VpnGateway])
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
  /// [google.cloud.cpp.compute.v1.VpnGateway]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L29845}
  /// [google.cloud.cpp.compute.vpn_gateways.v1.GetVpnGatewaysRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L219}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::VpnGateway>
  GetVpnGateways(std::string const& project, std::string const& region, std::string const& vpn_gateway, Options opts = {});

  // clang-format off
  ///
  /// Returns the specified VPN gateway.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.vpn_gateways.v1.GetVpnGatewaysRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.VpnGateway])
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
  /// [google.cloud.cpp.compute.v1.VpnGateway]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L29845}
  /// [google.cloud.cpp.compute.vpn_gateways.v1.GetVpnGatewaysRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L219}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::VpnGateway>
  GetVpnGateways(google::cloud::cpp::compute::vpn_gateways::v1::GetVpnGatewaysRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Returns the status for the specified VPN gateway.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param vpn_gateway  Name of the VPN gateway to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.VpnGatewaysGetStatusResponse])
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
  /// [google.cloud.cpp.compute.v1.VpnGatewaysGetStatusResponse]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L30198}
  /// [google.cloud.cpp.compute.vpn_gateways.v1.GetStatusRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L207}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::VpnGatewaysGetStatusResponse>
  GetStatus(std::string const& project, std::string const& region, std::string const& vpn_gateway, Options opts = {});

  // clang-format off
  ///
  /// Returns the status for the specified VPN gateway.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.vpn_gateways.v1.GetStatusRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.VpnGatewaysGetStatusResponse])
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
  /// [google.cloud.cpp.compute.v1.VpnGatewaysGetStatusResponse]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L30198}
  /// [google.cloud.cpp.compute.vpn_gateways.v1.GetStatusRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L207}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::VpnGatewaysGetStatusResponse>
  GetStatus(google::cloud::cpp::compute::vpn_gateways::v1::GetStatusRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Creates a VPN gateway in the specified project and region using the data
  /// included in the request.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param vpn_gateway_resource  The VpnGateway for this request.
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
  /// [google.cloud.cpp.compute.vpn_gateways.v1.InsertVpnGatewaysRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L231}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertVpnGateways(std::string const& project, std::string const& region, google::cloud::cpp::compute::v1::VpnGateway const& vpn_gateway_resource, Options opts = {});

  // clang-format off
  ///
  /// Creates a VPN gateway in the specified project and region using the data
  /// included in the request.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.vpn_gateways.v1.InsertVpnGatewaysRequest].
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
  /// [google.cloud.cpp.compute.vpn_gateways.v1.InsertVpnGatewaysRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L231}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertVpnGateways(google::cloud::cpp::compute::vpn_gateways::v1::InsertVpnGatewaysRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of VPN gateways available to the specified project and
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
  ///     [google.cloud.cpp.compute.v1.VpnGateway], or rather,
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
  /// [google.cloud.cpp.compute.v1.VpnGateway]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L29845}
  /// [google.cloud.cpp.compute.vpn_gateways.v1.ListVpnGatewaysRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L255}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::VpnGateway>
  ListVpnGateways(std::string const& project, std::string const& region, Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of VPN gateways available to the specified project and
  /// region.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.vpn_gateways.v1.ListVpnGatewaysRequest].
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
  ///     [google.cloud.cpp.compute.v1.VpnGateway], or rather,
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
  /// [google.cloud.cpp.compute.v1.VpnGateway]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L29845}
  /// [google.cloud.cpp.compute.vpn_gateways.v1.ListVpnGatewaysRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L255}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::VpnGateway>
  ListVpnGateways(google::cloud::cpp::compute::vpn_gateways::v1::ListVpnGatewaysRequest request, Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on a VpnGateway. To learn more about labels, read the
  /// Labeling Resources documentation.
  ///
  /// @param project  Project ID for this request.
  /// @param region  The region for this request.
  /// @param resource  Name or id of the resource for this request.
  /// @param region_set_labels_request_resource  The RegionSetLabelsRequest for this request.
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
  /// [google.cloud.cpp.compute.vpn_gateways.v1.SetLabelsRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L323}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetLabels(std::string const& project, std::string const& region, std::string const& resource, google::cloud::cpp::compute::v1::RegionSetLabelsRequest const& region_set_labels_request_resource, Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on a VpnGateway. To learn more about labels, read the
  /// Labeling Resources documentation.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.vpn_gateways.v1.SetLabelsRequest].
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
  /// [google.cloud.cpp.compute.vpn_gateways.v1.SetLabelsRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L323}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetLabels(google::cloud::cpp::compute::vpn_gateways::v1::SetLabelsRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Returns permissions that a caller has on the specified resource.
  ///
  /// @param project  Project ID for this request.
  /// @param region  The name of the region for this request.
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
  /// [google.cloud.cpp.compute.v1.TestPermissionsResponse]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L28939}
  /// [google.cloud.cpp.compute.vpn_gateways.v1.TestIamPermissionsRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L350}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(std::string const& project, std::string const& region, std::string const& resource, google::cloud::cpp::compute::v1::TestPermissionsRequest const& test_permissions_request_resource, Options opts = {});

  // clang-format off
  ///
  /// Returns permissions that a caller has on the specified resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.vpn_gateways.v1.TestIamPermissionsRequest].
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
  /// [google.cloud.cpp.compute.v1.TestPermissionsResponse]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L28939}
  /// [google.cloud.cpp.compute.vpn_gateways.v1.TestIamPermissionsRequest]: @googleapis_reference_link{google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto#L350}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::vpn_gateways::v1::TestIamPermissionsRequest const& request, Options opts = {});

 private:
  std::shared_ptr<VpnGatewaysConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_vpn_gateways_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_GATEWAYS_V1_VPN_GATEWAYS_CLIENT_H
