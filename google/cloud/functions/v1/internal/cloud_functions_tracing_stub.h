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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V1_INTERNAL_CLOUD_FUNCTIONS_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V1_INTERNAL_CLOUD_FUNCTIONS_TRACING_STUB_H

#include "google/cloud/functions/v1/internal/cloud_functions_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace functions_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CloudFunctionsServiceTracingStub : public CloudFunctionsServiceStub {
 public:
  ~CloudFunctionsServiceTracingStub() override = default;

  explicit CloudFunctionsServiceTracingStub(
      std::shared_ptr<CloudFunctionsServiceStub> child);

  StatusOr<google::cloud::functions::v1::ListFunctionsResponse> ListFunctions(
      grpc::ClientContext& context,
      google::cloud::functions::v1::ListFunctionsRequest const& request)
      override;

  StatusOr<google::cloud::functions::v1::CloudFunction> GetFunction(
      grpc::ClientContext& context,
      google::cloud::functions::v1::GetFunctionRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateFunction(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::functions::v1::CreateFunctionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateFunction(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::functions::v1::UpdateFunctionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFunction(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::functions::v1::DeleteFunctionRequest const& request)
      override;

  StatusOr<google::cloud::functions::v1::CallFunctionResponse> CallFunction(
      grpc::ClientContext& context,
      google::cloud::functions::v1::CallFunctionRequest const& request)
      override;

  StatusOr<google::cloud::functions::v1::GenerateUploadUrlResponse>
  GenerateUploadUrl(
      grpc::ClientContext& context,
      google::cloud::functions::v1::GenerateUploadUrlRequest const& request)
      override;

  StatusOr<google::cloud::functions::v1::GenerateDownloadUrlResponse>
  GenerateDownloadUrl(
      grpc::ClientContext& context,
      google::cloud::functions::v1::GenerateDownloadUrlRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<CloudFunctionsServiceStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<CloudFunctionsServiceStub> MakeCloudFunctionsServiceTracingStub(
    std::shared_ptr<CloudFunctionsServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace functions_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V1_INTERNAL_CLOUD_FUNCTIONS_TRACING_STUB_H
