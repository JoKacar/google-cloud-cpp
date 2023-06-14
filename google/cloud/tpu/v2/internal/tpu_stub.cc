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
// source: google/cloud/tpu/v2/cloud_tpu.proto

#include "google/cloud/tpu/v2/internal/tpu_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/tpu/v2/cloud_tpu.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace tpu_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TpuStub::~TpuStub() = default;

StatusOr<google::cloud::tpu::v2::ListNodesResponse> DefaultTpuStub::ListNodes(
    grpc::ClientContext& client_context,
    google::cloud::tpu::v2::ListNodesRequest const& request) {
  google::cloud::tpu::v2::ListNodesResponse response;
  auto status = grpc_stub_->ListNodes(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tpu::v2::Node> DefaultTpuStub::GetNode(
    grpc::ClientContext& client_context,
    google::cloud::tpu::v2::GetNodeRequest const& request) {
  google::cloud::tpu::v2::Node response;
  auto status = grpc_stub_->GetNode(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTpuStub::AsyncCreateNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v2::CreateNodeRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::tpu::v2::CreateNodeRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::tpu::v2::CreateNodeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateNode(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultTpuStub::AsyncDeleteNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v2::DeleteNodeRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::tpu::v2::DeleteNodeRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::tpu::v2::DeleteNodeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteNode(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>> DefaultTpuStub::AsyncStopNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v2::StopNodeRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::tpu::v2::StopNodeRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::tpu::v2::StopNodeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStopNode(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>> DefaultTpuStub::AsyncStartNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v2::StartNodeRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::tpu::v2::StartNodeRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::tpu::v2::StartNodeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStartNode(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultTpuStub::AsyncUpdateNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v2::UpdateNodeRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::cloud::tpu::v2::UpdateNodeRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::tpu::v2::UpdateNodeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateNode(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::tpu::v2::GenerateServiceIdentityResponse>
DefaultTpuStub::GenerateServiceIdentity(
    grpc::ClientContext& client_context,
    google::cloud::tpu::v2::GenerateServiceIdentityRequest const& request) {
  google::cloud::tpu::v2::GenerateServiceIdentityResponse response;
  auto status =
      grpc_stub_->GenerateServiceIdentity(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tpu::v2::ListAcceleratorTypesResponse>
DefaultTpuStub::ListAcceleratorTypes(
    grpc::ClientContext& client_context,
    google::cloud::tpu::v2::ListAcceleratorTypesRequest const& request) {
  google::cloud::tpu::v2::ListAcceleratorTypesResponse response;
  auto status =
      grpc_stub_->ListAcceleratorTypes(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tpu::v2::AcceleratorType>
DefaultTpuStub::GetAcceleratorType(
    grpc::ClientContext& client_context,
    google::cloud::tpu::v2::GetAcceleratorTypeRequest const& request) {
  google::cloud::tpu::v2::AcceleratorType response;
  auto status =
      grpc_stub_->GetAcceleratorType(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tpu::v2::ListRuntimeVersionsResponse>
DefaultTpuStub::ListRuntimeVersions(
    grpc::ClientContext& client_context,
    google::cloud::tpu::v2::ListRuntimeVersionsRequest const& request) {
  google::cloud::tpu::v2::ListRuntimeVersionsResponse response;
  auto status =
      grpc_stub_->ListRuntimeVersions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tpu::v2::RuntimeVersion>
DefaultTpuStub::GetRuntimeVersion(
    grpc::ClientContext& client_context,
    google::cloud::tpu::v2::GetRuntimeVersionRequest const& request) {
  google::cloud::tpu::v2::RuntimeVersion response;
  auto status =
      grpc_stub_->GetRuntimeVersion(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::tpu::v2::GetGuestAttributesResponse>
DefaultTpuStub::GetGuestAttributes(
    grpc::ClientContext& client_context,
    google::cloud::tpu::v2::GetGuestAttributesRequest const& request) {
  google::cloud::tpu::v2::GetGuestAttributesResponse response;
  auto status =
      grpc_stub_->GetGuestAttributes(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultTpuStub::AsyncGetOperation(
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

future<Status> DefaultTpuStub::AsyncCancelOperation(
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
}  // namespace tpu_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
