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
// source: google/cloud/aiplatform/v1/dataset_service.proto

#include "google/cloud/aiplatform/v1/internal/dataset_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/dataset_service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatasetServiceLogging::DatasetServiceLogging(
    std::shared_ptr<DatasetServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceLogging::AsyncCreateDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::CreateDatasetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::CreateDatasetRequest const& request) {
        return child_->AsyncCreateDataset(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DatasetServiceLogging::GetDataset(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetDatasetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetDatasetRequest const& request) {
        return child_->GetDataset(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DatasetServiceLogging::UpdateDataset(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::UpdateDatasetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::UpdateDatasetRequest const& request) {
        return child_->UpdateDataset(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListDatasetsResponse>
DatasetServiceLogging::ListDatasets(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListDatasetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::ListDatasetsRequest const& request) {
        return child_->ListDatasets(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceLogging::AsyncDeleteDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteDatasetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::DeleteDatasetRequest const& request) {
        return child_->AsyncDeleteDataset(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceLogging::AsyncImportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::ImportDataRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::ImportDataRequest const& request) {
        return child_->AsyncImportData(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceLogging::AsyncExportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::ExportDataRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::aiplatform::v1::ExportDataRequest const& request) {
        return child_->AsyncExportData(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListDataItemsResponse>
DatasetServiceLogging::ListDataItems(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListDataItemsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::ListDataItemsRequest const& request) {
        return child_->ListDataItems(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::SearchDataItemsResponse>
DatasetServiceLogging::SearchDataItems(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::SearchDataItemsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::SearchDataItemsRequest const&
                 request) { return child_->SearchDataItems(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListSavedQueriesResponse>
DatasetServiceLogging::ListSavedQueries(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListSavedQueriesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::ListSavedQueriesRequest const&
                 request) {
        return child_->ListSavedQueries(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::AnnotationSpec>
DatasetServiceLogging::GetAnnotationSpec(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetAnnotationSpecRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetAnnotationSpecRequest const&
                 request) {
        return child_->GetAnnotationSpec(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListAnnotationsResponse>
DatasetServiceLogging::ListAnnotations(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListAnnotationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::ListAnnotationsRequest const&
                 request) { return child_->ListAnnotations(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> DatasetServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
