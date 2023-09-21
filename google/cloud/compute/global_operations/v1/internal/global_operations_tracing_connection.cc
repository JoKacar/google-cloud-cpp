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
// source: google/cloud/compute/global_operations/v1/global_operations.proto

#include "google/cloud/compute/global_operations/v1/internal/global_operations_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_operations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GlobalOperationsTracingConnection::GlobalOperationsTracingConnection(
    std::shared_ptr<compute_global_operations_v1::GlobalOperationsConnection>
        child)
    : child_(std::move(child)) {}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::OperationsScopedList>>
GlobalOperationsTracingConnection::AggregatedListGlobalOperations(
    google::cloud::cpp::compute::global_operations::v1::
        AggregatedListGlobalOperationsRequest request) {
  auto span = internal::MakeSpan(
      "compute_global_operations_v1::GlobalOperationsConnection::"
      "AggregatedListGlobalOperations");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->AggregatedListGlobalOperations(std::move(request));
  return internal::MakeTracedStreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::OperationsScopedList>>(
      std::move(span), std::move(sr));
}

Status GlobalOperationsTracingConnection::DeleteOperation(
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_global_operations_v1::GlobalOperationsConnection::"
      "DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteOperation(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
GlobalOperationsTracingConnection::GetOperation(
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_global_operations_v1::GlobalOperationsConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

StreamRange<google::cloud::cpp::compute::v1::Operation>
GlobalOperationsTracingConnection::ListGlobalOperations(
    google::cloud::cpp::compute::global_operations::v1::
        ListGlobalOperationsRequest request) {
  auto span = internal::MakeSpan(
      "compute_global_operations_v1::GlobalOperationsConnection::"
      "ListGlobalOperations");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListGlobalOperations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::Operation>(std::move(span),
                                                  std::move(sr));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
GlobalOperationsTracingConnection::Wait(
    google::cloud::cpp::compute::global_operations::v1::WaitRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_global_operations_v1::GlobalOperationsConnection::Wait");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->Wait(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_global_operations_v1::GlobalOperationsConnection>
MakeGlobalOperationsTracingConnection(
    std::shared_ptr<compute_global_operations_v1::GlobalOperationsConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<GlobalOperationsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_operations_v1_internal
}  // namespace cloud
}  // namespace google
