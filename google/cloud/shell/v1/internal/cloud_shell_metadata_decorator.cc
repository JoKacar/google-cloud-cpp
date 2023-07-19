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
// source: google/cloud/shell/v1/cloudshell.proto

#include "google/cloud/shell/v1/internal/cloud_shell_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/shell/v1/cloudshell.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace shell_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudShellServiceMetadata::CloudShellServiceMetadata(
    std::shared_ptr<CloudShellServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::shell::v1::Environment>
CloudShellServiceMetadata::GetEnvironment(
    grpc::ClientContext& context,
    google::cloud::shell::v1::GetEnvironmentRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetEnvironment(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudShellServiceMetadata::AsyncStartEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::shell::v1::StartEnvironmentRequest const& request) {
  SetMetadata(*context, absl::StrCat("name=", request.name()));
  return child_->AsyncStartEnvironment(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudShellServiceMetadata::AsyncAuthorizeEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request) {
  SetMetadata(*context, absl::StrCat("name=", request.name()));
  return child_->AsyncAuthorizeEnvironment(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudShellServiceMetadata::AsyncAddPublicKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::shell::v1::AddPublicKeyRequest const& request) {
  SetMetadata(*context, absl::StrCat("environment=", request.environment()));
  return child_->AsyncAddPublicKey(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudShellServiceMetadata::AsyncRemovePublicKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::shell::v1::RemovePublicKeyRequest const& request) {
  SetMetadata(*context, absl::StrCat("environment=", request.environment()));
  return child_->AsyncRemovePublicKey(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudShellServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> CloudShellServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void CloudShellServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void CloudShellServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace shell_v1_internal
}  // namespace cloud
}  // namespace google
