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
// source: google/cloud/vmmigration/v1/vmmigration.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_VM_MIGRATION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_VM_MIGRATION_CONNECTION_H

#include "google/cloud/vmmigration/v1/internal/vm_migration_retry_traits.h"
#include "google/cloud/vmmigration/v1/vm_migration_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/vmmigration/v1/vmmigration.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace vmmigration_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using VmMigrationRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    vmmigration_v1_internal::VmMigrationRetryTraits>;

using VmMigrationLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        vmmigration_v1_internal::VmMigrationRetryTraits>;

using VmMigrationLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        vmmigration_v1_internal::VmMigrationRetryTraits>;

/**
 * The `VmMigrationConnection` object for `VmMigrationClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `VmMigrationClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `VmMigrationClient`.
 *
 * To create a concrete instance, see `MakeVmMigrationConnection()`.
 *
 * For mocking, see `vmmigration_v1_mocks::MockVmMigrationConnection`.
 */
class VmMigrationConnection {
 public:
  virtual ~VmMigrationConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::vmmigration::v1::Source> ListSources(
      google::cloud::vmmigration::v1::ListSourcesRequest request);

  virtual StatusOr<google::cloud::vmmigration::v1::Source> GetSource(
      google::cloud::vmmigration::v1::GetSourceRequest const& request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::Source>> CreateSource(
      google::cloud::vmmigration::v1::CreateSourceRequest const& request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::Source>> UpdateSource(
      google::cloud::vmmigration::v1::UpdateSourceRequest const& request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
  DeleteSource(
      google::cloud::vmmigration::v1::DeleteSourceRequest const& request);

  virtual StatusOr<google::cloud::vmmigration::v1::FetchInventoryResponse>
  FetchInventory(
      google::cloud::vmmigration::v1::FetchInventoryRequest const& request);

  virtual StreamRange<google::cloud::vmmigration::v1::UtilizationReport>
  ListUtilizationReports(
      google::cloud::vmmigration::v1::ListUtilizationReportsRequest request);

  virtual StatusOr<google::cloud::vmmigration::v1::UtilizationReport>
  GetUtilizationReport(
      google::cloud::vmmigration::v1::GetUtilizationReportRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::UtilizationReport>>
  CreateUtilizationReport(
      google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
  DeleteUtilizationReport(
      google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&
          request);

  virtual StreamRange<google::cloud::vmmigration::v1::DatacenterConnector>
  ListDatacenterConnectors(
      google::cloud::vmmigration::v1::ListDatacenterConnectorsRequest request);

  virtual StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>
  GetDatacenterConnector(
      google::cloud::vmmigration::v1::GetDatacenterConnectorRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>>
  CreateDatacenterConnector(
      google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
  DeleteDatacenterConnector(
      google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::vmmigration::v1::UpgradeApplianceResponse>>
  UpgradeAppliance(
      google::cloud::vmmigration::v1::UpgradeApplianceRequest const& request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>
  CreateMigratingVm(
      google::cloud::vmmigration::v1::CreateMigratingVmRequest const& request);

  virtual StreamRange<google::cloud::vmmigration::v1::MigratingVm>
  ListMigratingVms(
      google::cloud::vmmigration::v1::ListMigratingVmsRequest request);

  virtual StatusOr<google::cloud::vmmigration::v1::MigratingVm> GetMigratingVm(
      google::cloud::vmmigration::v1::GetMigratingVmRequest const& request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>
  UpdateMigratingVm(
      google::cloud::vmmigration::v1::UpdateMigratingVmRequest const& request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
  DeleteMigratingVm(
      google::cloud::vmmigration::v1::DeleteMigratingVmRequest const& request);

  virtual future<
      StatusOr<google::cloud::vmmigration::v1::StartMigrationResponse>>
  StartMigration(
      google::cloud::vmmigration::v1::StartMigrationRequest const& request);

  virtual future<
      StatusOr<google::cloud::vmmigration::v1::ResumeMigrationResponse>>
  ResumeMigration(
      google::cloud::vmmigration::v1::ResumeMigrationRequest const& request);

  virtual future<
      StatusOr<google::cloud::vmmigration::v1::PauseMigrationResponse>>
  PauseMigration(
      google::cloud::vmmigration::v1::PauseMigrationRequest const& request);

  virtual future<
      StatusOr<google::cloud::vmmigration::v1::FinalizeMigrationResponse>>
  FinalizeMigration(
      google::cloud::vmmigration::v1::FinalizeMigrationRequest const& request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::CloneJob>>
  CreateCloneJob(
      google::cloud::vmmigration::v1::CreateCloneJobRequest const& request);

  virtual future<
      StatusOr<google::cloud::vmmigration::v1::CancelCloneJobResponse>>
  CancelCloneJob(
      google::cloud::vmmigration::v1::CancelCloneJobRequest const& request);

  virtual StreamRange<google::cloud::vmmigration::v1::CloneJob> ListCloneJobs(
      google::cloud::vmmigration::v1::ListCloneJobsRequest request);

  virtual StatusOr<google::cloud::vmmigration::v1::CloneJob> GetCloneJob(
      google::cloud::vmmigration::v1::GetCloneJobRequest const& request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::CutoverJob>>
  CreateCutoverJob(
      google::cloud::vmmigration::v1::CreateCutoverJobRequest const& request);

  virtual future<
      StatusOr<google::cloud::vmmigration::v1::CancelCutoverJobResponse>>
  CancelCutoverJob(
      google::cloud::vmmigration::v1::CancelCutoverJobRequest const& request);

  virtual StreamRange<google::cloud::vmmigration::v1::CutoverJob>
  ListCutoverJobs(
      google::cloud::vmmigration::v1::ListCutoverJobsRequest request);

  virtual StatusOr<google::cloud::vmmigration::v1::CutoverJob> GetCutoverJob(
      google::cloud::vmmigration::v1::GetCutoverJobRequest const& request);

  virtual StreamRange<google::cloud::vmmigration::v1::Group> ListGroups(
      google::cloud::vmmigration::v1::ListGroupsRequest request);

  virtual StatusOr<google::cloud::vmmigration::v1::Group> GetGroup(
      google::cloud::vmmigration::v1::GetGroupRequest const& request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::Group>> CreateGroup(
      google::cloud::vmmigration::v1::CreateGroupRequest const& request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::Group>> UpdateGroup(
      google::cloud::vmmigration::v1::UpdateGroupRequest const& request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
  DeleteGroup(
      google::cloud::vmmigration::v1::DeleteGroupRequest const& request);

  virtual future<
      StatusOr<google::cloud::vmmigration::v1::AddGroupMigrationResponse>>
  AddGroupMigration(
      google::cloud::vmmigration::v1::AddGroupMigrationRequest const& request);

  virtual future<
      StatusOr<google::cloud::vmmigration::v1::RemoveGroupMigrationResponse>>
  RemoveGroupMigration(
      google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const&
          request);

  virtual StreamRange<google::cloud::vmmigration::v1::TargetProject>
  ListTargetProjects(
      google::cloud::vmmigration::v1::ListTargetProjectsRequest request);

  virtual StatusOr<google::cloud::vmmigration::v1::TargetProject>
  GetTargetProject(
      google::cloud::vmmigration::v1::GetTargetProjectRequest const& request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>
  CreateTargetProject(
      google::cloud::vmmigration::v1::CreateTargetProjectRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>
  UpdateTargetProject(
      google::cloud::vmmigration::v1::UpdateTargetProjectRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>
  DeleteTargetProject(
      google::cloud::vmmigration::v1::DeleteTargetProjectRequest const&
          request);

  virtual StreamRange<google::cloud::vmmigration::v1::ReplicationCycle>
  ListReplicationCycles(
      google::cloud::vmmigration::v1::ListReplicationCyclesRequest request);

  virtual StatusOr<google::cloud::vmmigration::v1::ReplicationCycle>
  GetReplicationCycle(
      google::cloud::vmmigration::v1::GetReplicationCycleRequest const&
          request);
};

/**
 * A factory function to construct an object of type `VmMigrationConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of VmMigrationClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `VmMigrationConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::vmmigration_v1::VmMigrationPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `VmMigrationConnection` created by
 * this function.
 */
std::shared_ptr<VmMigrationConnection> MakeVmMigrationConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmmigration_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_VM_MIGRATION_CONNECTION_H
