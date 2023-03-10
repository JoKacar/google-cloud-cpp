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
// source: google/logging/v2/logging.proto

#include "google/cloud/logging/v2/internal/logging_service_v2_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

LoggingServiceV2TracingStub::LoggingServiceV2TracingStub(
    std::shared_ptr<LoggingServiceV2Stub> child)
    : child_(std::move(child)) {}

Status LoggingServiceV2TracingStub::DeleteLog(
    grpc::ClientContext& context,
    google::logging::v2::DeleteLogRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.LoggingServiceV2", "DeleteLog");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->DeleteLog(context, request));
}

StatusOr<google::logging::v2::WriteLogEntriesResponse>
LoggingServiceV2TracingStub::WriteLogEntries(
    grpc::ClientContext& context,
    google::logging::v2::WriteLogEntriesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.LoggingServiceV2",
                                     "WriteLogEntries");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->WriteLogEntries(context, request));
}

StatusOr<google::logging::v2::ListLogEntriesResponse>
LoggingServiceV2TracingStub::ListLogEntries(
    grpc::ClientContext& context,
    google::logging::v2::ListLogEntriesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.LoggingServiceV2",
                                     "ListLogEntries");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListLogEntries(context, request));
}

StatusOr<google::logging::v2::ListMonitoredResourceDescriptorsResponse>
LoggingServiceV2TracingStub::ListMonitoredResourceDescriptors(
    grpc::ClientContext& context,
    google::logging::v2::ListMonitoredResourceDescriptorsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.logging.v2.LoggingServiceV2",
                                     "ListMonitoredResourceDescriptors");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span,
      child_->ListMonitoredResourceDescriptors(context, request));
}

StatusOr<google::logging::v2::ListLogsResponse>
LoggingServiceV2TracingStub::ListLogs(
    grpc::ClientContext& context,
    google::logging::v2::ListLogsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.logging.v2.LoggingServiceV2", "ListLogs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->ListLogs(context, request));
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::logging::v2::TailLogEntriesRequest,
    google::logging::v2::TailLogEntriesResponse>>
LoggingServiceV2TracingStub::AsyncTailLogEntries(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  return child_->AsyncTailLogEntries(cq, std::move(context));
}

future<StatusOr<google::logging::v2::WriteLogEntriesResponse>>
LoggingServiceV2TracingStub::AsyncWriteLogEntries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::logging::v2::WriteLogEntriesRequest const& request) {
  return child_->AsyncWriteLogEntries(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<LoggingServiceV2Stub> MakeLoggingServiceV2TracingStub(
    std::shared_ptr<LoggingServiceV2Stub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<LoggingServiceV2TracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google
