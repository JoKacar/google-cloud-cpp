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
// source: google/cloud/gkemulticloud/v1/aws_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_MOCKS_MOCK_AWS_CLUSTERS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_MOCKS_MOCK_AWS_CLUSTERS_CONNECTION_H

#include "google/cloud/gkemulticloud/v1/aws_clusters_connection.h"
#include <gmock/gmock.h>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace gkemulticloud_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `AwsClustersConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `AwsClustersClient`. To do so,
 * construct an object of type `AwsClustersClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockAwsClustersConnection
    : public gkemulticloud_v1::AwsClustersConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>,
              CreateAwsCluster,
              (google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>,
              UpdateAwsCluster,
              (google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>, GetAwsCluster,
      (google::cloud::gkemulticloud::v1::GetAwsClusterRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::gkemulticloud::v1::AwsCluster>,
      ListAwsClusters,
      (google::cloud::gkemulticloud::v1::ListAwsClustersRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>,
      DeleteAwsCluster,
      (google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse>,
      GenerateAwsAccessToken,
      (google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>,
              CreateAwsNodePool,
              (google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>,
              UpdateAwsNodePool,
              (google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>, GetAwsNodePool,
      (google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::gkemulticloud::v1::AwsNodePool>,
      ListAwsNodePools,
      (google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>,
      DeleteAwsNodePool,
      (google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>,
      GetAwsServerConfig,
      (google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_mocks
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_MOCKS_MOCK_AWS_CLUSTERS_CONNECTION_H
