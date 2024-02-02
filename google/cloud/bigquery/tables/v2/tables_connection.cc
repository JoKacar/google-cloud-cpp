// Copyright 2024 Google LLC
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
// source: google/cloud/bigquery/tables/v2/tables.proto

#include "google/cloud/bigquery/tables/v2/tables_connection.h"
#include "google/cloud/bigquery/tables/v2/internal/tables_option_defaults.h"
#include "google/cloud/bigquery/tables/v2/internal/tables_tracing_connection.h"
#include "google/cloud/bigquery/tables/v2/tables_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_tables_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TablesConnection::~TablesConnection() = default;

Status TablesConnection::DeleteTable(
    google::cloud::cpp::bigquery::tables::v2::DeleteTableRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::bigquery::v2::Table> TablesConnection::GetTable(
    google::cloud::cpp::bigquery::tables::v2::GetTableRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::bigquery::v2::Policy>
TablesConnection::GetIamPolicy(
    google::cloud::cpp::bigquery::tables::v2::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::bigquery::v2::Table> TablesConnection::InsertTable(
    google::cloud::cpp::bigquery::tables::v2::InsertTableRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::bigquery::v2::TableList>
TablesConnection::ListTables(
    google::cloud::cpp::bigquery::tables::v2::ListTablesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::bigquery::v2::Table> TablesConnection::PatchTable(
    google::cloud::cpp::bigquery::tables::v2::PatchTableRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::bigquery::v2::Policy>
TablesConnection::SetIamPolicy(
    google::cloud::cpp::bigquery::tables::v2::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::bigquery::v2::TestIamPermissionsResponse>
TablesConnection::TestIamPermissions(google::cloud::cpp::bigquery::tables::v2::
                                         TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::bigquery::v2::Table> TablesConnection::UpdateTable(
    google::cloud::cpp::bigquery::tables::v2::UpdateTableRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_tables_v2
}  // namespace cloud
}  // namespace google
