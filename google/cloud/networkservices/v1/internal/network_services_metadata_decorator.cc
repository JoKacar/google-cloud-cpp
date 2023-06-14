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
// source: google/cloud/networkservices/v1/network_services.proto

#include "google/cloud/networkservices/v1/internal/network_services_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/networkservices/v1/network_services.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace networkservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworkServicesMetadata::NetworkServicesMetadata(
    std::shared_ptr<NetworkServicesStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::networkservices::v1::ListEndpointPoliciesResponse>
NetworkServicesMetadata::ListEndpointPolicies(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListEndpointPoliciesRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListEndpointPolicies(context, request);
}

StatusOr<google::cloud::networkservices::v1::EndpointPolicy>
NetworkServicesMetadata::GetEndpointPolicy(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetEndpointPolicyRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetEndpointPolicy(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncCreateEndpointPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::CreateEndpointPolicyRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateEndpointPolicy(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncUpdateEndpointPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::UpdateEndpointPolicyRequest const&
        request) {
  SetMetadata(*context,
              "endpoint_policy.name=" + request.endpoint_policy().name());
  return child_->AsyncUpdateEndpointPolicy(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncDeleteEndpointPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::DeleteEndpointPolicyRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteEndpointPolicy(cq, std::move(context), request);
}

StatusOr<google::cloud::networkservices::v1::ListGatewaysResponse>
NetworkServicesMetadata::ListGateways(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListGatewaysRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListGateways(context, request);
}

StatusOr<google::cloud::networkservices::v1::Gateway>
NetworkServicesMetadata::GetGateway(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetGatewayRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetGateway(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncCreateGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::CreateGatewayRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateGateway(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncUpdateGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::UpdateGatewayRequest const& request) {
  SetMetadata(*context, "gateway.name=" + request.gateway().name());
  return child_->AsyncUpdateGateway(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncDeleteGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::DeleteGatewayRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteGateway(cq, std::move(context), request);
}

StatusOr<google::cloud::networkservices::v1::ListGrpcRoutesResponse>
NetworkServicesMetadata::ListGrpcRoutes(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListGrpcRoutesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListGrpcRoutes(context, request);
}

StatusOr<google::cloud::networkservices::v1::GrpcRoute>
NetworkServicesMetadata::GetGrpcRoute(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetGrpcRouteRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetGrpcRoute(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncCreateGrpcRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::CreateGrpcRouteRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateGrpcRoute(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncUpdateGrpcRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::UpdateGrpcRouteRequest const& request) {
  SetMetadata(*context, "grpc_route.name=" + request.grpc_route().name());
  return child_->AsyncUpdateGrpcRoute(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncDeleteGrpcRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::DeleteGrpcRouteRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteGrpcRoute(cq, std::move(context), request);
}

StatusOr<google::cloud::networkservices::v1::ListHttpRoutesResponse>
NetworkServicesMetadata::ListHttpRoutes(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListHttpRoutesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListHttpRoutes(context, request);
}

StatusOr<google::cloud::networkservices::v1::HttpRoute>
NetworkServicesMetadata::GetHttpRoute(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetHttpRouteRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetHttpRoute(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncCreateHttpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::CreateHttpRouteRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateHttpRoute(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncUpdateHttpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::UpdateHttpRouteRequest const& request) {
  SetMetadata(*context, "http_route.name=" + request.http_route().name());
  return child_->AsyncUpdateHttpRoute(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncDeleteHttpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::DeleteHttpRouteRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteHttpRoute(cq, std::move(context), request);
}

StatusOr<google::cloud::networkservices::v1::ListTcpRoutesResponse>
NetworkServicesMetadata::ListTcpRoutes(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListTcpRoutesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListTcpRoutes(context, request);
}

StatusOr<google::cloud::networkservices::v1::TcpRoute>
NetworkServicesMetadata::GetTcpRoute(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetTcpRouteRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetTcpRoute(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncCreateTcpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::CreateTcpRouteRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateTcpRoute(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncUpdateTcpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::UpdateTcpRouteRequest const& request) {
  SetMetadata(*context, "tcp_route.name=" + request.tcp_route().name());
  return child_->AsyncUpdateTcpRoute(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncDeleteTcpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::DeleteTcpRouteRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteTcpRoute(cq, std::move(context), request);
}

StatusOr<google::cloud::networkservices::v1::ListTlsRoutesResponse>
NetworkServicesMetadata::ListTlsRoutes(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListTlsRoutesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListTlsRoutes(context, request);
}

StatusOr<google::cloud::networkservices::v1::TlsRoute>
NetworkServicesMetadata::GetTlsRoute(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetTlsRouteRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetTlsRoute(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncCreateTlsRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::CreateTlsRouteRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateTlsRoute(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncUpdateTlsRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::UpdateTlsRouteRequest const& request) {
  SetMetadata(*context, "tls_route.name=" + request.tls_route().name());
  return child_->AsyncUpdateTlsRoute(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncDeleteTlsRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::DeleteTlsRouteRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteTlsRoute(cq, std::move(context), request);
}

StatusOr<google::cloud::networkservices::v1::ListServiceBindingsResponse>
NetworkServicesMetadata::ListServiceBindings(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListServiceBindingsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListServiceBindings(context, request);
}

StatusOr<google::cloud::networkservices::v1::ServiceBinding>
NetworkServicesMetadata::GetServiceBinding(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetServiceBindingRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetServiceBinding(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncCreateServiceBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::CreateServiceBindingRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateServiceBinding(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncDeleteServiceBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::DeleteServiceBindingRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteServiceBinding(cq, std::move(context), request);
}

StatusOr<google::cloud::networkservices::v1::ListMeshesResponse>
NetworkServicesMetadata::ListMeshes(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListMeshesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListMeshes(context, request);
}

StatusOr<google::cloud::networkservices::v1::Mesh>
NetworkServicesMetadata::GetMesh(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetMeshRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetMesh(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncCreateMesh(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::CreateMeshRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateMesh(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncUpdateMesh(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::UpdateMeshRequest const& request) {
  SetMetadata(*context, "mesh.name=" + request.mesh().name());
  return child_->AsyncUpdateMesh(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncDeleteMesh(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkservices::v1::DeleteMeshRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteMesh(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> NetworkServicesMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void NetworkServicesMetadata::SetMetadata(grpc::ClientContext& context,
                                          std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void NetworkServicesMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace networkservices_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
