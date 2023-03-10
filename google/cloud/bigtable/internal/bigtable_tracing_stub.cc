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
// source: google/bigtable/v2/bigtable.proto

#include "google/cloud/bigtable/internal/bigtable_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace bigtable_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BigtableTracingStub::BigtableTracingStub(std::shared_ptr<BigtableStub> child)
    : child_(std::move(child)) {}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::ReadRowsResponse>>
BigtableTracingStub::ReadRows(
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::ReadRowsRequest const& request) {
  return child_->ReadRows(std::move(context), request);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::SampleRowKeysResponse>>
BigtableTracingStub::SampleRowKeys(
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::SampleRowKeysRequest const& request) {
  return child_->SampleRowKeys(std::move(context), request);
}

StatusOr<google::bigtable::v2::MutateRowResponse>
BigtableTracingStub::MutateRow(
    grpc::ClientContext& context,
    google::bigtable::v2::MutateRowRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.bigtable.v2.Bigtable", "MutateRow");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->MutateRow(context, request));
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::MutateRowsResponse>>
BigtableTracingStub::MutateRows(
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::MutateRowsRequest const& request) {
  return child_->MutateRows(std::move(context), request);
}

StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>
BigtableTracingStub::CheckAndMutateRow(
    grpc::ClientContext& context,
    google::bigtable::v2::CheckAndMutateRowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.bigtable.v2.Bigtable",
                                     "CheckAndMutateRow");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CheckAndMutateRow(context, request));
}

StatusOr<google::bigtable::v2::PingAndWarmResponse>
BigtableTracingStub::PingAndWarm(
    grpc::ClientContext& context,
    google::bigtable::v2::PingAndWarmRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.bigtable.v2.Bigtable", "PingAndWarm");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->PingAndWarm(context, request));
}

StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>
BigtableTracingStub::ReadModifyWriteRow(
    grpc::ClientContext& context,
    google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.bigtable.v2.Bigtable",
                                     "ReadModifyWriteRow");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ReadModifyWriteRow(context, request));
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::ReadRowsResponse>>
BigtableTracingStub::AsyncReadRows(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::ReadRowsRequest const& request) {
  return child_->AsyncReadRows(cq, std::move(context), request);
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::SampleRowKeysResponse>>
BigtableTracingStub::AsyncSampleRowKeys(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::SampleRowKeysRequest const& request) {
  return child_->AsyncSampleRowKeys(cq, std::move(context), request);
}

future<StatusOr<google::bigtable::v2::MutateRowResponse>>
BigtableTracingStub::AsyncMutateRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::MutateRowRequest const& request) {
  return child_->AsyncMutateRow(cq, std::move(context), request);
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::MutateRowsResponse>>
BigtableTracingStub::AsyncMutateRows(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::MutateRowsRequest const& request) {
  return child_->AsyncMutateRows(cq, std::move(context), request);
}

future<StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>>
BigtableTracingStub::AsyncCheckAndMutateRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::CheckAndMutateRowRequest const& request) {
  return child_->AsyncCheckAndMutateRow(cq, std::move(context), request);
}

future<StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>>
BigtableTracingStub::AsyncReadModifyWriteRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
  return child_->AsyncReadModifyWriteRow(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<BigtableStub> MakeBigtableTracingStub(
    std::shared_ptr<BigtableStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<BigtableTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_internal
}  // namespace cloud
}  // namespace google
