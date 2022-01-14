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
// source: generator/integration_tests/test.proto

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_INTERNAL_GOLDEN_KITCHEN_SINK_STUB_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_INTERNAL_GOLDEN_KITCHEN_SINK_STUB_H

#include "google/cloud/internal/async_read_write_stream_impl.h"
#include "google/cloud/internal/streaming_read_rpc.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <generator/integration_tests/backup.pb.h>
#include <generator/integration_tests/test.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace golden_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GoldenKitchenSinkStub {
 public:
  virtual ~GoldenKitchenSinkStub() = 0;

  virtual StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse> GenerateAccessToken(
    grpc::ClientContext& context,
    google::test::admin::database::v1::GenerateAccessTokenRequest const& request) = 0;

  virtual StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse> GenerateIdToken(
    grpc::ClientContext& context,
    google::test::admin::database::v1::GenerateIdTokenRequest const& request) = 0;

  virtual StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse> WriteLogEntries(
    grpc::ClientContext& context,
    google::test::admin::database::v1::WriteLogEntriesRequest const& request) = 0;

  virtual StatusOr<google::test::admin::database::v1::ListLogsResponse> ListLogs(
    grpc::ClientContext& context,
    google::test::admin::database::v1::ListLogsRequest const& request) = 0;

  virtual std::unique_ptr<internal::StreamingReadRpc<google::test::admin::database::v1::TailLogEntriesResponse>>
  TailLogEntries(
    std::unique_ptr<grpc::ClientContext> context,
    google::test::admin::database::v1::TailLogEntriesRequest const& request) = 0;

  virtual StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse> ListServiceAccountKeys(
    grpc::ClientContext& context,
    google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) = 0;

  virtual Status DoNothing(
    grpc::ClientContext& context,
    google::protobuf::Empty const& request) = 0;

  using AsyncAppendRowsStream = ::google::cloud::internal::AsyncStreamingReadWriteRpc<google::test::admin::database::v1::AppendRowsRequest, google::test::admin::database::v1::AppendRowsResponse>;
  virtual std::unique_ptr<AsyncAppendRowsStream> AsyncAppendRows(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context) = 0;

};

class DefaultGoldenKitchenSinkStub : public GoldenKitchenSinkStub {
 public:
  explicit DefaultGoldenKitchenSinkStub(
      std::unique_ptr<google::test::admin::database::v1::GoldenKitchenSink::StubInterface> grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(
    grpc::ClientContext& client_context,
    google::test::admin::database::v1::GenerateAccessTokenRequest const& request) override;

  StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse>
  GenerateIdToken(
    grpc::ClientContext& client_context,
    google::test::admin::database::v1::GenerateIdTokenRequest const& request) override;

  StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse>
  WriteLogEntries(
    grpc::ClientContext& client_context,
    google::test::admin::database::v1::WriteLogEntriesRequest const& request) override;

  StatusOr<google::test::admin::database::v1::ListLogsResponse>
  ListLogs(
    grpc::ClientContext& client_context,
    google::test::admin::database::v1::ListLogsRequest const& request) override;

  std::unique_ptr<internal::StreamingReadRpc<google::test::admin::database::v1::TailLogEntriesResponse>>
  TailLogEntries(
    std::unique_ptr<grpc::ClientContext> client_context,
    google::test::admin::database::v1::TailLogEntriesRequest const& request) override;

  StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse>
  ListServiceAccountKeys(
    grpc::ClientContext& client_context,
    google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) override;

  Status
  DoNothing(
    grpc::ClientContext& client_context,
    google::protobuf::Empty const& request) override;

  std::unique_ptr<AsyncAppendRowsStream> AsyncAppendRows(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context) override;

 private:
  std::unique_ptr<google::test::admin::database::v1::GoldenKitchenSink::StubInterface> grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_INTERNAL_GOLDEN_KITCHEN_SINK_STUB_H
