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
// source: google/cloud/orchestration/airflow/service/v1/environments.proto

#include "google/cloud/composer/v1/internal/environments_connection_impl.h"
#include "google/cloud/composer/v1/internal/environments_option_defaults.h"
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
namespace composer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EnvironmentsConnectionImpl::EnvironmentsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<composer_v1_internal::EnvironmentsStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      EnvironmentsConnection::options())) {}

future<
    StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
EnvironmentsConnectionImpl::CreateEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        CreateEnvironmentRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::orchestration::airflow::service::v1::Environment>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::orchestration::airflow::service::v1::
                 CreateEnvironmentRequest const& request) {
        return stub->AsyncCreateEnvironment(cq, std::move(context), request);
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
          google::cloud::orchestration::airflow::service::v1::Environment>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateEnvironment(request), polling_policy(),
      __func__);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
EnvironmentsConnectionImpl::GetEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        GetEnvironmentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetEnvironment(request),
      [this](grpc::ClientContext& context,
             google::cloud::orchestration::airflow::service::v1::
                 GetEnvironmentRequest const& request) {
        return stub_->GetEnvironment(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::orchestration::airflow::service::v1::Environment>
EnvironmentsConnectionImpl::ListEnvironments(
    google::cloud::orchestration::airflow::service::v1::ListEnvironmentsRequest
        request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<composer_v1::EnvironmentsRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListEnvironments(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<
      google::cloud::orchestration::airflow::service::v1::Environment>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::orchestration::airflow::service::v1::
                          ListEnvironmentsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::orchestration::airflow::service::v1::
                       ListEnvironmentsRequest const& request) {
              return stub->ListEnvironments(context, request);
            },
            r, function_name);
      },
      [](google::cloud::orchestration::airflow::service::v1::
             ListEnvironmentsResponse r) {
        std::vector<
            google::cloud::orchestration::airflow::service::v1::Environment>
            result(r.environments().size());
        auto& messages = *r.mutable_environments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<
    StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
EnvironmentsConnectionImpl::UpdateEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        UpdateEnvironmentRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::orchestration::airflow::service::v1::Environment>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::orchestration::airflow::service::v1::
                 UpdateEnvironmentRequest const& request) {
        return stub->AsyncUpdateEnvironment(cq, std::move(context), request);
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
          google::cloud::orchestration::airflow::service::v1::Environment>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateEnvironment(request), polling_policy(),
      __func__);
}

future<StatusOr<
    google::cloud::orchestration::airflow::service::v1::OperationMetadata>>
EnvironmentsConnectionImpl::DeleteEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        DeleteEnvironmentRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::orchestration::airflow::service::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::orchestration::airflow::service::v1::
                 DeleteEnvironmentRequest const& request) {
        return stub->AsyncDeleteEnvironment(cq, std::move(context), request);
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
          google::cloud::orchestration::airflow::service::v1::
              OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteEnvironment(request), polling_policy(),
      __func__);
}

future<StatusOr<
    google::cloud::orchestration::airflow::service::v1::SaveSnapshotResponse>>
EnvironmentsConnectionImpl::SaveSnapshot(
    google::cloud::orchestration::airflow::service::v1::
        SaveSnapshotRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::orchestration::airflow::service::v1::SaveSnapshotResponse>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::orchestration::airflow::service::v1::
                 SaveSnapshotRequest const& request) {
        return stub->AsyncSaveSnapshot(cq, std::move(context), request);
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
          google::cloud::orchestration::airflow::service::v1::
              SaveSnapshotResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->SaveSnapshot(request), polling_policy(), __func__);
}

future<StatusOr<
    google::cloud::orchestration::airflow::service::v1::LoadSnapshotResponse>>
EnvironmentsConnectionImpl::LoadSnapshot(
    google::cloud::orchestration::airflow::service::v1::
        LoadSnapshotRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::orchestration::airflow::service::v1::LoadSnapshotResponse>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::orchestration::airflow::service::v1::
                 LoadSnapshotRequest const& request) {
        return stub->AsyncLoadSnapshot(cq, std::move(context), request);
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
          google::cloud::orchestration::airflow::service::v1::
              LoadSnapshotResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->LoadSnapshot(request), polling_policy(), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
