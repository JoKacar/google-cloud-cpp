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
// source: google/cloud/functions/v1/functions.proto

#include "google/cloud/functions/internal/cloud_functions_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/functions/v1/functions.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace functions_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudFunctionsServiceStub::~CloudFunctionsServiceStub() = default;

StatusOr<google::cloud::functions::v1::ListFunctionsResponse>
DefaultCloudFunctionsServiceStub::ListFunctions(
    grpc::ClientContext& client_context,
    google::cloud::functions::v1::ListFunctionsRequest const& request) {
  google::cloud::functions::v1::ListFunctionsResponse response;
  auto status = grpc_stub_->ListFunctions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::functions::v1::CloudFunction>
DefaultCloudFunctionsServiceStub::GetFunction(
    grpc::ClientContext& client_context,
    google::cloud::functions::v1::GetFunctionRequest const& request) {
  google::cloud::functions::v1::CloudFunction response;
  auto status = grpc_stub_->GetFunction(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudFunctionsServiceStub::AsyncCreateFunction(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::functions::v1::CreateFunctionRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::functions::v1::CreateFunctionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateFunction(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudFunctionsServiceStub::AsyncUpdateFunction(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::functions::v1::UpdateFunctionRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::functions::v1::UpdateFunctionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateFunction(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudFunctionsServiceStub::AsyncDeleteFunction(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::functions::v1::DeleteFunctionRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::functions::v1::DeleteFunctionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteFunction(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::functions::v1::CallFunctionResponse>
DefaultCloudFunctionsServiceStub::CallFunction(
    grpc::ClientContext& client_context,
    google::cloud::functions::v1::CallFunctionRequest const& request) {
  google::cloud::functions::v1::CallFunctionResponse response;
  auto status = grpc_stub_->CallFunction(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::functions::v1::GenerateUploadUrlResponse>
DefaultCloudFunctionsServiceStub::GenerateUploadUrl(
    grpc::ClientContext& client_context,
    google::cloud::functions::v1::GenerateUploadUrlRequest const& request) {
  google::cloud::functions::v1::GenerateUploadUrlResponse response;
  auto status =
      grpc_stub_->GenerateUploadUrl(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::functions::v1::GenerateDownloadUrlResponse>
DefaultCloudFunctionsServiceStub::GenerateDownloadUrl(
    grpc::ClientContext& client_context,
    google::cloud::functions::v1::GenerateDownloadUrlRequest const& request) {
  google::cloud::functions::v1::GenerateDownloadUrlResponse response;
  auto status =
      grpc_stub_->GenerateDownloadUrl(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy>
DefaultCloudFunctionsServiceStub::SetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy>
DefaultCloudFunctionsServiceStub::GetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultCloudFunctionsServiceStub::TestIamPermissions(
    grpc::ClientContext& client_context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      grpc_stub_->TestIamPermissions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudFunctionsServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultCloudFunctionsServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return cq
      .MakeUnaryRpc(
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
}  // namespace functions_internal
}  // namespace cloud
}  // namespace google
