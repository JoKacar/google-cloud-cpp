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

#include "google/cloud/bigtable/internal/bigtable_logging_decorator.h"
#include "google/cloud/internal/async_streaming_read_rpc_logging.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/internal/streaming_read_rpc_logging.h"
#include "google/cloud/status_or.h"
#include <google/bigtable/v2/bigtable.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace bigtable_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigtableLogging::BigtableLogging(std::shared_ptr<BigtableStub> child,
                                 TracingOptions tracing_options,
                                 std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::ReadRowsResponse>>
BigtableLogging::ReadRows(
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::ReadRowsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](std::shared_ptr<grpc::ClientContext> context,
             google::bigtable::v2::ReadRowsRequest const& request)
          -> std::unique_ptr<google::cloud::internal::StreamingReadRpc<
              google::bigtable::v2::ReadRowsResponse>> {
        auto stream = child_->ReadRows(std::move(context), request);
        if (components_.count("rpc-streams") > 0) {
          stream =
              std::make_unique<google::cloud::internal::StreamingReadRpcLogging<
                  google::bigtable::v2::ReadRowsResponse>>(
                  std::move(stream), tracing_options_,
                  google::cloud::internal::RequestIdForLogging());
        }
        return stream;
      },
      std::move(context), request, __func__, tracing_options_);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::SampleRowKeysResponse>>
BigtableLogging::SampleRowKeys(
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::SampleRowKeysRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](std::shared_ptr<grpc::ClientContext> context,
             google::bigtable::v2::SampleRowKeysRequest const& request)
          -> std::unique_ptr<google::cloud::internal::StreamingReadRpc<
              google::bigtable::v2::SampleRowKeysResponse>> {
        auto stream = child_->SampleRowKeys(std::move(context), request);
        if (components_.count("rpc-streams") > 0) {
          stream =
              std::make_unique<google::cloud::internal::StreamingReadRpcLogging<
                  google::bigtable::v2::SampleRowKeysResponse>>(
                  std::move(stream), tracing_options_,
                  google::cloud::internal::RequestIdForLogging());
        }
        return stream;
      },
      std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::bigtable::v2::MutateRowResponse> BigtableLogging::MutateRow(
    grpc::ClientContext& context,
    google::bigtable::v2::MutateRowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::bigtable::v2::MutateRowRequest const& request) {
        return child_->MutateRow(context, request);
      },
      context, request, __func__, tracing_options_);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::MutateRowsResponse>>
BigtableLogging::MutateRows(
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::MutateRowsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](std::shared_ptr<grpc::ClientContext> context,
             google::bigtable::v2::MutateRowsRequest const& request)
          -> std::unique_ptr<google::cloud::internal::StreamingReadRpc<
              google::bigtable::v2::MutateRowsResponse>> {
        auto stream = child_->MutateRows(std::move(context), request);
        if (components_.count("rpc-streams") > 0) {
          stream =
              std::make_unique<google::cloud::internal::StreamingReadRpcLogging<
                  google::bigtable::v2::MutateRowsResponse>>(
                  std::move(stream), tracing_options_,
                  google::cloud::internal::RequestIdForLogging());
        }
        return stream;
      },
      std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>
BigtableLogging::CheckAndMutateRow(
    grpc::ClientContext& context,
    google::bigtable::v2::CheckAndMutateRowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::bigtable::v2::CheckAndMutateRowRequest const& request) {
        return child_->CheckAndMutateRow(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::v2::PingAndWarmResponse>
BigtableLogging::PingAndWarm(
    grpc::ClientContext& context,
    google::bigtable::v2::PingAndWarmRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::bigtable::v2::PingAndWarmRequest const& request) {
        return child_->PingAndWarm(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>
BigtableLogging::ReadModifyWriteRow(
    grpc::ClientContext& context,
    google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
        return child_->ReadModifyWriteRow(context, request);
      },
      context, request, __func__, tracing_options_);
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::ReadRowsResponse>>
BigtableLogging::AsyncReadRows(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::ReadRowsRequest const& request) {
  using LoggingStream = ::google::cloud::internal::AsyncStreamingReadRpcLogging<
      google::bigtable::v2::ReadRowsResponse>;

  auto request_id = google::cloud::internal::RequestIdForLogging();
  GCP_LOG(DEBUG) << __func__ << "(" << request_id << ")";
  auto stream = child_->AsyncReadRows(cq, std::move(context), request);
  if (components_.count("rpc-streams") > 0) {
    stream = std::make_unique<LoggingStream>(
        std::move(stream), tracing_options_, std::move(request_id));
  }
  return stream;
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::SampleRowKeysResponse>>
BigtableLogging::AsyncSampleRowKeys(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::SampleRowKeysRequest const& request) {
  using LoggingStream = ::google::cloud::internal::AsyncStreamingReadRpcLogging<
      google::bigtable::v2::SampleRowKeysResponse>;

  auto request_id = google::cloud::internal::RequestIdForLogging();
  GCP_LOG(DEBUG) << __func__ << "(" << request_id << ")";
  auto stream = child_->AsyncSampleRowKeys(cq, std::move(context), request);
  if (components_.count("rpc-streams") > 0) {
    stream = std::make_unique<LoggingStream>(
        std::move(stream), tracing_options_, std::move(request_id));
  }
  return stream;
}

future<StatusOr<google::bigtable::v2::MutateRowResponse>>
BigtableLogging::AsyncMutateRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::MutateRowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::bigtable::v2::MutateRowRequest const& request) {
        return child_->AsyncMutateRow(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::MutateRowsResponse>>
BigtableLogging::AsyncMutateRows(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::MutateRowsRequest const& request) {
  using LoggingStream = ::google::cloud::internal::AsyncStreamingReadRpcLogging<
      google::bigtable::v2::MutateRowsResponse>;

  auto request_id = google::cloud::internal::RequestIdForLogging();
  GCP_LOG(DEBUG) << __func__ << "(" << request_id << ")";
  auto stream = child_->AsyncMutateRows(cq, std::move(context), request);
  if (components_.count("rpc-streams") > 0) {
    stream = std::make_unique<LoggingStream>(
        std::move(stream), tracing_options_, std::move(request_id));
  }
  return stream;
}

future<StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>>
BigtableLogging::AsyncCheckAndMutateRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::CheckAndMutateRowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::bigtable::v2::CheckAndMutateRowRequest const& request) {
        return child_->AsyncCheckAndMutateRow(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>>
BigtableLogging::AsyncReadModifyWriteRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
        return child_->AsyncReadModifyWriteRow(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
