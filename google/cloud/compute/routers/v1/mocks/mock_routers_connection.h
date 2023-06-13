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
// source: google/cloud/compute/routers/v1/routers.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTERS_V1_MOCKS_MOCK_ROUTERS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTERS_V1_MOCKS_MOCK_ROUTERS_CONNECTION_H

#include "google/cloud/compute/routers/v1/routers_connection.h"
#include <gmock/gmock.h>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_routers_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `RoutersConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `RoutersClient`. To do so,
 * construct an object of type `RoutersClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockRoutersConnection : public compute_routers_v1::RoutersConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::RouterAggregatedList>,
              AggregatedListRouters,
              (google::cloud::cpp::compute::routers::v1::
                   AggregatedListRoutersRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      DeleteRouters,
      (google::cloud::cpp::compute::routers::v1::DeleteRoutersRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Router>, GetRouters,
      (google::cloud::cpp::compute::routers::v1::GetRoutersRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::VmEndpointNatMappingsList>,
      GetNatMappingInfo,
      (google::cloud::cpp::compute::routers::v1::GetNatMappingInfoRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::RouterStatusResponse>,
      GetRouterStatus,
      (google::cloud::cpp::compute::routers::v1::GetRouterStatusRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      InsertRouters,
      (google::cloud::cpp::compute::routers::v1::InsertRoutersRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::cpp::compute::v1::Router>, ListRouters,
      (google::cloud::cpp::compute::routers::v1::ListRoutersRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      PatchRouters,
      (google::cloud::cpp::compute::routers::v1::PatchRoutersRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::RoutersPreviewResponse>,
      Preview,
      (google::cloud::cpp::compute::routers::v1::PreviewRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      UpdateRouters,
      (google::cloud::cpp::compute::routers::v1::UpdateRoutersRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_routers_v1_mocks
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTERS_V1_MOCKS_MOCK_ROUTERS_CONNECTION_H
