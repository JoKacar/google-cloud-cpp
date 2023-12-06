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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_MOCKS_MOCK_SQL_INSTANCES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_MOCKS_MOCK_SQL_INSTANCES_CONNECTION_H

#include "google/cloud/sql/v1/sql_instances_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace sql_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `SqlInstancesServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `SqlInstancesServiceClient`. To do
 * so, construct an object of type `SqlInstancesServiceClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockSqlInstancesServiceConnection
    : public sql_v1::SqlInstancesServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, AddServerCa,
      (google::cloud::sql::v1::SqlInstancesAddServerCaRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::sql::v1::Operation>, Clone,
              (google::cloud::sql::v1::SqlInstancesCloneRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, Delete,
      (google::cloud::sql::v1::SqlInstancesDeleteRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, DemoteMaster,
      (google::cloud::sql::v1::SqlInstancesDemoteMasterRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, Demote,
      (google::cloud::sql::v1::SqlInstancesDemoteRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, Export,
      (google::cloud::sql::v1::SqlInstancesExportRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, Failover,
      (google::cloud::sql::v1::SqlInstancesFailoverRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, Reencrypt,
      (google::cloud::sql::v1::SqlInstancesReencryptRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::sql::v1::DatabaseInstance>, Get,
              (google::cloud::sql::v1::SqlInstancesGetRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, Import,
      (google::cloud::sql::v1::SqlInstancesImportRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, Insert,
      (google::cloud::sql::v1::SqlInstancesInsertRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::sql::v1::DatabaseInstance>), List,
              (google::cloud::sql::v1::SqlInstancesListRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::InstancesListServerCasResponse>,
      ListServerCas,
      (google::cloud::sql::v1::SqlInstancesListServerCasRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::sql::v1::Operation>, Patch,
              (google::cloud::sql::v1::SqlInstancesPatchRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::sql::v1::Operation>, PromoteReplica,
              (google::cloud::sql::v1::SqlInstancesPromoteReplicaRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, Switchover,
      (google::cloud::sql::v1::SqlInstancesSwitchoverRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::sql::v1::Operation>, ResetSslConfig,
              (google::cloud::sql::v1::SqlInstancesResetSslConfigRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, Restart,
      (google::cloud::sql::v1::SqlInstancesRestartRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, RestoreBackup,
      (google::cloud::sql::v1::SqlInstancesRestoreBackupRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::sql::v1::Operation>, RotateServerCa,
              (google::cloud::sql::v1::SqlInstancesRotateServerCaRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, StartReplica,
      (google::cloud::sql::v1::SqlInstancesStartReplicaRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, StopReplica,
      (google::cloud::sql::v1::SqlInstancesStopReplicaRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, TruncateLog,
      (google::cloud::sql::v1::SqlInstancesTruncateLogRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, Update,
      (google::cloud::sql::v1::SqlInstancesUpdateRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::SslCert>, CreateEphemeral,
      (google::cloud::sql::v1::SqlInstancesCreateEphemeralCertRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, RescheduleMaintenance,
      (google::cloud::sql::v1::SqlInstancesRescheduleMaintenanceRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::
                   SqlInstancesVerifyExternalSyncSettingsResponse>,
      VerifyExternalSyncSettings,
      (google::cloud::sql::v1::
           SqlInstancesVerifyExternalSyncSettingsRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, StartExternalSync,
      (google::cloud::sql::v1::SqlInstancesStartExternalSyncRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, PerformDiskShrink,
      (google::cloud::sql::v1::SqlInstancesPerformDiskShrinkRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigResponse>,
      GetDiskShrinkConfig,
      (google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::sql::v1::Operation>, ResetReplicaSize,
      (google::cloud::sql::v1::SqlInstancesResetReplicaSizeRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::sql::v1::SqlInstancesGetLatestRecoveryTimeResponse>,
      GetLatestRecoveryTime,
      (google::cloud::sql::v1::SqlInstancesGetLatestRecoveryTimeRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_MOCKS_MOCK_SQL_INSTANCES_CONNECTION_H
