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
// source: google/cloud/bigquery/migration/v2/migration_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_MIGRATION_V2_MIGRATION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_MIGRATION_V2_MIGRATION_CONNECTION_H

#include "google/cloud/bigquery/migration/v2/internal/migration_retry_traits.h"
#include "google/cloud/bigquery/migration/v2/migration_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/migration/v2/migration_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_migration_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using MigrationServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        bigquery_migration_v2_internal::MigrationServiceRetryTraits>;

using MigrationServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        bigquery_migration_v2_internal::MigrationServiceRetryTraits>;

using MigrationServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        bigquery_migration_v2_internal::MigrationServiceRetryTraits>;

/**
 * The `MigrationServiceConnection` object for `MigrationServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `MigrationServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `MigrationServiceClient`.
 *
 * To create a concrete instance, see `MakeMigrationServiceConnection()`.
 *
 * For mocking, see
 * `bigquery_migration_v2_mocks::MockMigrationServiceConnection`.
 */
class MigrationServiceConnection {
 public:
  virtual ~MigrationServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
  CreateMigrationWorkflow(google::cloud::bigquery::migration::v2::
                              CreateMigrationWorkflowRequest const& request);

  virtual StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
  GetMigrationWorkflow(
      google::cloud::bigquery::migration::v2::GetMigrationWorkflowRequest const&
          request);

  virtual StreamRange<google::cloud::bigquery::migration::v2::MigrationWorkflow>
  ListMigrationWorkflows(
      google::cloud::bigquery::migration::v2::ListMigrationWorkflowsRequest
          request);

  virtual Status DeleteMigrationWorkflow(
      google::cloud::bigquery::migration::v2::
          DeleteMigrationWorkflowRequest const& request);

  virtual Status StartMigrationWorkflow(
      google::cloud::bigquery::migration::v2::
          StartMigrationWorkflowRequest const& request);

  virtual StatusOr<google::cloud::bigquery::migration::v2::MigrationSubtask>
  GetMigrationSubtask(
      google::cloud::bigquery::migration::v2::GetMigrationSubtaskRequest const&
          request);

  virtual StreamRange<google::cloud::bigquery::migration::v2::MigrationSubtask>
  ListMigrationSubtasks(
      google::cloud::bigquery::migration::v2::ListMigrationSubtasksRequest
          request);
};

/**
 * A factory function to construct an object of type
 * `MigrationServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of MigrationServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `MigrationServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::bigquery_migration_v2::MigrationServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `MigrationServiceConnection` created
 * by this function.
 */
std::shared_ptr<MigrationServiceConnection> MakeMigrationServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_migration_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_MIGRATION_V2_MIGRATION_CONNECTION_H
