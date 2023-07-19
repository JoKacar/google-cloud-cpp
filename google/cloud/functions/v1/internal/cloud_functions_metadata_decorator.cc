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

#include "google/cloud/functions/v1/internal/cloud_functions_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/functions/v1/functions.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace functions_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudFunctionsServiceMetadata::CloudFunctionsServiceMetadata(
    std::shared_ptr<CloudFunctionsServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::functions::v1::ListFunctionsResponse>
CloudFunctionsServiceMetadata::ListFunctions(
    grpc::ClientContext& context,
    google::cloud::functions::v1::ListFunctionsRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListFunctions(context, request);
}

StatusOr<google::cloud::functions::v1::CloudFunction>
CloudFunctionsServiceMetadata::GetFunction(
    grpc::ClientContext& context,
    google::cloud::functions::v1::GetFunctionRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetFunction(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFunctionsServiceMetadata::AsyncCreateFunction(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::functions::v1::CreateFunctionRequest const& request) {
  SetMetadata(*context, absl::StrCat("location=", request.location()));
  return child_->AsyncCreateFunction(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFunctionsServiceMetadata::AsyncUpdateFunction(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::functions::v1::UpdateFunctionRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("function.name=", request.function().name()));
  return child_->AsyncUpdateFunction(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFunctionsServiceMetadata::AsyncDeleteFunction(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::functions::v1::DeleteFunctionRequest const& request) {
  SetMetadata(*context, absl::StrCat("name=", request.name()));
  return child_->AsyncDeleteFunction(cq, std::move(context), request);
}

StatusOr<google::cloud::functions::v1::CallFunctionResponse>
CloudFunctionsServiceMetadata::CallFunction(
    grpc::ClientContext& context,
    google::cloud::functions::v1::CallFunctionRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->CallFunction(context, request);
}

StatusOr<google::cloud::functions::v1::GenerateUploadUrlResponse>
CloudFunctionsServiceMetadata::GenerateUploadUrl(
    grpc::ClientContext& context,
    google::cloud::functions::v1::GenerateUploadUrlRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->GenerateUploadUrl(context, request);
}

StatusOr<google::cloud::functions::v1::GenerateDownloadUrlResponse>
CloudFunctionsServiceMetadata::GenerateDownloadUrl(
    grpc::ClientContext& context,
    google::cloud::functions::v1::GenerateDownloadUrlRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GenerateDownloadUrl(context, request);
}

StatusOr<google::iam::v1::Policy> CloudFunctionsServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=", request.resource()));
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> CloudFunctionsServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=", request.resource()));
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
CloudFunctionsServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=", request.resource()));
  return child_->TestIamPermissions(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFunctionsServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> CloudFunctionsServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void CloudFunctionsServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void CloudFunctionsServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace functions_v1_internal
}  // namespace cloud
}  // namespace google
