// Copyright 2022 Google LLC
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
// source: google/cloud/automl/v1/service.proto

#include "google/cloud/automl/v1/internal/auto_ml_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace automl_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AutoMlTracingStub::AutoMlTracingStub(std::shared_ptr<AutoMlStub> child)
    : child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
AutoMlTracingStub::AsyncCreateDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::CreateDatasetRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl", "CreateDataset");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCreateDataset(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::automl::v1::Dataset> AutoMlTracingStub::GetDataset(
    grpc::ClientContext& context,
    google::cloud::automl::v1::GetDatasetRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl", "GetDataset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetDataset(context, request));
}

StatusOr<google::cloud::automl::v1::ListDatasetsResponse>
AutoMlTracingStub::ListDatasets(
    grpc::ClientContext& context,
    google::cloud::automl::v1::ListDatasetsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl", "ListDatasets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListDatasets(context, request));
}

StatusOr<google::cloud::automl::v1::Dataset> AutoMlTracingStub::UpdateDataset(
    grpc::ClientContext& context,
    google::cloud::automl::v1::UpdateDatasetRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl", "UpdateDataset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateDataset(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AutoMlTracingStub::AsyncDeleteDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::DeleteDatasetRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl", "DeleteDataset");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncDeleteDataset(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AutoMlTracingStub::AsyncImportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::ImportDataRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl", "ImportData");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncImportData(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AutoMlTracingStub::AsyncExportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::ExportDataRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl", "ExportData");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncExportData(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::automl::v1::AnnotationSpec>
AutoMlTracingStub::GetAnnotationSpec(
    grpc::ClientContext& context,
    google::cloud::automl::v1::GetAnnotationSpecRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl",
                                     "GetAnnotationSpec");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetAnnotationSpec(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AutoMlTracingStub::AsyncCreateModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::CreateModelRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl", "CreateModel");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCreateModel(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::automl::v1::Model> AutoMlTracingStub::GetModel(
    grpc::ClientContext& context,
    google::cloud::automl::v1::GetModelRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl", "GetModel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetModel(context, request));
}

StatusOr<google::cloud::automl::v1::ListModelsResponse>
AutoMlTracingStub::ListModels(
    grpc::ClientContext& context,
    google::cloud::automl::v1::ListModelsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl", "ListModels");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListModels(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AutoMlTracingStub::AsyncDeleteModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::DeleteModelRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl", "DeleteModel");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncDeleteModel(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::automl::v1::Model> AutoMlTracingStub::UpdateModel(
    grpc::ClientContext& context,
    google::cloud::automl::v1::UpdateModelRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl", "UpdateModel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateModel(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AutoMlTracingStub::AsyncDeployModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::DeployModelRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl", "DeployModel");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncDeployModel(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AutoMlTracingStub::AsyncUndeployModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::UndeployModelRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl", "UndeployModel");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncUndeployModel(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AutoMlTracingStub::AsyncExportModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::automl::v1::ExportModelRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl", "ExportModel");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncExportModel(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::automl::v1::ModelEvaluation>
AutoMlTracingStub::GetModelEvaluation(
    grpc::ClientContext& context,
    google::cloud::automl::v1::GetModelEvaluationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl",
                                     "GetModelEvaluation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetModelEvaluation(context, request));
}

StatusOr<google::cloud::automl::v1::ListModelEvaluationsResponse>
AutoMlTracingStub::ListModelEvaluations(
    grpc::ClientContext& context,
    google::cloud::automl::v1::ListModelEvaluationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.automl.v1.AutoMl",
                                     "ListModelEvaluations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListModelEvaluations(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AutoMlTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncGetOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> AutoMlTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCancelOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<AutoMlStub> MakeAutoMlTracingStub(
    std::shared_ptr<AutoMlStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<AutoMlTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
