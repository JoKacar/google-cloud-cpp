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
// source: google/cloud/timeseriesinsights/v1/timeseries_insights.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TIMESERIESINSIGHTS_V1_TIMESERIES_INSIGHTS_CONTROLLER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TIMESERIESINSIGHTS_V1_TIMESERIES_INSIGHTS_CONTROLLER_CLIENT_H

#include "google/cloud/timeseriesinsights/v1/timeseries_insights_controller_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace timeseriesinsights_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// TimeseriesInsightsControllerClient
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
class TimeseriesInsightsControllerClient {
 public:
  explicit TimeseriesInsightsControllerClient(
      std::shared_ptr<TimeseriesInsightsControllerConnection> connection,
      Options opts = {});
  ~TimeseriesInsightsControllerClient();

  ///@{
  /// @name Copy and move support
  TimeseriesInsightsControllerClient(
      TimeseriesInsightsControllerClient const&) = default;
  TimeseriesInsightsControllerClient& operator=(
      TimeseriesInsightsControllerClient const&) = default;
  TimeseriesInsightsControllerClient(TimeseriesInsightsControllerClient&&) =
      default;
  TimeseriesInsightsControllerClient& operator=(
      TimeseriesInsightsControllerClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(TimeseriesInsightsControllerClient const& a,
                         TimeseriesInsightsControllerClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(TimeseriesInsightsControllerClient const& a,
                         TimeseriesInsightsControllerClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists [DataSets][google.cloud.timeseriesinsights.v1.DataSet] under the project.
  ///
  /// The order of the results is unspecified but deterministic. Newly created
  /// [DataSets][google.cloud.timeseriesinsights.v1.DataSet] will not necessarily be added to the end
  /// of this list.
  ///
  /// @param parent  Required. Project owning the DataSet in the format of "projects/{project}".
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
  ///     [google.cloud.timeseriesinsights.v1.DataSet], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.timeseriesinsights.v1.DataSet]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L173}
  /// [google.cloud.timeseriesinsights.v1.ListDataSetsRequest]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L362}
  ///
  // clang-format on
  StreamRange<google::cloud::timeseriesinsights::v1::DataSet> ListDataSets(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists [DataSets][google.cloud.timeseriesinsights.v1.DataSet] under the project.
  ///
  /// The order of the results is unspecified but deterministic. Newly created
  /// [DataSets][google.cloud.timeseriesinsights.v1.DataSet] will not necessarily be added to the end
  /// of this list.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.timeseriesinsights.v1.ListDataSetsRequest].
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
  ///     [google.cloud.timeseriesinsights.v1.DataSet], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.timeseriesinsights.v1.DataSet]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L173}
  /// [google.cloud.timeseriesinsights.v1.ListDataSetsRequest]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L362}
  ///
  // clang-format on
  StreamRange<google::cloud::timeseriesinsights::v1::DataSet> ListDataSets(
      google::cloud::timeseriesinsights::v1::ListDataSetsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Create a [DataSet][google.cloud.timeseriesinsights.v1.DataSet] from data stored on Cloud
  /// Storage.
  ///
  /// The data must stay immutable while we process the
  /// [DataSet][google.cloud.timeseriesinsights.v1.DataSet] creation; otherwise, undefined outcomes
  /// might result.  For more information, see [DataSet][google.cloud.timeseriesinsights.v1.DataSet].
  ///
  /// @param parent  Required. Client project name which will own this DataSet in the format of
  ///  'projects/{project}'.
  /// @param dataset  Required. Dataset to be loaded.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.timeseriesinsights.v1.DataSet])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.timeseriesinsights.v1.CreateDataSetRequest]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L336}
  /// [google.cloud.timeseriesinsights.v1.DataSet]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L173}
  ///
  // clang-format on
  StatusOr<google::cloud::timeseriesinsights::v1::DataSet> CreateDataSet(
      std::string const& parent,
      google::cloud::timeseriesinsights::v1::DataSet const& dataset,
      Options opts = {});

  // clang-format off
  ///
  /// Create a [DataSet][google.cloud.timeseriesinsights.v1.DataSet] from data stored on Cloud
  /// Storage.
  ///
  /// The data must stay immutable while we process the
  /// [DataSet][google.cloud.timeseriesinsights.v1.DataSet] creation; otherwise, undefined outcomes
  /// might result.  For more information, see [DataSet][google.cloud.timeseriesinsights.v1.DataSet].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.timeseriesinsights.v1.CreateDataSetRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.timeseriesinsights.v1.DataSet])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.timeseriesinsights.v1.CreateDataSetRequest]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L336}
  /// [google.cloud.timeseriesinsights.v1.DataSet]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L173}
  ///
  // clang-format on
  StatusOr<google::cloud::timeseriesinsights::v1::DataSet> CreateDataSet(
      google::cloud::timeseriesinsights::v1::CreateDataSetRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Delete a [DataSet][google.cloud.timeseriesinsights.v1.DataSet] from the system.
  ///
  /// **NOTE**: If the [DataSet][google.cloud.timeseriesinsights.v1.DataSet] is still being
  /// processed, it will be aborted and deleted.
  ///
  /// @param name  Required. Dataset name in the format of "projects/{project}/datasets/{dataset}"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.timeseriesinsights.v1.DataSet]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L173}
  /// [google.cloud.timeseriesinsights.v1.DeleteDataSetRequest]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L351}
  ///
  // clang-format on
  Status DeleteDataSet(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Delete a [DataSet][google.cloud.timeseriesinsights.v1.DataSet] from the system.
  ///
  /// **NOTE**: If the [DataSet][google.cloud.timeseriesinsights.v1.DataSet] is still being
  /// processed, it will be aborted and deleted.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.timeseriesinsights.v1.DeleteDataSetRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.timeseriesinsights.v1.DataSet]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L173}
  /// [google.cloud.timeseriesinsights.v1.DeleteDataSetRequest]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L351}
  ///
  // clang-format on
  Status DeleteDataSet(
      google::cloud::timeseriesinsights::v1::DeleteDataSetRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Append events to a `LOADED` [DataSet][google.cloud.timeseriesinsights.v1.DataSet].
  ///
  /// @param dataset  Required. The DataSet to which we want to append to in the format of
  ///  "projects/{project}/datasets/{dataset}"
  /// @param events  Events to be appended.
  ///  @n
  ///  Note:
  ///  @n
  ///  0. The [DataSet][google.cloud.timeseriesinsights.v1.DataSet] must be shown in a `LOADED` state
  ///     in the results of `list` method; otherwise, all events from
  ///     the append request will be dropped, and a `NOT_FOUND` status will be
  ///     returned.
  ///  0. All events in a single request must have the same
  ///     [groupId][google.cloud.timeseriesinsights.v1.Event.group_id] if set; otherwise, an
  ///     `INVALID_ARGUMENT` status will be returned.
  ///  0. If [groupId][google.cloud.timeseriesinsights.v1.Event.group_id] is not set (or 0), there
  ///     should be only 1 event; otherwise, an `INVALID_ARGUMENT` status will be
  ///     returned.
  ///  0. The events must be newer than the current time minus
  ///     [DataSet TTL][google.cloud.timeseriesinsights.v1.DataSet.ttl] or they will be dropped.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.timeseriesinsights.v1.AppendEventsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.timeseriesinsights.v1.AppendEventsRequest]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L300}
  /// [google.cloud.timeseriesinsights.v1.AppendEventsResponse]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L330}
  /// [google.cloud.timeseriesinsights.v1.DataSet]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L173}
  ///
  // clang-format on
  StatusOr<google::cloud::timeseriesinsights::v1::AppendEventsResponse>
  AppendEvents(
      std::string const& dataset,
      std::vector<google::cloud::timeseriesinsights::v1::Event> const& events,
      Options opts = {});

  // clang-format off
  ///
  /// Append events to a `LOADED` [DataSet][google.cloud.timeseriesinsights.v1.DataSet].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.timeseriesinsights.v1.AppendEventsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.timeseriesinsights.v1.AppendEventsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.timeseriesinsights.v1.AppendEventsRequest]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L300}
  /// [google.cloud.timeseriesinsights.v1.AppendEventsResponse]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L330}
  /// [google.cloud.timeseriesinsights.v1.DataSet]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L173}
  ///
  // clang-format on
  StatusOr<google::cloud::timeseriesinsights::v1::AppendEventsResponse>
  AppendEvents(
      google::cloud::timeseriesinsights::v1::AppendEventsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Execute a Timeseries Insights query over a loaded
  /// [DataSet][google.cloud.timeseriesinsights.v1.DataSet].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.timeseriesinsights.v1.QueryDataSetRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.timeseriesinsights.v1.QueryDataSetResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.timeseriesinsights.v1.DataSet]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L173}
  /// [google.cloud.timeseriesinsights.v1.QueryDataSetRequest]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L774}
  /// [google.cloud.timeseriesinsights.v1.QueryDataSetResponse]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L831}
  ///
  // clang-format on
  StatusOr<google::cloud::timeseriesinsights::v1::QueryDataSetResponse>
  QueryDataSet(
      google::cloud::timeseriesinsights::v1::QueryDataSetRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Evaluate an explicit slice from a loaded [DataSet][google.cloud.timeseriesinsights.v1.DataSet].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.timeseriesinsights.v1.EvaluateSliceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.timeseriesinsights.v1.EvaluatedSlice])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.timeseriesinsights.v1.DataSet]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L173}
  /// [google.cloud.timeseriesinsights.v1.EvaluateSliceRequest]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L844}
  /// [google.cloud.timeseriesinsights.v1.EvaluatedSlice]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L499}
  ///
  // clang-format on
  StatusOr<google::cloud::timeseriesinsights::v1::EvaluatedSlice> EvaluateSlice(
      google::cloud::timeseriesinsights::v1::EvaluateSliceRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Evaluate an explicit timeseries.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.timeseriesinsights.v1.EvaluateTimeseriesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.timeseriesinsights.v1.EvaluatedSlice])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.timeseriesinsights.v1.EvaluateTimeseriesRequest]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L874}
  /// [google.cloud.timeseriesinsights.v1.EvaluatedSlice]: @googleapis_reference_link{google/cloud/timeseriesinsights/v1/timeseries_insights.proto#L499}
  ///
  // clang-format on
  StatusOr<google::cloud::timeseriesinsights::v1::EvaluatedSlice>
  EvaluateTimeseries(
      google::cloud::timeseriesinsights::v1::EvaluateTimeseriesRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<TimeseriesInsightsControllerConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace timeseriesinsights_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TIMESERIESINSIGHTS_V1_TIMESERIES_INSIGHTS_CONTROLLER_CLIENT_H
