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
// google/cloud/compute/target_https_proxies/v1/target_https_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTPS_PROXIES_V1_MOCKS_MOCK_TARGET_HTTPS_PROXIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTPS_PROXIES_V1_MOCKS_MOCK_TARGET_HTTPS_PROXIES_CONNECTION_H

#include "google/cloud/compute/target_https_proxies/v1/target_https_proxies_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_target_https_proxies_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `TargetHttpsProxiesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `TargetHttpsProxiesClient`. To do
 * so, construct an object of type `TargetHttpsProxiesClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockTargetHttpsProxiesConnection
    : public compute_target_https_proxies_v1::TargetHttpsProxiesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxyAggregatedList>,
      AggregatedListTargetHttpsProxies,
      (google::cloud::cpp::compute::target_https_proxies::v1::
           AggregatedListTargetHttpsProxiesRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteTargetHttpsProxies,
              (google::cloud::cpp::compute::target_https_proxies::v1::
                   DeleteTargetHttpsProxiesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>,
              GetTargetHttpsProxies,
              (google::cloud::cpp::compute::target_https_proxies::v1::
                   GetTargetHttpsProxiesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertTargetHttpsProxies,
              (google::cloud::cpp::compute::target_https_proxies::v1::
                   InsertTargetHttpsProxiesRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::cpp::compute::v1::TargetHttpsProxy>,
              ListTargetHttpsProxies,
              (google::cloud::cpp::compute::target_https_proxies::v1::
                   ListTargetHttpsProxiesRequest request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchTargetHttpsProxies,
              (google::cloud::cpp::compute::target_https_proxies::v1::
                   PatchTargetHttpsProxiesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetCertificateMap,
              (google::cloud::cpp::compute::target_https_proxies::v1::
                   SetCertificateMapRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetQuicOverride,
              (google::cloud::cpp::compute::target_https_proxies::v1::
                   SetQuicOverrideRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetSslCertificates,
              (google::cloud::cpp::compute::target_https_proxies::v1::
                   SetSslCertificatesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetSslPolicy,
              (google::cloud::cpp::compute::target_https_proxies::v1::
                   SetSslPolicyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetUrlMap,
              (google::cloud::cpp::compute::target_https_proxies::v1::
                   SetUrlMapRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_https_proxies_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTPS_PROXIES_V1_MOCKS_MOCK_TARGET_HTTPS_PROXIES_CONNECTION_H
