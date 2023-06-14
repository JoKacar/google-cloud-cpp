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
// source: google/iam/v2/policy.proto

#include "google/cloud/iam/v2/internal/policies_connection_impl.h"
#include "google/cloud/iam/v2/internal/policies_option_defaults.h"
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
namespace iam_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PoliciesConnectionImpl::PoliciesConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<iam_v2_internal::PoliciesStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      PoliciesConnection::options())) {}

StreamRange<google::iam::v2::Policy> PoliciesConnectionImpl::ListPolicies(
    google::iam::v2::ListPoliciesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<iam_v2::PoliciesRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListPolicies(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::iam::v2::Policy>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::iam::v2::ListPoliciesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::iam::v2::ListPoliciesRequest const& request) {
              return stub->ListPolicies(context, request);
            },
            r, function_name);
      },
      [](google::iam::v2::ListPoliciesResponse r) {
        std::vector<google::iam::v2::Policy> result(r.policies().size());
        auto& messages = *r.mutable_policies();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::iam::v2::Policy> PoliciesConnectionImpl::GetPolicy(
    google::iam::v2::GetPolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v2::GetPolicyRequest const& request) {
        return stub_->GetPolicy(context, request);
      },
      request, __func__);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesConnectionImpl::CreatePolicy(
    google::iam::v2::CreatePolicyRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::iam::v2::Policy>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::iam::v2::CreatePolicyRequest const& request) {
        return stub->AsyncCreatePolicy(cq, std::move(context), request);
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
          google::iam::v2::Policy>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreatePolicy(request), polling_policy(), __func__);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesConnectionImpl::UpdatePolicy(
    google::iam::v2::UpdatePolicyRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::iam::v2::Policy>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::iam::v2::UpdatePolicyRequest const& request) {
        return stub->AsyncUpdatePolicy(cq, std::move(context), request);
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
          google::iam::v2::Policy>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdatePolicy(request), polling_policy(), __func__);
}

future<StatusOr<google::iam::v2::Policy>> PoliciesConnectionImpl::DeletePolicy(
    google::iam::v2::DeletePolicyRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::iam::v2::Policy>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::iam::v2::DeletePolicyRequest const& request) {
        return stub->AsyncDeletePolicy(cq, std::move(context), request);
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
          google::iam::v2::Policy>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeletePolicy(request), polling_policy(), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
