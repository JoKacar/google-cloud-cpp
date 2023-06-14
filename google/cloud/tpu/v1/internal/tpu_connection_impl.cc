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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#include "google/cloud/tpu/v1/internal/tpu_connection_impl.h"
#include "google/cloud/tpu/v1/internal/tpu_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace tpu_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TpuConnectionImpl::TpuConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<tpu_v1_internal::TpuStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      TpuConnection::options())) {}

StreamRange<google::cloud::tpu::v1::Node> TpuConnectionImpl::ListNodes(
    google::cloud::tpu::v1::ListNodesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<tpu_v1::TpuRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListNodes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::tpu::v1::Node>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::tpu::v1::ListNodesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::tpu::v1::ListNodesRequest const& request) {
              return stub->ListNodes(context, request);
            },
            r, function_name);
      },
      [](google::cloud::tpu::v1::ListNodesResponse r) {
        std::vector<google::cloud::tpu::v1::Node> result(r.nodes().size());
        auto& messages = *r.mutable_nodes();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::tpu::v1::Node> TpuConnectionImpl::GetNode(
    google::cloud::tpu::v1::GetNodeRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->GetNode(request),
      [this](grpc::ClientContext& context,
             google::cloud::tpu::v1::GetNodeRequest const& request) {
        return stub_->GetNode(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuConnectionImpl::CreateNode(
    google::cloud::tpu::v1::CreateNodeRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::tpu::v1::Node>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::tpu::v1::CreateNodeRequest const& request) {
        return stub->AsyncCreateNode(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::tpu::v1::Node>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateNode(request), polling_policy(), __func__);
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuConnectionImpl::DeleteNode(
    google::cloud::tpu::v1::DeleteNodeRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::tpu::v1::Node>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::tpu::v1::DeleteNodeRequest const& request) {
        return stub->AsyncDeleteNode(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::tpu::v1::Node>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteNode(request), polling_policy(), __func__);
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuConnectionImpl::ReimageNode(
    google::cloud::tpu::v1::ReimageNodeRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::tpu::v1::Node>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::tpu::v1::ReimageNodeRequest const& request) {
        return stub->AsyncReimageNode(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::tpu::v1::Node>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->ReimageNode(request), polling_policy(), __func__);
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuConnectionImpl::StopNode(
    google::cloud::tpu::v1::StopNodeRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::tpu::v1::Node>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::tpu::v1::StopNodeRequest const& request) {
        return stub->AsyncStopNode(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::tpu::v1::Node>,
      retry_policy(), backoff_policy(), idempotency_policy()->StopNode(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::tpu::v1::Node>> TpuConnectionImpl::StartNode(
    google::cloud::tpu::v1::StartNodeRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::tpu::v1::Node>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::tpu::v1::StartNodeRequest const& request) {
        return stub->AsyncStartNode(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::tpu::v1::Node>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->StartNode(request), polling_policy(), __func__);
}

StreamRange<google::cloud::tpu::v1::TensorFlowVersion>
TpuConnectionImpl::ListTensorFlowVersions(
    google::cloud::tpu::v1::ListTensorFlowVersionsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<tpu_v1::TpuRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListTensorFlowVersions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::tpu::v1::TensorFlowVersion>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::tpu::v1::ListTensorFlowVersionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::tpu::v1::ListTensorFlowVersionsRequest const&
                       request) {
              return stub->ListTensorFlowVersions(context, request);
            },
            r, function_name);
      },
      [](google::cloud::tpu::v1::ListTensorFlowVersionsResponse r) {
        std::vector<google::cloud::tpu::v1::TensorFlowVersion> result(
            r.tensorflow_versions().size());
        auto& messages = *r.mutable_tensorflow_versions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::tpu::v1::TensorFlowVersion>
TpuConnectionImpl::GetTensorFlowVersion(
    google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetTensorFlowVersion(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request) {
        return stub_->GetTensorFlowVersion(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::tpu::v1::AcceleratorType>
TpuConnectionImpl::ListAcceleratorTypes(
    google::cloud::tpu::v1::ListAcceleratorTypesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<tpu_v1::TpuRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListAcceleratorTypes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::tpu::v1::AcceleratorType>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::tpu::v1::ListAcceleratorTypesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::tpu::v1::ListAcceleratorTypesRequest const&
                       request) {
              return stub->ListAcceleratorTypes(context, request);
            },
            r, function_name);
      },
      [](google::cloud::tpu::v1::ListAcceleratorTypesResponse r) {
        std::vector<google::cloud::tpu::v1::AcceleratorType> result(
            r.accelerator_types().size());
        auto& messages = *r.mutable_accelerator_types();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::tpu::v1::AcceleratorType>
TpuConnectionImpl::GetAcceleratorType(
    google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetAcceleratorType(request),
      [this](grpc::ClientContext& context,
             google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request) {
        return stub_->GetAcceleratorType(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
