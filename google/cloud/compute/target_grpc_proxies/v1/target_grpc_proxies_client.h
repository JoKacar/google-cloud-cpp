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
// source: google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_GRPC_PROXIES_V1_TARGET_GRPC_PROXIES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_GRPC_PROXIES_V1_TARGET_GRPC_PROXIES_CLIENT_H

#include "google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_grpc_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the targetGrpcProxies resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/targetGrpcProxies
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
class TargetGrpcProxiesClient {
 public:
  explicit TargetGrpcProxiesClient(
      ExperimentalTag, std::shared_ptr<TargetGrpcProxiesConnection> connection,
      Options opts = {});
  ~TargetGrpcProxiesClient();

  ///@{
  /// @name Copy and move support
  TargetGrpcProxiesClient(TargetGrpcProxiesClient const&) = default;
  TargetGrpcProxiesClient& operator=(TargetGrpcProxiesClient const&) = default;
  TargetGrpcProxiesClient(TargetGrpcProxiesClient&&) = default;
  TargetGrpcProxiesClient& operator=(TargetGrpcProxiesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(TargetGrpcProxiesClient const& a,
                         TargetGrpcProxiesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(TargetGrpcProxiesClient const& a,
                         TargetGrpcProxiesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified TargetGrpcProxy in the given scope
  ///
  /// @param project  Project ID for this request.
  /// @param target_grpc_proxy  Name of the TargetGrpcProxy resource to delete.
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
  /// [google.cloud.cpp.compute.target_grpc_proxies.v1.DeleteTargetGrpcProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto#L96}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetGrpcProxies(std::string const& project,
                          std::string const& target_grpc_proxy,
                          Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified TargetGrpcProxy in the given scope
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_grpc_proxies.v1.DeleteTargetGrpcProxiesRequest].
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
  /// [google.cloud.cpp.compute.target_grpc_proxies.v1.DeleteTargetGrpcProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto#L96}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetGrpcProxies(google::cloud::cpp::compute::target_grpc_proxies::v1::
                              DeleteTargetGrpcProxiesRequest const& request,
                          Options opts = {});

  // clang-format off
  ///
  /// Returns the specified TargetGrpcProxy resource in the given scope.
  ///
  /// @param project  Project ID for this request.
  /// @param target_grpc_proxy  Name of the TargetGrpcProxy resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetGrpcProxy])
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
  /// [google.cloud.cpp.compute.target_grpc_proxies.v1.GetTargetGrpcProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto#L120}
  /// [google.cloud.cpp.compute.v1.TargetGrpcProxy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_118.proto#L29}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetGrpcProxy>
  GetTargetGrpcProxies(std::string const& project,
                       std::string const& target_grpc_proxy, Options opts = {});

  // clang-format off
  ///
  /// Returns the specified TargetGrpcProxy resource in the given scope.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_grpc_proxies.v1.GetTargetGrpcProxiesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TargetGrpcProxy])
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
  /// [google.cloud.cpp.compute.target_grpc_proxies.v1.GetTargetGrpcProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto#L120}
  /// [google.cloud.cpp.compute.v1.TargetGrpcProxy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_118.proto#L29}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TargetGrpcProxy>
  GetTargetGrpcProxies(google::cloud::cpp::compute::target_grpc_proxies::v1::
                           GetTargetGrpcProxiesRequest const& request,
                       Options opts = {});

  // clang-format off
  ///
  /// Creates a TargetGrpcProxy in the specified project in the given scope using
  /// the parameters that are included in the request.
  ///
  /// @param project  Project ID for this request.
  /// @param target_grpc_proxy_resource  The TargetGrpcProxy for this request.
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
  /// [google.cloud.cpp.compute.target_grpc_proxies.v1.InsertTargetGrpcProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto#L129}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetGrpcProxies(
      std::string const& project,
      google::cloud::cpp::compute::v1::TargetGrpcProxy const&
          target_grpc_proxy_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a TargetGrpcProxy in the specified project in the given scope using
  /// the parameters that are included in the request.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_grpc_proxies.v1.InsertTargetGrpcProxiesRequest].
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
  /// [google.cloud.cpp.compute.target_grpc_proxies.v1.InsertTargetGrpcProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto#L129}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetGrpcProxies(google::cloud::cpp::compute::target_grpc_proxies::v1::
                              InsertTargetGrpcProxiesRequest const& request,
                          Options opts = {});

  // clang-format off
  ///
  /// Lists the TargetGrpcProxies for a project in the given scope.
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
  ///     [google.cloud.cpp.compute.v1.TargetGrpcProxy], or rather,
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
  /// [google.cloud.cpp.compute.target_grpc_proxies.v1.ListTargetGrpcProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto#L154}
  /// [google.cloud.cpp.compute.v1.TargetGrpcProxy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_118.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::TargetGrpcProxy>
  ListTargetGrpcProxies(std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Lists the TargetGrpcProxies for a project in the given scope.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_grpc_proxies.v1.ListTargetGrpcProxiesRequest].
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
  ///     [google.cloud.cpp.compute.v1.TargetGrpcProxy], or rather,
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
  /// [google.cloud.cpp.compute.target_grpc_proxies.v1.ListTargetGrpcProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto#L154}
  /// [google.cloud.cpp.compute.v1.TargetGrpcProxy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_118.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::TargetGrpcProxy>
  ListTargetGrpcProxies(google::cloud::cpp::compute::target_grpc_proxies::v1::
                            ListTargetGrpcProxiesRequest request,
                        Options opts = {});

  // clang-format off
  ///
  /// Patches the specified TargetGrpcProxy resource with the data included in
  /// the request. This method supports PATCH semantics and uses JSON merge patch
  /// format and processing rules.
  ///
  /// @param project  Project ID for this request.
  /// @param target_grpc_proxy  Name of the TargetGrpcProxy resource to patch.
  /// @param target_grpc_proxy_resource  The TargetGrpcProxy for this request.
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
  /// [google.cloud.cpp.compute.target_grpc_proxies.v1.PatchTargetGrpcProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto#L219}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchTargetGrpcProxies(std::string const& project,
                         std::string const& target_grpc_proxy,
                         google::cloud::cpp::compute::v1::TargetGrpcProxy const&
                             target_grpc_proxy_resource,
                         Options opts = {});

  // clang-format off
  ///
  /// Patches the specified TargetGrpcProxy resource with the data included in
  /// the request. This method supports PATCH semantics and uses JSON merge patch
  /// format and processing rules.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.target_grpc_proxies.v1.PatchTargetGrpcProxiesRequest].
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
  /// [google.cloud.cpp.compute.target_grpc_proxies.v1.PatchTargetGrpcProxiesRequest]: @googleapis_reference_link{google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto#L219}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchTargetGrpcProxies(google::cloud::cpp::compute::target_grpc_proxies::v1::
                             PatchTargetGrpcProxiesRequest const& request,
                         Options opts = {});

 private:
  std::shared_ptr<TargetGrpcProxiesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_grpc_proxies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_GRPC_PROXIES_V1_TARGET_GRPC_PROXIES_CLIENT_H
