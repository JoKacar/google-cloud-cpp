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

#include "google/cloud/bigquery/migration/v2/internal/migration_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace bigquery_migration_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

MigrationServiceTracingStub::MigrationServiceTracingStub(
    std::shared_ptr<MigrationServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
MigrationServiceTracingStub::CreateMigrationWorkflow(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::
        CreateMigrationWorkflowRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.migration.v2.MigrationService",
      "CreateMigrationWorkflow");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateMigrationWorkflow(context, request));
}

StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
MigrationServiceTracingStub::GetMigrationWorkflow(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::GetMigrationWorkflowRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.migration.v2.MigrationService",
      "GetMigrationWorkflow");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetMigrationWorkflow(context, request));
}

StatusOr<google::cloud::bigquery::migration::v2::ListMigrationWorkflowsResponse>
MigrationServiceTracingStub::ListMigrationWorkflows(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::ListMigrationWorkflowsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.migration.v2.MigrationService",
      "ListMigrationWorkflows");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListMigrationWorkflows(context, request));
}

Status MigrationServiceTracingStub::DeleteMigrationWorkflow(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::
        DeleteMigrationWorkflowRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.migration.v2.MigrationService",
      "DeleteMigrationWorkflow");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteMigrationWorkflow(context, request));
}

Status MigrationServiceTracingStub::StartMigrationWorkflow(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::StartMigrationWorkflowRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.migration.v2.MigrationService",
      "StartMigrationWorkflow");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->StartMigrationWorkflow(context, request));
}

StatusOr<google::cloud::bigquery::migration::v2::MigrationSubtask>
MigrationServiceTracingStub::GetMigrationSubtask(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::GetMigrationSubtaskRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.migration.v2.MigrationService",
      "GetMigrationSubtask");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetMigrationSubtask(context, request));
}

StatusOr<google::cloud::bigquery::migration::v2::ListMigrationSubtasksResponse>
MigrationServiceTracingStub::ListMigrationSubtasks(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::ListMigrationSubtasksRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.migration.v2.MigrationService",
      "ListMigrationSubtasks");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListMigrationSubtasks(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<MigrationServiceStub> MakeMigrationServiceTracingStub(
    std::shared_ptr<MigrationServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<MigrationServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_migration_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
