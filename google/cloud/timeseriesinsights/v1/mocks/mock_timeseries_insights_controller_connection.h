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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TIMESERIESINSIGHTS_V1_MOCKS_MOCK_TIMESERIES_INSIGHTS_CONTROLLER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TIMESERIESINSIGHTS_V1_MOCKS_MOCK_TIMESERIES_INSIGHTS_CONTROLLER_CONNECTION_H

#include "google/cloud/timeseriesinsights/v1/timeseries_insights_controller_connection.h"
#include <gmock/gmock.h>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace timeseriesinsights_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `TimeseriesInsightsControllerConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type
 * `TimeseriesInsightsControllerClient`. To do so, construct an object of type
 * `TimeseriesInsightsControllerClient` with an instance of this class. Then use
 * the Google Test framework functions to program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockTimeseriesInsightsControllerConnection
    : public timeseriesinsights_v1::TimeseriesInsightsControllerConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StreamRange<google::cloud::timeseriesinsights::v1::DataSet>, ListDataSets,
      (google::cloud::timeseriesinsights::v1::ListDataSetsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::timeseriesinsights::v1::DataSet>, CreateDataSet,
      (google::cloud::timeseriesinsights::v1::CreateDataSetRequest const&
           request),
      (override));

  MOCK_METHOD(
      Status, DeleteDataSet,
      (google::cloud::timeseriesinsights::v1::DeleteDataSetRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::timeseriesinsights::v1::AppendEventsResponse>,
      AppendEvents,
      (google::cloud::timeseriesinsights::v1::AppendEventsRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::timeseriesinsights::v1::QueryDataSetResponse>,
      QueryDataSet,
      (google::cloud::timeseriesinsights::v1::QueryDataSetRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::timeseriesinsights::v1::EvaluatedSlice>,
      EvaluateSlice,
      (google::cloud::timeseriesinsights::v1::EvaluateSliceRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::timeseriesinsights::v1::EvaluatedSlice>,
      EvaluateTimeseries,
      (google::cloud::timeseriesinsights::v1::EvaluateTimeseriesRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace timeseriesinsights_v1_mocks
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TIMESERIESINSIGHTS_V1_MOCKS_MOCK_TIMESERIES_INSIGHTS_CONTROLLER_CONNECTION_H
