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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_INTERNAL_NETWORK_SERVICES_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_INTERNAL_NETWORK_SERVICES_CONNECTION_IMPL_H

#include "google/cloud/networkservices/v1/internal/network_services_retry_traits.h"
#include "google/cloud/networkservices/v1/internal/network_services_stub.h"
#include "google/cloud/networkservices/v1/network_services_connection.h"
#include "google/cloud/networkservices/v1/network_services_connection_idempotency_policy.h"
#include "google/cloud/networkservices/v1/network_services_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace networkservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworkServicesConnectionImpl
    : public networkservices_v1::NetworkServicesConnection {
 public:
  ~NetworkServicesConnectionImpl() override = default;

  NetworkServicesConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<networkservices_v1_internal::NetworkServicesStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::networkservices::v1::EndpointPolicy>
  ListEndpointPolicies(
      google::cloud::networkservices::v1::ListEndpointPoliciesRequest request)
      override;

  StatusOr<google::cloud::networkservices::v1::EndpointPolicy>
  GetEndpointPolicy(
      google::cloud::networkservices::v1::GetEndpointPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::networkservices::v1::EndpointPolicy>>
  CreateEndpointPolicy(
      google::cloud::networkservices::v1::CreateEndpointPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::networkservices::v1::EndpointPolicy>>
  UpdateEndpointPolicy(
      google::cloud::networkservices::v1::UpdateEndpointPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteEndpointPolicy(
      google::cloud::networkservices::v1::DeleteEndpointPolicyRequest const&
          request) override;

  StreamRange<google::cloud::networkservices::v1::Gateway> ListGateways(
      google::cloud::networkservices::v1::ListGatewaysRequest request) override;

  StatusOr<google::cloud::networkservices::v1::Gateway> GetGateway(
      google::cloud::networkservices::v1::GetGatewayRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::Gateway>> CreateGateway(
      google::cloud::networkservices::v1::CreateGatewayRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::Gateway>> UpdateGateway(
      google::cloud::networkservices::v1::UpdateGatewayRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteGateway(google::cloud::networkservices::v1::DeleteGatewayRequest const&
                    request) override;

  StreamRange<google::cloud::networkservices::v1::GrpcRoute> ListGrpcRoutes(
      google::cloud::networkservices::v1::ListGrpcRoutesRequest request)
      override;

  StatusOr<google::cloud::networkservices::v1::GrpcRoute> GetGrpcRoute(
      google::cloud::networkservices::v1::GetGrpcRouteRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::GrpcRoute>>
  CreateGrpcRoute(
      google::cloud::networkservices::v1::CreateGrpcRouteRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::GrpcRoute>>
  UpdateGrpcRoute(
      google::cloud::networkservices::v1::UpdateGrpcRouteRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteGrpcRoute(
      google::cloud::networkservices::v1::DeleteGrpcRouteRequest const& request)
      override;

  StreamRange<google::cloud::networkservices::v1::HttpRoute> ListHttpRoutes(
      google::cloud::networkservices::v1::ListHttpRoutesRequest request)
      override;

  StatusOr<google::cloud::networkservices::v1::HttpRoute> GetHttpRoute(
      google::cloud::networkservices::v1::GetHttpRouteRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::HttpRoute>>
  CreateHttpRoute(
      google::cloud::networkservices::v1::CreateHttpRouteRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::HttpRoute>>
  UpdateHttpRoute(
      google::cloud::networkservices::v1::UpdateHttpRouteRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteHttpRoute(
      google::cloud::networkservices::v1::DeleteHttpRouteRequest const& request)
      override;

  StreamRange<google::cloud::networkservices::v1::TcpRoute> ListTcpRoutes(
      google::cloud::networkservices::v1::ListTcpRoutesRequest request)
      override;

  StatusOr<google::cloud::networkservices::v1::TcpRoute> GetTcpRoute(
      google::cloud::networkservices::v1::GetTcpRouteRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::TcpRoute>> CreateTcpRoute(
      google::cloud::networkservices::v1::CreateTcpRouteRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::TcpRoute>> UpdateTcpRoute(
      google::cloud::networkservices::v1::UpdateTcpRouteRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteTcpRoute(
      google::cloud::networkservices::v1::DeleteTcpRouteRequest const& request)
      override;

  StreamRange<google::cloud::networkservices::v1::TlsRoute> ListTlsRoutes(
      google::cloud::networkservices::v1::ListTlsRoutesRequest request)
      override;

  StatusOr<google::cloud::networkservices::v1::TlsRoute> GetTlsRoute(
      google::cloud::networkservices::v1::GetTlsRouteRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::TlsRoute>> CreateTlsRoute(
      google::cloud::networkservices::v1::CreateTlsRouteRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::TlsRoute>> UpdateTlsRoute(
      google::cloud::networkservices::v1::UpdateTlsRouteRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteTlsRoute(
      google::cloud::networkservices::v1::DeleteTlsRouteRequest const& request)
      override;

  StreamRange<google::cloud::networkservices::v1::ServiceBinding>
  ListServiceBindings(
      google::cloud::networkservices::v1::ListServiceBindingsRequest request)
      override;

  StatusOr<google::cloud::networkservices::v1::ServiceBinding>
  GetServiceBinding(
      google::cloud::networkservices::v1::GetServiceBindingRequest const&
          request) override;

  future<StatusOr<google::cloud::networkservices::v1::ServiceBinding>>
  CreateServiceBinding(
      google::cloud::networkservices::v1::CreateServiceBindingRequest const&
          request) override;

  future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteServiceBinding(
      google::cloud::networkservices::v1::DeleteServiceBindingRequest const&
          request) override;

  StreamRange<google::cloud::networkservices::v1::Mesh> ListMeshes(
      google::cloud::networkservices::v1::ListMeshesRequest request) override;

  StatusOr<google::cloud::networkservices::v1::Mesh> GetMesh(
      google::cloud::networkservices::v1::GetMeshRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::Mesh>> CreateMesh(
      google::cloud::networkservices::v1::CreateMeshRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::Mesh>> UpdateMesh(
      google::cloud::networkservices::v1::UpdateMeshRequest const& request)
      override;

  future<StatusOr<google::cloud::networkservices::v1::OperationMetadata>>
  DeleteMesh(google::cloud::networkservices::v1::DeleteMeshRequest const&
                 request) override;

 private:
  std::unique_ptr<networkservices_v1::NetworkServicesRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<networkservices_v1::NetworkServicesRetryPolicyOption>()) {
      return options
          .get<networkservices_v1::NetworkServicesRetryPolicyOption>()
          ->clone();
    }
    return options_.get<networkservices_v1::NetworkServicesRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<networkservices_v1::NetworkServicesBackoffPolicyOption>()) {
      return options
          .get<networkservices_v1::NetworkServicesBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<networkservices_v1::NetworkServicesBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<
      networkservices_v1::NetworkServicesConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<networkservices_v1::
                        NetworkServicesConnectionIdempotencyPolicyOption>()) {
      return options
          .get<networkservices_v1::
                   NetworkServicesConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<networkservices_v1::
                 NetworkServicesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<networkservices_v1::NetworkServicesPollingPolicyOption>()) {
      return options
          .get<networkservices_v1::NetworkServicesPollingPolicyOption>()
          ->clone();
    }
    return options_
        .get<networkservices_v1::NetworkServicesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<networkservices_v1_internal::NetworkServicesStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkservices_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSERVICES_V1_INTERNAL_NETWORK_SERVICES_CONNECTION_IMPL_H
