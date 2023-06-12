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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TIMESERIESINSIGHTS_V1_TIMESERIES_INSIGHTS_CONTROLLER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TIMESERIESINSIGHTS_V1_TIMESERIES_INSIGHTS_CONTROLLER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/timeseriesinsights/v1/timeseries_insights.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace timeseriesinsights_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TimeseriesInsightsControllerConnectionIdempotencyPolicy {
 public:
  virtual ~TimeseriesInsightsControllerConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<
      TimeseriesInsightsControllerConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency ListDataSets(
      google::cloud::timeseriesinsights::v1::ListDataSetsRequest request);

  virtual google::cloud::Idempotency CreateDataSet(
      google::cloud::timeseriesinsights::v1::CreateDataSetRequest const&
          request);

  virtual google::cloud::Idempotency DeleteDataSet(
      google::cloud::timeseriesinsights::v1::DeleteDataSetRequest const&
          request);

  virtual google::cloud::Idempotency AppendEvents(
      google::cloud::timeseriesinsights::v1::AppendEventsRequest const&
          request);

  virtual google::cloud::Idempotency QueryDataSet(
      google::cloud::timeseriesinsights::v1::QueryDataSetRequest const&
          request);

  virtual google::cloud::Idempotency EvaluateSlice(
      google::cloud::timeseriesinsights::v1::EvaluateSliceRequest const&
          request);

  virtual google::cloud::Idempotency EvaluateTimeseries(
      google::cloud::timeseriesinsights::v1::EvaluateTimeseriesRequest const&
          request);
};

std::unique_ptr<TimeseriesInsightsControllerConnectionIdempotencyPolicy>
MakeDefaultTimeseriesInsightsControllerConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace timeseriesinsights_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TIMESERIESINSIGHTS_V1_TIMESERIES_INSIGHTS_CONTROLLER_CONNECTION_IDEMPOTENCY_POLICY_H
