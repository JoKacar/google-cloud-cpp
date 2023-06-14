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

#include "google/cloud/gkemulticloud/v1/internal/aws_clusters_auth_decorator.h"
#include <google/cloud/gkemulticloud/v1/aws_service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AwsClustersAuth::AwsClustersAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<AwsClustersStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
AwsClustersAuth::AsyncCreateAwsCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateAwsCluster(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersAuth::AsyncUpdateAwsCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateAwsCluster(cq, *std::move(context), request);
      });
}

StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>
AwsClustersAuth::GetAwsCluster(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAwsClusterRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAwsCluster(context, request);
}

StatusOr<google::cloud::gkemulticloud::v1::ListAwsClustersResponse>
AwsClustersAuth::ListAwsClusters(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::ListAwsClustersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAwsClusters(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersAuth::AsyncDeleteAwsCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteAwsCluster(cq, *std::move(context), request);
      });
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse>
AwsClustersAuth::GenerateAwsAccessToken(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GenerateAwsAccessToken(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersAuth::AsyncCreateAwsNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateAwsNodePool(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersAuth::AsyncUpdateAwsNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateAwsNodePool(cq, *std::move(context), request);
      });
}

StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>
AwsClustersAuth::GetAwsNodePool(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAwsNodePool(context, request);
}

StatusOr<google::cloud::gkemulticloud::v1::ListAwsNodePoolsResponse>
AwsClustersAuth::ListAwsNodePools(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAwsNodePools(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersAuth::AsyncDeleteAwsNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteAwsNodePool(cq, *std::move(context), request);
      });
}

StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>
AwsClustersAuth::GetAwsServerConfig(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAwsServerConfig(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> AwsClustersAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
