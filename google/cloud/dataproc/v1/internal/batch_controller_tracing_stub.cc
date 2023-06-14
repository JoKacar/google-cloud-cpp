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
// source: google/cloud/dataproc/v1/batches.proto

#include "google/cloud/dataproc/v1/internal/batch_controller_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BatchControllerTracingStub::BatchControllerTracingStub(
    std::shared_ptr<BatchControllerStub> child)
    : child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
BatchControllerTracingStub::AsyncCreateBatch(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dataproc::v1::CreateBatchRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataproc.v1.BatchController",
                                     "CreateBatch");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCreateBatch(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::dataproc::v1::Batch>
BatchControllerTracingStub::GetBatch(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::GetBatchRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataproc.v1.BatchController",
                                     "GetBatch");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetBatch(context, request));
}

StatusOr<google::cloud::dataproc::v1::ListBatchesResponse>
BatchControllerTracingStub::ListBatches(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::ListBatchesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataproc.v1.BatchController",
                                     "ListBatches");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListBatches(context, request));
}

Status BatchControllerTracingStub::DeleteBatch(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::DeleteBatchRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataproc.v1.BatchController",
                                     "DeleteBatch");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteBatch(context, request));
}

future<StatusOr<google::longrunning::Operation>>
BatchControllerTracingStub::AsyncGetOperation(
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

future<Status> BatchControllerTracingStub::AsyncCancelOperation(
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

std::shared_ptr<BatchControllerStub> MakeBatchControllerTracingStub(
    std::shared_ptr<BatchControllerStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<BatchControllerTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
