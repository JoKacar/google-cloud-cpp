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
// source: google/cloud/workflows/executions/v1/executions.proto

#include "google/cloud/workflows/executions/v1/internal/executions_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace workflows_executions_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ExecutionsTracingStub::ExecutionsTracingStub(
    std::shared_ptr<ExecutionsStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::workflows::executions::v1::ListExecutionsResponse>
ExecutionsTracingStub::ListExecutions(
    grpc::ClientContext& context,
    google::cloud::workflows::executions::v1::ListExecutionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.workflows.executions.v1.Executions", "ListExecutions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListExecutions(context, request));
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsTracingStub::CreateExecution(
    grpc::ClientContext& context,
    google::cloud::workflows::executions::v1::CreateExecutionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.workflows.executions.v1.Executions", "CreateExecution");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateExecution(context, request));
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsTracingStub::GetExecution(
    grpc::ClientContext& context,
    google::cloud::workflows::executions::v1::GetExecutionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.workflows.executions.v1.Executions", "GetExecution");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetExecution(context, request));
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsTracingStub::CancelExecution(
    grpc::ClientContext& context,
    google::cloud::workflows::executions::v1::CancelExecutionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.workflows.executions.v1.Executions", "CancelExecution");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CancelExecution(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ExecutionsStub> MakeExecutionsTracingStub(
    std::shared_ptr<ExecutionsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ExecutionsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_executions_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
