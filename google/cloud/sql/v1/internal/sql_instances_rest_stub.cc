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

#include "google/cloud/sql/v1/internal/sql_instances_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/sql/v1/cloud_sql_instances.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultSqlInstancesServiceRestStub::DefaultSqlInstancesServiceRestStub(
    Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultSqlInstancesServiceRestStub::DefaultSqlInstancesServiceRestStub(
    std::shared_ptr<rest_internal::RestClient> service, Options options)
    : service_(std::move(service)), options_(std::move(options)) {}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::AddServerCa(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesAddServerCaRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request,
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/", "addServerCa"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::Clone(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesCloneRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(),
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/", "clone"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::Delete(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesDeleteRequest const& request) {
  return rest_internal::Delete<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request,
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance()));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::DemoteMaster(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesDemoteMasterRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(),
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/", "demoteMaster"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::Export(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesExportRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(),
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/", "export"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::Failover(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesFailoverRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(),
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/", "failover"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::Reencrypt(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesReencryptRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(),
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/", "reencrypt"));
}

StatusOr<google::cloud::sql::v1::DatabaseInstance>
DefaultSqlInstancesServiceRestStub::Get(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesGetRequest const& request) {
  return rest_internal::Get<google::cloud::sql::v1::DatabaseInstance>(
      *service_, rest_context, request,
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance()));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::Import(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesImportRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(),
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/", "import"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::Insert(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesInsertRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(),
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances"));
}

StatusOr<google::cloud::sql::v1::InstancesListResponse>
DefaultSqlInstancesServiceRestStub::List(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesListRequest const& request) {
  return rest_internal::Get<google::cloud::sql::v1::InstancesListResponse>(
      *service_, rest_context, request,
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("max_results", std::to_string(request.max_results())),
           std::make_pair("page_token", request.page_token())}));
}

StatusOr<google::cloud::sql::v1::InstancesListServerCasResponse>
DefaultSqlInstancesServiceRestStub::ListServerCas(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesListServerCasRequest const& request) {
  return rest_internal::Get<
      google::cloud::sql::v1::InstancesListServerCasResponse>(
      *service_, rest_context, request,
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/", "listServerCas"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::Patch(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesPatchRequest const& request) {
  return rest_internal::Patch<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(),
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance()));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::PromoteReplica(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesPromoteReplicaRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request,
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/",
                   "promoteReplica"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::ResetSslConfig(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesResetSslConfigRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request,
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/",
                   "resetSslConfig"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::Restart(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesRestartRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request,
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/", "restart"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::RestoreBackup(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesRestoreBackupRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(),
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/", "restoreBackup"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::RotateServerCa(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesRotateServerCaRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(),
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/",
                   "rotateServerCa"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::StartReplica(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesStartReplicaRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request,
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/", "startReplica"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::StopReplica(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesStopReplicaRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request,
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/", "stopReplica"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::TruncateLog(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesTruncateLogRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(),
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/", "truncateLog"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::Update(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesUpdateRequest const& request) {
  return rest_internal::Put<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(),
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance()));
}

StatusOr<google::cloud::sql::v1::SslCert>
DefaultSqlInstancesServiceRestStub::CreateEphemeral(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesCreateEphemeralCertRequest const&
        request) {
  return rest_internal::Post<google::cloud::sql::v1::SslCert>(
      *service_, rest_context, request.body(),
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/",
                   "createEphemeral"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::RescheduleMaintenance(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesRescheduleMaintenanceRequest const&
        request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(),
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/",
                   "rescheduleMaintenance"));
}

StatusOr<google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsResponse>
DefaultSqlInstancesServiceRestStub::VerifyExternalSyncSettings(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsRequest const&
        request) {
  return rest_internal::Post<
      google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsResponse>(
      *service_, rest_context, request,
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/",
                   "verifyExternalSyncSettings"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("verify_connection_only",
                          request.verify_connection_only() ? "1" : "0"),
           std::make_pair("sync_mode", std::to_string(request.sync_mode())),
           std::make_pair("verify_replication_only",
                          request.verify_replication_only() ? "1" : "0")}));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::StartExternalSync(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesStartExternalSyncRequest const&
        request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request,
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/",
                   "startExternalSync"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("sync_mode", std::to_string(request.sync_mode())),
           std::make_pair("skip_verification",
                          request.skip_verification() ? "1" : "0"),
           std::make_pair("sync_parallel_level",
                          std::to_string(request.sync_parallel_level()))}));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::PerformDiskShrink(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesPerformDiskShrinkRequest const&
        request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(),
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/",
                   "performDiskShrink"));
}

StatusOr<google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigResponse>
DefaultSqlInstancesServiceRestStub::GetDiskShrinkConfig(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigRequest const&
        request) {
  return rest_internal::Get<
      google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigResponse>(
      *service_, rest_context, request,
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/",
                   "getDiskShrinkConfig"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlInstancesServiceRestStub::ResetReplicaSize(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesResetReplicaSizeRequest const&
        request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request,
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/",
                   "resetReplicaSize"));
}

StatusOr<google::cloud::sql::v1::SqlInstancesGetLatestRecoveryTimeResponse>
DefaultSqlInstancesServiceRestStub::GetLatestRecoveryTime(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlInstancesGetLatestRecoveryTimeRequest const&
        request) {
  return rest_internal::Get<
      google::cloud::sql::v1::SqlInstancesGetLatestRecoveryTimeResponse>(
      *service_, rest_context, request,
      absl::StrCat("/", "v1", "/", "projects", "/", request.project(), "/",
                   "instances", "/", request.instance(), "/",
                   "getLatestRecoveryTime"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google
