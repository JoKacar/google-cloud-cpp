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

#include "google/cloud/iam/internal/iam_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/iam/admin/v1/iam.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iam_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IAMStub::~IAMStub() = default;

StatusOr<google::iam::admin::v1::ListServiceAccountsResponse>
DefaultIAMStub::ListServiceAccounts(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::ListServiceAccountsRequest const& request) {
  google::iam::admin::v1::ListServiceAccountsResponse response;
  auto status =
      grpc_stub_->ListServiceAccounts(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::admin::v1::ServiceAccount>
DefaultIAMStub::GetServiceAccount(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::GetServiceAccountRequest const& request) {
  google::iam::admin::v1::ServiceAccount response;
  auto status =
      grpc_stub_->GetServiceAccount(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::admin::v1::ServiceAccount>
DefaultIAMStub::CreateServiceAccount(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::CreateServiceAccountRequest const& request) {
  google::iam::admin::v1::ServiceAccount response;
  auto status =
      grpc_stub_->CreateServiceAccount(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::admin::v1::ServiceAccount>
DefaultIAMStub::PatchServiceAccount(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::PatchServiceAccountRequest const& request) {
  google::iam::admin::v1::ServiceAccount response;
  auto status =
      grpc_stub_->PatchServiceAccount(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultIAMStub::DeleteServiceAccount(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::DeleteServiceAccountRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteServiceAccount(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
DefaultIAMStub::UndeleteServiceAccount(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::UndeleteServiceAccountRequest const& request) {
  google::iam::admin::v1::UndeleteServiceAccountResponse response;
  auto status =
      grpc_stub_->UndeleteServiceAccount(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultIAMStub::EnableServiceAccount(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::EnableServiceAccountRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->EnableServiceAccount(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultIAMStub::DisableServiceAccount(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::DisableServiceAccountRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DisableServiceAccount(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
DefaultIAMStub::ListServiceAccountKeys(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::ListServiceAccountKeysRequest const& request) {
  google::iam::admin::v1::ListServiceAccountKeysResponse response;
  auto status =
      grpc_stub_->ListServiceAccountKeys(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
DefaultIAMStub::GetServiceAccountKey(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::GetServiceAccountKeyRequest const& request) {
  google::iam::admin::v1::ServiceAccountKey response;
  auto status =
      grpc_stub_->GetServiceAccountKey(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
DefaultIAMStub::CreateServiceAccountKey(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::CreateServiceAccountKeyRequest const& request) {
  google::iam::admin::v1::ServiceAccountKey response;
  auto status =
      grpc_stub_->CreateServiceAccountKey(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
DefaultIAMStub::UploadServiceAccountKey(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::UploadServiceAccountKeyRequest const& request) {
  google::iam::admin::v1::ServiceAccountKey response;
  auto status =
      grpc_stub_->UploadServiceAccountKey(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultIAMStub::DeleteServiceAccountKey(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::DeleteServiceAccountKeyRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteServiceAccountKey(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultIAMStub::DisableServiceAccountKey(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::DisableServiceAccountKeyRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DisableServiceAccountKey(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultIAMStub::EnableServiceAccountKey(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::EnableServiceAccountKeyRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->EnableServiceAccountKey(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::iam::v1::Policy> DefaultIAMStub::GetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultIAMStub::SetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultIAMStub::TestIamPermissions(
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

StatusOr<google::iam::admin::v1::QueryGrantableRolesResponse>
DefaultIAMStub::QueryGrantableRoles(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::QueryGrantableRolesRequest const& request) {
  google::iam::admin::v1::QueryGrantableRolesResponse response;
  auto status =
      grpc_stub_->QueryGrantableRoles(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::admin::v1::ListRolesResponse> DefaultIAMStub::ListRoles(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::ListRolesRequest const& request) {
  google::iam::admin::v1::ListRolesResponse response;
  auto status = grpc_stub_->ListRoles(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::admin::v1::Role> DefaultIAMStub::GetRole(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::GetRoleRequest const& request) {
  google::iam::admin::v1::Role response;
  auto status = grpc_stub_->GetRole(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::admin::v1::Role> DefaultIAMStub::CreateRole(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::CreateRoleRequest const& request) {
  google::iam::admin::v1::Role response;
  auto status = grpc_stub_->CreateRole(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::admin::v1::Role> DefaultIAMStub::UpdateRole(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::UpdateRoleRequest const& request) {
  google::iam::admin::v1::Role response;
  auto status = grpc_stub_->UpdateRole(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::admin::v1::Role> DefaultIAMStub::DeleteRole(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::DeleteRoleRequest const& request) {
  google::iam::admin::v1::Role response;
  auto status = grpc_stub_->DeleteRole(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::admin::v1::Role> DefaultIAMStub::UndeleteRole(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::UndeleteRoleRequest const& request) {
  google::iam::admin::v1::Role response;
  auto status = grpc_stub_->UndeleteRole(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::admin::v1::QueryTestablePermissionsResponse>
DefaultIAMStub::QueryTestablePermissions(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::QueryTestablePermissionsRequest const& request) {
  google::iam::admin::v1::QueryTestablePermissionsResponse response;
  auto status =
      grpc_stub_->QueryTestablePermissions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
DefaultIAMStub::QueryAuditableServices(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::QueryAuditableServicesRequest const& request) {
  google::iam::admin::v1::QueryAuditableServicesResponse response;
  auto status =
      grpc_stub_->QueryAuditableServices(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::admin::v1::LintPolicyResponse> DefaultIAMStub::LintPolicy(
    grpc::ClientContext& client_context,
    google::iam::admin::v1::LintPolicyRequest const& request) {
  google::iam::admin::v1::LintPolicyResponse response;
  auto status = grpc_stub_->LintPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google
