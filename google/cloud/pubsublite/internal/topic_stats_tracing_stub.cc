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
// source: google/cloud/pubsublite/v1/topic_stats.proto

#include "google/cloud/pubsublite/internal/topic_stats_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TopicStatsServiceTracingStub::TopicStatsServiceTracingStub(
    std::shared_ptr<TopicStatsServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::pubsublite::v1::ComputeMessageStatsResponse>
TopicStatsServiceTracingStub::ComputeMessageStats(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ComputeMessageStatsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.pubsublite.v1.TopicStatsService", "ComputeMessageStats");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ComputeMessageStats(context, request));
}

StatusOr<google::cloud::pubsublite::v1::ComputeHeadCursorResponse>
TopicStatsServiceTracingStub::ComputeHeadCursor(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ComputeHeadCursorRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.pubsublite.v1.TopicStatsService", "ComputeHeadCursor");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ComputeHeadCursor(context, request));
}

StatusOr<google::cloud::pubsublite::v1::ComputeTimeCursorResponse>
TopicStatsServiceTracingStub::ComputeTimeCursor(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ComputeTimeCursorRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.pubsublite.v1.TopicStatsService", "ComputeTimeCursor");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ComputeTimeCursor(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<TopicStatsServiceStub> MakeTopicStatsServiceTracingStub(
    std::shared_ptr<TopicStatsServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<TopicStatsServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
