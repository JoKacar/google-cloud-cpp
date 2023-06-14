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
// source: google/cloud/tpu/v2/cloud_tpu.proto

#include "google/cloud/tpu/v2/internal/tpu_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace tpu_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TpuTracingStub::TpuTracingStub(std::shared_ptr<TpuStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::tpu::v2::ListNodesResponse> TpuTracingStub::ListNodes(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::ListNodesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v2.Tpu", "ListNodes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->ListNodes(context, request));
}

StatusOr<google::cloud::tpu::v2::Node> TpuTracingStub::GetNode(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::GetNodeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v2.Tpu", "GetNode");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetNode(context, request));
}

future<StatusOr<google::longrunning::Operation>>
TpuTracingStub::AsyncCreateNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v2::CreateNodeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v2.Tpu", "CreateNode");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCreateNode(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
TpuTracingStub::AsyncDeleteNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v2::DeleteNodeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v2.Tpu", "DeleteNode");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncDeleteNode(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>> TpuTracingStub::AsyncStopNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v2::StopNodeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v2.Tpu", "StopNode");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncStopNode(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>> TpuTracingStub::AsyncStartNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v2::StartNodeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v2.Tpu", "StartNode");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncStartNode(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
TpuTracingStub::AsyncUpdateNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v2::UpdateNodeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v2.Tpu", "UpdateNode");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncUpdateNode(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::tpu::v2::GenerateServiceIdentityResponse>
TpuTracingStub::GenerateServiceIdentity(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::GenerateServiceIdentityRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tpu.v2.Tpu",
                                     "GenerateServiceIdentity");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GenerateServiceIdentity(context, request));
}

StatusOr<google::cloud::tpu::v2::ListAcceleratorTypesResponse>
TpuTracingStub::ListAcceleratorTypes(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::ListAcceleratorTypesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tpu.v2.Tpu", "ListAcceleratorTypes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListAcceleratorTypes(context, request));
}

StatusOr<google::cloud::tpu::v2::AcceleratorType>
TpuTracingStub::GetAcceleratorType(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::GetAcceleratorTypeRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tpu.v2.Tpu", "GetAcceleratorType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetAcceleratorType(context, request));
}

StatusOr<google::cloud::tpu::v2::ListRuntimeVersionsResponse>
TpuTracingStub::ListRuntimeVersions(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::ListRuntimeVersionsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tpu.v2.Tpu", "ListRuntimeVersions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListRuntimeVersions(context, request));
}

StatusOr<google::cloud::tpu::v2::RuntimeVersion>
TpuTracingStub::GetRuntimeVersion(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::GetRuntimeVersionRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tpu.v2.Tpu", "GetRuntimeVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetRuntimeVersion(context, request));
}

StatusOr<google::cloud::tpu::v2::GetGuestAttributesResponse>
TpuTracingStub::GetGuestAttributes(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::GetGuestAttributesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tpu.v2.Tpu", "GetGuestAttributes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetGuestAttributes(context, request));
}

future<StatusOr<google::longrunning::Operation>>
TpuTracingStub::AsyncGetOperation(
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

future<Status> TpuTracingStub::AsyncCancelOperation(
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

std::shared_ptr<TpuStub> MakeTpuTracingStub(std::shared_ptr<TpuStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<TpuTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
