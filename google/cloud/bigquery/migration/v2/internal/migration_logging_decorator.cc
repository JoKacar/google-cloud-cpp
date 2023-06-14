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

#include "google/cloud/bigquery/migration/v2/internal/migration_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/bigquery/migration/v2/migration_service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace bigquery_migration_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MigrationServiceLogging::MigrationServiceLogging(
    std::shared_ptr<MigrationServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
MigrationServiceLogging::CreateMigrationWorkflow(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::
        CreateMigrationWorkflowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::migration::v2::
                 CreateMigrationWorkflowRequest const& request) {
        return child_->CreateMigrationWorkflow(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
MigrationServiceLogging::GetMigrationWorkflow(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::GetMigrationWorkflowRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::migration::v2::
                 GetMigrationWorkflowRequest const& request) {
        return child_->GetMigrationWorkflow(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::migration::v2::ListMigrationWorkflowsResponse>
MigrationServiceLogging::ListMigrationWorkflows(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::ListMigrationWorkflowsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::migration::v2::
                 ListMigrationWorkflowsRequest const& request) {
        return child_->ListMigrationWorkflows(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status MigrationServiceLogging::DeleteMigrationWorkflow(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::
        DeleteMigrationWorkflowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::migration::v2::
                 DeleteMigrationWorkflowRequest const& request) {
        return child_->DeleteMigrationWorkflow(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status MigrationServiceLogging::StartMigrationWorkflow(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::StartMigrationWorkflowRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::migration::v2::
                 StartMigrationWorkflowRequest const& request) {
        return child_->StartMigrationWorkflow(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::migration::v2::MigrationSubtask>
MigrationServiceLogging::GetMigrationSubtask(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::GetMigrationSubtaskRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::migration::v2::
                 GetMigrationSubtaskRequest const& request) {
        return child_->GetMigrationSubtask(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::migration::v2::ListMigrationSubtasksResponse>
MigrationServiceLogging::ListMigrationSubtasks(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::ListMigrationSubtasksRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::migration::v2::
                 ListMigrationSubtasksRequest const& request) {
        return child_->ListMigrationSubtasks(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_migration_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
