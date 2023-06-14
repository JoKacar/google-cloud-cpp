// Copyright 2023 Google LLC
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
// source: google/cloud/tpu/v2/cloud_tpu.proto

#include "google/cloud/tpu/v2/internal/tpu_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/tpu/v2/cloud_tpu.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace tpu_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TpuLogging::TpuLogging(std::shared_ptr<TpuStub> child,
                       TracingOptions tracing_options,
                       std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::tpu::v2::ListNodesResponse> TpuLogging::ListNodes(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::ListNodesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::tpu::v2::ListNodesRequest const& request) {
        return child_->ListNodes(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::tpu::v2::Node> TpuLogging::GetNode(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::GetNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::tpu::v2::GetNodeRequest const& request) {
        return child_->GetNode(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> TpuLogging::AsyncCreateNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v2::CreateNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::tpu::v2::CreateNodeRequest const& request) {
        return child_->AsyncCreateNode(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> TpuLogging::AsyncDeleteNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v2::DeleteNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::tpu::v2::DeleteNodeRequest const& request) {
        return child_->AsyncDeleteNode(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> TpuLogging::AsyncStopNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v2::StopNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::tpu::v2::StopNodeRequest const& request) {
        return child_->AsyncStopNode(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> TpuLogging::AsyncStartNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v2::StartNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::tpu::v2::StartNodeRequest const& request) {
        return child_->AsyncStartNode(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> TpuLogging::AsyncUpdateNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::tpu::v2::UpdateNodeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::tpu::v2::UpdateNodeRequest const& request) {
        return child_->AsyncUpdateNode(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::tpu::v2::GenerateServiceIdentityResponse>
TpuLogging::GenerateServiceIdentity(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::GenerateServiceIdentityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::tpu::v2::GenerateServiceIdentityRequest const&
                 request) {
        return child_->GenerateServiceIdentity(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::tpu::v2::ListAcceleratorTypesResponse>
TpuLogging::ListAcceleratorTypes(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::ListAcceleratorTypesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::tpu::v2::ListAcceleratorTypesRequest const& request) {
        return child_->ListAcceleratorTypes(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::tpu::v2::AcceleratorType>
TpuLogging::GetAcceleratorType(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::GetAcceleratorTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::tpu::v2::GetAcceleratorTypeRequest const& request) {
        return child_->GetAcceleratorType(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::tpu::v2::ListRuntimeVersionsResponse>
TpuLogging::ListRuntimeVersions(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::ListRuntimeVersionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::tpu::v2::ListRuntimeVersionsRequest const& request) {
        return child_->ListRuntimeVersions(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::tpu::v2::RuntimeVersion> TpuLogging::GetRuntimeVersion(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::GetRuntimeVersionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::tpu::v2::GetRuntimeVersionRequest const& request) {
        return child_->GetRuntimeVersion(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::tpu::v2::GetGuestAttributesResponse>
TpuLogging::GetGuestAttributes(
    grpc::ClientContext& context,
    google::cloud::tpu::v2::GetGuestAttributesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::tpu::v2::GetGuestAttributesRequest const& request) {
        return child_->GetGuestAttributes(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>> TpuLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> TpuLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
