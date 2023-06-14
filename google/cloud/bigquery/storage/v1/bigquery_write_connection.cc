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

#include "google/cloud/bigquery/storage/v1/bigquery_write_connection.h"
#include "google/cloud/bigquery/storage/v1/bigquery_write_options.h"
#include "google/cloud/bigquery/storage/v1/internal/bigquery_write_connection_impl.h"
#include "google/cloud/bigquery/storage/v1/internal/bigquery_write_option_defaults.h"
#include "google/cloud/bigquery/storage/v1/internal/bigquery_write_stub_factory.h"
#include "google/cloud/bigquery/storage/v1/internal/bigquery_write_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace bigquery_storage_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigQueryWriteConnection::~BigQueryWriteConnection() = default;

StatusOr<google::cloud::bigquery::storage::v1::WriteStream>
BigQueryWriteConnection::CreateWriteStream(
    google::cloud::bigquery::storage::v1::CreateWriteStreamRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::bigquery::storage::v1::AppendRowsRequest,
    google::cloud::bigquery::storage::v1::AppendRowsResponse>>
BigQueryWriteConnection::AsyncAppendRows() {
  return std::make_unique<
      ::google::cloud::internal::AsyncStreamingReadWriteRpcError<
          google::cloud::bigquery::storage::v1::AppendRowsRequest,
          google::cloud::bigquery::storage::v1::AppendRowsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::bigquery::storage::v1::WriteStream>
BigQueryWriteConnection::GetWriteStream(
    google::cloud::bigquery::storage::v1::GetWriteStreamRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::bigquery::storage::v1::FinalizeWriteStreamResponse>
BigQueryWriteConnection::FinalizeWriteStream(
    google::cloud::bigquery::storage::v1::FinalizeWriteStreamRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsResponse>
BigQueryWriteConnection::BatchCommitWriteStreams(
    google::cloud::bigquery::storage::v1::
        BatchCommitWriteStreamsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::bigquery::storage::v1::FlushRowsResponse>
BigQueryWriteConnection::FlushRows(
    google::cloud::bigquery::storage::v1::FlushRowsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<BigQueryWriteConnection> MakeBigQueryWriteConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 BigQueryWritePolicyOptionList>(options,
                                                                __func__);
  options = bigquery_storage_v1_internal::BigQueryWriteDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = bigquery_storage_v1_internal::CreateDefaultBigQueryWriteStub(
      background->cq(), options);
  return bigquery_storage_v1_internal::MakeBigQueryWriteTracingConnection(
      std::make_shared<
          bigquery_storage_v1_internal::BigQueryWriteConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_storage_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
