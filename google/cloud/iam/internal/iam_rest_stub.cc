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

#include "google/cloud/iam/internal/iam_rest_stub.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/iam/admin/v1/iam.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iam_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultIAMRestStub::DefaultIAMRestStub(Options options)
    : rest_client_(rest_internal::MakePooledRestClient(
          "https://iam.googleapis.com", options)),
      options_(std::move(options)) {}

DefaultIAMRestStub::DefaultIAMRestStub(
    std::shared_ptr<rest_internal::RestClient> rest_client, Options options)
    : rest_client_(std::move(rest_client)), options_(std::move(options)) {}

StatusOr<google::iam::admin::v1::ListServiceAccountsResponse>
DefaultIAMRestStub::ListServiceAccounts(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::ListServiceAccountsRequest const& request) {
  return rest_internal::Get<
      google::iam::admin::v1::ListServiceAccountsResponse>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.name(), "/serviceAccounts"),
      {std::make_pair("page_token", request.page_token())});
}

StatusOr<google::iam::admin::v1::ServiceAccount>
DefaultIAMRestStub::GetServiceAccount(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::GetServiceAccountRequest const& request) {
  return rest_internal::Get<google::iam::admin::v1::ServiceAccount>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.name(), ""));
}

StatusOr<google::iam::admin::v1::ServiceAccount>
DefaultIAMRestStub::CreateServiceAccount(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::CreateServiceAccountRequest const& request) {
  return rest_internal::Post<google::iam::admin::v1::ServiceAccount>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.name(), "/serviceAccounts"));
}

StatusOr<google::iam::admin::v1::ServiceAccount>
DefaultIAMRestStub::PatchServiceAccount(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::PatchServiceAccountRequest const& request) {
  return rest_internal::Patch<google::iam::admin::v1::ServiceAccount>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.service_account().name(), ""));
}

Status DefaultIAMRestStub::DeleteServiceAccount(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::DeleteServiceAccountRequest const& request) {
  return rest_internal::Delete(*rest_client_, rest_context, request,
                               absl::StrCat("/v1/", request.name(), ""));
}

StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
DefaultIAMRestStub::UndeleteServiceAccount(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::UndeleteServiceAccountRequest const& request) {
  return rest_internal::Post<
      google::iam::admin::v1::UndeleteServiceAccountResponse>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.name(), ":undelete"));
}

Status DefaultIAMRestStub::EnableServiceAccount(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::EnableServiceAccountRequest const& request) {
  return rest_internal::Post(*rest_client_, rest_context, request,
                             absl::StrCat("/v1/", request.name(), ":enable"));
}

Status DefaultIAMRestStub::DisableServiceAccount(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::DisableServiceAccountRequest const& request) {
  return rest_internal::Post(*rest_client_, rest_context, request,
                             absl::StrCat("/v1/", request.name(), ":disable"));
}

StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
DefaultIAMRestStub::ListServiceAccountKeys(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::ListServiceAccountKeysRequest const& request) {
  return rest_internal::Get<
      google::iam::admin::v1::ListServiceAccountKeysResponse>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.name(), "/keys"));
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
DefaultIAMRestStub::GetServiceAccountKey(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::GetServiceAccountKeyRequest const& request) {
  return rest_internal::Get<google::iam::admin::v1::ServiceAccountKey>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.name(), ""));
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
DefaultIAMRestStub::CreateServiceAccountKey(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::CreateServiceAccountKeyRequest const& request) {
  return rest_internal::Post<google::iam::admin::v1::ServiceAccountKey>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.name(), "/keys"));
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
DefaultIAMRestStub::UploadServiceAccountKey(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::UploadServiceAccountKeyRequest const& request) {
  return rest_internal::Post<google::iam::admin::v1::ServiceAccountKey>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.name(), "/keys:upload"));
}

Status DefaultIAMRestStub::DeleteServiceAccountKey(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::DeleteServiceAccountKeyRequest const& request) {
  return rest_internal::Delete(*rest_client_, rest_context, request,
                               absl::StrCat("/v1/", request.name(), ""));
}

StatusOr<google::iam::v1::Policy> DefaultIAMRestStub::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return rest_internal::Post<google::iam::v1::Policy>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.resource(), ":getIamPolicy"));
}

StatusOr<google::iam::v1::Policy> DefaultIAMRestStub::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return rest_internal::Post<google::iam::v1::Policy>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.resource(), ":setIamPolicy"));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultIAMRestStub::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return rest_internal::Post<google::iam::v1::TestIamPermissionsResponse>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.resource(), ":testIamPermissions"));
}

StatusOr<google::iam::admin::v1::QueryGrantableRolesResponse>
DefaultIAMRestStub::QueryGrantableRoles(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::QueryGrantableRolesRequest const& request) {
  return rest_internal::Post<
      google::iam::admin::v1::QueryGrantableRolesResponse>(
      *rest_client_, rest_context, request, "/v1/roles:queryGrantableRoles",
      {std::make_pair("page_token", request.page_token())});
}

StatusOr<google::iam::admin::v1::ListRolesResponse>
DefaultIAMRestStub::ListRoles(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::ListRolesRequest const& request) {
  return rest_internal::Get<google::iam::admin::v1::ListRolesResponse>(
      *rest_client_, rest_context, request, "/v1/roles",
      {std::make_pair("page_token", request.page_token())});
}

StatusOr<google::iam::admin::v1::Role> DefaultIAMRestStub::GetRole(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::GetRoleRequest const& request) {
  return rest_internal::Get<google::iam::admin::v1::Role>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.name(), ""));
}

StatusOr<google::iam::admin::v1::Role> DefaultIAMRestStub::CreateRole(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::CreateRoleRequest const& request) {
  return rest_internal::Post<google::iam::admin::v1::Role>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.parent(), "/roles"));
}

StatusOr<google::iam::admin::v1::Role> DefaultIAMRestStub::UpdateRole(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::UpdateRoleRequest const& request) {
  return rest_internal::Patch<google::iam::admin::v1::Role>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.name(), ""));
}

StatusOr<google::iam::admin::v1::Role> DefaultIAMRestStub::DeleteRole(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::DeleteRoleRequest const& request) {
  return rest_internal::Delete<google::iam::admin::v1::Role>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.name(), ""));
}

StatusOr<google::iam::admin::v1::Role> DefaultIAMRestStub::UndeleteRole(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::UndeleteRoleRequest const& request) {
  return rest_internal::Post<google::iam::admin::v1::Role>(
      *rest_client_, rest_context, request,
      absl::StrCat("/v1/", request.name(), ":undelete"));
}

StatusOr<google::iam::admin::v1::QueryTestablePermissionsResponse>
DefaultIAMRestStub::QueryTestablePermissions(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::QueryTestablePermissionsRequest const& request) {
  return rest_internal::Post<
      google::iam::admin::v1::QueryTestablePermissionsResponse>(
      *rest_client_, rest_context, request,
      "/v1/permissions:queryTestablePermissions",
      {std::make_pair("page_token", request.page_token())});
}

StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
DefaultIAMRestStub::QueryAuditableServices(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::QueryAuditableServicesRequest const& request) {
  return rest_internal::Post<
      google::iam::admin::v1::QueryAuditableServicesResponse>(
      *rest_client_, rest_context, request,
      "/v1/iamPolicies:queryAuditableServices");
}

StatusOr<google::iam::admin::v1::LintPolicyResponse>
DefaultIAMRestStub::LintPolicy(
    rest_internal::RestContext& rest_context,
    google::iam::admin::v1::LintPolicyRequest const& request) {
  return rest_internal::Post<google::iam::admin::v1::LintPolicyResponse>(
      *rest_client_, rest_context, request, "/v1/iamPolicies:lintPolicy");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google
