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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/v1/internal/golden_thing_admin_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <generator/integration_tests/test.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GoldenThingAdminLogging::GoldenThingAdminLogging(
    std::shared_ptr<GoldenThingAdminStub> child,
    TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::test::admin::database::v1::ListDatabasesResponse>
GoldenThingAdminLogging::ListDatabases(
    grpc::ClientContext& context,
    google::test::admin::database::v1::ListDatabasesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::test::admin::database::v1::ListDatabasesRequest const& request) {
        return child_->ListDatabases(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminLogging::AsyncCreateDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::test::admin::database::v1::CreateDatabaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::test::admin::database::v1::CreateDatabaseRequest const& request) {
        return child_->AsyncCreateDatabase(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::test::admin::database::v1::Database>
GoldenThingAdminLogging::GetDatabase(
    grpc::ClientContext& context,
    google::test::admin::database::v1::GetDatabaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::test::admin::database::v1::GetDatabaseRequest const& request) {
        return child_->GetDatabase(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminLogging::AsyncUpdateDatabaseDdl(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) {
        return child_->AsyncUpdateDatabaseDdl(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

Status
GoldenThingAdminLogging::DropDatabase(
    grpc::ClientContext& context,
    google::test::admin::database::v1::DropDatabaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::test::admin::database::v1::DropDatabaseRequest const& request) {
        return child_->DropDatabase(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::test::admin::database::v1::GetDatabaseDdlResponse>
GoldenThingAdminLogging::GetDatabaseDdl(
    grpc::ClientContext& context,
    google::test::admin::database::v1::GetDatabaseDdlRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::test::admin::database::v1::GetDatabaseDdlRequest const& request) {
        return child_->GetDatabaseDdl(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy>
GoldenThingAdminLogging::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy>
GoldenThingAdminLogging::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
GoldenThingAdminLogging::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminLogging::AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::test::admin::database::v1::CreateBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::test::admin::database::v1::CreateBackupRequest const& request) {
        return child_->AsyncCreateBackup(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::test::admin::database::v1::Backup>
GoldenThingAdminLogging::GetBackup(
    grpc::ClientContext& context,
    google::test::admin::database::v1::GetBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::test::admin::database::v1::GetBackupRequest const& request) {
        return child_->GetBackup(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::test::admin::database::v1::Backup>
GoldenThingAdminLogging::UpdateBackup(
    grpc::ClientContext& context,
    google::test::admin::database::v1::UpdateBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::test::admin::database::v1::UpdateBackupRequest const& request) {
        return child_->UpdateBackup(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status
GoldenThingAdminLogging::DeleteBackup(
    grpc::ClientContext& context,
    google::test::admin::database::v1::DeleteBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::test::admin::database::v1::DeleteBackupRequest const& request) {
        return child_->DeleteBackup(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::test::admin::database::v1::ListBackupsResponse>
GoldenThingAdminLogging::ListBackups(
    grpc::ClientContext& context,
    google::test::admin::database::v1::ListBackupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::test::admin::database::v1::ListBackupsRequest const& request) {
        return child_->ListBackups(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminLogging::AsyncRestoreDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
        return child_->AsyncRestoreDatabase(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::test::admin::database::v1::ListDatabaseOperationsResponse>
GoldenThingAdminLogging::ListDatabaseOperations(
    grpc::ClientContext& context,
    google::test::admin::database::v1::ListDatabaseOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::test::admin::database::v1::ListDatabaseOperationsRequest const& request) {
        return child_->ListDatabaseOperations(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::test::admin::database::v1::ListBackupOperationsResponse>
GoldenThingAdminLogging::ListBackupOperations(
    grpc::ClientContext& context,
    google::test::admin::database::v1::ListBackupOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::test::admin::database::v1::ListBackupOperationsRequest const& request) {
        return child_->ListBackupOperations(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminLogging::AsyncLongRunningWithoutRouting(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
        return child_->AsyncLongRunningWithoutRouting(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminLogging::AsyncGetDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::test::admin::database::v1::GetDatabaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::test::admin::database::v1::GetDatabaseRequest const& request) {
        return child_->AsyncGetDatabase(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status>
GoldenThingAdminLogging::AsyncDropDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::test::admin::database::v1::DropDatabaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::test::admin::database::v1::DropDatabaseRequest const& request) {
        return child_->AsyncDropDatabase(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GoldenThingAdminLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> GoldenThingAdminLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
