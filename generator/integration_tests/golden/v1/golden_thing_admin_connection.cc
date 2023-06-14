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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/v1/golden_thing_admin_connection.h"
#include "generator/integration_tests/golden/v1/golden_thing_admin_options.h"
#include "generator/integration_tests/golden/v1/internal/golden_thing_admin_connection_impl.h"
#include "generator/integration_tests/golden/v1/internal/golden_thing_admin_option_defaults.h"
#include "generator/integration_tests/golden/v1/internal/golden_thing_admin_stub_factory.h"
#include "generator/integration_tests/golden/v1/internal/golden_thing_admin_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace golden_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GoldenThingAdminConnection::~GoldenThingAdminConnection() = default;

StreamRange<google::test::admin::database::v1::Database> GoldenThingAdminConnection::ListDatabases(
    google::test::admin::database::v1::ListDatabasesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::test::admin::database::v1::Database>>();
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminConnection::CreateDatabase(
    google::test::admin::database::v1::CreateDatabaseRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::test::admin::database::v1::Database>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::test::admin::database::v1::Database>
GoldenThingAdminConnection::GetDatabase(
    google::test::admin::database::v1::GetDatabaseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>
GoldenThingAdminConnection::UpdateDatabaseDdl(
    google::test::admin::database::v1::UpdateDatabaseDdlRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

Status
GoldenThingAdminConnection::DropDatabase(
    google::test::admin::database::v1::DropDatabaseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::test::admin::database::v1::GetDatabaseDdlResponse>
GoldenThingAdminConnection::GetDatabaseDdl(
    google::test::admin::database::v1::GetDatabaseDdlRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy>
GoldenThingAdminConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy>
GoldenThingAdminConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
GoldenThingAdminConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::test::admin::database::v1::Backup>>
GoldenThingAdminConnection::CreateBackup(
    google::test::admin::database::v1::CreateBackupRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::test::admin::database::v1::Backup>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::test::admin::database::v1::Backup>
GoldenThingAdminConnection::GetBackup(
    google::test::admin::database::v1::GetBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::test::admin::database::v1::Backup>
GoldenThingAdminConnection::UpdateBackup(
    google::test::admin::database::v1::UpdateBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status
GoldenThingAdminConnection::DeleteBackup(
    google::test::admin::database::v1::DeleteBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::test::admin::database::v1::Backup> GoldenThingAdminConnection::ListBackups(
    google::test::admin::database::v1::ListBackupsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::test::admin::database::v1::Backup>>();
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminConnection::RestoreDatabase(
    google::test::admin::database::v1::RestoreDatabaseRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::test::admin::database::v1::Database>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::longrunning::Operation> GoldenThingAdminConnection::ListDatabaseOperations(
    google::test::admin::database::v1::ListDatabaseOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StreamRange<google::longrunning::Operation> GoldenThingAdminConnection::ListBackupOperations(
    google::test::admin::database::v1::ListBackupOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminConnection::LongRunningWithoutRouting(
    google::test::admin::database::v1::RestoreDatabaseRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::test::admin::database::v1::Database>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminConnection::AsyncGetDatabase(
    google::test::admin::database::v1::GetDatabaseRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::test::admin::database::v1::Database>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

future<Status>
GoldenThingAdminConnection::AsyncDropDatabase(
    google::test::admin::database::v1::DropDatabaseRequest const&) {
  return google::cloud::make_ready_future(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<GoldenThingAdminConnection> MakeGoldenThingAdminConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
      UnifiedCredentialsOptionList,
      GoldenThingAdminPolicyOptionList>(options, __func__);
  options = golden_v1_internal::GoldenThingAdminDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = golden_v1_internal::CreateDefaultGoldenThingAdminStub(
    background->cq(), options);
  return golden_v1_internal::MakeGoldenThingAdminTracingConnection(
      std::make_shared<golden_v1_internal::GoldenThingAdminConnectionImpl>(
      std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
