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
// source: google/cloud/bigquery/storage/v1/storage.proto

#include "google/cloud/bigquery/storage/v1/internal/bigquery_read_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "absl/memory/memory.h"
#include <google/cloud/bigquery/storage/v1/storage.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_storage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigQueryReadStub::~BigQueryReadStub() = default;

StatusOr<google::cloud::bigquery::storage::v1::ReadSession>
DefaultBigQueryReadStub::CreateReadSession(
    grpc::ClientContext& client_context,
    google::cloud::bigquery::storage::v1::CreateReadSessionRequest const&
        request) {
  google::cloud::bigquery::storage::v1::ReadSession response;
  auto status =
      grpc_stub_->CreateReadSession(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::bigquery::storage::v1::ReadRowsResponse>>
DefaultBigQueryReadStub::ReadRows(
    std::shared_ptr<grpc::ClientContext> client_context,
    google::cloud::bigquery::storage::v1::ReadRowsRequest const& request) {
  auto stream = grpc_stub_->ReadRows(client_context.get(), request);
  return absl::make_unique<google::cloud::internal::StreamingReadRpcImpl<
      google::cloud::bigquery::storage::v1::ReadRowsResponse>>(
      std::move(client_context), std::move(stream));
}

StatusOr<google::cloud::bigquery::storage::v1::SplitReadStreamResponse>
DefaultBigQueryReadStub::SplitReadStream(
    grpc::ClientContext& client_context,
    google::cloud::bigquery::storage::v1::SplitReadStreamRequest const&
        request) {
  google::cloud::bigquery::storage::v1::SplitReadStreamResponse response;
  auto status =
      grpc_stub_->SplitReadStream(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_storage_v1_internal
}  // namespace cloud
}  // namespace google
