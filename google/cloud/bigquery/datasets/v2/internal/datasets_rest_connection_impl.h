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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATASETS_V2_INTERNAL_DATASETS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATASETS_V2_INTERNAL_DATASETS_REST_CONNECTION_IMPL_H

#include "google/cloud/bigquery/datasets/v2/datasets_connection.h"
#include "google/cloud/bigquery/datasets/v2/datasets_connection_idempotency_policy.h"
#include "google/cloud/bigquery/datasets/v2/datasets_options.h"
#include "google/cloud/bigquery/datasets/v2/internal/datasets_rest_stub.h"
#include "google/cloud/bigquery/datasets/v2/internal/datasets_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_datasets_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DatasetsRestConnectionImpl
    : public bigquery_datasets_v2::DatasetsConnection {
 public:
  ~DatasetsRestConnectionImpl() override = default;

  DatasetsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<bigquery_datasets_v2_internal::DatasetsRestStub> stub,
      Options options);

  Options options() override { return options_; }

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
  static std::unique_ptr<bigquery_datasets_v2::DatasetsRetryPolicy>
  retry_policy(Options const& options) {
    return options.get<bigquery_datasets_v2::DatasetsRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options.get<bigquery_datasets_v2::DatasetsBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      bigquery_datasets_v2::DatasetsConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<bigquery_datasets_v2::DatasetsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<bigquery_datasets_v2_internal::DatasetsRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datasets_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATASETS_V2_INTERNAL_DATASETS_REST_CONNECTION_IMPL_H
