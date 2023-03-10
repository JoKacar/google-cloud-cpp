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

#include "google/cloud/gkemulticloud/v1/internal/aws_clusters_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gkemulticloud/v1/aws_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AwsClustersStub::~AwsClustersStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultAwsClustersStub::AsyncCreateAwsCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::CreateAwsClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAwsCluster(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultAwsClustersStub::AsyncUpdateAwsCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateAwsCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>
DefaultAwsClustersStub::GetAwsCluster(
    grpc::ClientContext& client_context,
    google::cloud::gkemulticloud::v1::GetAwsClusterRequest const& request) {
  google::cloud::gkemulticloud::v1::AwsCluster response;
  auto status = grpc_stub_->GetAwsCluster(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkemulticloud::v1::ListAwsClustersResponse>
DefaultAwsClustersStub::ListAwsClusters(
    grpc::ClientContext& client_context,
    google::cloud::gkemulticloud::v1::ListAwsClustersRequest const& request) {
  google::cloud::gkemulticloud::v1::ListAwsClustersResponse response;
  auto status =
      grpc_stub_->ListAwsClusters(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAwsClustersStub::AsyncDeleteAwsCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteAwsCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse>
DefaultAwsClustersStub::GenerateAwsAccessToken(
    grpc::ClientContext& client_context,
    google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
        request) {
  google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse response;
  auto status =
      grpc_stub_->GenerateAwsAccessToken(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAwsClustersStub::AsyncCreateAwsNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAwsNodePool(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultAwsClustersStub::AsyncUpdateAwsNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateAwsNodePool(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>
DefaultAwsClustersStub::GetAwsNodePool(
    grpc::ClientContext& client_context,
    google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const& request) {
  google::cloud::gkemulticloud::v1::AwsNodePool response;
  auto status = grpc_stub_->GetAwsNodePool(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkemulticloud::v1::ListAwsNodePoolsResponse>
DefaultAwsClustersStub::ListAwsNodePools(
    grpc::ClientContext& client_context,
    google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest const& request) {
  google::cloud::gkemulticloud::v1::ListAwsNodePoolsResponse response;
  auto status =
      grpc_stub_->ListAwsNodePools(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAwsClustersStub::AsyncDeleteAwsNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteAwsNodePool(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>
DefaultAwsClustersStub::GetAwsServerConfig(
    grpc::ClientContext& client_context,
    google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
        request) {
  google::cloud::gkemulticloud::v1::AwsServerConfig response;
  auto status =
      grpc_stub_->GetAwsServerConfig(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAwsClustersStub::AsyncGetOperation(
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

future<Status> DefaultAwsClustersStub::AsyncCancelOperation(
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
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google
