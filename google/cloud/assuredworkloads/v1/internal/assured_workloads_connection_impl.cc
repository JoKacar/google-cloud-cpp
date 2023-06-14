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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#include "google/cloud/assuredworkloads/v1/internal/assured_workloads_connection_impl.h"
#include "google/cloud/assuredworkloads/v1/internal/assured_workloads_option_defaults.h"
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
namespace assuredworkloads_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AssuredWorkloadsServiceConnectionImpl::AssuredWorkloadsServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<assuredworkloads_v1_internal::AssuredWorkloadsServiceStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), AssuredWorkloadsServiceConnection::options())) {}

future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
AssuredWorkloadsServiceConnectionImpl::CreateWorkload(
    google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::assuredworkloads::v1::Workload>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::assuredworkloads::v1::CreateWorkloadRequest const&
                 request) {
        return stub->AsyncCreateWorkload(cq, std::move(context), request);
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
          google::cloud::assuredworkloads::v1::Workload>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateWorkload(request), polling_policy(),
      __func__);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceConnectionImpl::UpdateWorkload(
    google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateWorkload(request),
      [this](grpc::ClientContext& context,
             google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const&
                 request) { return stub_->UpdateWorkload(context, request); },
      request, __func__);
}

StatusOr<google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse>
AssuredWorkloadsServiceConnectionImpl::RestrictAllowedResources(
    google::cloud::assuredworkloads::v1::RestrictAllowedResourcesRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->RestrictAllowedResources(request),
      [this](grpc::ClientContext& context,
             google::cloud::assuredworkloads::v1::
                 RestrictAllowedResourcesRequest const& request) {
        return stub_->RestrictAllowedResources(context, request);
      },
      request, __func__);
}

Status AssuredWorkloadsServiceConnectionImpl::DeleteWorkload(
    google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteWorkload(request),
      [this](grpc::ClientContext& context,
             google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const&
                 request) { return stub_->DeleteWorkload(context, request); },
      request, __func__);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceConnectionImpl::GetWorkload(
    google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetWorkload(request),
      [this](grpc::ClientContext& context,
             google::cloud::assuredworkloads::v1::GetWorkloadRequest const&
                 request) { return stub_->GetWorkload(context, request); },
      request, __func__);
}

StreamRange<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceConnectionImpl::ListWorkloads(
    google::cloud::assuredworkloads::v1::ListWorkloadsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<
      assuredworkloads_v1::AssuredWorkloadsServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListWorkloads(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::assuredworkloads::v1::Workload>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::assuredworkloads::v1::ListWorkloadsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::assuredworkloads::v1::ListWorkloadsRequest const&
                    request) { return stub->ListWorkloads(context, request); },
            r, function_name);
      },
      [](google::cloud::assuredworkloads::v1::ListWorkloadsResponse r) {
        std::vector<google::cloud::assuredworkloads::v1::Workload> result(
            r.workloads().size());
        auto& messages = *r.mutable_workloads();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::assuredworkloads::v1::Violation>
AssuredWorkloadsServiceConnectionImpl::ListViolations(
    google::cloud::assuredworkloads::v1::ListViolationsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<
      assuredworkloads_v1::AssuredWorkloadsServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListViolations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::assuredworkloads::v1::Violation>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::assuredworkloads::v1::ListViolationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::assuredworkloads::v1::
                       ListViolationsRequest const& request) {
              return stub->ListViolations(context, request);
            },
            r, function_name);
      },
      [](google::cloud::assuredworkloads::v1::ListViolationsResponse r) {
        std::vector<google::cloud::assuredworkloads::v1::Violation> result(
            r.violations().size());
        auto& messages = *r.mutable_violations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::assuredworkloads::v1::Violation>
AssuredWorkloadsServiceConnectionImpl::GetViolation(
    google::cloud::assuredworkloads::v1::GetViolationRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetViolation(request),
      [this](grpc::ClientContext& context,
             google::cloud::assuredworkloads::v1::GetViolationRequest const&
                 request) { return stub_->GetViolation(context, request); },
      request, __func__);
}

StatusOr<google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse>
AssuredWorkloadsServiceConnectionImpl::AcknowledgeViolation(
    google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->AcknowledgeViolation(request),
      [this](grpc::ClientContext& context,
             google::cloud::assuredworkloads::v1::
                 AcknowledgeViolationRequest const& request) {
        return stub_->AcknowledgeViolation(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
