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
// source: google/api/serviceusage/v1/serviceusage.proto

#include "google/cloud/serviceusage/v1/internal/service_usage_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/api/serviceusage/v1/serviceusage.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace serviceusage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceUsageStub::~ServiceUsageStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultServiceUsageStub::AsyncEnableService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::serviceusage::v1::EnableServiceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::api::serviceusage::v1::EnableServiceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::api::serviceusage::v1::EnableServiceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncEnableService(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultServiceUsageStub::AsyncDisableService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::serviceusage::v1::DisableServiceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::api::serviceusage::v1::DisableServiceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::api::serviceusage::v1::DisableServiceRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDisableService(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::api::serviceusage::v1::Service>
DefaultServiceUsageStub::GetService(
    grpc::ClientContext& client_context,
    google::api::serviceusage::v1::GetServiceRequest const& request) {
  google::api::serviceusage::v1::Service response;
  auto status = grpc_stub_->GetService(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::api::serviceusage::v1::ListServicesResponse>
DefaultServiceUsageStub::ListServices(
    grpc::ClientContext& client_context,
    google::api::serviceusage::v1::ListServicesRequest const& request) {
  google::api::serviceusage::v1::ListServicesResponse response;
  auto status = grpc_stub_->ListServices(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultServiceUsageStub::AsyncBatchEnableServices(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::serviceusage::v1::BatchEnableServicesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::api::serviceusage::v1::BatchEnableServicesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::api::serviceusage::v1::BatchEnableServicesRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchEnableServices(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::api::serviceusage::v1::BatchGetServicesResponse>
DefaultServiceUsageStub::BatchGetServices(
    grpc::ClientContext& client_context,
    google::api::serviceusage::v1::BatchGetServicesRequest const& request) {
  google::api::serviceusage::v1::BatchGetServicesResponse response;
  auto status =
      grpc_stub_->BatchGetServices(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultServiceUsageStub::AsyncGetOperation(
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

future<Status> DefaultServiceUsageStub::AsyncCancelOperation(
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
}  // namespace serviceusage_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
