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
// source: google/cloud/pubsublite/v1/subscriber.proto

#include "google/cloud/pubsublite/internal/partition_assignment_tracing_stub.h"
#include "google/cloud/internal/async_read_write_stream_tracing.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PartitionAssignmentServiceTracingStub::PartitionAssignmentServiceTracingStub(
    std::shared_ptr<PartitionAssignmentServiceStub> child)
    : child_(std::move(child)) {}

std::unique_ptr<AsyncStreamingReadWriteRpc<
    google::cloud::pubsublite::v1::PartitionAssignmentRequest,
    google::cloud::pubsublite::v1::PartitionAssignment>>
PartitionAssignmentServiceTracingStub::AsyncAssignPartitions(
    CompletionQueue const& cq, std::shared_ptr<grpc::ClientContext> context) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.pubsublite.v1.PartitionAssignmentService",
      "AssignPartitions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(*context, internal::CurrentOptions());
  auto stream = child_->AsyncAssignPartitions(cq, context);
  return std::make_unique<internal::AsyncStreamingReadWriteRpcTracing<
      google::cloud::pubsublite::v1::PartitionAssignmentRequest,
      google::cloud::pubsublite::v1::PartitionAssignment>>(
      std::move(context), std::move(stream), std::move(span));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<PartitionAssignmentServiceStub>
MakePartitionAssignmentServiceTracingStub(
    std::shared_ptr<PartitionAssignmentServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<PartitionAssignmentServiceTracingStub>(
      std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
