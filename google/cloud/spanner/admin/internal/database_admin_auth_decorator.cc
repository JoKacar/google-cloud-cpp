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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#include "google/cloud/spanner/admin/internal/database_admin_auth_decorator.h"
#include <google/spanner/admin/database/v1/spanner_database_admin.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatabaseAdminAuth::DatabaseAdminAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<DatabaseAdminStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::spanner::admin::database::v1::ListDatabasesResponse>
DatabaseAdminAuth::ListDatabases(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::ListDatabasesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDatabases(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminAuth::AsyncCreateDatabase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::CreateDatabaseRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateDatabase(cq, *std::move(context), request);
      });
}

StatusOr<google::spanner::admin::database::v1::Database>
DatabaseAdminAuth::GetDatabase(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::GetDatabaseRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDatabase(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminAuth::AsyncUpdateDatabaseDdl(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateDatabaseDdl(cq, *std::move(context), request);
      });
}

Status DatabaseAdminAuth::DropDatabase(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::DropDatabaseRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DropDatabase(context, request);
}

StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
DatabaseAdminAuth::GetDatabaseDdl(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDatabaseDdl(context, request);
}

StatusOr<google::iam::v1::Policy> DatabaseAdminAuth::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> DatabaseAdminAuth::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DatabaseAdminAuth::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminAuth::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::CreateBackupRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateBackup(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminAuth::AsyncCopyBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::CopyBackupRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCopyBackup(cq, *std::move(context), request);
      });
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminAuth::GetBackup(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::GetBackupRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetBackup(context, request);
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminAuth::UpdateBackup(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::UpdateBackupRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateBackup(context, request);
}

Status DatabaseAdminAuth::DeleteBackup(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::DeleteBackupRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteBackup(context, request);
}

StatusOr<google::spanner::admin::database::v1::ListBackupsResponse>
DatabaseAdminAuth::ListBackups(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::ListBackupsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListBackups(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminAuth::AsyncRestoreDatabase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::spanner::admin::database::v1::RestoreDatabaseRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRestoreDatabase(cq, *std::move(context), request);
      });
}

StatusOr<google::spanner::admin::database::v1::ListDatabaseOperationsResponse>
DatabaseAdminAuth::ListDatabaseOperations(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::ListDatabaseOperationsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDatabaseOperations(context, request);
}

StatusOr<google::spanner::admin::database::v1::ListBackupOperationsResponse>
DatabaseAdminAuth::ListBackupOperations(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::ListBackupOperationsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListBackupOperations(context, request);
}

StatusOr<google::spanner::admin::database::v1::ListDatabaseRolesResponse>
DatabaseAdminAuth::ListDatabaseRoles(
    grpc::ClientContext& context,
    google::spanner::admin::database::v1::ListDatabaseRolesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDatabaseRoles(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> DatabaseAdminAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
