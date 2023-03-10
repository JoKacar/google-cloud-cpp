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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/internal/instances_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

InstancesTracingStub::InstancesTracingStub(std::shared_ptr<InstancesStub> child)
    : child_(std::move(child)) {}

StatusOr<google::appengine::v1::ListInstancesResponse>
InstancesTracingStub::ListInstances(
    grpc::ClientContext& context,
    google::appengine::v1::ListInstancesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.appengine.v1.Instances", "ListInstances");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListInstances(context, request));
}

StatusOr<google::appengine::v1::Instance> InstancesTracingStub::GetInstance(
    grpc::ClientContext& context,
    google::appengine::v1::GetInstanceRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.appengine.v1.Instances", "GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetInstance(context, request));
}

future<StatusOr<google::longrunning::Operation>>
InstancesTracingStub::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::appengine::v1::DeleteInstanceRequest const& request) {
  return child_->AsyncDeleteInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
InstancesTracingStub::AsyncDebugInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::appengine::v1::DebugInstanceRequest const& request) {
  return child_->AsyncDebugInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
InstancesTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> InstancesTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<InstancesStub> MakeInstancesTracingStub(
    std::shared_ptr<InstancesStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<InstancesTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google
