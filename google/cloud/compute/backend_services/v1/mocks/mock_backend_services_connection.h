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
// source: google/cloud/compute/backend_services/v1/backend_services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_SERVICES_V1_MOCKS_MOCK_BACKEND_SERVICES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_SERVICES_V1_MOCKS_MOCK_BACKEND_SERVICES_CONNECTION_H

#include "google/cloud/compute/backend_services/v1/backend_services_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_backend_services_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `BackendServicesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `BackendServicesClient`. To do so,
 * construct an object of type `BackendServicesClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockBackendServicesConnection
    : public compute_backend_services_v1::BackendServicesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddSignedUrlKey,
              (google::cloud::cpp::compute::backend_services::v1::
                   AddSignedUrlKeyRequest const& request),
              (override));

  MOCK_METHOD(
      (StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                              BackendServicesScopedList>>),
      AggregatedListBackendServices,
      (google::cloud::cpp::compute::backend_services::v1::
           AggregatedListBackendServicesRequest request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteBackendService,
              (google::cloud::cpp::compute::backend_services::v1::
                   DeleteBackendServiceRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteSignedUrlKey,
              (google::cloud::cpp::compute::backend_services::v1::
                   DeleteSignedUrlKeyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::BackendService>,
              GetBackendService,
              (google::cloud::cpp::compute::backend_services::v1::
                   GetBackendServiceRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::BackendServiceGroupHealth>,
      GetHealth,
      (google::cloud::cpp::compute::backend_services::v1::
           GetHealthRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Policy>, GetIamPolicy,
              (google::cloud::cpp::compute::backend_services::v1::
                   GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertBackendService,
              (google::cloud::cpp::compute::backend_services::v1::
                   InsertBackendServiceRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::BackendService>),
              ListBackendServices,
              (google::cloud::cpp::compute::backend_services::v1::
                   ListBackendServicesRequest request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::cpp::compute::v1::BackendService>),
      ListUsable,
      (google::cloud::cpp::compute::backend_services::v1::ListUsableRequest
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchBackendService,
              (google::cloud::cpp::compute::backend_services::v1::
                   PatchBackendServiceRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetEdgeSecurityPolicy,
              (google::cloud::cpp::compute::backend_services::v1::
                   SetEdgeSecurityPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Policy>, SetIamPolicy,
              (google::cloud::cpp::compute::backend_services::v1::
                   SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetSecurityPolicy,
              (google::cloud::cpp::compute::backend_services::v1::
                   SetSecurityPolicyRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>,
      TestIamPermissions,
      (google::cloud::cpp::compute::backend_services::v1::
           TestIamPermissionsRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateBackendService,
              (google::cloud::cpp::compute::backend_services::v1::
                   UpdateBackendServiceRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_backend_services_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_SERVICES_V1_MOCKS_MOCK_BACKEND_SERVICES_CONNECTION_H
