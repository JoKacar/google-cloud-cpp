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
// source: google/cloud/video/transcoder/v1/services.proto

#include "google/cloud/video/transcoder/v1/internal/transcoder_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace video_transcoder_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TranscoderServiceTracingStub::TranscoderServiceTracingStub(
    std::shared_ptr<TranscoderServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::video::transcoder::v1::Job>
TranscoderServiceTracingStub::CreateJob(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::CreateJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.transcoder.v1.TranscoderService", "CreateJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->CreateJob(context, request));
}

StatusOr<google::cloud::video::transcoder::v1::ListJobsResponse>
TranscoderServiceTracingStub::ListJobs(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::ListJobsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.transcoder.v1.TranscoderService", "ListJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->ListJobs(context, request));
}

StatusOr<google::cloud::video::transcoder::v1::Job>
TranscoderServiceTracingStub::GetJob(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::GetJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.transcoder.v1.TranscoderService", "GetJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetJob(context, request));
}

Status TranscoderServiceTracingStub::DeleteJob(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::DeleteJobRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.transcoder.v1.TranscoderService", "DeleteJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->DeleteJob(context, request));
}

StatusOr<google::cloud::video::transcoder::v1::JobTemplate>
TranscoderServiceTracingStub::CreateJobTemplate(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::CreateJobTemplateRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.transcoder.v1.TranscoderService",
      "CreateJobTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateJobTemplate(context, request));
}

StatusOr<google::cloud::video::transcoder::v1::ListJobTemplatesResponse>
TranscoderServiceTracingStub::ListJobTemplates(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::ListJobTemplatesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.transcoder.v1.TranscoderService", "ListJobTemplates");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListJobTemplates(context, request));
}

StatusOr<google::cloud::video::transcoder::v1::JobTemplate>
TranscoderServiceTracingStub::GetJobTemplate(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::GetJobTemplateRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.transcoder.v1.TranscoderService", "GetJobTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetJobTemplate(context, request));
}

Status TranscoderServiceTracingStub::DeleteJobTemplate(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::DeleteJobTemplateRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.transcoder.v1.TranscoderService",
      "DeleteJobTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteJobTemplate(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<TranscoderServiceStub> MakeTranscoderServiceTracingStub(
    std::shared_ptr<TranscoderServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<TranscoderServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_transcoder_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
