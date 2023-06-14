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

#include "google/cloud/gkemulticloud/v1/internal/aws_clusters_connection_impl.h"
#include "google/cloud/gkemulticloud/v1/internal/aws_clusters_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AwsClustersConnectionImpl::AwsClustersConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<gkemulticloud_v1_internal::AwsClustersStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      AwsClustersConnection::options())) {}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
AwsClustersConnectionImpl::CreateAwsCluster(
    google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::AwsCluster>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const&
                 request) {
        return stub->AsyncCreateAwsCluster(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::gkemulticloud::v1::AwsCluster>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateAwsCluster(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>>
AwsClustersConnectionImpl::UpdateAwsCluster(
    google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::AwsCluster>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const&
                 request) {
        return stub->AsyncUpdateAwsCluster(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::gkemulticloud::v1::AwsCluster>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateAwsCluster(request), polling_policy(),
      __func__);
}

StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>
AwsClustersConnectionImpl::GetAwsCluster(
    google::cloud::gkemulticloud::v1::GetAwsClusterRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetAwsCluster(request),
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAwsClusterRequest const&
                 request) { return stub_->GetAwsCluster(context, request); },
      request, __func__);
}

StreamRange<google::cloud::gkemulticloud::v1::AwsCluster>
AwsClustersConnectionImpl::ListAwsClusters(
    google::cloud::gkemulticloud::v1::ListAwsClustersRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<gkemulticloud_v1::AwsClustersRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListAwsClusters(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gkemulticloud::v1::AwsCluster>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::gkemulticloud::v1::ListAwsClustersRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::gkemulticloud::v1::ListAwsClustersRequest const&
                    request) {
              return stub->ListAwsClusters(context, request);
            },
            r, function_name);
      },
      [](google::cloud::gkemulticloud::v1::ListAwsClustersResponse r) {
        std::vector<google::cloud::gkemulticloud::v1::AwsCluster> result(
            r.aws_clusters().size());
        auto& messages = *r.mutable_aws_clusters();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AwsClustersConnectionImpl::DeleteAwsCluster(
    google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const&
                 request) {
        return stub->AsyncDeleteAwsCluster(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::gkemulticloud::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteAwsCluster(request), polling_policy(),
      __func__);
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse>
AwsClustersConnectionImpl::GenerateAwsAccessToken(
    google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GenerateAwsAccessToken(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
              request) {
        return stub_->GenerateAwsAccessToken(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
AwsClustersConnectionImpl::CreateAwsNodePool(
    google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::AwsNodePool>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const&
                 request) {
        return stub->AsyncCreateAwsNodePool(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::gkemulticloud::v1::AwsNodePool>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateAwsNodePool(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>>
AwsClustersConnectionImpl::UpdateAwsNodePool(
    google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::AwsNodePool>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const&
                 request) {
        return stub->AsyncUpdateAwsNodePool(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::gkemulticloud::v1::AwsNodePool>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateAwsNodePool(request), polling_policy(),
      __func__);
}

StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>
AwsClustersConnectionImpl::GetAwsNodePool(
    google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetAwsNodePool(request),
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const&
                 request) { return stub_->GetAwsNodePool(context, request); },
      request, __func__);
}

StreamRange<google::cloud::gkemulticloud::v1::AwsNodePool>
AwsClustersConnectionImpl::ListAwsNodePools(
    google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<gkemulticloud_v1::AwsClustersRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListAwsNodePools(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gkemulticloud::v1::AwsNodePool>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest const&
                    request) {
              return stub->ListAwsNodePools(context, request);
            },
            r, function_name);
      },
      [](google::cloud::gkemulticloud::v1::ListAwsNodePoolsResponse r) {
        std::vector<google::cloud::gkemulticloud::v1::AwsNodePool> result(
            r.aws_node_pools().size());
        auto& messages = *r.mutable_aws_node_pools();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AwsClustersConnectionImpl::DeleteAwsNodePool(
    google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkemulticloud::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const&
                 request) {
        return stub->AsyncDeleteAwsNodePool(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::gkemulticloud::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteAwsNodePool(request), polling_policy(),
      __func__);
}

StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>
AwsClustersConnectionImpl::GetAwsServerConfig(
    google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetAwsServerConfig(request),
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
                 request) {
        return stub_->GetAwsServerConfig(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
