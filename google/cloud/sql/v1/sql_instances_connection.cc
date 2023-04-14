// Copyright 2023 Google LLC
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
// source: google/cloud/sql/v1/cloud_sql_instances.proto

#include "google/cloud/sql/v1/sql_instances_connection.h"
#include "google/cloud/sql/v1/internal/sql_instances_option_defaults.h"
#include "google/cloud/sql/v1/internal/sql_instances_tracing_connection.h"
#include "google/cloud/sql/v1/sql_instances_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SqlInstancesServiceConnection::~SqlInstancesServiceConnection() = default;

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::AddServerCa(
    google::cloud::sql::v1::SqlInstancesAddServerCaRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::Clone(
    google::cloud::sql::v1::SqlInstancesCloneRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::Delete(
    google::cloud::sql::v1::SqlInstancesDeleteRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::DemoteMaster(
    google::cloud::sql::v1::SqlInstancesDemoteMasterRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::Export(
    google::cloud::sql::v1::SqlInstancesExportRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::Failover(
    google::cloud::sql::v1::SqlInstancesFailoverRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::DatabaseInstance>
SqlInstancesServiceConnection::Get(
    google::cloud::sql::v1::SqlInstancesGetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::Import(
    google::cloud::sql::v1::SqlInstancesImportRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::Insert(
    google::cloud::sql::v1::SqlInstancesInsertRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::InstancesListResponse>
SqlInstancesServiceConnection::List(
    google::cloud::sql::v1::SqlInstancesListRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::InstancesListServerCasResponse>
SqlInstancesServiceConnection::ListServerCas(
    google::cloud::sql::v1::SqlInstancesListServerCasRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::Patch(
    google::cloud::sql::v1::SqlInstancesPatchRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::PromoteReplica(
    google::cloud::sql::v1::SqlInstancesPromoteReplicaRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::ResetSslConfig(
    google::cloud::sql::v1::SqlInstancesResetSslConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::Restart(
    google::cloud::sql::v1::SqlInstancesRestartRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::RestoreBackup(
    google::cloud::sql::v1::SqlInstancesRestoreBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::RotateServerCa(
    google::cloud::sql::v1::SqlInstancesRotateServerCaRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::StartReplica(
    google::cloud::sql::v1::SqlInstancesStartReplicaRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::StopReplica(
    google::cloud::sql::v1::SqlInstancesStopReplicaRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::TruncateLog(
    google::cloud::sql::v1::SqlInstancesTruncateLogRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::Update(
    google::cloud::sql::v1::SqlInstancesUpdateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::SslCert>
SqlInstancesServiceConnection::CreateEphemeral(
    google::cloud::sql::v1::SqlInstancesCreateEphemeralCertRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::RescheduleMaintenance(
    google::cloud::sql::v1::SqlInstancesRescheduleMaintenanceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsResponse>
SqlInstancesServiceConnection::VerifyExternalSyncSettings(
    google::cloud::sql::v1::
        SqlInstancesVerifyExternalSyncSettingsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::sql::v1::Operation>
SqlInstancesServiceConnection::StartExternalSync(
    google::cloud::sql::v1::SqlInstancesStartExternalSyncRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1
}  // namespace cloud
}  // namespace google
