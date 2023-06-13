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
// source: google/cloud/alloydb/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ALLOYDB_V1_INTERNAL_ALLOY_DB_ADMIN_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ALLOYDB_V1_INTERNAL_ALLOY_DB_ADMIN_LOGGING_DECORATOR_H

#include "google/cloud/alloydb/v1/internal/alloy_db_admin_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace alloydb_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AlloyDBAdminLogging : public AlloyDBAdminStub {
 public:
  ~AlloyDBAdminLogging() override = default;
  AlloyDBAdminLogging(std::shared_ptr<AlloyDBAdminStub> child,
                      TracingOptions tracing_options,
                      std::set<std::string> components);

  StatusOr<google::cloud::alloydb::v1::ListClustersResponse> ListClusters(
      grpc::ClientContext& context,
      google::cloud::alloydb::v1::ListClustersRequest const& request) override;

  StatusOr<google::cloud::alloydb::v1::Cluster> GetCluster(
      grpc::ClientContext& context,
      google::cloud::alloydb::v1::GetClusterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::alloydb::v1::CreateClusterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::alloydb::v1::UpdateClusterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::alloydb::v1::DeleteClusterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRestoreCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::alloydb::v1::RestoreClusterRequest const& request)
      override;

  StatusOr<google::cloud::alloydb::v1::ListInstancesResponse> ListInstances(
      grpc::ClientContext& context,
      google::cloud::alloydb::v1::ListInstancesRequest const& request) override;

  StatusOr<google::cloud::alloydb::v1::Instance> GetInstance(
      grpc::ClientContext& context,
      google::cloud::alloydb::v1::GetInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::alloydb::v1::CreateInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchCreateInstances(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::alloydb::v1::BatchCreateInstancesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::alloydb::v1::UpdateInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::alloydb::v1::DeleteInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncFailoverInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::alloydb::v1::FailoverInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRestartInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::alloydb::v1::RestartInstanceRequest const& request)
      override;

  StatusOr<google::cloud::alloydb::v1::ListBackupsResponse> ListBackups(
      grpc::ClientContext& context,
      google::cloud::alloydb::v1::ListBackupsRequest const& request) override;

  StatusOr<google::cloud::alloydb::v1::Backup> GetBackup(
      grpc::ClientContext& context,
      google::cloud::alloydb::v1::GetBackupRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::alloydb::v1::CreateBackupRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::alloydb::v1::UpdateBackupRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::alloydb::v1::DeleteBackupRequest const& request) override;

  StatusOr<google::cloud::alloydb::v1::ListSupportedDatabaseFlagsResponse>
  ListSupportedDatabaseFlags(
      grpc::ClientContext& context,
      google::cloud::alloydb::v1::ListSupportedDatabaseFlagsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<AlloyDBAdminStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // AlloyDBAdminLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace alloydb_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ALLOYDB_V1_INTERNAL_ALLOY_DB_ADMIN_LOGGING_DECORATOR_H
