// Copyright 2020 Google LLC
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
#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_DATABASE_ADMIN_CONNECTION_GCPCXX_PB_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_DATABASE_ADMIN_CONNECTION_GCPCXX_PB_H

#include "generator/integration_tests/golden/database_admin_connection_idempotency_policy.gcpcxx.pb.h"
#include "generator/integration_tests/golden/internal/database_admin_stub.gcpcxx.pb.h"
#include "generator/integration_tests/golden/retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/connection_options.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace golden {
inline namespace GOOGLE_CLOUD_CPP_NS {

struct DatabaseAdminConnectionOptionsTraits {
  static std::string default_endpoint();
  static std::string user_agent_prefix();
  static int default_num_channels();
};

using DatabaseAdminConnectionOptions =
  google::cloud::ConnectionOptions<DatabaseAdminConnectionOptionsTraits>;

using DatabaseAdminRetryPolicy = google::cloud::internal::TraitBasedRetryPolicy<
    golden_internal::DatabaseAdminRetryTraits>;

using DatabaseAdminLimitedTimeRetryPolicy = google::cloud::internal::LimitedTimeRetryPolicy<
    golden_internal::DatabaseAdminRetryTraits>;

using DatabaseAdminLimitedErrorCountRetryPolicy =
    google::cloud::internal::LimitedErrorCountRetryPolicy<
        golden_internal::DatabaseAdminRetryTraits>;

using ListDatabasesRange = google::cloud::internal::PaginationRange<
    ::google::test::admin::database::v1::Database>;

using ListBackupsRange = google::cloud::internal::PaginationRange<
    ::google::test::admin::database::v1::Backup>;

using ListDatabaseOperationsRange = google::cloud::internal::PaginationRange<
    ::google::longrunning::Operation>;

using ListBackupOperationsRange = google::cloud::internal::PaginationRange<
    ::google::longrunning::Operation>;

class DatabaseAdminConnection {
 public:
  virtual ~DatabaseAdminConnection() = 0;

  virtual ListDatabasesRange
  ListDatabases(::google::test::admin::database::v1::ListDatabasesRequest request);

  virtual future<StatusOr<::google::test::admin::database::v1::Database>>
  CreateDatabase(::google::test::admin::database::v1::CreateDatabaseRequest const& request);

  virtual StatusOr<::google::test::admin::database::v1::Database>
  GetDatabase(::google::test::admin::database::v1::GetDatabaseRequest const& request);

  virtual future<StatusOr<::google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>
  UpdateDatabaseDdl(::google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request);

  virtual Status
  DropDatabase(::google::test::admin::database::v1::DropDatabaseRequest const& request);

  virtual StatusOr<::google::test::admin::database::v1::GetDatabaseDdlResponse>
  GetDatabaseDdl(::google::test::admin::database::v1::GetDatabaseDdlRequest const& request);

  virtual StatusOr<::google::iam::v1::Policy>
  SetIamPolicy(::google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<::google::iam::v1::Policy>
  GetIamPolicy(::google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<::google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(::google::iam::v1::TestIamPermissionsRequest const& request);

  virtual future<StatusOr<::google::test::admin::database::v1::Backup>>
  CreateBackup(::google::test::admin::database::v1::CreateBackupRequest const& request);

  virtual StatusOr<::google::test::admin::database::v1::Backup>
  GetBackup(::google::test::admin::database::v1::GetBackupRequest const& request);

  virtual StatusOr<::google::test::admin::database::v1::Backup>
  UpdateBackup(::google::test::admin::database::v1::UpdateBackupRequest const& request);

  virtual Status
  DeleteBackup(::google::test::admin::database::v1::DeleteBackupRequest const& request);

  virtual ListBackupsRange
  ListBackups(::google::test::admin::database::v1::ListBackupsRequest request);

  virtual future<StatusOr<::google::test::admin::database::v1::Database>>
  RestoreDatabase(::google::test::admin::database::v1::RestoreDatabaseRequest const& request);

  virtual ListDatabaseOperationsRange
  ListDatabaseOperations(::google::test::admin::database::v1::ListDatabaseOperationsRequest request);

  virtual ListBackupOperationsRange
  ListBackupOperations(::google::test::admin::database::v1::ListBackupOperationsRequest request);

};

std::shared_ptr<DatabaseAdminConnection> MakeDatabaseAdminConnection(
    DatabaseAdminConnectionOptions const& options = DatabaseAdminConnectionOptions());

std::shared_ptr<DatabaseAdminConnection> MakeDatabaseAdminConnection(
    DatabaseAdminConnectionOptions const& options,
    std::unique_ptr<DatabaseAdminRetryPolicy> retry_policy,
    std::unique_ptr<BackoffPolicy> backoff_policy,
    std::unique_ptr<PollingPolicy> polling_policy,
    std::unique_ptr<DatabaseAdminConnectionIdempotencyPolicy> idempotency_policy);

std::shared_ptr<DatabaseAdminConnection> MakeDatabaseAdminConnection(
    std::shared_ptr<golden_internal::DatabaseAdminStub> stub,
    std::unique_ptr<DatabaseAdminRetryPolicy> retry_policy,
    std::unique_ptr<BackoffPolicy> backoff_policy,
    std::unique_ptr<PollingPolicy> polling_policy,
    std::unique_ptr<DatabaseAdminConnectionIdempotencyPolicy> idempotency_policy);

}  // namespace GOOGLE_CLOUD_CPP_NS
}  // namespace golden
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_DATABASE_ADMIN_CONNECTION_GCPCXX_PB_H
