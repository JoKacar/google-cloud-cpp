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
// source: google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto

#include "google/cloud/beyondcorp/appconnectors/v1/internal/app_connectors_connection_impl.h"
#include "google/cloud/beyondcorp/appconnectors/v1/internal/app_connectors_option_defaults.h"
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
namespace beyondcorp_appconnectors_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppConnectorsServiceConnectionImpl::AppConnectorsServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<
        beyondcorp_appconnectors_v1_internal::AppConnectorsServiceStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), AppConnectorsServiceConnection::options())) {}

StreamRange<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
AppConnectorsServiceConnectionImpl::ListAppConnectors(
    google::cloud::beyondcorp::appconnectors::v1::ListAppConnectorsRequest
        request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<
      beyondcorp_appconnectors_v1::AppConnectorsServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListAppConnectors(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::beyondcorp::appconnectors::v1::
                          ListAppConnectorsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::beyondcorp::appconnectors::v1::
                       ListAppConnectorsRequest const& request) {
              return stub->ListAppConnectors(context, request);
            },
            r, function_name);
      },
      [](google::cloud::beyondcorp::appconnectors::v1::ListAppConnectorsResponse
             r) {
        std::vector<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
            result(r.app_connectors().size());
        auto& messages = *r.mutable_app_connectors();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
AppConnectorsServiceConnectionImpl::GetAppConnector(
    google::cloud::beyondcorp::appconnectors::v1::GetAppConnectorRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetAppConnector(request),
      [this](grpc::ClientContext& context,
             google::cloud::beyondcorp::appconnectors::v1::
                 GetAppConnectorRequest const& request) {
        return stub_->GetAppConnector(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
AppConnectorsServiceConnectionImpl::CreateAppConnector(
    google::cloud::beyondcorp::appconnectors::v1::
        CreateAppConnectorRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::appconnectors::v1::AppConnector>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::appconnectors::v1::
                 CreateAppConnectorRequest const& request) {
        return stub->AsyncCreateAppConnector(cq, std::move(context), request);
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
          google::cloud::beyondcorp::appconnectors::v1::AppConnector>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateAppConnector(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
AppConnectorsServiceConnectionImpl::UpdateAppConnector(
    google::cloud::beyondcorp::appconnectors::v1::
        UpdateAppConnectorRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::appconnectors::v1::AppConnector>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::appconnectors::v1::
                 UpdateAppConnectorRequest const& request) {
        return stub->AsyncUpdateAppConnector(cq, std::move(context), request);
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
          google::cloud::beyondcorp::appconnectors::v1::AppConnector>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateAppConnector(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::
                    AppConnectorOperationMetadata>>
AppConnectorsServiceConnectionImpl::DeleteAppConnector(
    google::cloud::beyondcorp::appconnectors::v1::
        DeleteAppConnectorRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::appconnectors::v1::
          AppConnectorOperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::appconnectors::v1::
                 DeleteAppConnectorRequest const& request) {
        return stub->AsyncDeleteAppConnector(cq, std::move(context), request);
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
          google::cloud::beyondcorp::appconnectors::v1::
              AppConnectorOperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteAppConnector(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
AppConnectorsServiceConnectionImpl::ReportStatus(
    google::cloud::beyondcorp::appconnectors::v1::ReportStatusRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::appconnectors::v1::AppConnector>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::appconnectors::v1::
                 ReportStatusRequest const& request) {
        return stub->AsyncReportStatus(cq, std::move(context), request);
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
          google::cloud::beyondcorp::appconnectors::v1::AppConnector>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->ReportStatus(request), polling_policy(), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appconnectors_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
