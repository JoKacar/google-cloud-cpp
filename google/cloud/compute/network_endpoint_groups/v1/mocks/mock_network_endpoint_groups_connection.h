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
// google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_MOCKS_MOCK_NETWORK_ENDPOINT_GROUPS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_MOCKS_MOCK_NETWORK_ENDPOINT_GROUPS_CONNECTION_H

#include "google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_network_endpoint_groups_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `NetworkEndpointGroupsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `NetworkEndpointGroupsClient`. To do
 * so, construct an object of type `NetworkEndpointGroupsClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockNetworkEndpointGroupsConnection
    : public compute_network_endpoint_groups_v1::
          NetworkEndpointGroupsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                             NetworkEndpointGroupsScopedList>>,
      AggregatedListNetworkEndpointGroups,
      (google::cloud::cpp::compute::network_endpoint_groups::v1::
           AggregatedListNetworkEndpointGroupsRequest request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AttachNetworkEndpoints,
              (google::cloud::cpp::compute::network_endpoint_groups::v1::
                   AttachNetworkEndpointsRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteNetworkEndpointGroup,
              (google::cloud::cpp::compute::network_endpoint_groups::v1::
                   DeleteNetworkEndpointGroupRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DetachNetworkEndpoints,
              (google::cloud::cpp::compute::network_endpoint_groups::v1::
                   DetachNetworkEndpointsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>,
              GetNetworkEndpointGroup,
              (google::cloud::cpp::compute::network_endpoint_groups::v1::
                   GetNetworkEndpointGroupRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertNetworkEndpointGroup,
              (google::cloud::cpp::compute::network_endpoint_groups::v1::
                   InsertNetworkEndpointGroupRequest const& request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>,
      ListNetworkEndpointGroups,
      (google::cloud::cpp::compute::network_endpoint_groups::v1::
           ListNetworkEndpointGroupsRequest request),
      (override));

  MOCK_METHOD(
      StreamRange<
          google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>,
      ListNetworkEndpoints,
      (google::cloud::cpp::compute::network_endpoint_groups::v1::
           ListNetworkEndpointsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>,
      TestIamPermissions,
      (google::cloud::cpp::compute::network_endpoint_groups::v1::
           TestIamPermissionsRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_endpoint_groups_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_MOCKS_MOCK_NETWORK_ENDPOINT_GROUPS_CONNECTION_H
