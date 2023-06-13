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
// source: google/cloud/aiplatform/v1/model_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_MODEL_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_MODEL_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/model_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ModelServiceStub {
 public:
  virtual ~ModelServiceStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUploadModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::UploadModelRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Model> GetModel(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetModelRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListModelsResponse>
  ListModels(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListModelsRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListModelVersionsResponse>
  ListModelVersions(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListModelVersionsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Model> UpdateModel(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::UpdateModelRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::DeleteModelRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteModelVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::DeleteModelVersionRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Model> MergeVersionAliases(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::MergeVersionAliasesRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncExportModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::ExportModelRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCopyModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::CopyModelRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
  ImportModelEvaluation(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ImportModelEvaluationRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::BatchImportModelEvaluationSlicesResponse>
  BatchImportModelEvaluationSlices(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::
          BatchImportModelEvaluationSlicesRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::BatchImportEvaluatedAnnotationsResponse>
  BatchImportEvaluatedAnnotations(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::
          BatchImportEvaluatedAnnotationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
  GetModelEvaluation(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetModelEvaluationRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListModelEvaluationsResponse>
  ListModelEvaluations(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListModelEvaluationsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ModelEvaluationSlice>
  GetModelEvaluationSlice(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetModelEvaluationSliceRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::ListModelEvaluationSlicesResponse>
  ListModelEvaluationSlices(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListModelEvaluationSlicesRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultModelServiceStub : public ModelServiceStub {
 public:
  DefaultModelServiceStub(
      std::unique_ptr<
          google::cloud::aiplatform::v1::ModelService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncUploadModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::UploadModelRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Model> GetModel(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::GetModelRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ListModelsResponse> ListModels(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::ListModelsRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ListModelVersionsResponse>
  ListModelVersions(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::ListModelVersionsRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Model> UpdateModel(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::UpdateModelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::DeleteModelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteModelVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::DeleteModelVersionRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Model> MergeVersionAliases(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::MergeVersionAliasesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::ExportModelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCopyModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::aiplatform::v1::CopyModelRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
  ImportModelEvaluation(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::ImportModelEvaluationRequest const&
          request) override;

  StatusOr<
      google::cloud::aiplatform::v1::BatchImportModelEvaluationSlicesResponse>
  BatchImportModelEvaluationSlices(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::
          BatchImportModelEvaluationSlicesRequest const& request) override;

  StatusOr<
      google::cloud::aiplatform::v1::BatchImportEvaluatedAnnotationsResponse>
  BatchImportEvaluatedAnnotations(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::
          BatchImportEvaluatedAnnotationsRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ModelEvaluation> GetModelEvaluation(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::GetModelEvaluationRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListModelEvaluationsResponse>
  ListModelEvaluations(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::ListModelEvaluationsRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ModelEvaluationSlice>
  GetModelEvaluationSlice(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::GetModelEvaluationSliceRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::ListModelEvaluationSlicesResponse>
  ListModelEvaluationSlices(
      grpc::ClientContext& client_context,
      google::cloud::aiplatform::v1::ListModelEvaluationSlicesRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::aiplatform::v1::ModelService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_MODEL_STUB_H
