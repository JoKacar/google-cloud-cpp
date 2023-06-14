// Copyright 2021 Google LLC
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
// source: google/cloud/secretmanager/v1/service.proto

#include "google/cloud/secretmanager/v1/internal/secret_manager_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/secretmanager/v1/service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace secretmanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecretManagerServiceMetadata::SecretManagerServiceMetadata(
    std::shared_ptr<SecretManagerServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::secretmanager::v1::ListSecretsResponse>
SecretManagerServiceMetadata::ListSecrets(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::ListSecretsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListSecrets(context, request);
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceMetadata::CreateSecret(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::CreateSecretRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateSecret(context, request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceMetadata::AddSecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::AddSecretVersionRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->AddSecretVersion(context, request);
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceMetadata::GetSecret(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::GetSecretRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetSecret(context, request);
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceMetadata::UpdateSecret(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::UpdateSecretRequest const& request) {
  SetMetadata(context, "secret.name=" + request.secret().name());
  return child_->UpdateSecret(context, request);
}

Status SecretManagerServiceMetadata::DeleteSecret(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::DeleteSecretRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteSecret(context, request);
}

StatusOr<google::cloud::secretmanager::v1::ListSecretVersionsResponse>
SecretManagerServiceMetadata::ListSecretVersions(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::ListSecretVersionsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListSecretVersions(context, request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceMetadata::GetSecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::GetSecretVersionRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetSecretVersion(context, request);
}

StatusOr<google::cloud::secretmanager::v1::AccessSecretVersionResponse>
SecretManagerServiceMetadata::AccessSecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::AccessSecretVersionRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->AccessSecretVersion(context, request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceMetadata::DisableSecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::DisableSecretVersionRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DisableSecretVersion(context, request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceMetadata::EnableSecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::EnableSecretVersionRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->EnableSecretVersion(context, request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceMetadata::DestroySecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::DestroySecretVersionRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DestroySecretVersion(context, request);
}

StatusOr<google::iam::v1::Policy> SecretManagerServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> SecretManagerServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecretManagerServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->TestIamPermissions(context, request);
}

void SecretManagerServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void SecretManagerServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace secretmanager_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
