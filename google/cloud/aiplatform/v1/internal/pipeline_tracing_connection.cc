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
// source: google/cloud/aiplatform/v1/pipeline_service.proto

#include "google/cloud/aiplatform/v1/internal/pipeline_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PipelineServiceTracingConnection::PipelineServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::PipelineServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
PipelineServiceTracingConnection::CreateTrainingPipeline(
    google::cloud::aiplatform::v1::CreateTrainingPipelineRequest const&
        request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::PipelineServiceConnection::CreateTrainingPipeline");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateTrainingPipeline(request));
}

StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
PipelineServiceTracingConnection::GetTrainingPipeline(
    google::cloud::aiplatform::v1::GetTrainingPipelineRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::PipelineServiceConnection::GetTrainingPipeline");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTrainingPipeline(request));
}

StreamRange<google::cloud::aiplatform::v1::TrainingPipeline>
PipelineServiceTracingConnection::ListTrainingPipelines(
    google::cloud::aiplatform::v1::ListTrainingPipelinesRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::PipelineServiceConnection::ListTrainingPipelines");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListTrainingPipelines(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::TrainingPipeline>(std::move(span),
                                                       std::move(sr));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
PipelineServiceTracingConnection::DeleteTrainingPipeline(
    google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
        request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::PipelineServiceConnection::DeleteTrainingPipeline");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteTrainingPipeline(request));
}

Status PipelineServiceTracingConnection::CancelTrainingPipeline(
    google::cloud::aiplatform::v1::CancelTrainingPipelineRequest const&
        request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::PipelineServiceConnection::CancelTrainingPipeline");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelTrainingPipeline(request));
}

StatusOr<google::cloud::aiplatform::v1::PipelineJob>
PipelineServiceTracingConnection::CreatePipelineJob(
    google::cloud::aiplatform::v1::CreatePipelineJobRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::PipelineServiceConnection::CreatePipelineJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreatePipelineJob(request));
}

StatusOr<google::cloud::aiplatform::v1::PipelineJob>
PipelineServiceTracingConnection::GetPipelineJob(
    google::cloud::aiplatform::v1::GetPipelineJobRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::PipelineServiceConnection::GetPipelineJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPipelineJob(request));
}

StreamRange<google::cloud::aiplatform::v1::PipelineJob>
PipelineServiceTracingConnection::ListPipelineJobs(
    google::cloud::aiplatform::v1::ListPipelineJobsRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::PipelineServiceConnection::ListPipelineJobs");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListPipelineJobs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::PipelineJob>(std::move(span),
                                                  std::move(sr));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
PipelineServiceTracingConnection::DeletePipelineJob(
    google::cloud::aiplatform::v1::DeletePipelineJobRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::PipelineServiceConnection::DeletePipelineJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeletePipelineJob(request));
}

Status PipelineServiceTracingConnection::CancelPipelineJob(
    google::cloud::aiplatform::v1::CancelPipelineJobRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::PipelineServiceConnection::CancelPipelineJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelPipelineJob(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<aiplatform_v1::PipelineServiceConnection>
MakePipelineServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::PipelineServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<PipelineServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
