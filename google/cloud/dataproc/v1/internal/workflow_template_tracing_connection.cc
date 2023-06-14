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
// source: google/cloud/dataproc/v1/workflow_templates.proto

#include "google/cloud/dataproc/v1/internal/workflow_template_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

WorkflowTemplateServiceTracingConnection::
    WorkflowTemplateServiceTracingConnection(
        std::shared_ptr<dataproc_v1::WorkflowTemplateServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceTracingConnection::CreateWorkflowTemplate(
    google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::CreateWorkflowTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateWorkflowTemplate(request));
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceTracingConnection::GetWorkflowTemplate(
    google::cloud::dataproc::v1::GetWorkflowTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::GetWorkflowTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetWorkflowTemplate(request));
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceTracingConnection::InstantiateWorkflowTemplate(
    google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::"
      "InstantiateWorkflowTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InstantiateWorkflowTemplate(request));
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceTracingConnection::InstantiateInlineWorkflowTemplate(
    google::cloud::dataproc::v1::InstantiateInlineWorkflowTemplateRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::"
      "InstantiateInlineWorkflowTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InstantiateInlineWorkflowTemplate(request));
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceTracingConnection::UpdateWorkflowTemplate(
    google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::UpdateWorkflowTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateWorkflowTemplate(request));
}

StreamRange<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceTracingConnection::ListWorkflowTemplates(
    google::cloud::dataproc::v1::ListWorkflowTemplatesRequest request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::ListWorkflowTemplates");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListWorkflowTemplates(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dataproc::v1::WorkflowTemplate>(std::move(span),
                                                     std::move(sr));
}

Status WorkflowTemplateServiceTracingConnection::DeleteWorkflowTemplate(
    google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::DeleteWorkflowTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteWorkflowTemplate(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dataproc_v1::WorkflowTemplateServiceConnection>
MakeWorkflowTemplateServiceTracingConnection(
    std::shared_ptr<dataproc_v1::WorkflowTemplateServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<WorkflowTemplateServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
