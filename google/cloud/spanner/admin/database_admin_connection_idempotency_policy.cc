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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#include "google/cloud/spanner/admin/database_admin_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace spanner_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

DatabaseAdminConnectionIdempotencyPolicy::
    ~DatabaseAdminConnectionIdempotencyPolicy() = default;

std::unique_ptr<DatabaseAdminConnectionIdempotencyPolicy>
DatabaseAdminConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<DatabaseAdminConnectionIdempotencyPolicy>(*this);
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::ListDatabases(
    google::spanner::admin::database::v1::ListDatabasesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::CreateDatabase(
    google::spanner::admin::database::v1::CreateDatabaseRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::GetDatabase(
    google::spanner::admin::database::v1::GetDatabaseRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::UpdateDatabase(
    google::spanner::admin::database::v1::UpdateDatabaseRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::UpdateDatabaseDdl(
    google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::DropDatabase(
    google::spanner::admin::database::v1::DropDatabaseRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::GetDatabaseDdl(
    google::spanner::admin::database::v1::GetDatabaseDdlRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::CreateBackup(
    google::spanner::admin::database::v1::CreateBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::CopyBackup(
    google::spanner::admin::database::v1::CopyBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::GetBackup(
    google::spanner::admin::database::v1::GetBackupRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::UpdateBackup(
    google::spanner::admin::database::v1::UpdateBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::DeleteBackup(
    google::spanner::admin::database::v1::DeleteBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::ListBackups(
    google::spanner::admin::database::v1::ListBackupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::RestoreDatabase(
    google::spanner::admin::database::v1::RestoreDatabaseRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::ListDatabaseOperations(
    google::spanner::admin::database::v1::
        ListDatabaseOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::ListBackupOperations(
    google::spanner::admin::database::v1::
        ListBackupOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DatabaseAdminConnectionIdempotencyPolicy::ListDatabaseRoles(
    google::spanner::admin::database::v1::ListDatabaseRolesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<DatabaseAdminConnectionIdempotencyPolicy>
MakeDefaultDatabaseAdminConnectionIdempotencyPolicy() {
  return std::make_unique<DatabaseAdminConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
