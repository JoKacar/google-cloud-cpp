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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_INTERNAL_PARTITION_ASSIGNMENT_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_INTERNAL_PARTITION_ASSIGNMENT_STUB_H

#include "google/cloud/async_streaming_read_write_rpc.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/pubsublite/v1/subscriber.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PartitionAssignmentServiceStub {
 public:
  virtual ~PartitionAssignmentServiceStub() = 0;

  virtual std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::pubsublite::v1::PartitionAssignmentRequest,
      google::cloud::pubsublite::v1::PartitionAssignment>>
  AsyncAssignPartitions(google::cloud::CompletionQueue const& cq,
                        std::shared_ptr<grpc::ClientContext> context) = 0;
};

class DefaultPartitionAssignmentServiceStub
    : public PartitionAssignmentServiceStub {
 public:
  explicit DefaultPartitionAssignmentServiceStub(
      std::unique_ptr<google::cloud::pubsublite::v1::
                          PartitionAssignmentService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::pubsublite::v1::PartitionAssignmentRequest,
      google::cloud::pubsublite::v1::PartitionAssignment>>
  AsyncAssignPartitions(google::cloud::CompletionQueue const& cq,
                        std::shared_ptr<grpc::ClientContext> context) override;

 private:
  std::unique_ptr<
      google::cloud::pubsublite::v1::PartitionAssignmentService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_INTERNAL_PARTITION_ASSIGNMENT_STUB_H
