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
// source: generator/integration_tests/test.proto
#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_GOLDEN_THING_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_GCPCXX_PB_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_GOLDEN_THING_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_GCPCXX_PB_H

#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <generator/integration_tests/test.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace golden {
inline namespace GOOGLE_CLOUD_CPP_NS {

class GoldenThingAdminConnectionIdempotencyPolicy {
 public:
  virtual ~GoldenThingAdminConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<GoldenThingAdminConnectionIdempotencyPolicy> clone() const = 0;

  virtual google::cloud::internal::Idempotency
  ListDatabases(::google::test::admin::database::v1::ListDatabasesRequest request) = 0;

  virtual google::cloud::internal::Idempotency
  CreateDatabase(::google::test::admin::database::v1::CreateDatabaseRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency
  GetDatabase(::google::test::admin::database::v1::GetDatabaseRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency
  UpdateDatabaseDdl(::google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency
  DropDatabase(::google::test::admin::database::v1::DropDatabaseRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency
  GetDatabaseDdl(::google::test::admin::database::v1::GetDatabaseDdlRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency
  SetIamPolicy(::google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency
  GetIamPolicy(::google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency
  TestIamPermissions(::google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency
  CreateBackup(::google::test::admin::database::v1::CreateBackupRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency
  GetBackup(::google::test::admin::database::v1::GetBackupRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency
  UpdateBackup(::google::test::admin::database::v1::UpdateBackupRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency
  DeleteBackup(::google::test::admin::database::v1::DeleteBackupRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency
  ListBackups(::google::test::admin::database::v1::ListBackupsRequest request) = 0;

  virtual google::cloud::internal::Idempotency
  RestoreDatabase(::google::test::admin::database::v1::RestoreDatabaseRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency
  ListDatabaseOperations(::google::test::admin::database::v1::ListDatabaseOperationsRequest request) = 0;

  virtual google::cloud::internal::Idempotency
  ListBackupOperations(::google::test::admin::database::v1::ListBackupOperationsRequest request) = 0;

};

std::unique_ptr<GoldenThingAdminConnectionIdempotencyPolicy>
    MakeDefaultGoldenThingAdminConnectionIdempotencyPolicy();

}  // namespace GOOGLE_CLOUD_CPP_NS
}  // namespace golden
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_GOLDEN_THING_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_GCPCXX_PB_H
