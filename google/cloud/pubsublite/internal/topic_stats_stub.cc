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

#include "google/cloud/pubsublite/internal/topic_stats_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/pubsublite/v1/topic_stats.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TopicStatsServiceStub::~TopicStatsServiceStub() = default;

StatusOr<google::cloud::pubsublite::v1::ComputeMessageStatsResponse>
DefaultTopicStatsServiceStub::ComputeMessageStats(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::ComputeMessageStatsRequest const& request) {
  google::cloud::pubsublite::v1::ComputeMessageStatsResponse response;
  auto status =
      grpc_stub_->ComputeMessageStats(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::ComputeHeadCursorResponse>
DefaultTopicStatsServiceStub::ComputeHeadCursor(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::ComputeHeadCursorRequest const& request) {
  google::cloud::pubsublite::v1::ComputeHeadCursorResponse response;
  auto status =
      grpc_stub_->ComputeHeadCursor(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::ComputeTimeCursorResponse>
DefaultTopicStatsServiceStub::ComputeTimeCursor(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::ComputeTimeCursorRequest const& request) {
  google::cloud::pubsublite::v1::ComputeTimeCursorResponse response;
  auto status =
      grpc_stub_->ComputeTimeCursor(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
