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
// source: google/monitoring/v3/service_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_MOCKS_MOCK_SERVICE_MONITORING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_MOCKS_MOCK_SERVICE_MONITORING_CONNECTION_H

#include "google/cloud/monitoring/v3/service_monitoring_connection.h"
#include <gmock/gmock.h>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace monitoring_v3_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ServiceMonitoringServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ServiceMonitoringServiceClient`. To
 * do so, construct an object of type `ServiceMonitoringServiceClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockServiceMonitoringServiceConnection
    : public monitoring_v3::ServiceMonitoringServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::monitoring::v3::Service>, CreateService,
              (google::monitoring::v3::CreateServiceRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::monitoring::v3::Service>, GetService,
              (google::monitoring::v3::GetServiceRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::monitoring::v3::Service>, ListServices,
              (google::monitoring::v3::ListServicesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::monitoring::v3::Service>, UpdateService,
              (google::monitoring::v3::UpdateServiceRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteService,
              (google::monitoring::v3::DeleteServiceRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::monitoring::v3::ServiceLevelObjective>,
              CreateServiceLevelObjective,
              (google::monitoring::v3::CreateServiceLevelObjectiveRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::monitoring::v3::ServiceLevelObjective>,
      GetServiceLevelObjective,
      (google::monitoring::v3::GetServiceLevelObjectiveRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::monitoring::v3::ServiceLevelObjective>,
      ListServiceLevelObjectives,
      (google::monitoring::v3::ListServiceLevelObjectivesRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::monitoring::v3::ServiceLevelObjective>,
              UpdateServiceLevelObjective,
              (google::monitoring::v3::UpdateServiceLevelObjectiveRequest const&
                   request),
              (override));

  MOCK_METHOD(Status, DeleteServiceLevelObjective,
              (google::monitoring::v3::DeleteServiceLevelObjectiveRequest const&
                   request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_mocks
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_MOCKS_MOCK_SERVICE_MONITORING_CONNECTION_H
