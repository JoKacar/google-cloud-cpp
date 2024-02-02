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
// source: google/cloud/bigquery/datasets/v2/datasets.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATASETS_V2_INTERNAL_DATASETS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATASETS_V2_INTERNAL_DATASETS_TRACING_CONNECTION_H

#include "google/cloud/bigquery/datasets/v2/datasets_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_datasets_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DatasetsTracingConnection
    : public bigquery_datasets_v2::DatasetsConnection {
 public:
  ~DatasetsTracingConnection() override = default;

  explicit DatasetsTracingConnection(
      std::shared_ptr<bigquery_datasets_v2::DatasetsConnection> child);

  Options options() override { return child_->options(); }

  Status DeleteDataset(
      google::cloud::cpp::bigquery::datasets::v2::DeleteDatasetRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Dataset> GetDataset(
      google::cloud::cpp::bigquery::datasets::v2::GetDatasetRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Dataset> InsertDataset(
      google::cloud::cpp::bigquery::datasets::v2::InsertDatasetRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::DatasetList> ListDatasets(
      google::cloud::cpp::bigquery::datasets::v2::ListDatasetsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Dataset> PatchDataset(
      google::cloud::cpp::bigquery::datasets::v2::PatchDatasetRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Dataset> Undelete(
      google::cloud::cpp::bigquery::datasets::v2::UndeleteRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Dataset> UpdateDataset(
      google::cloud::cpp::bigquery::datasets::v2::UpdateDatasetRequest const&
          request) override;

 private:
  std::shared_ptr<bigquery_datasets_v2::DatasetsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<bigquery_datasets_v2::DatasetsConnection>
MakeDatasetsTracingConnection(
    std::shared_ptr<bigquery_datasets_v2::DatasetsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datasets_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATASETS_V2_INTERNAL_DATASETS_TRACING_CONNECTION_H
