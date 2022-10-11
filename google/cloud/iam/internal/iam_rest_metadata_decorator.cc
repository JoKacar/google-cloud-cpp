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
// source: google/iam/admin/v1/iam.proto

#include "google/cloud/iam/internal/iam_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/iam/admin/v1/iam.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iam_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IAMRestMetadata::IAMRestMetadata(std::shared_ptr<IAMRestStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::iam::admin::v1::ListServiceAccountsResponse>
IAMRestMetadata::ListServiceAccounts(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::ListServiceAccountsRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->ListServiceAccounts(rest_context, request);
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMRestMetadata::GetServiceAccount(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::GetServiceAccountRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->GetServiceAccount(rest_context, request);
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMRestMetadata::CreateServiceAccount(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::CreateServiceAccountRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->CreateServiceAccount(rest_context, request);
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMRestMetadata::PatchServiceAccount(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::PatchServiceAccountRequest const& request) {
  SetMetadata(rest_context,
              "service_account.name=" + request.service_account().name());
  return child_->PatchServiceAccount(rest_context, request);
}

Status IAMRestMetadata::DeleteServiceAccount(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::DeleteServiceAccountRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->DeleteServiceAccount(rest_context, request);
}

StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
IAMRestMetadata::UndeleteServiceAccount(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::UndeleteServiceAccountRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->UndeleteServiceAccount(rest_context, request);
}

Status IAMRestMetadata::EnableServiceAccount(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::EnableServiceAccountRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->EnableServiceAccount(rest_context, request);
}

Status IAMRestMetadata::DisableServiceAccount(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::DisableServiceAccountRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->DisableServiceAccount(rest_context, request);
}

StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
IAMRestMetadata::ListServiceAccountKeys(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::ListServiceAccountKeysRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->ListServiceAccountKeys(rest_context, request);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMRestMetadata::GetServiceAccountKey(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::GetServiceAccountKeyRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->GetServiceAccountKey(rest_context, request);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMRestMetadata::CreateServiceAccountKey(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::CreateServiceAccountKeyRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->CreateServiceAccountKey(rest_context, request);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMRestMetadata::UploadServiceAccountKey(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::UploadServiceAccountKeyRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->UploadServiceAccountKey(rest_context, request);
}

Status IAMRestMetadata::DeleteServiceAccountKey(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::DeleteServiceAccountKeyRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->DeleteServiceAccountKey(rest_context, request);
}

Status IAMRestMetadata::DisableServiceAccountKey(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::DisableServiceAccountKeyRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->DisableServiceAccountKey(rest_context, request);
}

Status IAMRestMetadata::EnableServiceAccountKey(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::EnableServiceAccountKeyRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->EnableServiceAccountKey(rest_context, request);
}

StatusOr<google::iam::v1::Policy> IAMRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(rest_context, "resource=" + request.resource());
  return child_->GetIamPolicy(rest_context, request);
}

StatusOr<google::iam::v1::Policy> IAMRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(rest_context, "resource=" + request.resource());
  return child_->SetIamPolicy(rest_context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IAMRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context, "resource=" + request.resource());
  return child_->TestIamPermissions(rest_context, request);
}

StatusOr<google::iam::admin::v1::QueryGrantableRolesResponse>
IAMRestMetadata::QueryGrantableRoles(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::QueryGrantableRolesRequest const& request) {
  SetMetadata(rest_context);
  return child_->QueryGrantableRoles(rest_context, request);
}

StatusOr<google::iam::admin::v1::ListRolesResponse> IAMRestMetadata::ListRoles(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::ListRolesRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListRoles(rest_context, request);
}

StatusOr<google::iam::admin::v1::Role> IAMRestMetadata::GetRole(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::GetRoleRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->GetRole(rest_context, request);
}

StatusOr<google::iam::admin::v1::Role> IAMRestMetadata::CreateRole(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::CreateRoleRequest const& request) {
  SetMetadata(rest_context, "parent=" + request.parent());
  return child_->CreateRole(rest_context, request);
}

StatusOr<google::iam::admin::v1::Role> IAMRestMetadata::UpdateRole(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::UpdateRoleRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->UpdateRole(rest_context, request);
}

StatusOr<google::iam::admin::v1::Role> IAMRestMetadata::DeleteRole(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::DeleteRoleRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->DeleteRole(rest_context, request);
}

StatusOr<google::iam::admin::v1::Role> IAMRestMetadata::UndeleteRole(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::UndeleteRoleRequest const& request) {
  SetMetadata(rest_context, "name=" + request.name());
  return child_->UndeleteRole(rest_context, request);
}

StatusOr<google::iam::admin::v1::QueryTestablePermissionsResponse>
IAMRestMetadata::QueryTestablePermissions(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::QueryTestablePermissionsRequest const& request) {
  SetMetadata(rest_context);
  return child_->QueryTestablePermissions(rest_context, request);
}

StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
IAMRestMetadata::QueryAuditableServices(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::QueryAuditableServicesRequest const& request) {
  SetMetadata(rest_context);
  return child_->QueryAuditableServices(rest_context, request);
}

StatusOr<google::iam::admin::v1::LintPolicyResponse>
IAMRestMetadata::LintPolicy(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::LintPolicyRequest const& request) {
  SetMetadata(rest_context);
  return child_->LintPolicy(rest_context, request);
}

void IAMRestMetadata::SetMetadata(rest_internal::RestContext& rest_context,
                                  std::string const& request_params) {
  rest_context.AddHeader("x-goog-request-params", request_params);
  SetMetadata(rest_context);
}

void IAMRestMetadata::SetMetadata(rest_internal::RestContext& rest_context) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google
