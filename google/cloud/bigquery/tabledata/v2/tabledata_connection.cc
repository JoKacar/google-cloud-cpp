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

#include "google/cloud/bigquery/tabledata/v2/tabledata_connection.h"
#include "google/cloud/bigquery/tabledata/v2/internal/tabledata_option_defaults.h"
#include "google/cloud/bigquery/tabledata/v2/internal/tabledata_tracing_connection.h"
#include "google/cloud/bigquery/tabledata/v2/tabledata_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_tabledata_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TabledataConnection::~TabledataConnection() = default;

StatusOr<google::cloud::cpp::bigquery::v2::TableDataInsertAllResponse>
TabledataConnection::InsertAll(
    google::cloud::cpp::bigquery::tabledata::v2::InsertAllRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::bigquery::v2::TableDataList>
TabledataConnection::ListTabledata(
    google::cloud::cpp::bigquery::tabledata::v2::ListTabledataRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_tabledata_v2
}  // namespace cloud
}  // namespace google
