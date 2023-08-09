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
// source: google/cloud/compute/snapshots/v1/snapshots.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SNAPSHOTS_V1_SNAPSHOTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SNAPSHOTS_V1_SNAPSHOTS_CLIENT_H

#include "google/cloud/compute/snapshots/v1/snapshots_rest_connection.h"
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
namespace compute_snapshots_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the snapshots resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/snapshots
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
class SnapshotsClient {
 public:
  explicit SnapshotsClient(ExperimentalTag,
                           std::shared_ptr<SnapshotsConnection> connection,
                           Options opts = {});
  ~SnapshotsClient();

  ///@{
  /// @name Copy and move support
  SnapshotsClient(SnapshotsClient const&) = default;
  SnapshotsClient& operator=(SnapshotsClient const&) = default;
  SnapshotsClient(SnapshotsClient&&) = default;
  SnapshotsClient& operator=(SnapshotsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(SnapshotsClient const& a, SnapshotsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SnapshotsClient const& a, SnapshotsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified Snapshot resource. Keep in mind that deleting a
  /// single snapshot might not necessarily delete all the data on that snapshot.
  /// If any data on the snapshot that is marked for deletion is needed for
  /// subsequent snapshots, the data will be moved to the next corresponding
  /// snapshot. For more information, see Deleting snapshots.
  ///
  /// @param project  Project ID for this request.
  /// @param snapshot  Name of the Snapshot resource to delete.
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
  /// [google.cloud.cpp.compute.snapshots.v1.DeleteSnapshotsRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L140}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteSnapshots(
      std::string const& project, std::string const& snapshot,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified Snapshot resource. Keep in mind that deleting a
  /// single snapshot might not necessarily delete all the data on that snapshot.
  /// If any data on the snapshot that is marked for deletion is needed for
  /// subsequent snapshots, the data will be moved to the next corresponding
  /// snapshot. For more information, see Deleting snapshots.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.snapshots.v1.DeleteSnapshotsRequest].
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
  /// [google.cloud.cpp.compute.snapshots.v1.DeleteSnapshotsRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L140}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteSnapshots(
      google::cloud::cpp::compute::snapshots::v1::DeleteSnapshotsRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified Snapshot resource.
  ///
  /// @param project  Project ID for this request.
  /// @param snapshot  Name of the Snapshot resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Snapshot])
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
  /// [google.cloud.cpp.compute.snapshots.v1.GetSnapshotsRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L176}
  /// [google.cloud.cpp.compute.v1.Snapshot]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_110.proto#L29}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Snapshot> GetSnapshots(
      std::string const& project, std::string const& snapshot,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified Snapshot resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.snapshots.v1.GetSnapshotsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Snapshot])
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
  /// [google.cloud.cpp.compute.snapshots.v1.GetSnapshotsRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L176}
  /// [google.cloud.cpp.compute.v1.Snapshot]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_110.proto#L29}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Snapshot> GetSnapshots(
      google::cloud::cpp::compute::snapshots::v1::GetSnapshotsRequest const&
          request,
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
  /// [google.cloud.cpp.compute.snapshots.v1.GetIamPolicyRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L164}
  /// [google.cloud.cpp.compute.v1.Policy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_006.proto#L262}
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
  ///     [google.cloud.cpp.compute.snapshots.v1.GetIamPolicyRequest].
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
  /// [google.cloud.cpp.compute.snapshots.v1.GetIamPolicyRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L164}
  /// [google.cloud.cpp.compute.v1.Policy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_006.proto#L262}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::snapshots::v1::GetIamPolicyRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a snapshot in the specified project using the data included in the
  /// request. For regular snapshot creation, consider using this method instead
  /// of disks.createSnapshot, as this method supports more features, such as
  /// creating snapshots in a project different from the source disk project.
  ///
  /// @param project  Project ID for this request.
  /// @param snapshot_resource  The Snapshot for this request.
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
  /// [google.cloud.cpp.compute.snapshots.v1.InsertSnapshotsRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L185}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertSnapshots(
      std::string const& project,
      google::cloud::cpp::compute::v1::Snapshot const& snapshot_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a snapshot in the specified project using the data included in the
  /// request. For regular snapshot creation, consider using this method instead
  /// of disks.createSnapshot, as this method supports more features, such as
  /// creating snapshots in a project different from the source disk project.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.snapshots.v1.InsertSnapshotsRequest].
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
  /// [google.cloud.cpp.compute.snapshots.v1.InsertSnapshotsRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L185}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertSnapshots(
      google::cloud::cpp::compute::snapshots::v1::InsertSnapshotsRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of Snapshot resources contained within the specified
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
  ///     [google.cloud.cpp.compute.v1.Snapshot], or rather,
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
  /// [google.cloud.cpp.compute.snapshots.v1.ListSnapshotsRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L210}
  /// [google.cloud.cpp.compute.v1.Snapshot]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_110.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::Snapshot> ListSnapshots(
      std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of Snapshot resources contained within the specified
  /// project.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.snapshots.v1.ListSnapshotsRequest].
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
  ///     [google.cloud.cpp.compute.v1.Snapshot], or rather,
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
  /// [google.cloud.cpp.compute.snapshots.v1.ListSnapshotsRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L210}
  /// [google.cloud.cpp.compute.v1.Snapshot]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_110.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::Snapshot> ListSnapshots(
      google::cloud::cpp::compute::snapshots::v1::ListSnapshotsRequest request,
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
  /// [google.cloud.cpp.compute.snapshots.v1.SetIamPolicyRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L275}
  /// [google.cloud.cpp.compute.v1.Policy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_006.proto#L262}
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
  ///     [google.cloud.cpp.compute.snapshots.v1.SetIamPolicyRequest].
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
  /// [google.cloud.cpp.compute.snapshots.v1.SetIamPolicyRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L275}
  /// [google.cloud.cpp.compute.v1.Policy]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_006.proto#L262}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::snapshots::v1::SetIamPolicyRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on a snapshot. To learn more about labels, read the
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
  /// [google.cloud.cpp.compute.snapshots.v1.SetLabelsRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L289}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      std::string const& project, std::string const& resource,
      google::cloud::cpp::compute::v1::GlobalSetLabelsRequest const&
          global_set_labels_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on a snapshot. To learn more about labels, read the
  /// Labeling Resources documentation.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.snapshots.v1.SetLabelsRequest].
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
  /// [google.cloud.cpp.compute.snapshots.v1.SetLabelsRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L289}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::snapshots::v1::SetLabelsRequest const&
          request,
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
  /// [google.cloud.cpp.compute.snapshots.v1.TestIamPermissionsRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L306}
  /// [google.cloud.cpp.compute.v1.TestPermissionsResponse]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_130.proto#L30}
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
  ///     [google.cloud.cpp.compute.snapshots.v1.TestIamPermissionsRequest].
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
  /// [google.cloud.cpp.compute.snapshots.v1.TestIamPermissionsRequest]: @googleapis_reference_link{google/cloud/compute/snapshots/v1/snapshots.proto#L306}
  /// [google.cloud.cpp.compute.v1.TestPermissionsResponse]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_130.proto#L30}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::snapshots::v1::
                         TestIamPermissionsRequest const& request,
                     Options opts = {});

 private:
  std::shared_ptr<SnapshotsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_snapshots_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SNAPSHOTS_V1_SNAPSHOTS_CLIENT_H
