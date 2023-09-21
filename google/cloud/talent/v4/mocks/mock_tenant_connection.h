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
// source: google/cloud/talent/v4/tenant_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_MOCKS_MOCK_TENANT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_MOCKS_MOCK_TENANT_CONNECTION_H

#include "google/cloud/talent/v4/tenant_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace talent_v4_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `TenantServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `TenantServiceClient`. To do so,
 * construct an object of type `TenantServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockTenantServiceConnection : public talent_v4::TenantServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::talent::v4::Tenant>, CreateTenant,
              (google::cloud::talent::v4::CreateTenantRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::talent::v4::Tenant>, GetTenant,
              (google::cloud::talent::v4::GetTenantRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::talent::v4::Tenant>, UpdateTenant,
              (google::cloud::talent::v4::UpdateTenantRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteTenant,
              (google::cloud::talent::v4::DeleteTenantRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::talent::v4::Tenant>), ListTenants,
              (google::cloud::talent::v4::ListTenantsRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_MOCKS_MOCK_TENANT_CONNECTION_H
