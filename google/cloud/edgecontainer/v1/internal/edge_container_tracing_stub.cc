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

#include "google/cloud/edgecontainer/v1/internal/edge_container_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace edgecontainer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EdgeContainerTracingStub::EdgeContainerTracingStub(
    std::shared_ptr<EdgeContainerStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::edgecontainer::v1::ListClustersResponse>
EdgeContainerTracingStub::ListClusters(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::ListClustersRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.edgecontainer.v1.EdgeContainer", "ListClusters");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListClusters(context, request));
}

StatusOr<google::cloud::edgecontainer::v1::Cluster>
EdgeContainerTracingStub::GetCluster(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::GetClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.edgecontainer.v1.EdgeContainer", "GetCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetCluster(context, request));
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerTracingStub::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::CreateClusterRequest const& request) {
  return child_->AsyncCreateCluster(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerTracingStub::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::UpdateClusterRequest const& request) {
  return child_->AsyncUpdateCluster(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerTracingStub::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::DeleteClusterRequest const& request) {
  return child_->AsyncDeleteCluster(cq, std::move(context), request);
}

StatusOr<google::cloud::edgecontainer::v1::GenerateAccessTokenResponse>
EdgeContainerTracingStub::GenerateAccessToken(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.edgecontainer.v1.EdgeContainer", "GenerateAccessToken");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GenerateAccessToken(context, request));
}

StatusOr<google::cloud::edgecontainer::v1::ListNodePoolsResponse>
EdgeContainerTracingStub::ListNodePools(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::ListNodePoolsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.edgecontainer.v1.EdgeContainer", "ListNodePools");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListNodePools(context, request));
}

StatusOr<google::cloud::edgecontainer::v1::NodePool>
EdgeContainerTracingStub::GetNodePool(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::GetNodePoolRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.edgecontainer.v1.EdgeContainer", "GetNodePool");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetNodePool(context, request));
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerTracingStub::AsyncCreateNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::CreateNodePoolRequest const& request) {
  return child_->AsyncCreateNodePool(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerTracingStub::AsyncUpdateNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::UpdateNodePoolRequest const& request) {
  return child_->AsyncUpdateNodePool(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerTracingStub::AsyncDeleteNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::DeleteNodePoolRequest const& request) {
  return child_->AsyncDeleteNodePool(cq, std::move(context), request);
}

StatusOr<google::cloud::edgecontainer::v1::ListMachinesResponse>
EdgeContainerTracingStub::ListMachines(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::ListMachinesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.edgecontainer.v1.EdgeContainer", "ListMachines");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListMachines(context, request));
}

StatusOr<google::cloud::edgecontainer::v1::Machine>
EdgeContainerTracingStub::GetMachine(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::GetMachineRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.edgecontainer.v1.EdgeContainer", "GetMachine");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetMachine(context, request));
}

StatusOr<google::cloud::edgecontainer::v1::ListVpnConnectionsResponse>
EdgeContainerTracingStub::ListVpnConnections(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::ListVpnConnectionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.edgecontainer.v1.EdgeContainer", "ListVpnConnections");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListVpnConnections(context, request));
}

StatusOr<google::cloud::edgecontainer::v1::VpnConnection>
EdgeContainerTracingStub::GetVpnConnection(
    grpc::ClientContext& context,
    google::cloud::edgecontainer::v1::GetVpnConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.edgecontainer.v1.EdgeContainer", "GetVpnConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetVpnConnection(context, request));
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerTracingStub::AsyncCreateVpnConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
        request) {
  return child_->AsyncCreateVpnConnection(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerTracingStub::AsyncDeleteVpnConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
        request) {
  return child_->AsyncDeleteVpnConnection(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> EdgeContainerTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<EdgeContainerStub> MakeEdgeContainerTracingStub(
    std::shared_ptr<EdgeContainerStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<EdgeContainerTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgecontainer_v1_internal
}  // namespace cloud
}  // namespace google
