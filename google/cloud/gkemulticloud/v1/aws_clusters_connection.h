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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_AWS_CLUSTERS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_AWS_CLUSTERS_CONNECTION_H

#include "google/cloud/gkemulticloud/v1/aws_clusters_connection_idempotency_policy.h"
#include "google/cloud/gkemulticloud/v1/internal/aws_clusters_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/gkemulticloud/v1/aws_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace gkemulticloud_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using AwsClustersRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    gkemulticloud_v1_internal::AwsClustersRetryTraits>;

using AwsClustersLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        gkemulticloud_v1_internal::AwsClustersRetryTraits>;

using AwsClustersLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        gkemulticloud_v1_internal::AwsClustersRetryTraits>;

/**
 * The `AwsClustersConnection` object for `AwsClustersClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `AwsClustersClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `AwsClustersClient`.
 *
 * To create a concrete instance, see `MakeAwsClustersConnection()`.
 *
 * For mocking, see `gkemulticloud_v1_mocks::MockAwsClustersConnection`.
 */
class AwsClustersConnection {
 public:
  virtual ~AwsClustersConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
  CreateAwsCluster(
      google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const& request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
  UpdateAwsCluster(
      google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const& request);

  virtual StatusOr<google::cloud::gkemulticloud::v1::AwsCluster> GetAwsCluster(
      google::cloud::gkemulticloud::v1::GetAwsClusterRequest const& request);

  virtual StreamRange<google::cloud::gkemulticloud::v1::AwsCluster>
  ListAwsClusters(
      google::cloud::gkemulticloud::v1::ListAwsClustersRequest request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAwsCluster(
      google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const& request);

  virtual StatusOr<
      google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse>
  GenerateAwsAccessToken(
      google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
          request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
  CreateAwsNodePool(
      google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const&
          request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
  UpdateAwsNodePool(
      google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const&
          request);

  virtual StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>
  GetAwsNodePool(
      google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const& request);

  virtual StreamRange<google::cloud::gkemulticloud::v1::AwsNodePool>
  ListAwsNodePools(
      google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest request);

  virtual future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAwsNodePool(
      google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const&
          request);

  virtual StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>
  GetAwsServerConfig(
      google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
          request);
};

/**
 * A factory function to construct an object of type `AwsClustersConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of AwsClustersClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `AwsClustersConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::gkemulticloud_v1::AwsClustersPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `AwsClustersConnection` created by
 * this function.
 */
std::shared_ptr<AwsClustersConnection> MakeAwsClustersConnection(
    std::string const& location, Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_AWS_CLUSTERS_CONNECTION_H
