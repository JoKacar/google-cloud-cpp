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
// source: google/cloud/asset/v1/asset_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSET_ASSET_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSET_ASSET_CONNECTION_H

#include "google/cloud/asset/asset_connection_idempotency_policy.h"
#include "google/cloud/asset/internal/asset_retry_traits.h"
#include "google/cloud/asset/internal/asset_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace asset {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using AssetServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        asset_internal::AssetServiceRetryTraits>;

using AssetServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        asset_internal::AssetServiceRetryTraits>;

using AssetServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        asset_internal::AssetServiceRetryTraits>;

class AssetServiceConnection {
 public:
  virtual ~AssetServiceConnection() = 0;

  virtual future<StatusOr<google::cloud::asset::v1::ExportAssetsResponse>>
  ExportAssets(google::cloud::asset::v1::ExportAssetsRequest const& request);

  virtual StreamRange<google::cloud::asset::v1::Asset> ListAssets(
      google::cloud::asset::v1::ListAssetsRequest request);

  virtual StatusOr<google::cloud::asset::v1::BatchGetAssetsHistoryResponse>
  BatchGetAssetsHistory(
      google::cloud::asset::v1::BatchGetAssetsHistoryRequest const& request);

  virtual StatusOr<google::cloud::asset::v1::Feed> CreateFeed(
      google::cloud::asset::v1::CreateFeedRequest const& request);

  virtual StatusOr<google::cloud::asset::v1::Feed> GetFeed(
      google::cloud::asset::v1::GetFeedRequest const& request);

  virtual StatusOr<google::cloud::asset::v1::ListFeedsResponse> ListFeeds(
      google::cloud::asset::v1::ListFeedsRequest const& request);

  virtual StatusOr<google::cloud::asset::v1::Feed> UpdateFeed(
      google::cloud::asset::v1::UpdateFeedRequest const& request);

  virtual Status DeleteFeed(
      google::cloud::asset::v1::DeleteFeedRequest const& request);

  virtual StreamRange<google::cloud::asset::v1::ResourceSearchResult>
  SearchAllResources(
      google::cloud::asset::v1::SearchAllResourcesRequest request);

  virtual StreamRange<google::cloud::asset::v1::IamPolicySearchResult>
  SearchAllIamPolicies(
      google::cloud::asset::v1::SearchAllIamPoliciesRequest request);

  virtual StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyResponse>
  AnalyzeIamPolicy(
      google::cloud::asset::v1::AnalyzeIamPolicyRequest const& request);

  virtual future<
      StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyLongrunningResponse>>
  AnalyzeIamPolicyLongrunning(
      google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
          request);

  virtual StatusOr<google::cloud::asset::v1::AnalyzeMoveResponse> AnalyzeMove(
      google::cloud::asset::v1::AnalyzeMoveRequest const& request);
};

std::shared_ptr<AssetServiceConnection> MakeAssetServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace asset
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace asset_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<asset::AssetServiceConnection> MakeAssetServiceConnection(
    std::shared_ptr<AssetServiceStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace asset_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSET_ASSET_CONNECTION_H
