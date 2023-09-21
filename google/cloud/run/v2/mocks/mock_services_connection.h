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
// source: google/cloud/run/v2/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_MOCKS_MOCK_SERVICES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_MOCKS_MOCK_SERVICES_CONNECTION_H

#include "google/cloud/run/v2/services_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace run_v2_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ServicesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ServicesClient`. To do so,
 * construct an object of type `ServicesClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockServicesConnection : public run_v2::ServicesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::run::v2::Service>>, CreateService,
              (google::cloud::run::v2::CreateServiceRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::run::v2::Service>, GetService,
              (google::cloud::run::v2::GetServiceRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::run::v2::Service>), ListServices,
              (google::cloud::run::v2::ListServicesRequest request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::run::v2::Service>>, UpdateService,
              (google::cloud::run::v2::UpdateServiceRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::run::v2::Service>>, DeleteService,
              (google::cloud::run::v2::DeleteServiceRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_MOCKS_MOCK_SERVICES_CONNECTION_H
