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

#include "google/cloud/asset/v1/internal/asset_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/asset/v1/asset_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace asset_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AssetServiceStub::~AssetServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultAssetServiceStub::AsyncExportAssets(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::asset::v1::ExportAssetsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::asset::v1::ExportAssetsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::asset::v1::ExportAssetsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncExportAssets(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::asset::v1::ListAssetsResponse>
DefaultAssetServiceStub::ListAssets(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::ListAssetsRequest const& request) {
  google::cloud::asset::v1::ListAssetsResponse response;
  auto status = grpc_stub_->ListAssets(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::asset::v1::BatchGetAssetsHistoryResponse>
DefaultAssetServiceStub::BatchGetAssetsHistory(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::BatchGetAssetsHistoryRequest const& request) {
  google::cloud::asset::v1::BatchGetAssetsHistoryResponse response;
  auto status =
      grpc_stub_->BatchGetAssetsHistory(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::asset::v1::Feed> DefaultAssetServiceStub::CreateFeed(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::CreateFeedRequest const& request) {
  google::cloud::asset::v1::Feed response;
  auto status = grpc_stub_->CreateFeed(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::asset::v1::Feed> DefaultAssetServiceStub::GetFeed(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::GetFeedRequest const& request) {
  google::cloud::asset::v1::Feed response;
  auto status = grpc_stub_->GetFeed(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::asset::v1::ListFeedsResponse>
DefaultAssetServiceStub::ListFeeds(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::ListFeedsRequest const& request) {
  google::cloud::asset::v1::ListFeedsResponse response;
  auto status = grpc_stub_->ListFeeds(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::asset::v1::Feed> DefaultAssetServiceStub::UpdateFeed(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::UpdateFeedRequest const& request) {
  google::cloud::asset::v1::Feed response;
  auto status = grpc_stub_->UpdateFeed(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAssetServiceStub::DeleteFeed(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::DeleteFeedRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteFeed(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::asset::v1::SearchAllResourcesResponse>
DefaultAssetServiceStub::SearchAllResources(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::SearchAllResourcesRequest const& request) {
  google::cloud::asset::v1::SearchAllResourcesResponse response;
  auto status =
      grpc_stub_->SearchAllResources(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::asset::v1::SearchAllIamPoliciesResponse>
DefaultAssetServiceStub::SearchAllIamPolicies(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::SearchAllIamPoliciesRequest const& request) {
  google::cloud::asset::v1::SearchAllIamPoliciesResponse response;
  auto status =
      grpc_stub_->SearchAllIamPolicies(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyResponse>
DefaultAssetServiceStub::AnalyzeIamPolicy(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::AnalyzeIamPolicyRequest const& request) {
  google::cloud::asset::v1::AnalyzeIamPolicyResponse response;
  auto status =
      grpc_stub_->AnalyzeIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAssetServiceStub::AsyncAnalyzeIamPolicyLongrunning(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncAnalyzeIamPolicyLongrunning(context, request,
                                                            cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::asset::v1::AnalyzeMoveResponse>
DefaultAssetServiceStub::AnalyzeMove(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::AnalyzeMoveRequest const& request) {
  google::cloud::asset::v1::AnalyzeMoveResponse response;
  auto status = grpc_stub_->AnalyzeMove(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::asset::v1::QueryAssetsResponse>
DefaultAssetServiceStub::QueryAssets(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::QueryAssetsRequest const& request) {
  google::cloud::asset::v1::QueryAssetsResponse response;
  auto status = grpc_stub_->QueryAssets(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::asset::v1::SavedQuery>
DefaultAssetServiceStub::CreateSavedQuery(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::CreateSavedQueryRequest const& request) {
  google::cloud::asset::v1::SavedQuery response;
  auto status =
      grpc_stub_->CreateSavedQuery(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::asset::v1::SavedQuery>
DefaultAssetServiceStub::GetSavedQuery(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::GetSavedQueryRequest const& request) {
  google::cloud::asset::v1::SavedQuery response;
  auto status = grpc_stub_->GetSavedQuery(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::asset::v1::ListSavedQueriesResponse>
DefaultAssetServiceStub::ListSavedQueries(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::ListSavedQueriesRequest const& request) {
  google::cloud::asset::v1::ListSavedQueriesResponse response;
  auto status =
      grpc_stub_->ListSavedQueries(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::asset::v1::SavedQuery>
DefaultAssetServiceStub::UpdateSavedQuery(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::UpdateSavedQueryRequest const& request) {
  google::cloud::asset::v1::SavedQuery response;
  auto status =
      grpc_stub_->UpdateSavedQuery(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAssetServiceStub::DeleteSavedQuery(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::DeleteSavedQueryRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteSavedQuery(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::asset::v1::BatchGetEffectiveIamPoliciesResponse>
DefaultAssetServiceStub::BatchGetEffectiveIamPolicies(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::BatchGetEffectiveIamPoliciesRequest const&
        request) {
  google::cloud::asset::v1::BatchGetEffectiveIamPoliciesResponse response;
  auto status = grpc_stub_->BatchGetEffectiveIamPolicies(&client_context,
                                                         request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::asset::v1::AnalyzeOrgPoliciesResponse>
DefaultAssetServiceStub::AnalyzeOrgPolicies(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::AnalyzeOrgPoliciesRequest const& request) {
  google::cloud::asset::v1::AnalyzeOrgPoliciesResponse response;
  auto status =
      grpc_stub_->AnalyzeOrgPolicies(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::asset::v1::AnalyzeOrgPolicyGovernedContainersResponse>
DefaultAssetServiceStub::AnalyzeOrgPolicyGovernedContainers(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::AnalyzeOrgPolicyGovernedContainersRequest const&
        request) {
  google::cloud::asset::v1::AnalyzeOrgPolicyGovernedContainersResponse response;
  auto status = grpc_stub_->AnalyzeOrgPolicyGovernedContainers(
      &client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::asset::v1::AnalyzeOrgPolicyGovernedAssetsResponse>
DefaultAssetServiceStub::AnalyzeOrgPolicyGovernedAssets(
    grpc::ClientContext& client_context,
    google::cloud::asset::v1::AnalyzeOrgPolicyGovernedAssetsRequest const&
        request) {
  google::cloud::asset::v1::AnalyzeOrgPolicyGovernedAssetsResponse response;
  auto status = grpc_stub_->AnalyzeOrgPolicyGovernedAssets(&client_context,
                                                           request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAssetServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultAssetServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace asset_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
