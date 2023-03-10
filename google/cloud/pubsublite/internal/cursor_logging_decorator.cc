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
// source: google/cloud/pubsublite/v1/cursor.proto

#include "google/cloud/pubsublite/internal/cursor_logging_decorator.h"
#include "google/cloud/internal/async_read_write_stream_logging.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/pubsublite/v1/cursor.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CursorServiceLogging::CursorServiceLogging(
    std::shared_ptr<CursorServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::pubsublite::v1::StreamingCommitCursorRequest,
    google::cloud::pubsublite::v1::StreamingCommitCursorResponse>>
CursorServiceLogging::AsyncStreamingCommitCursor(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  using LoggingStream =
      ::google::cloud::internal::AsyncStreamingReadWriteRpcLogging<
          google::cloud::pubsublite::v1::StreamingCommitCursorRequest,
          google::cloud::pubsublite::v1::StreamingCommitCursorResponse>;

  auto request_id = google::cloud::internal::RequestIdForLogging();
  GCP_LOG(DEBUG) << __func__ << "(" << request_id << ")";
  auto stream = child_->AsyncStreamingCommitCursor(cq, std::move(context));
  if (components_.count("rpc-streams") > 0) {
    stream = absl::make_unique<LoggingStream>(
        std::move(stream), tracing_options_, std::move(request_id));
  }
  return stream;
}

StatusOr<google::cloud::pubsublite::v1::CommitCursorResponse>
CursorServiceLogging::CommitCursor(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::CommitCursorRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::pubsublite::v1::CommitCursorRequest const& request) {
        return child_->CommitCursor(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::pubsublite::v1::ListPartitionCursorsResponse>
CursorServiceLogging::ListPartitionCursors(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListPartitionCursorsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::ListPartitionCursorsRequest const&
                 request) {
        return child_->ListPartitionCursors(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google
