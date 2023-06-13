// Copyright 2022 Google LLC
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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_TPU_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_TPU_CLIENT_H

#include "google/cloud/tpu/v1/tpu_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace tpu_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Manages TPU nodes and other resources
///
/// TPU API v1
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
class TpuClient {
 public:
  explicit TpuClient(std::shared_ptr<TpuConnection> connection,
                     Options opts = {});
  ~TpuClient();

  ///@{
  /// @name Copy and move support
  TpuClient(TpuClient const&) = default;
  TpuClient& operator=(TpuClient const&) = default;
  TpuClient(TpuClient&&) = default;
  TpuClient& operator=(TpuClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(TpuClient const& a, TpuClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(TpuClient const& a, TpuClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists nodes.
  ///
  /// @param parent  Required. The parent resource name.
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
  ///     [google.cloud.tpu.v1.Node], or rather,
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
  /// [google.cloud.tpu.v1.ListNodesRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L351}
  /// [google.cloud.tpu.v1.Node]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L171}
  ///
  // clang-format on
  StreamRange<google::cloud::tpu::v1::Node> ListNodes(std::string const& parent,
                                                      Options opts = {});

  // clang-format off
  ///
  /// Lists nodes.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.tpu.v1.ListNodesRequest].
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
  ///     [google.cloud.tpu.v1.Node], or rather,
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
  /// [google.cloud.tpu.v1.ListNodesRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L351}
  /// [google.cloud.tpu.v1.Node]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L171}
  ///
  // clang-format on
  StreamRange<google::cloud::tpu::v1::Node> ListNodes(
      google::cloud::tpu::v1::ListNodesRequest request, Options opts = {});

  // clang-format off
  ///
  /// Gets the details of a node.
  ///
  /// @param name  Required. The resource name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.tpu.v1.Node])
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
  /// [google.cloud.tpu.v1.GetNodeRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L378}
  /// [google.cloud.tpu.v1.Node]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L171}
  ///
  // clang-format on
  StatusOr<google::cloud::tpu::v1::Node> GetNode(std::string const& name,
                                                 Options opts = {});

  // clang-format off
  ///
  /// Gets the details of a node.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.tpu.v1.GetNodeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.tpu.v1.Node])
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
  /// [google.cloud.tpu.v1.GetNodeRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L378}
  /// [google.cloud.tpu.v1.Node]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L171}
  ///
  // clang-format on
  StatusOr<google::cloud::tpu::v1::Node> GetNode(
      google::cloud::tpu::v1::GetNodeRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Creates a node.
  ///
  /// @param parent  Required. The parent resource name.
  /// @param node  Required. The node.
  /// @param node_id  The unqualified resource name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.tpu.v1.Node] proto message.
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
  /// [google.cloud.tpu.v1.CreateNodeRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L387}
  /// [google.cloud.tpu.v1.Node]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L171}
  ///
  // clang-format on
  future<StatusOr<google::cloud::tpu::v1::Node>> CreateNode(
      std::string const& parent, google::cloud::tpu::v1::Node const& node,
      std::string const& node_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a node.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.tpu.v1.CreateNodeRequest].
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
  ///     [google.cloud.tpu.v1.Node] proto message.
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
  /// [google.cloud.tpu.v1.CreateNodeRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L387}
  /// [google.cloud.tpu.v1.Node]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L171}
  ///
  // clang-format on
  future<StatusOr<google::cloud::tpu::v1::Node>> CreateNode(
      google::cloud::tpu::v1::CreateNodeRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a node.
  ///
  /// @param name  Required. The resource name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.tpu.v1.Node] proto message.
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
  /// [google.cloud.tpu.v1.DeleteNodeRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L402}
  /// [google.cloud.tpu.v1.Node]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L171}
  ///
  // clang-format on
  future<StatusOr<google::cloud::tpu::v1::Node>> DeleteNode(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a node.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.tpu.v1.DeleteNodeRequest].
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
  ///     [google.cloud.tpu.v1.Node] proto message.
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
  /// [google.cloud.tpu.v1.DeleteNodeRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L402}
  /// [google.cloud.tpu.v1.Node]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L171}
  ///
  // clang-format on
  future<StatusOr<google::cloud::tpu::v1::Node>> DeleteNode(
      google::cloud::tpu::v1::DeleteNodeRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Reimages a node's OS.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.tpu.v1.ReimageNodeRequest].
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
  ///     [google.cloud.tpu.v1.Node] proto message.
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
  /// [google.cloud.tpu.v1.Node]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L171}
  /// [google.cloud.tpu.v1.ReimageNodeRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L411}
  ///
  // clang-format on
  future<StatusOr<google::cloud::tpu::v1::Node>> ReimageNode(
      google::cloud::tpu::v1::ReimageNodeRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Stops a node, this operation is only available with single TPU nodes.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.tpu.v1.StopNodeRequest].
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
  ///     [google.cloud.tpu.v1.Node] proto message.
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
  /// [google.cloud.tpu.v1.Node]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L171}
  /// [google.cloud.tpu.v1.StopNodeRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L420}
  ///
  // clang-format on
  future<StatusOr<google::cloud::tpu::v1::Node>> StopNode(
      google::cloud::tpu::v1::StopNodeRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Starts a node.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.tpu.v1.StartNodeRequest].
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
  ///     [google.cloud.tpu.v1.Node] proto message.
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
  /// [google.cloud.tpu.v1.Node]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L171}
  /// [google.cloud.tpu.v1.StartNodeRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L426}
  ///
  // clang-format on
  future<StatusOr<google::cloud::tpu::v1::Node>> StartNode(
      google::cloud::tpu::v1::StartNodeRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// List TensorFlow versions supported by this API.
  ///
  /// @param parent  Required. The parent resource name.
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
  ///     [google.cloud.tpu.v1.TensorFlowVersion], or rather,
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
  /// [google.cloud.tpu.v1.ListTensorFlowVersionsRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L459}
  /// [google.cloud.tpu.v1.TensorFlowVersion]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L432}
  ///
  // clang-format on
  StreamRange<google::cloud::tpu::v1::TensorFlowVersion> ListTensorFlowVersions(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// List TensorFlow versions supported by this API.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.tpu.v1.ListTensorFlowVersionsRequest].
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
  ///     [google.cloud.tpu.v1.TensorFlowVersion], or rather,
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
  /// [google.cloud.tpu.v1.ListTensorFlowVersionsRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L459}
  /// [google.cloud.tpu.v1.TensorFlowVersion]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L432}
  ///
  // clang-format on
  StreamRange<google::cloud::tpu::v1::TensorFlowVersion> ListTensorFlowVersions(
      google::cloud::tpu::v1::ListTensorFlowVersionsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets TensorFlow Version.
  ///
  /// @param name  Required. The resource name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.tpu.v1.TensorFlowVersion])
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
  /// [google.cloud.tpu.v1.GetTensorFlowVersionRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L447}
  /// [google.cloud.tpu.v1.TensorFlowVersion]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L432}
  ///
  // clang-format on
  StatusOr<google::cloud::tpu::v1::TensorFlowVersion> GetTensorFlowVersion(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets TensorFlow Version.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.tpu.v1.GetTensorFlowVersionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.tpu.v1.TensorFlowVersion])
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
  /// [google.cloud.tpu.v1.GetTensorFlowVersionRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L447}
  /// [google.cloud.tpu.v1.TensorFlowVersion]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L432}
  ///
  // clang-format on
  StatusOr<google::cloud::tpu::v1::TensorFlowVersion> GetTensorFlowVersion(
      google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists accelerator types supported by this API.
  ///
  /// @param parent  Required. The parent resource name.
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
  ///     [google.cloud.tpu.v1.AcceleratorType], or rather,
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
  /// [google.cloud.tpu.v1.AcceleratorType]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L495}
  /// [google.cloud.tpu.v1.ListAcceleratorTypesRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L521}
  ///
  // clang-format on
  StreamRange<google::cloud::tpu::v1::AcceleratorType> ListAcceleratorTypes(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists accelerator types supported by this API.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.tpu.v1.ListAcceleratorTypesRequest].
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
  ///     [google.cloud.tpu.v1.AcceleratorType], or rather,
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
  /// [google.cloud.tpu.v1.AcceleratorType]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L495}
  /// [google.cloud.tpu.v1.ListAcceleratorTypesRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L521}
  ///
  // clang-format on
  StreamRange<google::cloud::tpu::v1::AcceleratorType> ListAcceleratorTypes(
      google::cloud::tpu::v1::ListAcceleratorTypesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets AcceleratorType.
  ///
  /// @param name  Required. The resource name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.tpu.v1.AcceleratorType])
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
  /// [google.cloud.tpu.v1.AcceleratorType]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L495}
  /// [google.cloud.tpu.v1.GetAcceleratorTypeRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L509}
  ///
  // clang-format on
  StatusOr<google::cloud::tpu::v1::AcceleratorType> GetAcceleratorType(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets AcceleratorType.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.tpu.v1.GetAcceleratorTypeRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.tpu.v1.AcceleratorType])
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
  /// [google.cloud.tpu.v1.AcceleratorType]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L495}
  /// [google.cloud.tpu.v1.GetAcceleratorTypeRequest]: @googleapis_reference_link{google/cloud/tpu/v1/cloud_tpu.proto#L509}
  ///
  // clang-format on
  StatusOr<google::cloud::tpu::v1::AcceleratorType> GetAcceleratorType(
      google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<TpuConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_TPU_CLIENT_H
