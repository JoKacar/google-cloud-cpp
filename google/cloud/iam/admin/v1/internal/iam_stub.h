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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_ADMIN_V1_INTERNAL_IAM_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_ADMIN_V1_INTERNAL_IAM_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/iam/admin/v1/iam.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace iam_admin_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IAMStub {
 public:
  virtual ~IAMStub() = 0;

  virtual StatusOr<google::iam::admin::v1::ListServiceAccountsResponse>
  ListServiceAccounts(
      grpc::ClientContext& context,
      google::iam::admin::v1::ListServiceAccountsRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::ServiceAccount> GetServiceAccount(
      grpc::ClientContext& context,
      google::iam::admin::v1::GetServiceAccountRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::ServiceAccount> CreateServiceAccount(
      grpc::ClientContext& context,
      google::iam::admin::v1::CreateServiceAccountRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::ServiceAccount> PatchServiceAccount(
      grpc::ClientContext& context,
      google::iam::admin::v1::PatchServiceAccountRequest const& request) = 0;

  virtual Status DeleteServiceAccount(
      grpc::ClientContext& context,
      google::iam::admin::v1::DeleteServiceAccountRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
  UndeleteServiceAccount(
      grpc::ClientContext& context,
      google::iam::admin::v1::UndeleteServiceAccountRequest const& request) = 0;

  virtual Status EnableServiceAccount(
      grpc::ClientContext& context,
      google::iam::admin::v1::EnableServiceAccountRequest const& request) = 0;

  virtual Status DisableServiceAccount(
      grpc::ClientContext& context,
      google::iam::admin::v1::DisableServiceAccountRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
  ListServiceAccountKeys(
      grpc::ClientContext& context,
      google::iam::admin::v1::ListServiceAccountKeysRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::ServiceAccountKey>
  GetServiceAccountKey(
      grpc::ClientContext& context,
      google::iam::admin::v1::GetServiceAccountKeyRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::ServiceAccountKey>
  CreateServiceAccountKey(
      grpc::ClientContext& context,
      google::iam::admin::v1::CreateServiceAccountKeyRequest const&
          request) = 0;

  virtual StatusOr<google::iam::admin::v1::ServiceAccountKey>
  UploadServiceAccountKey(
      grpc::ClientContext& context,
      google::iam::admin::v1::UploadServiceAccountKeyRequest const&
          request) = 0;

  virtual Status DeleteServiceAccountKey(
      grpc::ClientContext& context,
      google::iam::admin::v1::DeleteServiceAccountKeyRequest const&
          request) = 0;

  virtual Status DisableServiceAccountKey(
      grpc::ClientContext& context,
      google::iam::admin::v1::DisableServiceAccountKeyRequest const&
          request) = 0;

  virtual Status EnableServiceAccountKey(
      grpc::ClientContext& context,
      google::iam::admin::v1::EnableServiceAccountKeyRequest const&
          request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::QueryGrantableRolesResponse>
  QueryGrantableRoles(
      grpc::ClientContext& context,
      google::iam::admin::v1::QueryGrantableRolesRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::ListRolesResponse> ListRoles(
      grpc::ClientContext& context,
      google::iam::admin::v1::ListRolesRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::Role> GetRole(
      grpc::ClientContext& context,
      google::iam::admin::v1::GetRoleRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::Role> CreateRole(
      grpc::ClientContext& context,
      google::iam::admin::v1::CreateRoleRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::Role> UpdateRole(
      grpc::ClientContext& context,
      google::iam::admin::v1::UpdateRoleRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::Role> DeleteRole(
      grpc::ClientContext& context,
      google::iam::admin::v1::DeleteRoleRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::Role> UndeleteRole(
      grpc::ClientContext& context,
      google::iam::admin::v1::UndeleteRoleRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::QueryTestablePermissionsResponse>
  QueryTestablePermissions(
      grpc::ClientContext& context,
      google::iam::admin::v1::QueryTestablePermissionsRequest const&
          request) = 0;

  virtual StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
  QueryAuditableServices(
      grpc::ClientContext& context,
      google::iam::admin::v1::QueryAuditableServicesRequest const& request) = 0;

  virtual StatusOr<google::iam::admin::v1::LintPolicyResponse> LintPolicy(
      grpc::ClientContext& context,
      google::iam::admin::v1::LintPolicyRequest const& request) = 0;
};

class DefaultIAMStub : public IAMStub {
 public:
  explicit DefaultIAMStub(
      std::unique_ptr<google::iam::admin::v1::IAM::StubInterface> grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::iam::admin::v1::ListServiceAccountsResponse>
  ListServiceAccounts(grpc::ClientContext& client_context,
                      google::iam::admin::v1::ListServiceAccountsRequest const&
                          request) override;

  StatusOr<google::iam::admin::v1::ServiceAccount> GetServiceAccount(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::GetServiceAccountRequest const& request) override;

  StatusOr<google::iam::admin::v1::ServiceAccount> CreateServiceAccount(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::CreateServiceAccountRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::ServiceAccount> PatchServiceAccount(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::PatchServiceAccountRequest const& request)
      override;

  Status DeleteServiceAccount(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::DeleteServiceAccountRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
  UndeleteServiceAccount(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::UndeleteServiceAccountRequest const& request)
      override;

  Status EnableServiceAccount(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::EnableServiceAccountRequest const& request)
      override;

  Status DisableServiceAccount(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::DisableServiceAccountRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
  ListServiceAccountKeys(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::ListServiceAccountKeysRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::ServiceAccountKey> GetServiceAccountKey(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::GetServiceAccountKeyRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::ServiceAccountKey> CreateServiceAccountKey(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::CreateServiceAccountKeyRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::ServiceAccountKey> UploadServiceAccountKey(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::UploadServiceAccountKeyRequest const& request)
      override;

  Status DeleteServiceAccountKey(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::DeleteServiceAccountKeyRequest const& request)
      override;

  Status DisableServiceAccountKey(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::DisableServiceAccountKeyRequest const& request)
      override;

  Status EnableServiceAccountKey(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::EnableServiceAccountKeyRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& client_context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::iam::admin::v1::QueryGrantableRolesResponse>
  QueryGrantableRoles(grpc::ClientContext& client_context,
                      google::iam::admin::v1::QueryGrantableRolesRequest const&
                          request) override;

  StatusOr<google::iam::admin::v1::ListRolesResponse> ListRoles(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::ListRolesRequest const& request) override;

  StatusOr<google::iam::admin::v1::Role> GetRole(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::GetRoleRequest const& request) override;

  StatusOr<google::iam::admin::v1::Role> CreateRole(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::CreateRoleRequest const& request) override;

  StatusOr<google::iam::admin::v1::Role> UpdateRole(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::UpdateRoleRequest const& request) override;

  StatusOr<google::iam::admin::v1::Role> DeleteRole(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::DeleteRoleRequest const& request) override;

  StatusOr<google::iam::admin::v1::Role> UndeleteRole(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::UndeleteRoleRequest const& request) override;

  StatusOr<google::iam::admin::v1::QueryTestablePermissionsResponse>
  QueryTestablePermissions(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::QueryTestablePermissionsRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
  QueryAuditableServices(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::QueryAuditableServicesRequest const& request)
      override;

  StatusOr<google::iam::admin::v1::LintPolicyResponse> LintPolicy(
      grpc::ClientContext& client_context,
      google::iam::admin::v1::LintPolicyRequest const& request) override;

 private:
  std::unique_ptr<google::iam::admin::v1::IAM::StubInterface> grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace iam_admin_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_ADMIN_V1_INTERNAL_IAM_STUB_H
