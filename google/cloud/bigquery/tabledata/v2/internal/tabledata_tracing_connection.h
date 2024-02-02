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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_TABLEDATA_V2_INTERNAL_TABLEDATA_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_TABLEDATA_V2_INTERNAL_TABLEDATA_TRACING_CONNECTION_H

#include "google/cloud/bigquery/tabledata/v2/tabledata_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_tabledata_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TabledataTracingConnection
    : public bigquery_tabledata_v2::TabledataConnection {
 public:
  ~TabledataTracingConnection() override = default;

  explicit TabledataTracingConnection(
      std::shared_ptr<bigquery_tabledata_v2::TabledataConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::bigquery::v2::TableDataInsertAllResponse>
  InsertAll(google::cloud::cpp::bigquery::tabledata::v2::InsertAllRequest const&
                request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::TableDataList> ListTabledata(
      google::cloud::cpp::bigquery::tabledata::v2::ListTabledataRequest const&
          request) override;

 private:
  std::shared_ptr<bigquery_tabledata_v2::TabledataConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<bigquery_tabledata_v2::TabledataConnection>
MakeTabledataTracingConnection(
    std::shared_ptr<bigquery_tabledata_v2::TabledataConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_tabledata_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_TABLEDATA_V2_INTERNAL_TABLEDATA_TRACING_CONNECTION_H
