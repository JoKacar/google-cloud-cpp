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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/internal/versions_connection_impl.h"
#include "google/cloud/appengine/v1/internal/versions_option_defaults.h"
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
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VersionsConnectionImpl::VersionsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<appengine_v1_internal::VersionsStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      VersionsConnection::options())) {}

StreamRange<google::appengine::v1::Version>
VersionsConnectionImpl::ListVersions(
    google::appengine::v1::ListVersionsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<appengine_v1::VersionsRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListVersions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::appengine::v1::Version>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::appengine::v1::ListVersionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::appengine::v1::ListVersionsRequest const& request) {
              return stub->ListVersions(context, request);
            },
            r, function_name);
      },
      [](google::appengine::v1::ListVersionsResponse r) {
        std::vector<google::appengine::v1::Version> result(r.versions().size());
        auto& messages = *r.mutable_versions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::appengine::v1::Version> VersionsConnectionImpl::GetVersion(
    google::appengine::v1::GetVersionRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetVersion(request),
      [this](grpc::ClientContext& context,
             google::appengine::v1::GetVersionRequest const& request) {
        return stub_->GetVersion(context, request);
      },
      request, __func__);
}

future<StatusOr<google::appengine::v1::Version>>
VersionsConnectionImpl::CreateVersion(
    google::appengine::v1::CreateVersionRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::appengine::v1::Version>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::appengine::v1::CreateVersionRequest const& request) {
        return stub->AsyncCreateVersion(cq, std::move(context), request);
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
          google::appengine::v1::Version>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateVersion(request), polling_policy(), __func__);
}

future<StatusOr<google::appengine::v1::Version>>
VersionsConnectionImpl::UpdateVersion(
    google::appengine::v1::UpdateVersionRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::appengine::v1::Version>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::appengine::v1::UpdateVersionRequest const& request) {
        return stub->AsyncUpdateVersion(cq, std::move(context), request);
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
          google::appengine::v1::Version>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateVersion(request), polling_policy(), __func__);
}

future<StatusOr<google::appengine::v1::OperationMetadataV1>>
VersionsConnectionImpl::DeleteVersion(
    google::appengine::v1::DeleteVersionRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::appengine::v1::OperationMetadataV1>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::appengine::v1::DeleteVersionRequest const& request) {
        return stub->AsyncDeleteVersion(cq, std::move(context), request);
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
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::appengine::v1::OperationMetadataV1>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteVersion(request), polling_policy(), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
