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
// source: google/cloud/compute/https_health_checks/v1/https_health_checks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTPS_HEALTH_CHECKS_V1_MOCKS_MOCK_HTTPS_HEALTH_CHECKS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTPS_HEALTH_CHECKS_V1_MOCKS_MOCK_HTTPS_HEALTH_CHECKS_CONNECTION_H

#include "google/cloud/compute/https_health_checks/v1/https_health_checks_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_https_health_checks_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `HttpsHealthChecksConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `HttpsHealthChecksClient`. To do so,
 * construct an object of type `HttpsHealthChecksClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockHttpsHealthChecksConnection
    : public compute_https_health_checks_v1::HttpsHealthChecksConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteHttpsHealthCheck,
              (google::cloud::cpp::compute::https_health_checks::v1::
                   DeleteHttpsHealthCheckRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::HttpsHealthCheck>,
              GetHttpsHealthCheck,
              (google::cloud::cpp::compute::https_health_checks::v1::
                   GetHttpsHealthCheckRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertHttpsHealthCheck,
              (google::cloud::cpp::compute::https_health_checks::v1::
                   InsertHttpsHealthCheckRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::HttpsHealthCheck>),
              ListHttpsHealthChecks,
              (google::cloud::cpp::compute::https_health_checks::v1::
                   ListHttpsHealthChecksRequest request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchHttpsHealthCheck,
              (google::cloud::cpp::compute::https_health_checks::v1::
                   PatchHttpsHealthCheckRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateHttpsHealthCheck,
              (google::cloud::cpp::compute::https_health_checks::v1::
                   UpdateHttpsHealthCheckRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_https_health_checks_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTPS_HEALTH_CHECKS_V1_MOCKS_MOCK_HTTPS_HEALTH_CHECKS_CONNECTION_H
