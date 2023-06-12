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
// source: google/cloud/clouddms/v1/clouddms.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_DATA_MIGRATION_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_DATA_MIGRATION_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/clouddms/v1/clouddms.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datamigration_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataMigrationServiceConnectionIdempotencyPolicy {
 public:
  virtual ~DataMigrationServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<DataMigrationServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency ListMigrationJobs(
      google::cloud::clouddms::v1::ListMigrationJobsRequest request);

  virtual google::cloud::Idempotency GetMigrationJob(
      google::cloud::clouddms::v1::GetMigrationJobRequest const& request);

  virtual google::cloud::Idempotency CreateMigrationJob(
      google::cloud::clouddms::v1::CreateMigrationJobRequest const& request);

  virtual google::cloud::Idempotency UpdateMigrationJob(
      google::cloud::clouddms::v1::UpdateMigrationJobRequest const& request);

  virtual google::cloud::Idempotency DeleteMigrationJob(
      google::cloud::clouddms::v1::DeleteMigrationJobRequest const& request);

  virtual google::cloud::Idempotency StartMigrationJob(
      google::cloud::clouddms::v1::StartMigrationJobRequest const& request);

  virtual google::cloud::Idempotency StopMigrationJob(
      google::cloud::clouddms::v1::StopMigrationJobRequest const& request);

  virtual google::cloud::Idempotency ResumeMigrationJob(
      google::cloud::clouddms::v1::ResumeMigrationJobRequest const& request);

  virtual google::cloud::Idempotency PromoteMigrationJob(
      google::cloud::clouddms::v1::PromoteMigrationJobRequest const& request);

  virtual google::cloud::Idempotency VerifyMigrationJob(
      google::cloud::clouddms::v1::VerifyMigrationJobRequest const& request);

  virtual google::cloud::Idempotency RestartMigrationJob(
      google::cloud::clouddms::v1::RestartMigrationJobRequest const& request);

  virtual google::cloud::Idempotency GenerateSshScript(
      google::cloud::clouddms::v1::GenerateSshScriptRequest const& request);

  virtual google::cloud::Idempotency ListConnectionProfiles(
      google::cloud::clouddms::v1::ListConnectionProfilesRequest request);

  virtual google::cloud::Idempotency GetConnectionProfile(
      google::cloud::clouddms::v1::GetConnectionProfileRequest const& request);

  virtual google::cloud::Idempotency CreateConnectionProfile(
      google::cloud::clouddms::v1::CreateConnectionProfileRequest const&
          request);

  virtual google::cloud::Idempotency UpdateConnectionProfile(
      google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&
          request);

  virtual google::cloud::Idempotency DeleteConnectionProfile(
      google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&
          request);

  virtual google::cloud::Idempotency CreatePrivateConnection(
      google::cloud::clouddms::v1::CreatePrivateConnectionRequest const&
          request);

  virtual google::cloud::Idempotency GetPrivateConnection(
      google::cloud::clouddms::v1::GetPrivateConnectionRequest const& request);

  virtual google::cloud::Idempotency ListPrivateConnections(
      google::cloud::clouddms::v1::ListPrivateConnectionsRequest request);

  virtual google::cloud::Idempotency DeletePrivateConnection(
      google::cloud::clouddms::v1::DeletePrivateConnectionRequest const&
          request);

  virtual google::cloud::Idempotency GetConversionWorkspace(
      google::cloud::clouddms::v1::GetConversionWorkspaceRequest const&
          request);

  virtual google::cloud::Idempotency ListConversionWorkspaces(
      google::cloud::clouddms::v1::ListConversionWorkspacesRequest request);

  virtual google::cloud::Idempotency CreateConversionWorkspace(
      google::cloud::clouddms::v1::CreateConversionWorkspaceRequest const&
          request);

  virtual google::cloud::Idempotency UpdateConversionWorkspace(
      google::cloud::clouddms::v1::UpdateConversionWorkspaceRequest const&
          request);

  virtual google::cloud::Idempotency DeleteConversionWorkspace(
      google::cloud::clouddms::v1::DeleteConversionWorkspaceRequest const&
          request);

  virtual google::cloud::Idempotency SeedConversionWorkspace(
      google::cloud::clouddms::v1::SeedConversionWorkspaceRequest const&
          request);

  virtual google::cloud::Idempotency ImportMappingRules(
      google::cloud::clouddms::v1::ImportMappingRulesRequest const& request);

  virtual google::cloud::Idempotency ConvertConversionWorkspace(
      google::cloud::clouddms::v1::ConvertConversionWorkspaceRequest const&
          request);

  virtual google::cloud::Idempotency CommitConversionWorkspace(
      google::cloud::clouddms::v1::CommitConversionWorkspaceRequest const&
          request);

  virtual google::cloud::Idempotency RollbackConversionWorkspace(
      google::cloud::clouddms::v1::RollbackConversionWorkspaceRequest const&
          request);

  virtual google::cloud::Idempotency ApplyConversionWorkspace(
      google::cloud::clouddms::v1::ApplyConversionWorkspaceRequest const&
          request);

  virtual google::cloud::Idempotency DescribeDatabaseEntities(
      google::cloud::clouddms::v1::DescribeDatabaseEntitiesRequest request);

  virtual google::cloud::Idempotency SearchBackgroundJobs(
      google::cloud::clouddms::v1::SearchBackgroundJobsRequest const& request);

  virtual google::cloud::Idempotency DescribeConversionWorkspaceRevisions(
      google::cloud::clouddms::v1::
          DescribeConversionWorkspaceRevisionsRequest const& request);

  virtual google::cloud::Idempotency FetchStaticIps(
      google::cloud::clouddms::v1::FetchStaticIpsRequest request);
};

std::unique_ptr<DataMigrationServiceConnectionIdempotencyPolicy>
MakeDefaultDataMigrationServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datamigration_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_DATA_MIGRATION_CONNECTION_IDEMPOTENCY_POLICY_H
