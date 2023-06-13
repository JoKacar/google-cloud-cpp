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
// source: google/cloud/storageinsights/v1/storageinsights.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGEINSIGHTS_V1_STORAGE_INSIGHTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGEINSIGHTS_V1_STORAGE_INSIGHTS_CLIENT_H

#include "google/cloud/storageinsights/v1/storage_insights_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace storageinsights_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service describing handlers for resources
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
class StorageInsightsClient {
 public:
  explicit StorageInsightsClient(
      std::shared_ptr<StorageInsightsConnection> connection, Options opts = {});
  ~StorageInsightsClient();

  ///@{
  /// @name Copy and move support
  StorageInsightsClient(StorageInsightsClient const&) = default;
  StorageInsightsClient& operator=(StorageInsightsClient const&) = default;
  StorageInsightsClient(StorageInsightsClient&&) = default;
  StorageInsightsClient& operator=(StorageInsightsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(StorageInsightsClient const& a,
                         StorageInsightsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(StorageInsightsClient const& a,
                         StorageInsightsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists ReportConfigs in a given project and location.
  ///
  /// @param parent  Required. Parent value for ListReportConfigsRequest
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
  ///     [google.cloud.storageinsights.v1.ReportConfig], or rather,
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
  /// [google.cloud.storageinsights.v1.ListReportConfigsRequest]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L107}
  /// [google.cloud.storageinsights.v1.ReportConfig]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L449}
  ///
  // clang-format on
  StreamRange<google::cloud::storageinsights::v1::ReportConfig>
  ListReportConfigs(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists ReportConfigs in a given project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.storageinsights.v1.ListReportConfigsRequest].
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
  ///     [google.cloud.storageinsights.v1.ReportConfig], or rather,
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
  /// [google.cloud.storageinsights.v1.ListReportConfigsRequest]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L107}
  /// [google.cloud.storageinsights.v1.ReportConfig]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L449}
  ///
  // clang-format on
  StreamRange<google::cloud::storageinsights::v1::ReportConfig>
  ListReportConfigs(
      google::cloud::storageinsights::v1::ListReportConfigsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single ReportConfig.
  ///
  /// @param name  Required. Name of the resource
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.storageinsights.v1.ReportConfig])
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
  /// [google.cloud.storageinsights.v1.GetReportConfigRequest]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L143}
  /// [google.cloud.storageinsights.v1.ReportConfig]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L449}
  ///
  // clang-format on
  StatusOr<google::cloud::storageinsights::v1::ReportConfig> GetReportConfig(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single ReportConfig.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.storageinsights.v1.GetReportConfigRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.storageinsights.v1.ReportConfig])
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
  /// [google.cloud.storageinsights.v1.GetReportConfigRequest]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L143}
  /// [google.cloud.storageinsights.v1.ReportConfig]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L449}
  ///
  // clang-format on
  StatusOr<google::cloud::storageinsights::v1::ReportConfig> GetReportConfig(
      google::cloud::storageinsights::v1::GetReportConfigRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new ReportConfig in a given project and location.
  ///
  /// @param parent  Required. Value for parent.
  /// @param report_config  Required. The resource being created
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.storageinsights.v1.ReportConfig])
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
  /// [google.cloud.storageinsights.v1.CreateReportConfigRequest]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L154}
  /// [google.cloud.storageinsights.v1.ReportConfig]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L449}
  ///
  // clang-format on
  StatusOr<google::cloud::storageinsights::v1::ReportConfig> CreateReportConfig(
      std::string const& parent,
      google::cloud::storageinsights::v1::ReportConfig const& report_config,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new ReportConfig in a given project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.storageinsights.v1.CreateReportConfigRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.storageinsights.v1.ReportConfig])
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
  /// [google.cloud.storageinsights.v1.CreateReportConfigRequest]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L154}
  /// [google.cloud.storageinsights.v1.ReportConfig]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L449}
  ///
  // clang-format on
  StatusOr<google::cloud::storageinsights::v1::ReportConfig> CreateReportConfig(
      google::cloud::storageinsights::v1::CreateReportConfigRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the parameters of a single ReportConfig.
  ///
  /// @param report_config  Required. The resource being updated
  /// @param update_mask  Required. Field mask is used to specify the fields to be overwritten in the
  ///  ReportConfig resource by the update.
  ///  The fields specified in the update_mask are relative to the resource, not
  ///  the full request. A field will be overwritten if it is in the mask. If the
  ///  user does not provide a mask then all fields will be overwritten.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.storageinsights.v1.ReportConfig])
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
  /// [google.cloud.storageinsights.v1.ReportConfig]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L449}
  /// [google.cloud.storageinsights.v1.UpdateReportConfigRequest]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L183}
  ///
  // clang-format on
  StatusOr<google::cloud::storageinsights::v1::ReportConfig> UpdateReportConfig(
      google::cloud::storageinsights::v1::ReportConfig const& report_config,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates the parameters of a single ReportConfig.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.storageinsights.v1.UpdateReportConfigRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.storageinsights.v1.ReportConfig])
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
  /// [google.cloud.storageinsights.v1.ReportConfig]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L449}
  /// [google.cloud.storageinsights.v1.UpdateReportConfigRequest]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L183}
  ///
  // clang-format on
  StatusOr<google::cloud::storageinsights::v1::ReportConfig> UpdateReportConfig(
      google::cloud::storageinsights::v1::UpdateReportConfigRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a single ReportConfig.
  ///
  /// @param name  Required. Name of the resource
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
  /// [google.cloud.storageinsights.v1.DeleteReportConfigRequest]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L212}
  ///
  // clang-format on
  Status DeleteReportConfig(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a single ReportConfig.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.storageinsights.v1.DeleteReportConfigRequest].
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
  /// [google.cloud.storageinsights.v1.DeleteReportConfigRequest]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L212}
  ///
  // clang-format on
  Status DeleteReportConfig(
      google::cloud::storageinsights::v1::DeleteReportConfigRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists ReportDetails in a given project and location.
  ///
  /// @param parent  Required. Parent value for ListReportDetailsRequest
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
  ///     [google.cloud.storageinsights.v1.ReportDetail], or rather,
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
  /// [google.cloud.storageinsights.v1.ListReportDetailsRequest]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L290}
  /// [google.cloud.storageinsights.v1.ReportDetail]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L243}
  ///
  // clang-format on
  StreamRange<google::cloud::storageinsights::v1::ReportDetail>
  ListReportDetails(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists ReportDetails in a given project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.storageinsights.v1.ListReportDetailsRequest].
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
  ///     [google.cloud.storageinsights.v1.ReportDetail], or rather,
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
  /// [google.cloud.storageinsights.v1.ListReportDetailsRequest]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L290}
  /// [google.cloud.storageinsights.v1.ReportDetail]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L243}
  ///
  // clang-format on
  StreamRange<google::cloud::storageinsights::v1::ReportDetail>
  ListReportDetails(
      google::cloud::storageinsights::v1::ListReportDetailsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single ReportDetail.
  ///
  /// @param name  Required. Name of the resource
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.storageinsights.v1.ReportDetail])
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
  /// [google.cloud.storageinsights.v1.GetReportDetailRequest]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L326}
  /// [google.cloud.storageinsights.v1.ReportDetail]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L243}
  ///
  // clang-format on
  StatusOr<google::cloud::storageinsights::v1::ReportDetail> GetReportDetail(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single ReportDetail.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.storageinsights.v1.GetReportDetailRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.storageinsights.v1.ReportDetail])
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
  /// [google.cloud.storageinsights.v1.GetReportDetailRequest]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L326}
  /// [google.cloud.storageinsights.v1.ReportDetail]: @googleapis_reference_link{google/cloud/storageinsights/v1/storageinsights.proto#L243}
  ///
  // clang-format on
  StatusOr<google::cloud::storageinsights::v1::ReportDetail> GetReportDetail(
      google::cloud::storageinsights::v1::GetReportDetailRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<StorageInsightsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storageinsights_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGEINSIGHTS_V1_STORAGE_INSIGHTS_CLIENT_H
