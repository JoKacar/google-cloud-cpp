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
// google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NETWORK_ENDPOINT_GROUPS_V1_REGION_NETWORK_ENDPOINT_GROUPS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NETWORK_ENDPOINT_GROUPS_V1_REGION_NETWORK_ENDPOINT_GROUPS_CLIENT_H

#include "google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups_rest_connection.h"
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
namespace compute_region_network_endpoint_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the regionNetworkEndpointGroups resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/regionNetworkEndpointGroups
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
class RegionNetworkEndpointGroupsClient {
 public:
  explicit RegionNetworkEndpointGroupsClient(
      std::shared_ptr<RegionNetworkEndpointGroupsConnection> connection,
      Options opts = {});
  ~RegionNetworkEndpointGroupsClient();

  ///@{
  /// @name Copy and move support
  RegionNetworkEndpointGroupsClient(RegionNetworkEndpointGroupsClient const&) =
      default;
  RegionNetworkEndpointGroupsClient& operator=(
      RegionNetworkEndpointGroupsClient const&) = default;
  RegionNetworkEndpointGroupsClient(RegionNetworkEndpointGroupsClient&&) =
      default;
  RegionNetworkEndpointGroupsClient& operator=(
      RegionNetworkEndpointGroupsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(RegionNetworkEndpointGroupsClient const& a,
                         RegionNetworkEndpointGroupsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RegionNetworkEndpointGroupsClient const& a,
                         RegionNetworkEndpointGroupsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Attach a list of network endpoints to the specified network endpoint group.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionNetworkEndpointGroups/attachNetworkEndpoints
  ///
  /// @param project  Project ID for this request.
  /// @param region  The name of the region where you want to create the network endpoint group.
  ///  It should comply with RFC1035.
  /// @param network_endpoint_group  The name of the network endpoint group where you are attaching network
  ///  endpoints to. It should comply with RFC1035.
  /// @param region_network_endpoint_groups_attach_endpoints_request_resource  The RegionNetworkEndpointGroupsAttachEndpointsRequest for this request.
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
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_network_endpoint_groups.v1.AttachNetworkEndpointsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto#L130}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AttachNetworkEndpoints(
      std::string const& project, std::string const& region,
      std::string const& network_endpoint_group,
      google::cloud::cpp::compute::v1::
          RegionNetworkEndpointGroupsAttachEndpointsRequest const&
              region_network_endpoint_groups_attach_endpoints_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Attach a list of network endpoints to the specified network endpoint group.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionNetworkEndpointGroups/attachNetworkEndpoints
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_network_endpoint_groups.v1.AttachNetworkEndpointsRequest].
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
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_network_endpoint_groups.v1.AttachNetworkEndpointsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto#L130}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AttachNetworkEndpoints(
      google::cloud::cpp::compute::region_network_endpoint_groups::v1::
          AttachNetworkEndpointsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified network endpoint group. Note that the NEG cannot be
  /// deleted if it is configured as a backend of a backend service.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionNetworkEndpointGroups/delete
  ///
  /// @param project  Project ID for this request.
  /// @param region  The name of the region where the network endpoint group is located. It
  ///  should comply with RFC1035.
  /// @param network_endpoint_group  The name of the network endpoint group to delete. It should comply with
  ///  RFC1035.
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
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_network_endpoint_groups.v1.DeleteNetworkEndpointGroupRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto#L173}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNetworkEndpointGroup(std::string const& project,
                             std::string const& region,
                             std::string const& network_endpoint_group,
                             Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified network endpoint group. Note that the NEG cannot be
  /// deleted if it is configured as a backend of a backend service.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionNetworkEndpointGroups/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_network_endpoint_groups.v1.DeleteNetworkEndpointGroupRequest].
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
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_network_endpoint_groups.v1.DeleteNetworkEndpointGroupRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto#L173}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNetworkEndpointGroup(
      google::cloud::cpp::compute::region_network_endpoint_groups::v1::
          DeleteNetworkEndpointGroupRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Detach the network endpoint from the specified network endpoint group.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionNetworkEndpointGroups/detachNetworkEndpoints
  ///
  /// @param project  Project ID for this request.
  /// @param region  The name of the region where the network endpoint group is located. It
  ///  should comply with RFC1035.
  /// @param network_endpoint_group  The name of the network endpoint group you are detaching network endpoints
  ///  from. It should comply with RFC1035.
  /// @param region_network_endpoint_groups_detach_endpoints_request_resource  The RegionNetworkEndpointGroupsDetachEndpointsRequest for this request.
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
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_network_endpoint_groups.v1.DetachNetworkEndpointsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto#L210}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DetachNetworkEndpoints(
      std::string const& project, std::string const& region,
      std::string const& network_endpoint_group,
      google::cloud::cpp::compute::v1::
          RegionNetworkEndpointGroupsDetachEndpointsRequest const&
              region_network_endpoint_groups_detach_endpoints_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Detach the network endpoint from the specified network endpoint group.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionNetworkEndpointGroups/detachNetworkEndpoints
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_network_endpoint_groups.v1.DetachNetworkEndpointsRequest].
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
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_network_endpoint_groups.v1.DetachNetworkEndpointsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto#L210}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DetachNetworkEndpoints(
      google::cloud::cpp::compute::region_network_endpoint_groups::v1::
          DetachNetworkEndpointsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified network endpoint group.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionNetworkEndpointGroups/get
  ///
  /// @param project  Project ID for this request.
  /// @param region  The name of the region where the network endpoint group is located. It
  ///  should comply with RFC1035.
  /// @param network_endpoint_group  The name of the network endpoint group. It should comply with RFC1035.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.NetworkEndpointGroup])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_network_endpoint_groups.v1.GetNetworkEndpointGroupRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto#L254}
  /// [google.cloud.cpp.compute.v1.NetworkEndpointGroup]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_012.proto#L113}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  GetNetworkEndpointGroup(std::string const& project, std::string const& region,
                          std::string const& network_endpoint_group,
                          Options opts = {});

  // clang-format off
  ///
  /// Returns the specified network endpoint group.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionNetworkEndpointGroups/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_network_endpoint_groups.v1.GetNetworkEndpointGroupRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.NetworkEndpointGroup])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_network_endpoint_groups.v1.GetNetworkEndpointGroupRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto#L254}
  /// [google.cloud.cpp.compute.v1.NetworkEndpointGroup]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_012.proto#L113}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  GetNetworkEndpointGroup(
      google::cloud::cpp::compute::region_network_endpoint_groups::v1::
          GetNetworkEndpointGroupRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a network endpoint group in the specified project using the
  /// parameters that are included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionNetworkEndpointGroups/insert
  ///
  /// @param project  Project ID for this request.
  /// @param region  The name of the region where you want to create the network endpoint group.
  ///  It should comply with RFC1035.
  /// @param network_endpoint_group_resource  The NetworkEndpointGroup for this request.
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
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_network_endpoint_groups.v1.InsertNetworkEndpointGroupRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto#L272}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNetworkEndpointGroup(
      std::string const& project, std::string const& region,
      google::cloud::cpp::compute::v1::NetworkEndpointGroup const&
          network_endpoint_group_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a network endpoint group in the specified project using the
  /// parameters that are included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionNetworkEndpointGroups/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_network_endpoint_groups.v1.InsertNetworkEndpointGroupRequest].
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
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_network_endpoint_groups.v1.InsertNetworkEndpointGroupRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto#L272}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNetworkEndpointGroup(
      google::cloud::cpp::compute::region_network_endpoint_groups::v1::
          InsertNetworkEndpointGroupRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of regional network endpoint groups available to the
  /// specified project in the given region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionNetworkEndpointGroups/list
  ///
  /// @param project  Project ID for this request.
  /// @param region  The name of the region where the network endpoint group is located. It
  ///  should comply with RFC1035.
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
  ///     [google.cloud.cpp.compute.v1.NetworkEndpointGroup], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_network_endpoint_groups.v1.ListRegionNetworkEndpointGroupsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto#L386}
  /// [google.cloud.cpp.compute.v1.NetworkEndpointGroup]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_012.proto#L113}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  ListRegionNetworkEndpointGroups(std::string const& project,
                                  std::string const& region, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of regional network endpoint groups available to the
  /// specified project in the given region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionNetworkEndpointGroups/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_network_endpoint_groups.v1.ListRegionNetworkEndpointGroupsRequest].
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
  ///     [google.cloud.cpp.compute.v1.NetworkEndpointGroup], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_network_endpoint_groups.v1.ListRegionNetworkEndpointGroupsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto#L386}
  /// [google.cloud.cpp.compute.v1.NetworkEndpointGroup]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_012.proto#L113}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  ListRegionNetworkEndpointGroups(
      google::cloud::cpp::compute::region_network_endpoint_groups::v1::
          ListRegionNetworkEndpointGroupsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists the network endpoints in the specified network endpoint group.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionNetworkEndpointGroups/listNetworkEndpoints
  ///
  /// @param project  Project ID for this request.
  /// @param region  The name of the region where the network endpoint group is located. It
  ///  should comply with RFC1035.
  /// @param network_endpoint_group  The name of the network endpoint group from which you want to generate a
  ///  list of included network endpoints. It should comply with RFC1035.
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
  ///     [google.cloud.cpp.compute.v1.NetworkEndpointWithHealthStatus], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_network_endpoint_groups.v1.ListNetworkEndpointsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto#L306}
  /// [google.cloud.cpp.compute.v1.NetworkEndpointWithHealthStatus]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_012.proto#L517}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>
  ListNetworkEndpoints(std::string const& project, std::string const& region,
                       std::string const& network_endpoint_group,
                       Options opts = {});

  // clang-format off
  ///
  /// Lists the network endpoints in the specified network endpoint group.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionNetworkEndpointGroups/listNetworkEndpoints
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_network_endpoint_groups.v1.ListNetworkEndpointsRequest].
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
  ///     [google.cloud.cpp.compute.v1.NetworkEndpointWithHealthStatus], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_network_endpoint_groups.v1.ListNetworkEndpointsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto#L306}
  /// [google.cloud.cpp.compute.v1.NetworkEndpointWithHealthStatus]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_012.proto#L517}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>
  ListNetworkEndpoints(
      google::cloud::cpp::compute::region_network_endpoint_groups::v1::
          ListNetworkEndpointsRequest request,
      Options opts = {});

 private:
  std::shared_ptr<RegionNetworkEndpointGroupsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_network_endpoint_groups_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NETWORK_ENDPOINT_GROUPS_V1_REGION_NETWORK_ENDPOINT_GROUPS_CLIENT_H
