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
// source: google/bigtable/admin/v2/bigtable_table_admin.proto

#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BigtableTableAdminTracingStub::BigtableTableAdminTracingStub(
    std::shared_ptr<BigtableTableAdminStub> child)
    : child_(std::move(child)) {}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminTracingStub::CreateTable(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::CreateTableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "CreateTable");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateTable(context, request));
}

StatusOr<google::bigtable::admin::v2::ListTablesResponse>
BigtableTableAdminTracingStub::ListTables(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::ListTablesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "ListTables");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListTables(context, request));
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminTracingStub::GetTable(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::GetTableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "GetTable");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetTable(context, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminTracingStub::AsyncUpdateTable(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::admin::v2::UpdateTableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "UpdateTable");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncUpdateTable(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

Status BigtableTableAdminTracingStub::DeleteTable(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::DeleteTableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "DeleteTable");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteTable(context, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminTracingStub::AsyncUndeleteTable(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::admin::v2::UndeleteTableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "UndeleteTable");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncUndeleteTable(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminTracingStub::ModifyColumnFamilies(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::ModifyColumnFamiliesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "ModifyColumnFamilies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ModifyColumnFamilies(context, request));
}

Status BigtableTableAdminTracingStub::DropRowRange(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::DropRowRangeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "DropRowRange");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DropRowRange(context, request));
}

StatusOr<google::bigtable::admin::v2::GenerateConsistencyTokenResponse>
BigtableTableAdminTracingStub::GenerateConsistencyToken(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.bigtable.admin.v2.BigtableTableAdmin",
                             "GenerateConsistencyToken");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GenerateConsistencyToken(context, request));
}

StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>
BigtableTableAdminTracingStub::CheckConsistency(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "CheckConsistency");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CheckConsistency(context, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminTracingStub::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::admin::v2::CreateBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "CreateBackup");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCreateBackup(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminTracingStub::GetBackup(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::GetBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "GetBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetBackup(context, request));
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminTracingStub::UpdateBackup(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::UpdateBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "UpdateBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateBackup(context, request));
}

Status BigtableTableAdminTracingStub::DeleteBackup(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::DeleteBackupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "DeleteBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteBackup(context, request));
}

StatusOr<google::bigtable::admin::v2::ListBackupsResponse>
BigtableTableAdminTracingStub::ListBackups(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::ListBackupsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "ListBackups");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListBackups(context, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminTracingStub::AsyncRestoreTable(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::admin::v2::RestoreTableRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "RestoreTable");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncRestoreTable(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::iam::v1::Policy> BigtableTableAdminTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, request));
}

StatusOr<google::iam::v1::Policy> BigtableTableAdminTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableTableAdminTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, request));
}

future<StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>
BigtableTableAdminTracingStub::AsyncCheckConsistency(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableTableAdmin", "CheckConsistency");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCheckConsistency(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncGetOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> BigtableTableAdminTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCancelOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<BigtableTableAdminStub> MakeBigtableTableAdminTracingStub(
    std::shared_ptr<BigtableTableAdminStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<BigtableTableAdminTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
