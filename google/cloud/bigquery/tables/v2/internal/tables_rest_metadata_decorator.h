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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_TABLES_V2_INTERNAL_TABLES_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_TABLES_V2_INTERNAL_TABLES_REST_METADATA_DECORATOR_H

#include "google/cloud/bigquery/tables/v2/internal/tables_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/tables/v2/tables.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace bigquery_tables_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TablesRestMetadata : public TablesRestStub {
 public:
  ~TablesRestMetadata() override = default;
  explicit TablesRestMetadata(std::shared_ptr<TablesRestStub> child,
                              std::string api_client_header = "");

  Status DeleteTable(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::tables::v2::DeleteTableRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Table> GetTable(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::tables::v2::GetTableRequest const& request)
      override;

  StatusOr<google::cloud::cpp::bigquery::v2::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::tables::v2::GetIamPolicyRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Table> InsertTable(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::tables::v2::InsertTableRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::TableList> ListTables(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::tables::v2::ListTablesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Table> PatchTable(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::tables::v2::PatchTableRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::tables::v2::SetIamPolicyRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::TestIamPermissionsResponse>
  TestIamPermissions(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::tables::v2::TestIamPermissionsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Table> UpdateTable(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::tables::v2::UpdateTableRequest const&
          request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   Options const& options,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<TablesRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_tables_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_TABLES_V2_INTERNAL_TABLES_REST_METADATA_DECORATOR_H
