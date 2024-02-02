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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATASETS_V2_INTERNAL_DATASETS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATASETS_V2_INTERNAL_DATASETS_REST_METADATA_DECORATOR_H

#include "google/cloud/bigquery/datasets/v2/internal/datasets_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/datasets/v2/datasets.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace bigquery_datasets_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DatasetsRestMetadata : public DatasetsRestStub {
 public:
  ~DatasetsRestMetadata() override = default;
  explicit DatasetsRestMetadata(std::shared_ptr<DatasetsRestStub> child,
                                std::string api_client_header = "");

  Status DeleteDataset(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::datasets::v2::DeleteDatasetRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Dataset> GetDataset(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::datasets::v2::GetDatasetRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Dataset> InsertDataset(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::datasets::v2::InsertDatasetRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::DatasetList> ListDatasets(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::datasets::v2::ListDatasetsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Dataset> PatchDataset(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::datasets::v2::PatchDatasetRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Dataset> Undelete(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::datasets::v2::UndeleteRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Dataset> UpdateDataset(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::datasets::v2::UpdateDatasetRequest const&
          request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   Options const& options,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<DatasetsRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datasets_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATASETS_V2_INTERNAL_DATASETS_REST_METADATA_DECORATOR_H
