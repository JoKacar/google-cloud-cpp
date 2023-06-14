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
// source: google/cloud/aiplatform/v1/index_service.proto

#include "google/cloud/aiplatform/v1/internal/index_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IndexServiceTracingStub::IndexServiceTracingStub(
    std::shared_ptr<IndexServiceStub> child)
    : child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
IndexServiceTracingStub::AsyncCreateIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::CreateIndexRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.IndexService",
                                     "CreateIndex");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCreateIndex(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::aiplatform::v1::Index>
IndexServiceTracingStub::GetIndex(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetIndexRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.IndexService",
                                     "GetIndex");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetIndex(context, request));
}

StatusOr<google::cloud::aiplatform::v1::ListIndexesResponse>
IndexServiceTracingStub::ListIndexes(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListIndexesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.IndexService",
                                     "ListIndexes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListIndexes(context, request));
}

future<StatusOr<google::longrunning::Operation>>
IndexServiceTracingStub::AsyncUpdateIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::UpdateIndexRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.IndexService",
                                     "UpdateIndex");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncUpdateIndex(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
IndexServiceTracingStub::AsyncDeleteIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteIndexRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.IndexService",
                                     "DeleteIndex");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncDeleteIndex(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::aiplatform::v1::UpsertDatapointsResponse>
IndexServiceTracingStub::UpsertDatapoints(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::UpsertDatapointsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.IndexService",
                                     "UpsertDatapoints");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpsertDatapoints(context, request));
}

StatusOr<google::cloud::aiplatform::v1::RemoveDatapointsResponse>
IndexServiceTracingStub::RemoveDatapoints(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::RemoveDatapointsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.aiplatform.v1.IndexService",
                                     "RemoveDatapoints");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->RemoveDatapoints(context, request));
}

future<StatusOr<google::longrunning::Operation>>
IndexServiceTracingStub::AsyncGetOperation(
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

future<Status> IndexServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<IndexServiceStub> MakeIndexServiceTracingStub(
    std::shared_ptr<IndexServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<IndexServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
