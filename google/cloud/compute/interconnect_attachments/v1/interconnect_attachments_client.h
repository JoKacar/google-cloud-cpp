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
// google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_INTERCONNECT_ATTACHMENTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_INTERCONNECT_ATTACHMENTS_CLIENT_H

#include "google/cloud/compute/interconnect_attachments/v1/interconnect_attachments_rest_connection.h"
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
namespace compute_interconnect_attachments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the interconnectAttachments resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/interconnectAttachments
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
class InterconnectAttachmentsClient {
 public:
  explicit InterconnectAttachmentsClient(
      ExperimentalTag,
      std::shared_ptr<InterconnectAttachmentsConnection> connection,
      Options opts = {});
  ~InterconnectAttachmentsClient();

  ///@{
  /// @name Copy and move support
  InterconnectAttachmentsClient(InterconnectAttachmentsClient const&) = default;
  InterconnectAttachmentsClient& operator=(
      InterconnectAttachmentsClient const&) = default;
  InterconnectAttachmentsClient(InterconnectAttachmentsClient&&) = default;
  InterconnectAttachmentsClient& operator=(InterconnectAttachmentsClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(InterconnectAttachmentsClient const& a,
                         InterconnectAttachmentsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(InterconnectAttachmentsClient const& a,
                         InterconnectAttachmentsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Retrieves an aggregated list of interconnect attachments.
  ///
  /// @param project  Project ID for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.InterconnectAttachmentAggregatedList])
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
  /// [google.cloud.cpp.compute.interconnect_attachments.v1.AggregatedListInterconnectAttachmentsRequest]: @googleapis_reference_link{google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto#L125}
  /// [google.cloud.cpp.compute.v1.InterconnectAttachmentAggregatedList]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_064.proto#L325}
  ///
  // clang-format on
  StatusOr<
      google::cloud::cpp::compute::v1::InterconnectAttachmentAggregatedList>
  AggregatedListInterconnectAttachments(std::string const& project,
                                        Options opts = {});

  // clang-format off
  ///
  /// Retrieves an aggregated list of interconnect attachments.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.interconnect_attachments.v1.AggregatedListInterconnectAttachmentsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.InterconnectAttachmentAggregatedList])
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
  /// [google.cloud.cpp.compute.interconnect_attachments.v1.AggregatedListInterconnectAttachmentsRequest]: @googleapis_reference_link{google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto#L125}
  /// [google.cloud.cpp.compute.v1.InterconnectAttachmentAggregatedList]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_064.proto#L325}
  ///
  // clang-format on
  StatusOr<
      google::cloud::cpp::compute::v1::InterconnectAttachmentAggregatedList>
  AggregatedListInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          AggregatedListInterconnectAttachmentsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified interconnect attachment.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param interconnect_attachment  Name of the interconnect attachment to delete.
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
  /// [google.cloud.cpp.compute.interconnect_attachments.v1.DeleteInterconnectAttachmentsRequest]: @googleapis_reference_link{google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto#L199}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInterconnectAttachments(std::string const& project,
                                std::string const& region,
                                std::string const& interconnect_attachment,
                                Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified interconnect attachment.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.interconnect_attachments.v1.DeleteInterconnectAttachmentsRequest].
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
  /// [google.cloud.cpp.compute.interconnect_attachments.v1.DeleteInterconnectAttachmentsRequest]: @googleapis_reference_link{google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto#L199}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          DeleteInterconnectAttachmentsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified interconnect attachment.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param interconnect_attachment  Name of the interconnect attachment to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.InterconnectAttachment])
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
  /// [google.cloud.cpp.compute.interconnect_attachments.v1.GetInterconnectAttachmentsRequest]: @googleapis_reference_link{google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto#L229}
  /// [google.cloud.cpp.compute.v1.InterconnectAttachment]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_064.proto#L30}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachment>
  GetInterconnectAttachments(std::string const& project,
                             std::string const& region,
                             std::string const& interconnect_attachment,
                             Options opts = {});

  // clang-format off
  ///
  /// Returns the specified interconnect attachment.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.interconnect_attachments.v1.GetInterconnectAttachmentsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.InterconnectAttachment])
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
  /// [google.cloud.cpp.compute.interconnect_attachments.v1.GetInterconnectAttachmentsRequest]: @googleapis_reference_link{google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto#L229}
  /// [google.cloud.cpp.compute.v1.InterconnectAttachment]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_064.proto#L30}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachment>
  GetInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          GetInterconnectAttachmentsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an InterconnectAttachment in the specified project using the data
  /// included in the request.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region for this request.
  /// @param interconnect_attachment_resource  The InterconnectAttachment for this request.
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
  /// [google.cloud.cpp.compute.interconnect_attachments.v1.InsertInterconnectAttachmentsRequest]: @googleapis_reference_link{google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto#L241}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertInterconnectAttachments(
      std::string const& project, std::string const& region,
      google::cloud::cpp::compute::v1::InterconnectAttachment const&
          interconnect_attachment_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an InterconnectAttachment in the specified project using the data
  /// included in the request.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.interconnect_attachments.v1.InsertInterconnectAttachmentsRequest].
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
  /// [google.cloud.cpp.compute.interconnect_attachments.v1.InsertInterconnectAttachmentsRequest]: @googleapis_reference_link{google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto#L241}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          InsertInterconnectAttachmentsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of interconnect attachments contained within the
  /// specified region.
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
  ///     [google.cloud.cpp.compute.v1.InterconnectAttachment], or rather,
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
  /// [google.cloud.cpp.compute.interconnect_attachments.v1.ListInterconnectAttachmentsRequest]: @googleapis_reference_link{google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto#L275}
  /// [google.cloud.cpp.compute.v1.InterconnectAttachment]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_064.proto#L30}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::InterconnectAttachment>
  ListInterconnectAttachments(std::string const& project,
                              std::string const& region, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of interconnect attachments contained within the
  /// specified region.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.interconnect_attachments.v1.ListInterconnectAttachmentsRequest].
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
  ///     [google.cloud.cpp.compute.v1.InterconnectAttachment], or rather,
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
  /// [google.cloud.cpp.compute.interconnect_attachments.v1.ListInterconnectAttachmentsRequest]: @googleapis_reference_link{google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto#L275}
  /// [google.cloud.cpp.compute.v1.InterconnectAttachment]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_064.proto#L30}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::InterconnectAttachment>
  ListInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          ListInterconnectAttachmentsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified interconnect attachment with the data included in the
  /// request. This method supports PATCH semantics and uses the JSON merge patch
  /// format and processing rules.
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param interconnect_attachment  Name of the interconnect attachment to patch.
  /// @param interconnect_attachment_resource  The InterconnectAttachment for this request.
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
  /// [google.cloud.cpp.compute.interconnect_attachments.v1.PatchInterconnectAttachmentsRequest]: @googleapis_reference_link{google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto#L343}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchInterconnectAttachments(
      std::string const& project, std::string const& region,
      std::string const& interconnect_attachment,
      google::cloud::cpp::compute::v1::InterconnectAttachment const&
          interconnect_attachment_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified interconnect attachment with the data included in the
  /// request. This method supports PATCH semantics and uses the JSON merge patch
  /// format and processing rules.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.interconnect_attachments.v1.PatchInterconnectAttachmentsRequest].
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
  /// [google.cloud.cpp.compute.interconnect_attachments.v1.PatchInterconnectAttachmentsRequest]: @googleapis_reference_link{google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto#L343}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          PatchInterconnectAttachmentsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on an InterconnectAttachment. To learn more about labels,
  /// read the Labeling Resources documentation.
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
  /// [google.cloud.cpp.compute.interconnect_attachments.v1.SetLabelsRequest]: @googleapis_reference_link{google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto#L377}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      std::string const& project, std::string const& region,
      std::string const& resource,
      google::cloud::cpp::compute::v1::RegionSetLabelsRequest const&
          region_set_labels_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the labels on an InterconnectAttachment. To learn more about labels,
  /// read the Labeling Resources documentation.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.interconnect_attachments.v1.SetLabelsRequest].
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
  /// [google.cloud.cpp.compute.interconnect_attachments.v1.SetLabelsRequest]: @googleapis_reference_link{google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto#L377}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          SetLabelsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<InterconnectAttachmentsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_attachments_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_INTERCONNECT_ATTACHMENTS_CLIENT_H
