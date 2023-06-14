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
// source: google/cloud/sql/v1/cloud_sql_databases.proto

#include "google/cloud/sql/v1/internal/sql_databases_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/sql/v1/cloud_sql_databases.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultSqlDatabasesServiceRestStub::DefaultSqlDatabasesServiceRestStub(
    Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultSqlDatabasesServiceRestStub::DefaultSqlDatabasesServiceRestStub(
    std::shared_ptr<rest_internal::RestClient> service, Options options)
    : service_(std::move(service)), options_(std::move(options)) {}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlDatabasesServiceRestStub::Delete(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlDatabasesDeleteRequest const& request) {
  return rest_internal::Delete<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request,
      "/v1/projects/{project}/instances/{instance}/databases/{database}");
}

StatusOr<google::cloud::sql::v1::Database>
DefaultSqlDatabasesServiceRestStub::Get(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlDatabasesGetRequest const& request) {
  return rest_internal::Get<google::cloud::sql::v1::Database>(
      *service_, rest_context, request,
      "/v1/projects/{project}/instances/{instance}/databases/{database}",
      {std::make_pair("database", request.database()),
       std::make_pair("instance", request.instance()),
       std::make_pair("project", request.project())});
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlDatabasesServiceRestStub::Insert(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlDatabasesInsertRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request,
      "/v1/projects/{project}/instances/{instance}/databases");
}

StatusOr<google::cloud::sql::v1::DatabasesListResponse>
DefaultSqlDatabasesServiceRestStub::List(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlDatabasesListRequest const& request) {
  return rest_internal::Get<google::cloud::sql::v1::DatabasesListResponse>(
      *service_, rest_context, request,
      "/v1/projects/{project}/instances/{instance}/databases",
      {std::make_pair("instance", request.instance()),
       std::make_pair("project", request.project())});
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlDatabasesServiceRestStub::Patch(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlDatabasesUpdateRequest const& request) {
  return rest_internal::Patch<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request,
      "/v1/projects/{project}/instances/{instance}/databases/{database}");
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlDatabasesServiceRestStub::Update(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlDatabasesUpdateRequest const& request) {
  return rest_internal::Put<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request,
      "/v1/projects/{project}/instances/{instance}/databases/{database}");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
