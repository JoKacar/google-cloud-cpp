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
// source: google/cloud/dataproc/v1/batches.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_BATCH_CONTROLLER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_BATCH_CONTROLLER_CLIENT_H

#include "google/cloud/dataproc/v1/batch_controller_connection.h"
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
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The BatchController provides methods to manage batch workloads.
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
class BatchControllerClient {
 public:
  explicit BatchControllerClient(
      std::shared_ptr<BatchControllerConnection> connection, Options opts = {});
  ~BatchControllerClient();

  ///@{
  /// @name Copy and move support
  BatchControllerClient(BatchControllerClient const&) = default;
  BatchControllerClient& operator=(BatchControllerClient const&) = default;
  BatchControllerClient(BatchControllerClient&&) = default;
  BatchControllerClient& operator=(BatchControllerClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(BatchControllerClient const& a,
                         BatchControllerClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(BatchControllerClient const& a,
                         BatchControllerClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a batch workload that executes asynchronously.
  ///
  /// @param parent  Required. The parent resource where this batch will be created.
  /// @param batch  Required. The batch to create.
  /// @param batch_id  Optional. The ID to use for the batch, which will become the final
  ///  component of the batch's resource name.
  ///  @n
  ///  This value must be 4-63 characters. Valid characters are `/[a-z][0-9]-/`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.dataproc.v1.Batch] proto message.
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
  /// [google.cloud.dataproc.v1.Batch]: @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L187}
  /// [google.cloud.dataproc.v1.CreateBatchRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L79}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dataproc::v1::Batch>> CreateBatch(
      std::string const& parent,
      google::cloud::dataproc::v1::Batch const& batch,
      std::string const& batch_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a batch workload that executes asynchronously.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dataproc.v1.CreateBatchRequest].
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
  ///     [google.cloud.dataproc.v1.Batch] proto message.
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
  /// [google.cloud.dataproc.v1.Batch]: @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L187}
  /// [google.cloud.dataproc.v1.CreateBatchRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L79}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dataproc::v1::Batch>> CreateBatch(
      google::cloud::dataproc::v1::CreateBatchRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the batch workload resource representation.
  ///
  /// @param name  Required. The fully qualified name of the batch to retrieve
  ///  in the format
  ///  "projects/PROJECT_ID/locations/DATAPROC_REGION/batches/BATCH_ID"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dataproc.v1.Batch])
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
  /// [google.cloud.dataproc.v1.Batch]: @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L187}
  /// [google.cloud.dataproc.v1.GetBatchRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L113}
  ///
  // clang-format on
  StatusOr<google::cloud::dataproc::v1::Batch> GetBatch(std::string const& name,
                                                        Options opts = {});

  // clang-format off
  ///
  /// Gets the batch workload resource representation.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dataproc.v1.GetBatchRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dataproc.v1.Batch])
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
  /// [google.cloud.dataproc.v1.Batch]: @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L187}
  /// [google.cloud.dataproc.v1.GetBatchRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L113}
  ///
  // clang-format on
  StatusOr<google::cloud::dataproc::v1::Batch> GetBatch(
      google::cloud::dataproc::v1::GetBatchRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists batch workloads.
  ///
  /// @param parent  Required. The parent, which owns this collection of batches.
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
  ///     [google.cloud.dataproc.v1.Batch], or rather,
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
  /// [google.cloud.dataproc.v1.Batch]: @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L187}
  /// [google.cloud.dataproc.v1.ListBatchesRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L124}
  ///
  // clang-format on
  StreamRange<google::cloud::dataproc::v1::Batch> ListBatches(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists batch workloads.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dataproc.v1.ListBatchesRequest].
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
  ///     [google.cloud.dataproc.v1.Batch], or rather,
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
  /// [google.cloud.dataproc.v1.Batch]: @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L187}
  /// [google.cloud.dataproc.v1.ListBatchesRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L124}
  ///
  // clang-format on
  StreamRange<google::cloud::dataproc::v1::Batch> ListBatches(
      google::cloud::dataproc::v1::ListBatchesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the batch workload resource. If the batch is not in terminal state,
  /// the delete fails and the response returns `FAILED_PRECONDITION`.
  ///
  /// @param name  Required. The fully qualified name of the batch to retrieve
  ///  in the format
  ///  "projects/PROJECT_ID/locations/DATAPROC_REGION/batches/BATCH_ID"
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
  /// [google.cloud.dataproc.v1.DeleteBatchRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L176}
  ///
  // clang-format on
  Status DeleteBatch(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes the batch workload resource. If the batch is not in terminal state,
  /// the delete fails and the response returns `FAILED_PRECONDITION`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dataproc.v1.DeleteBatchRequest].
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
  /// [google.cloud.dataproc.v1.DeleteBatchRequest]: @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L176}
  ///
  // clang-format on
  Status DeleteBatch(
      google::cloud::dataproc::v1::DeleteBatchRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<BatchControllerConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_BATCH_CONTROLLER_CLIENT_H
