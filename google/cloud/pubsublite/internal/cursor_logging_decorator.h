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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_INTERNAL_CURSOR_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_INTERNAL_CURSOR_LOGGING_DECORATOR_H

#include "google/cloud/pubsublite/internal/cursor_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CursorServiceLogging : public CursorServiceStub {
 public:
  ~CursorServiceLogging() override = default;
  CursorServiceLogging(std::shared_ptr<CursorServiceStub> child,
                       TracingOptions tracing_options,
                       std::set<std::string> components);

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::pubsublite::v1::StreamingCommitCursorRequest,
      google::cloud::pubsublite::v1::StreamingCommitCursorResponse>>
  AsyncStreamingCommitCursor(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context) override;

  StatusOr<google::cloud::pubsublite::v1::CommitCursorResponse> CommitCursor(
      grpc::ClientContext& context,
      google::cloud::pubsublite::v1::CommitCursorRequest const& request)
      override;

  StatusOr<google::cloud::pubsublite::v1::ListPartitionCursorsResponse>
  ListPartitionCursors(
      grpc::ClientContext& context,
      google::cloud::pubsublite::v1::ListPartitionCursorsRequest const& request)
      override;

 private:
  std::shared_ptr<CursorServiceStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // CursorServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_INTERNAL_CURSOR_LOGGING_DECORATOR_H
