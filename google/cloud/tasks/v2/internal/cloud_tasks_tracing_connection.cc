// Copyright 2021 Google LLC
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
// source: google/cloud/tasks/v2/cloudtasks.proto

#include "google/cloud/tasks/v2/internal/cloud_tasks_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace tasks_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudTasksTracingConnection::CloudTasksTracingConnection(
    std::shared_ptr<tasks_v2::CloudTasksConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::tasks::v2::Queue>
CloudTasksTracingConnection::ListQueues(
    google::cloud::tasks::v2::ListQueuesRequest request) {
  auto span = internal::MakeSpan("tasks_v2::CloudTasksConnection::ListQueues");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListQueues(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::tasks::v2::Queue>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksTracingConnection::GetQueue(
    google::cloud::tasks::v2::GetQueueRequest const& request) {
  auto span = internal::MakeSpan("tasks_v2::CloudTasksConnection::GetQueue");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetQueue(request));
}

StatusOr<google::cloud::tasks::v2::Queue>
CloudTasksTracingConnection::CreateQueue(
    google::cloud::tasks::v2::CreateQueueRequest const& request) {
  auto span = internal::MakeSpan("tasks_v2::CloudTasksConnection::CreateQueue");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateQueue(request));
}

StatusOr<google::cloud::tasks::v2::Queue>
CloudTasksTracingConnection::UpdateQueue(
    google::cloud::tasks::v2::UpdateQueueRequest const& request) {
  auto span = internal::MakeSpan("tasks_v2::CloudTasksConnection::UpdateQueue");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateQueue(request));
}

Status CloudTasksTracingConnection::DeleteQueue(
    google::cloud::tasks::v2::DeleteQueueRequest const& request) {
  auto span = internal::MakeSpan("tasks_v2::CloudTasksConnection::DeleteQueue");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteQueue(request));
}

StatusOr<google::cloud::tasks::v2::Queue>
CloudTasksTracingConnection::PurgeQueue(
    google::cloud::tasks::v2::PurgeQueueRequest const& request) {
  auto span = internal::MakeSpan("tasks_v2::CloudTasksConnection::PurgeQueue");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->PurgeQueue(request));
}

StatusOr<google::cloud::tasks::v2::Queue>
CloudTasksTracingConnection::PauseQueue(
    google::cloud::tasks::v2::PauseQueueRequest const& request) {
  auto span = internal::MakeSpan("tasks_v2::CloudTasksConnection::PauseQueue");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->PauseQueue(request));
}

StatusOr<google::cloud::tasks::v2::Queue>
CloudTasksTracingConnection::ResumeQueue(
    google::cloud::tasks::v2::ResumeQueueRequest const& request) {
  auto span = internal::MakeSpan("tasks_v2::CloudTasksConnection::ResumeQueue");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ResumeQueue(request));
}

StatusOr<google::iam::v1::Policy> CloudTasksTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span =
      internal::MakeSpan("tasks_v2::CloudTasksConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy> CloudTasksTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span =
      internal::MakeSpan("tasks_v2::CloudTasksConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
CloudTasksTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span =
      internal::MakeSpan("tasks_v2::CloudTasksConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

StreamRange<google::cloud::tasks::v2::Task>
CloudTasksTracingConnection::ListTasks(
    google::cloud::tasks::v2::ListTasksRequest request) {
  auto span = internal::MakeSpan("tasks_v2::CloudTasksConnection::ListTasks");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListTasks(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::tasks::v2::Task>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::tasks::v2::Task> CloudTasksTracingConnection::GetTask(
    google::cloud::tasks::v2::GetTaskRequest const& request) {
  auto span = internal::MakeSpan("tasks_v2::CloudTasksConnection::GetTask");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTask(request));
}

StatusOr<google::cloud::tasks::v2::Task>
CloudTasksTracingConnection::CreateTask(
    google::cloud::tasks::v2::CreateTaskRequest const& request) {
  auto span = internal::MakeSpan("tasks_v2::CloudTasksConnection::CreateTask");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateTask(request));
}

Status CloudTasksTracingConnection::DeleteTask(
    google::cloud::tasks::v2::DeleteTaskRequest const& request) {
  auto span = internal::MakeSpan("tasks_v2::CloudTasksConnection::DeleteTask");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteTask(request));
}

StatusOr<google::cloud::tasks::v2::Task> CloudTasksTracingConnection::RunTask(
    google::cloud::tasks::v2::RunTaskRequest const& request) {
  auto span = internal::MakeSpan("tasks_v2::CloudTasksConnection::RunTask");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RunTask(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<tasks_v2::CloudTasksConnection> MakeCloudTasksTracingConnection(
    std::shared_ptr<tasks_v2::CloudTasksConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<CloudTasksTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tasks_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
