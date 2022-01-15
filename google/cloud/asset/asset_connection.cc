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

#include "google/cloud/asset/asset_connection.h"
#include "google/cloud/asset/asset_options.h"
#include "google/cloud/asset/internal/asset_option_defaults.h"
#include "google/cloud/asset/internal/asset_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace asset {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AssetServiceConnection::~AssetServiceConnection() = default;

future<StatusOr<google::cloud::asset::v1::ExportAssetsResponse>>
AssetServiceConnection::ExportAssets(
    google::cloud::asset::v1::ExportAssetsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::asset::v1::ExportAssetsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::asset::v1::Asset> AssetServiceConnection::ListAssets(
    google::cloud::asset::v1::ListAssetsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::asset::v1::Asset>>(
      std::move(request),
      [](google::cloud::asset::v1::ListAssetsRequest const&) {
        return StatusOr<google::cloud::asset::v1::ListAssetsResponse>{};
      },
      [](google::cloud::asset::v1::ListAssetsResponse const&) {
        return std::vector<google::cloud::asset::v1::Asset>();
      });
}

StatusOr<google::cloud::asset::v1::BatchGetAssetsHistoryResponse>
AssetServiceConnection::BatchGetAssetsHistory(
    google::cloud::asset::v1::BatchGetAssetsHistoryRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceConnection::CreateFeed(
    google::cloud::asset::v1::CreateFeedRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceConnection::GetFeed(
    google::cloud::asset::v1::GetFeedRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::asset::v1::ListFeedsResponse>
AssetServiceConnection::ListFeeds(
    google::cloud::asset::v1::ListFeedsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::asset::v1::Feed> AssetServiceConnection::UpdateFeed(
    google::cloud::asset::v1::UpdateFeedRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status AssetServiceConnection::DeleteFeed(
    google::cloud::asset::v1::DeleteFeedRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::asset::v1::ResourceSearchResult>
AssetServiceConnection::SearchAllResources(
    google::cloud::asset::v1::SearchAllResourcesRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::asset::v1::ResourceSearchResult>>(
      std::move(request),
      [](google::cloud::asset::v1::SearchAllResourcesRequest const&) {
        return StatusOr<google::cloud::asset::v1::SearchAllResourcesResponse>{};
      },
      [](google::cloud::asset::v1::SearchAllResourcesResponse const&) {
        return std::vector<google::cloud::asset::v1::ResourceSearchResult>();
      });
}

StreamRange<google::cloud::asset::v1::IamPolicySearchResult>
AssetServiceConnection::SearchAllIamPolicies(
    google::cloud::asset::v1::SearchAllIamPoliciesRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::asset::v1::IamPolicySearchResult>>(
      std::move(request),
      [](google::cloud::asset::v1::SearchAllIamPoliciesRequest const&) {
        return StatusOr<
            google::cloud::asset::v1::SearchAllIamPoliciesResponse>{};
      },
      [](google::cloud::asset::v1::SearchAllIamPoliciesResponse const&) {
        return std::vector<google::cloud::asset::v1::IamPolicySearchResult>();
      });
}

StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyResponse>
AssetServiceConnection::AnalyzeIamPolicy(
    google::cloud::asset::v1::AnalyzeIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyLongrunningResponse>>
AssetServiceConnection::AnalyzeIamPolicyLongrunning(
    google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyLongrunningResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::asset::v1::AnalyzeMoveResponse>
AssetServiceConnection::AnalyzeMove(
    google::cloud::asset::v1::AnalyzeMoveRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

namespace {
class AssetServiceConnectionImpl : public AssetServiceConnection {
 public:
  AssetServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<asset_internal::AssetServiceStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<AssetServiceRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<AssetServiceBackoffPolicyOption>()->clone()),
        polling_policy_prototype_(
            options.get<AssetServicePollingPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<AssetServiceConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~AssetServiceConnectionImpl() override = default;

  future<StatusOr<google::cloud::asset::v1::ExportAssetsResponse>> ExportAssets(
      google::cloud::asset::v1::ExportAssetsRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::asset::v1::ExportAssetsResponse>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::asset::v1::ExportAssetsRequest const& request) {
          return stub->AsyncExportAssets(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::cloud::asset::v1::ExportAssetsResponse>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->ExportAssets(request),
        polling_policy_prototype_->clone(), __func__);
  }

  StreamRange<google::cloud::asset::v1::Asset> ListAssets(
      google::cloud::asset::v1::ListAssetsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<AssetServiceRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListAssets(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::asset::v1::Asset>>(
        std::move(request),
        [stub, retry, backoff, idempotency,
         function_name](google::cloud::asset::v1::ListAssetsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](
                  grpc::ClientContext& context,
                  google::cloud::asset::v1::ListAssetsRequest const& request) {
                return stub->ListAssets(context, request);
              },
              r, function_name);
        },
        [](google::cloud::asset::v1::ListAssetsResponse r) {
          std::vector<google::cloud::asset::v1::Asset> result(
              r.assets().size());
          auto& messages = *r.mutable_assets();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::asset::v1::BatchGetAssetsHistoryResponse>
  BatchGetAssetsHistory(
      google::cloud::asset::v1::BatchGetAssetsHistoryRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->BatchGetAssetsHistory(request),
        [this](grpc::ClientContext& context,
               google::cloud::asset::v1::BatchGetAssetsHistoryRequest const&
                   request) {
          return stub_->BatchGetAssetsHistory(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::asset::v1::Feed> CreateFeed(
      google::cloud::asset::v1::CreateFeedRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateFeed(request),
        [this](grpc::ClientContext& context,
               google::cloud::asset::v1::CreateFeedRequest const& request) {
          return stub_->CreateFeed(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::asset::v1::Feed> GetFeed(
      google::cloud::asset::v1::GetFeedRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetFeed(request),
        [this](grpc::ClientContext& context,
               google::cloud::asset::v1::GetFeedRequest const& request) {
          return stub_->GetFeed(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::asset::v1::ListFeedsResponse> ListFeeds(
      google::cloud::asset::v1::ListFeedsRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->ListFeeds(request),
        [this](grpc::ClientContext& context,
               google::cloud::asset::v1::ListFeedsRequest const& request) {
          return stub_->ListFeeds(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::asset::v1::Feed> UpdateFeed(
      google::cloud::asset::v1::UpdateFeedRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateFeed(request),
        [this](grpc::ClientContext& context,
               google::cloud::asset::v1::UpdateFeedRequest const& request) {
          return stub_->UpdateFeed(context, request);
        },
        request, __func__);
  }

  Status DeleteFeed(
      google::cloud::asset::v1::DeleteFeedRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteFeed(request),
        [this](grpc::ClientContext& context,
               google::cloud::asset::v1::DeleteFeedRequest const& request) {
          return stub_->DeleteFeed(context, request);
        },
        request, __func__);
  }

  StreamRange<google::cloud::asset::v1::ResourceSearchResult>
  SearchAllResources(
      google::cloud::asset::v1::SearchAllResourcesRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<AssetServiceRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->SearchAllResources(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::asset::v1::ResourceSearchResult>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::asset::v1::SearchAllResourcesRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::asset::v1::SearchAllResourcesRequest const&
                         request) {
                return stub->SearchAllResources(context, request);
              },
              r, function_name);
        },
        [](google::cloud::asset::v1::SearchAllResourcesResponse r) {
          std::vector<google::cloud::asset::v1::ResourceSearchResult> result(
              r.results().size());
          auto& messages = *r.mutable_results();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StreamRange<google::cloud::asset::v1::IamPolicySearchResult>
  SearchAllIamPolicies(
      google::cloud::asset::v1::SearchAllIamPoliciesRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<AssetServiceRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->SearchAllIamPolicies(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::asset::v1::IamPolicySearchResult>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::asset::v1::SearchAllIamPoliciesRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](
                  grpc::ClientContext& context,
                  google::cloud::asset::v1::SearchAllIamPoliciesRequest const&
                      request) {
                return stub->SearchAllIamPolicies(context, request);
              },
              r, function_name);
        },
        [](google::cloud::asset::v1::SearchAllIamPoliciesResponse r) {
          std::vector<google::cloud::asset::v1::IamPolicySearchResult> result(
              r.results().size());
          auto& messages = *r.mutable_results();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyResponse> AnalyzeIamPolicy(
      google::cloud::asset::v1::AnalyzeIamPolicyRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->AnalyzeIamPolicy(request),
        [this](
            grpc::ClientContext& context,
            google::cloud::asset::v1::AnalyzeIamPolicyRequest const& request) {
          return stub_->AnalyzeIamPolicy(context, request);
        },
        request, __func__);
  }

  future<
      StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyLongrunningResponse>>
  AnalyzeIamPolicyLongrunning(
      google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
          request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::asset::v1::AnalyzeIamPolicyLongrunningResponse>(
        background_->cq(), request,
        [stub](
            google::cloud::CompletionQueue& cq,
            std::unique_ptr<grpc::ClientContext> context,
            google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
                request) {
          return stub->AsyncAnalyzeIamPolicyLongrunning(cq, std::move(context),
                                                        request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::cloud::asset::v1::AnalyzeIamPolicyLongrunningResponse>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->AnalyzeIamPolicyLongrunning(request),
        polling_policy_prototype_->clone(), __func__);
  }

  StatusOr<google::cloud::asset::v1::AnalyzeMoveResponse> AnalyzeMove(
      google::cloud::asset::v1::AnalyzeMoveRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->AnalyzeMove(request),
        [this](grpc::ClientContext& context,
               google::cloud::asset::v1::AnalyzeMoveRequest const& request) {
          return stub_->AnalyzeMove(context, request);
        },
        request, __func__);
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<asset_internal::AssetServiceStub> stub_;
  std::unique_ptr<AssetServiceRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
  std::unique_ptr<AssetServiceConnectionIdempotencyPolicy> idempotency_policy_;
};
}  // namespace

std::shared_ptr<AssetServiceConnection> MakeAssetServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 AssetServicePolicyOptionList>(options,
                                                               __func__);
  options = asset_internal::AssetServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      asset_internal::CreateDefaultAssetServiceStub(background->cq(), options);
  return std::make_shared<AssetServiceConnectionImpl>(std::move(background),
                                                      std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace asset
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace asset_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<asset::AssetServiceConnection> MakeAssetServiceConnection(
    std::shared_ptr<AssetServiceStub> stub, Options options) {
  options = AssetServiceDefaultOptions(std::move(options));
  return std::make_shared<asset::AssetServiceConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace asset_internal
}  // namespace cloud
}  // namespace google
