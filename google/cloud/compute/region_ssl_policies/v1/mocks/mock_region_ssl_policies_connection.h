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
// source: google/cloud/compute/region_ssl_policies/v1/region_ssl_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_POLICIES_V1_MOCKS_MOCK_REGION_SSL_POLICIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_POLICIES_V1_MOCKS_MOCK_REGION_SSL_POLICIES_CONNECTION_H

#include "google/cloud/compute/region_ssl_policies/v1/region_ssl_policies_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_region_ssl_policies_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `RegionSslPoliciesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `RegionSslPoliciesClient`. To do so,
 * construct an object of type `RegionSslPoliciesClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockRegionSslPoliciesConnection
    : public compute_region_ssl_policies_v1::RegionSslPoliciesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteSslPolicy,
              (google::cloud::cpp::compute::region_ssl_policies::v1::
                   DeleteSslPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::SslPolicy>,
              GetSslPolicy,
              (google::cloud::cpp::compute::region_ssl_policies::v1::
                   GetSslPolicyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertSslPolicy,
              (google::cloud::cpp::compute::region_ssl_policies::v1::
                   InsertSslPolicyRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::SslPolicy>),
              ListRegionSslPolicies,
              (google::cloud::cpp::compute::region_ssl_policies::v1::
                   ListRegionSslPoliciesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::
                           SslPoliciesListAvailableFeaturesResponse>,
              ListAvailableFeatures,
              (google::cloud::cpp::compute::region_ssl_policies::v1::
                   ListAvailableFeaturesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchSslPolicy,
              (google::cloud::cpp::compute::region_ssl_policies::v1::
                   PatchSslPolicyRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_ssl_policies_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_POLICIES_V1_MOCKS_MOCK_REGION_SSL_POLICIES_CONNECTION_H
