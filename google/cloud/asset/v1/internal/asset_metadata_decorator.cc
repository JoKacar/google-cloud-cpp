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

#include "google/cloud/asset/v1/internal/asset_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/asset/v1/asset_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace asset_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AssetServiceMetadata::AssetServiceMetadata(
    std::shared_ptr<AssetServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
AssetServiceMetadata::AsyncExportAssets(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::asset::v1::ExportAssetsRequest const& request) {
  SetMetadata(*context, absl::StrCat("parent=", request.parent()));
  return child_->AsyncExportAssets(cq, std::move(context), request);
}

StatusOr<google::cloud::asset::v1::ListAssetsResponse>
AssetServiceMetadata::ListAssets(
    grpc::ClientContext& context,
    google::cloud::asset::v1::ListAssetsRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListAssets(context, request);
}

StatusOr<google::cloud::asset::v1::BatchGetAssetsHistoryResponse>
AssetServiceMetadata::BatchGetAssetsHistory(
    grpc::ClientContext& context,
    google::cloud::asset::v1::BatchGetAssetsHistoryRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->BatchGetAssetsHistory(context, request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceMetadata::CreateFeed(
    grpc::ClientContext& context,
    google::cloud::asset::v1::CreateFeedRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->CreateFeed(context, request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceMetadata::GetFeed(
    grpc::ClientContext& context,
    google::cloud::asset::v1::GetFeedRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetFeed(context, request);
}

StatusOr<google::cloud::asset::v1::ListFeedsResponse>
AssetServiceMetadata::ListFeeds(
    grpc::ClientContext& context,
    google::cloud::asset::v1::ListFeedsRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListFeeds(context, request);
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceMetadata::UpdateFeed(
    grpc::ClientContext& context,
    google::cloud::asset::v1::UpdateFeedRequest const& request) {
  SetMetadata(context, absl::StrCat("feed.name=", request.feed().name()));
  return child_->UpdateFeed(context, request);
}

Status AssetServiceMetadata::DeleteFeed(
    grpc::ClientContext& context,
    google::cloud::asset::v1::DeleteFeedRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->DeleteFeed(context, request);
}

StatusOr<google::cloud::asset::v1::SearchAllResourcesResponse>
AssetServiceMetadata::SearchAllResources(
    grpc::ClientContext& context,
    google::cloud::asset::v1::SearchAllResourcesRequest const& request) {
  SetMetadata(context, absl::StrCat("scope=", request.scope()));
  return child_->SearchAllResources(context, request);
}

StatusOr<google::cloud::asset::v1::SearchAllIamPoliciesResponse>
AssetServiceMetadata::SearchAllIamPolicies(
    grpc::ClientContext& context,
    google::cloud::asset::v1::SearchAllIamPoliciesRequest const& request) {
  SetMetadata(context, absl::StrCat("scope=", request.scope()));
  return child_->SearchAllIamPolicies(context, request);
}

StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyResponse>
AssetServiceMetadata::AnalyzeIamPolicy(
    grpc::ClientContext& context,
    google::cloud::asset::v1::AnalyzeIamPolicyRequest const& request) {
  SetMetadata(context, absl::StrCat("analysis_query.scope=",
                                    request.analysis_query().scope()));
  return child_->AnalyzeIamPolicy(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AssetServiceMetadata::AsyncAnalyzeIamPolicyLongrunning(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
        request) {
  SetMetadata(*context, absl::StrCat("analysis_query.scope=",
                                     request.analysis_query().scope()));
  return child_->AsyncAnalyzeIamPolicyLongrunning(cq, std::move(context),
                                                  request);
}

StatusOr<google::cloud::asset::v1::AnalyzeMoveResponse>
AssetServiceMetadata::AnalyzeMove(
    grpc::ClientContext& context,
    google::cloud::asset::v1::AnalyzeMoveRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=", request.resource()));
  return child_->AnalyzeMove(context, request);
}

StatusOr<google::cloud::asset::v1::QueryAssetsResponse>
AssetServiceMetadata::QueryAssets(
    grpc::ClientContext& context,
    google::cloud::asset::v1::QueryAssetsRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->QueryAssets(context, request);
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceMetadata::CreateSavedQuery(
    grpc::ClientContext& context,
    google::cloud::asset::v1::CreateSavedQueryRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->CreateSavedQuery(context, request);
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceMetadata::GetSavedQuery(
    grpc::ClientContext& context,
    google::cloud::asset::v1::GetSavedQueryRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetSavedQuery(context, request);
}

StatusOr<google::cloud::asset::v1::ListSavedQueriesResponse>
AssetServiceMetadata::ListSavedQueries(
    grpc::ClientContext& context,
    google::cloud::asset::v1::ListSavedQueriesRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListSavedQueries(context, request);
}

StatusOr<google::cloud::asset::v1::SavedQuery>
AssetServiceMetadata::UpdateSavedQuery(
    grpc::ClientContext& context,
    google::cloud::asset::v1::UpdateSavedQueryRequest const& request) {
  SetMetadata(context,
              absl::StrCat("saved_query.name=", request.saved_query().name()));
  return child_->UpdateSavedQuery(context, request);
}

Status AssetServiceMetadata::DeleteSavedQuery(
    grpc::ClientContext& context,
    google::cloud::asset::v1::DeleteSavedQueryRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->DeleteSavedQuery(context, request);
}

StatusOr<google::cloud::asset::v1::BatchGetEffectiveIamPoliciesResponse>
AssetServiceMetadata::BatchGetEffectiveIamPolicies(
    grpc::ClientContext& context,
    google::cloud::asset::v1::BatchGetEffectiveIamPoliciesRequest const&
        request) {
  SetMetadata(context, absl::StrCat("scope=", request.scope()));
  return child_->BatchGetEffectiveIamPolicies(context, request);
}

StatusOr<google::cloud::asset::v1::AnalyzeOrgPoliciesResponse>
AssetServiceMetadata::AnalyzeOrgPolicies(
    grpc::ClientContext& context,
    google::cloud::asset::v1::AnalyzeOrgPoliciesRequest const& request) {
  SetMetadata(context, absl::StrCat("scope=", request.scope()));
  return child_->AnalyzeOrgPolicies(context, request);
}

StatusOr<google::cloud::asset::v1::AnalyzeOrgPolicyGovernedContainersResponse>
AssetServiceMetadata::AnalyzeOrgPolicyGovernedContainers(
    grpc::ClientContext& context,
    google::cloud::asset::v1::AnalyzeOrgPolicyGovernedContainersRequest const&
        request) {
  SetMetadata(context, absl::StrCat("scope=", request.scope()));
  return child_->AnalyzeOrgPolicyGovernedContainers(context, request);
}

StatusOr<google::cloud::asset::v1::AnalyzeOrgPolicyGovernedAssetsResponse>
AssetServiceMetadata::AnalyzeOrgPolicyGovernedAssets(
    grpc::ClientContext& context,
    google::cloud::asset::v1::AnalyzeOrgPolicyGovernedAssetsRequest const&
        request) {
  SetMetadata(context, absl::StrCat("scope=", request.scope()));
  return child_->AnalyzeOrgPolicyGovernedAssets(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AssetServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> AssetServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void AssetServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void AssetServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace asset_v1_internal
}  // namespace cloud
}  // namespace google
