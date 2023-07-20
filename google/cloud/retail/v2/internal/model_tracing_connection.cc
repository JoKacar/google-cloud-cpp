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
// source: google/cloud/retail/v2/model_service.proto

#include "google/cloud/retail/v2/internal/model_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ModelServiceTracingConnection::ModelServiceTracingConnection(
    std::shared_ptr<retail_v2::ModelServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::retail::v2::Model>>
ModelServiceTracingConnection::CreateModel(
    google::cloud::retail::v2::CreateModelRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ModelServiceConnection::CreateModel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateModel(request));
}

StatusOr<google::cloud::retail::v2::Model>
ModelServiceTracingConnection::GetModel(
    google::cloud::retail::v2::GetModelRequest const& request) {
  auto span = internal::MakeSpan("retail_v2::ModelServiceConnection::GetModel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetModel(request));
}

StatusOr<google::cloud::retail::v2::Model>
ModelServiceTracingConnection::PauseModel(
    google::cloud::retail::v2::PauseModelRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ModelServiceConnection::PauseModel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->PauseModel(request));
}

StatusOr<google::cloud::retail::v2::Model>
ModelServiceTracingConnection::ResumeModel(
    google::cloud::retail::v2::ResumeModelRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ModelServiceConnection::ResumeModel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ResumeModel(request));
}

Status ModelServiceTracingConnection::DeleteModel(
    google::cloud::retail::v2::DeleteModelRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ModelServiceConnection::DeleteModel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteModel(request));
}

StreamRange<google::cloud::retail::v2::Model>
ModelServiceTracingConnection::ListModels(
    google::cloud::retail::v2::ListModelsRequest request) {
  auto span =
      internal::MakeSpan("retail_v2::ModelServiceConnection::ListModels");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListModels(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::retail::v2::Model>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::retail::v2::Model>
ModelServiceTracingConnection::UpdateModel(
    google::cloud::retail::v2::UpdateModelRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ModelServiceConnection::UpdateModel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateModel(request));
}

future<StatusOr<google::cloud::retail::v2::TuneModelResponse>>
ModelServiceTracingConnection::TuneModel(
    google::cloud::retail::v2::TuneModelRequest const& request) {
  auto span =
      internal::MakeSpan("retail_v2::ModelServiceConnection::TuneModel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->TuneModel(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<retail_v2::ModelServiceConnection>
MakeModelServiceTracingConnection(
    std::shared_ptr<retail_v2::ModelServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ModelServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
