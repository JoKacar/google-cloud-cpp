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
// source: google/cloud/edgecontainer/v1/service.proto

#include "google/cloud/edgecontainer/v1/internal/edge_container_auth_decorator.h"
#include <google/cloud/edgecontainer/v1/service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace edgecontainer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EdgeContainerAuth::EdgeContainerAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<EdgeContainerStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::edgecontainer::v1::ListClustersResponse>
EdgeContainerAuth::ListClusters(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::ListClustersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListClusters(context, request);
}

StatusOr<google::cloud::edgecontainer::v1::Cluster>
EdgeContainerAuth::GetCluster(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::GetClusterRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCluster(context, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerAuth::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::CreateClusterRequest const& request) {
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
        return child->AsyncCreateCluster(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerAuth::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::UpdateClusterRequest const& request) {
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
        return child->AsyncUpdateCluster(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerAuth::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::DeleteClusterRequest const& request) {
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
        return child->AsyncDeleteCluster(cq, *std::move(context), request);
      });
}

StatusOr<google::cloud::edgecontainer::v1::GenerateAccessTokenResponse>
EdgeContainerAuth::GenerateAccessToken(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GenerateAccessToken(context, request);
}

StatusOr<google::cloud::edgecontainer::v1::ListNodePoolsResponse>
EdgeContainerAuth::ListNodePools(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::ListNodePoolsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListNodePools(context, request);
}

StatusOr<google::cloud::edgecontainer::v1::NodePool>
EdgeContainerAuth::GetNodePool(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::GetNodePoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetNodePool(context, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerAuth::AsyncCreateNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::CreateNodePoolRequest const& request) {
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
        return child->AsyncCreateNodePool(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerAuth::AsyncUpdateNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::UpdateNodePoolRequest const& request) {
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
        return child->AsyncUpdateNodePool(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerAuth::AsyncDeleteNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::DeleteNodePoolRequest const& request) {
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
        return child->AsyncDeleteNodePool(cq, *std::move(context), request);
      });
}

StatusOr<google::cloud::edgecontainer::v1::ListMachinesResponse>
EdgeContainerAuth::ListMachines(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::ListMachinesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListMachines(context, request);
}

StatusOr<google::cloud::edgecontainer::v1::Machine>
EdgeContainerAuth::GetMachine(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::GetMachineRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetMachine(context, request);
}

StatusOr<google::cloud::edgecontainer::v1::ListVpnConnectionsResponse>
EdgeContainerAuth::ListVpnConnections(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::ListVpnConnectionsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListVpnConnections(context, request);
}

StatusOr<google::cloud::edgecontainer::v1::VpnConnection>
EdgeContainerAuth::GetVpnConnection(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::GetVpnConnectionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetVpnConnection(context, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerAuth::AsyncCreateVpnConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
        request) {
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
        return child->AsyncCreateVpnConnection(cq, *std::move(context),
                                               request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerAuth::AsyncDeleteVpnConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
        request) {
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
        return child->AsyncDeleteVpnConnection(cq, *std::move(context),
                                               request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerAuth::AsyncGetOperation(
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

future<Status> EdgeContainerAuth::AsyncCancelOperation(
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
}  // namespace edgecontainer_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
