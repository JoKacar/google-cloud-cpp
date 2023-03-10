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

#include "google/cloud/bigquery/storage/v1/internal/bigquery_read_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace bigquery_storage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BigQueryReadTracingStub::BigQueryReadTracingStub(
    std::shared_ptr<BigQueryReadStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::bigquery::storage::v1::ReadSession>
BigQueryReadTracingStub::CreateReadSession(
    grpc::ClientContext& context,
    google::cloud::bigquery::storage::v1::CreateReadSessionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.storage.v1.BigQueryRead", "CreateReadSession");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateReadSession(context, request));
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::bigquery::storage::v1::ReadRowsResponse>>
BigQueryReadTracingStub::ReadRows(
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::bigquery::storage::v1::ReadRowsRequest const& request) {
  return child_->ReadRows(std::move(context), request);
}

StatusOr<google::cloud::bigquery::storage::v1::SplitReadStreamResponse>
BigQueryReadTracingStub::SplitReadStream(
    grpc::ClientContext& context,
    google::cloud::bigquery::storage::v1::SplitReadStreamRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.storage.v1.BigQueryRead", "SplitReadStream");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SplitReadStream(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<BigQueryReadStub> MakeBigQueryReadTracingStub(
    std::shared_ptr<BigQueryReadStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<BigQueryReadTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_storage_v1_internal
}  // namespace cloud
}  // namespace google
