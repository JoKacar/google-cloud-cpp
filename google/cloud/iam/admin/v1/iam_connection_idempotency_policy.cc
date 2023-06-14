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

#include "google/cloud/iam/admin/v1/iam_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace iam_admin_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

IAMConnectionIdempotencyPolicy::~IAMConnectionIdempotencyPolicy() = default;

std::unique_ptr<IAMConnectionIdempotencyPolicy>
IAMConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<IAMConnectionIdempotencyPolicy>(*this);
}

Idempotency IAMConnectionIdempotencyPolicy::ListServiceAccounts(
    google::iam::admin::v1::ListServiceAccountsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::GetServiceAccount(
    google::iam::admin::v1::GetServiceAccountRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::CreateServiceAccount(
    google::iam::admin::v1::CreateServiceAccountRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::PatchServiceAccount(
    google::iam::admin::v1::PatchServiceAccountRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::DeleteServiceAccount(
    google::iam::admin::v1::DeleteServiceAccountRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::UndeleteServiceAccount(
    google::iam::admin::v1::UndeleteServiceAccountRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::EnableServiceAccount(
    google::iam::admin::v1::EnableServiceAccountRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::DisableServiceAccount(
    google::iam::admin::v1::DisableServiceAccountRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::ListServiceAccountKeys(
    google::iam::admin::v1::ListServiceAccountKeysRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::GetServiceAccountKey(
    google::iam::admin::v1::GetServiceAccountKeyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::CreateServiceAccountKey(
    google::iam::admin::v1::CreateServiceAccountKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::UploadServiceAccountKey(
    google::iam::admin::v1::UploadServiceAccountKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::DeleteServiceAccountKey(
    google::iam::admin::v1::DeleteServiceAccountKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::DisableServiceAccountKey(
    google::iam::admin::v1::DisableServiceAccountKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::EnableServiceAccountKey(
    google::iam::admin::v1::EnableServiceAccountKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::QueryGrantableRoles(
    google::iam::admin::v1::QueryGrantableRolesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::ListRoles(
    google::iam::admin::v1::ListRolesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::GetRole(
    google::iam::admin::v1::GetRoleRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::CreateRole(
    google::iam::admin::v1::CreateRoleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::UpdateRole(
    google::iam::admin::v1::UpdateRoleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::DeleteRole(
    google::iam::admin::v1::DeleteRoleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::UndeleteRole(
    google::iam::admin::v1::UndeleteRoleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::QueryTestablePermissions(
    google::iam::admin::v1::QueryTestablePermissionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::QueryAuditableServices(
    google::iam::admin::v1::QueryAuditableServicesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency IAMConnectionIdempotencyPolicy::LintPolicy(
    google::iam::admin::v1::LintPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<IAMConnectionIdempotencyPolicy>
MakeDefaultIAMConnectionIdempotencyPolicy() {
  return std::make_unique<IAMConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_admin_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
