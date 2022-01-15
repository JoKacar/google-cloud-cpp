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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSET_MOCKS_MOCK_ASSET_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSET_MOCKS_MOCK_ASSET_CONNECTION_H

#include "google/cloud/asset/asset_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace asset_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MockAssetServiceConnection : public asset::AssetServiceConnection {
 public:
  MOCK_METHOD(future<StatusOr<google::cloud::asset::v1::ExportAssetsResponse>>,
              ExportAssets,
              (google::cloud::asset::v1::ExportAssetsRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::asset::v1::Asset>, ListAssets,
              (google::cloud::asset::v1::ListAssetsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::asset::v1::BatchGetAssetsHistoryResponse>,
      BatchGetAssetsHistory,
      (google::cloud::asset::v1::BatchGetAssetsHistoryRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::asset::v1::Feed>, CreateFeed,
              (google::cloud::asset::v1::CreateFeedRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::asset::v1::Feed>, GetFeed,
              (google::cloud::asset::v1::GetFeedRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::asset::v1::ListFeedsResponse>, ListFeeds,
              (google::cloud::asset::v1::ListFeedsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::asset::v1::Feed>, UpdateFeed,
              (google::cloud::asset::v1::UpdateFeedRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteFeed,
              (google::cloud::asset::v1::DeleteFeedRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::asset::v1::ResourceSearchResult>,
              SearchAllResources,
              (google::cloud::asset::v1::SearchAllResourcesRequest request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::asset::v1::IamPolicySearchResult>,
              SearchAllIamPolicies,
              (google::cloud::asset::v1::SearchAllIamPoliciesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyResponse>,
      AnalyzeIamPolicy,
      (google::cloud::asset::v1::AnalyzeIamPolicyRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::asset::v1::AnalyzeIamPolicyLongrunningResponse>>,
      AnalyzeIamPolicyLongrunning,
      (google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::asset::v1::AnalyzeMoveResponse>,
              AnalyzeMove,
              (google::cloud::asset::v1::AnalyzeMoveRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace asset_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSET_MOCKS_MOCK_ASSET_CONNECTION_H
