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
// source: google/cloud/apigateway/v1/apigateway_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGATEWAY_V1_INTERNAL_API_GATEWAY_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGATEWAY_V1_INTERNAL_API_GATEWAY_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/apigateway/v1/apigateway_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace apigateway_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ApiGatewayServiceStub {
 public:
  virtual ~ApiGatewayServiceStub() = 0;

  virtual StatusOr<google::cloud::apigateway::v1::ListGatewaysResponse>
  ListGateways(
      grpc::ClientContext& context,
      google::cloud::apigateway::v1::ListGatewaysRequest const& request) = 0;

  virtual StatusOr<google::cloud::apigateway::v1::Gateway> GetGateway(
      grpc::ClientContext& context,
      google::cloud::apigateway::v1::GetGatewayRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateGateway(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::CreateGatewayRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateGateway(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::UpdateGatewayRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteGateway(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::DeleteGatewayRequest const& request) = 0;

  virtual StatusOr<google::cloud::apigateway::v1::ListApisResponse> ListApis(
      grpc::ClientContext& context,
      google::cloud::apigateway::v1::ListApisRequest const& request) = 0;

  virtual StatusOr<google::cloud::apigateway::v1::Api> GetApi(
      grpc::ClientContext& context,
      google::cloud::apigateway::v1::GetApiRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateApi(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::CreateApiRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateApi(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::UpdateApiRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteApi(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::DeleteApiRequest const& request) = 0;

  virtual StatusOr<google::cloud::apigateway::v1::ListApiConfigsResponse>
  ListApiConfigs(
      grpc::ClientContext& context,
      google::cloud::apigateway::v1::ListApiConfigsRequest const& request) = 0;

  virtual StatusOr<google::cloud::apigateway::v1::ApiConfig> GetApiConfig(
      grpc::ClientContext& context,
      google::cloud::apigateway::v1::GetApiConfigRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateApiConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::CreateApiConfigRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateApiConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::UpdateApiConfigRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteApiConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::DeleteApiConfigRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultApiGatewayServiceStub : public ApiGatewayServiceStub {
 public:
  DefaultApiGatewayServiceStub(
      std::unique_ptr<
          google::cloud::apigateway::v1::ApiGatewayService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::apigateway::v1::ListGatewaysResponse> ListGateways(
      grpc::ClientContext& client_context,
      google::cloud::apigateway::v1::ListGatewaysRequest const& request)
      override;

  StatusOr<google::cloud::apigateway::v1::Gateway> GetGateway(
      grpc::ClientContext& client_context,
      google::cloud::apigateway::v1::GetGatewayRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateGateway(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::CreateGatewayRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateGateway(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::UpdateGatewayRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteGateway(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::DeleteGatewayRequest const& request)
      override;

  StatusOr<google::cloud::apigateway::v1::ListApisResponse> ListApis(
      grpc::ClientContext& client_context,
      google::cloud::apigateway::v1::ListApisRequest const& request) override;

  StatusOr<google::cloud::apigateway::v1::Api> GetApi(
      grpc::ClientContext& client_context,
      google::cloud::apigateway::v1::GetApiRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateApi(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::CreateApiRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateApi(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::UpdateApiRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteApi(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::DeleteApiRequest const& request) override;

  StatusOr<google::cloud::apigateway::v1::ListApiConfigsResponse>
  ListApiConfigs(grpc::ClientContext& client_context,
                 google::cloud::apigateway::v1::ListApiConfigsRequest const&
                     request) override;

  StatusOr<google::cloud::apigateway::v1::ApiConfig> GetApiConfig(
      grpc::ClientContext& client_context,
      google::cloud::apigateway::v1::GetApiConfigRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateApiConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::CreateApiConfigRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateApiConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::UpdateApiConfigRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteApiConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::apigateway::v1::DeleteApiConfigRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<
      google::cloud::apigateway::v1::ApiGatewayService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigateway_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGATEWAY_V1_INTERNAL_API_GATEWAY_STUB_H
