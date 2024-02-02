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
// source: google/cloud/bigquery/tabledata/v2/tabledata.proto

#include "google/cloud/bigquery/tabledata/v2/internal/tabledata_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/bigquery/tabledata/v2/tabledata.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_tabledata_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultTabledataRestStub::DefaultTabledataRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultTabledataRestStub::DefaultTabledataRestStub(
    std::shared_ptr<rest_internal::RestClient> service, Options options)
    : service_(std::move(service)), options_(std::move(options)) {}

StatusOr<google::cloud::cpp::bigquery::v2::TableDataInsertAllResponse>
DefaultTabledataRestStub::InsertAll(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::bigquery::tabledata::v2::InsertAllRequest const&
        request) {
  return rest_internal::Post<
      google::cloud::cpp::bigquery::v2::TableDataInsertAllResponse>(
      *service_, rest_context, request.table_data_insert_all_request_resource(),
      false,
      absl::StrCat("/", "bigquery", "/",
                   rest_internal::DetermineApiVersion("v2", options), "/",
                   "projects", "/", request.project_id(), "/", "datasets", "/",
                   request.dataset_id(), "/", "tables", "/", request.table_id(),
                   "/", "insertAll"));
}

StatusOr<google::cloud::cpp::bigquery::v2::TableDataList>
DefaultTabledataRestStub::ListTabledata(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::bigquery::tabledata::v2::ListTabledataRequest const&
        request) {
  return rest_internal::Get<google::cloud::cpp::bigquery::v2::TableDataList>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "bigquery", "/",
                   rest_internal::DetermineApiVersion("v2", options), "/",
                   "projects", "/", request.project_id(), "/", "datasets", "/",
                   request.dataset_id(), "/", "tables", "/", request.table_id(),
                   "/", "data"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair(
               "format_options_use_int64_timestamp",
               request.format_options_use_int64_timestamp() ? "1" : "0"),
           std::make_pair("max_results", std::to_string(request.max_results())),
           std::make_pair("page_token", request.page_token()),
           std::make_pair("selected_fields", request.selected_fields()),
           std::make_pair("start_index", request.start_index())}));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_tabledata_v2_internal
}  // namespace cloud
}  // namespace google
