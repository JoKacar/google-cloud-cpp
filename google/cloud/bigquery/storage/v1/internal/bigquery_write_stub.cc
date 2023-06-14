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
// source: google/cloud/bigquery/storage/v1/storage.proto

#include "google/cloud/bigquery/storage/v1/internal/bigquery_write_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/internal/async_read_write_stream_impl.h"
#include "google/cloud/status_or.h"
#include <google/cloud/bigquery/storage/v1/storage.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace bigquery_storage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigQueryWriteStub::~BigQueryWriteStub() = default;

StatusOr<google::cloud::bigquery::storage::v1::WriteStream>
DefaultBigQueryWriteStub::CreateWriteStream(
    grpc::ClientContext& client_context,
    google::cloud::bigquery::storage::v1::CreateWriteStreamRequest const&
        request) {
  google::cloud::bigquery::storage::v1::WriteStream response;
  auto status =
      grpc_stub_->CreateWriteStream(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::bigquery::storage::v1::AppendRowsRequest,
    google::cloud::bigquery::storage::v1::AppendRowsResponse>>
DefaultBigQueryWriteStub::AsyncAppendRows(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  return google::cloud::internal::MakeStreamingReadWriteRpc<
      google::cloud::bigquery::storage::v1::AppendRowsRequest,
      google::cloud::bigquery::storage::v1::AppendRowsResponse>(
      cq, std::move(context),
      [this](grpc::ClientContext* context, grpc::CompletionQueue* cq) {
        return grpc_stub_->PrepareAsyncAppendRows(context, cq);
      });
}

StatusOr<google::cloud::bigquery::storage::v1::WriteStream>
DefaultBigQueryWriteStub::GetWriteStream(
    grpc::ClientContext& client_context,
    google::cloud::bigquery::storage::v1::GetWriteStreamRequest const&
        request) {
  google::cloud::bigquery::storage::v1::WriteStream response;
  auto status = grpc_stub_->GetWriteStream(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::storage::v1::FinalizeWriteStreamResponse>
DefaultBigQueryWriteStub::FinalizeWriteStream(
    grpc::ClientContext& client_context,
    google::cloud::bigquery::storage::v1::FinalizeWriteStreamRequest const&
        request) {
  google::cloud::bigquery::storage::v1::FinalizeWriteStreamResponse response;
  auto status =
      grpc_stub_->FinalizeWriteStream(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsResponse>
DefaultBigQueryWriteStub::BatchCommitWriteStreams(
    grpc::ClientContext& client_context,
    google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsRequest const&
        request) {
  google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsResponse
      response;
  auto status =
      grpc_stub_->BatchCommitWriteStreams(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::storage::v1::FlushRowsResponse>
DefaultBigQueryWriteStub::FlushRows(
    grpc::ClientContext& client_context,
    google::cloud::bigquery::storage::v1::FlushRowsRequest const& request) {
  google::cloud::bigquery::storage::v1::FlushRowsResponse response;
  auto status = grpc_stub_->FlushRows(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_storage_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
