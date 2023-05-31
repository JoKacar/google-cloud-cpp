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
// source: google/cloud/compute/http_health_checks/v1/http_health_checks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTP_HEALTH_CHECKS_V1_MOCKS_MOCK_HTTP_HEALTH_CHECKS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTP_HEALTH_CHECKS_V1_MOCKS_MOCK_HTTP_HEALTH_CHECKS_CONNECTION_H

#include "google/cloud/compute/http_health_checks/v1/http_health_checks_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_http_health_checks_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `HttpHealthChecksConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `HttpHealthChecksClient`. To do so,
 * construct an object of type `HttpHealthChecksClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockHttpHealthChecksConnection : public compute_http_health_checks_v1::HttpHealthChecksConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
  DeleteHttpHealthChecks,
  (google::cloud::cpp::compute::http_health_checks::v1::DeleteHttpHealthChecksRequest const& request), (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::HttpHealthCheck>,
  GetHttpHealthChecks,
  (google::cloud::cpp::compute::http_health_checks::v1::GetHttpHealthChecksRequest const& request), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
  InsertHttpHealthChecks,
  (google::cloud::cpp::compute::http_health_checks::v1::InsertHttpHealthChecksRequest const& request), (override));

  MOCK_METHOD(StreamRange<google::cloud::cpp::compute::v1::HttpHealthCheck>,
  ListHttpHealthChecks,
  (google::cloud::cpp::compute::http_health_checks::v1::ListHttpHealthChecksRequest request), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
  PatchHttpHealthChecks,
  (google::cloud::cpp::compute::http_health_checks::v1::PatchHttpHealthChecksRequest const& request), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
  UpdateHttpHealthChecks,
  (google::cloud::cpp::compute::http_health_checks::v1::UpdateHttpHealthChecksRequest const& request), (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_http_health_checks_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTP_HEALTH_CHECKS_V1_MOCKS_MOCK_HTTP_HEALTH_CHECKS_CONNECTION_H
