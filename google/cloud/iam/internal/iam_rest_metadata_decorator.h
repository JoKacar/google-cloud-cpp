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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_INTERNAL_IAM_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_INTERNAL_IAM_REST_METADATA_DECORATOR_H

#include "google/cloud/iam/internal/iam_rest_stub.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace iam_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IAMRestMetadata : public IAMRestStub {
 public:
  ~IAMRestMetadata() override = default;
  explicit IAMRestMetadata(std::shared_ptr<IAMRestStub> child);

  StatusOr<google::iam::admin::v1::ListServiceAccountsResponse>
  ListServiceAccounts(rest_internal::RestContext& rest_context,
                      google::iam::admin::v1::ListServiceAccountsRequest const&
                          request) override;

  StatusOr<google::iam::admin::v1::ServiceAccount> GetServiceAccount(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::GetServiceAccountRequest const& request) override;

  StatusOr<google::iam::admin::v1::ServiceAccount> CreateServiceAccount(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::CreateServiceAccountRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::ServiceAccount> PatchServiceAccount(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::PatchServiceAccountRequest const& request)
      override;

  Status DeleteServiceAccount(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::DeleteServiceAccountRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
  UndeleteServiceAccount(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::UndeleteServiceAccountRequest const& request)
      override;

  Status EnableServiceAccount(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::EnableServiceAccountRequest const& request)
      override;

  Status DisableServiceAccount(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::DisableServiceAccountRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
  ListServiceAccountKeys(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::ListServiceAccountKeysRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::ServiceAccountKey> GetServiceAccountKey(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::GetServiceAccountKeyRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::ServiceAccountKey> CreateServiceAccountKey(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::CreateServiceAccountKeyRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::ServiceAccountKey> UploadServiceAccountKey(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::UploadServiceAccountKeyRequest const& request)
      override;

  Status DeleteServiceAccountKey(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::DeleteServiceAccountKeyRequest const& request)
      override;

  Status DisableServiceAccountKey(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::DisableServiceAccountKeyRequest const& request)
      override;

  Status EnableServiceAccountKey(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::EnableServiceAccountKeyRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      rest_internal::RestContext& rest_context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      rest_internal::RestContext& rest_context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      rest_internal::RestContext& rest_context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::iam::admin::v1::QueryGrantableRolesResponse>
  QueryGrantableRoles(rest_internal::RestContext& rest_context,
                      google::iam::admin::v1::QueryGrantableRolesRequest const&
                          request) override;

  StatusOr<google::iam::admin::v1::ListRolesResponse> ListRoles(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::ListRolesRequest const& request) override;

  StatusOr<google::iam::admin::v1::Role> GetRole(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::GetRoleRequest const& request) override;

  StatusOr<google::iam::admin::v1::Role> CreateRole(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::CreateRoleRequest const& request) override;

  StatusOr<google::iam::admin::v1::Role> UpdateRole(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::UpdateRoleRequest const& request) override;

  StatusOr<google::iam::admin::v1::Role> DeleteRole(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::DeleteRoleRequest const& request) override;

  StatusOr<google::iam::admin::v1::Role> UndeleteRole(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::UndeleteRoleRequest const& request) override;

  StatusOr<google::iam::admin::v1::QueryTestablePermissionsResponse>
  QueryTestablePermissions(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::QueryTestablePermissionsRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
  QueryAuditableServices(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::QueryAuditableServicesRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::LintPolicyResponse> LintPolicy(
      rest_internal::RestContext& rest_context,
      google::iam::admin::v1::LintPolicyRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   std::string const& request_params);
  void SetMetadata(rest_internal::RestContext& rest_context);

  std::shared_ptr<IAMRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_INTERNAL_IAM_REST_METADATA_DECORATOR_H
