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
// source: google/cloud/config/v1/config.proto

#include "google/cloud/config/v1/internal/config_connection_impl.h"
#include "google/cloud/config/v1/internal/config_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace config_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<config_v1::ConfigRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<config_v1::ConfigRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<config_v1::ConfigBackoffPolicyOption>()->clone();
}

std::unique_ptr<config_v1::ConfigConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options.get<config_v1::ConfigConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<config_v1::ConfigPollingPolicyOption>()->clone();
}

}  // namespace

ConfigConnectionImpl::ConfigConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<config_v1_internal::ConfigStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ConfigConnection::options())) {}

StreamRange<google::cloud::config::v1::Deployment>
ConfigConnectionImpl::ListDeployments(
    google::cloud::config::v1::ListDeploymentsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListDeployments(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::config::v1::Deployment>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<config_v1::ConfigRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::config::v1::ListDeploymentsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::config::v1::ListDeploymentsRequest const&
                       request) {
              return stub->ListDeployments(context, request);
            },
            r, function_name);
      },
      [](google::cloud::config::v1::ListDeploymentsResponse r) {
        std::vector<google::cloud::config::v1::Deployment> result(
            r.deployments().size());
        auto& messages = *r.mutable_deployments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::config::v1::Deployment>
ConfigConnectionImpl::GetDeployment(
    google::cloud::config::v1::GetDeploymentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetDeployment(request),
      [this](grpc::ClientContext& context,
             google::cloud::config::v1::GetDeploymentRequest const& request) {
        return stub_->GetDeployment(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigConnectionImpl::CreateDeployment(
    google::cloud::config::v1::CreateDeploymentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateDeployment(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::config::v1::Deployment>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::config::v1::CreateDeploymentRequest const& request) {
        return stub->AsyncCreateDeployment(cq, std::move(context), options,
                                           request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::config::v1::Deployment>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigConnectionImpl::UpdateDeployment(
    google::cloud::config::v1::UpdateDeploymentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateDeployment(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::config::v1::Deployment>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::config::v1::UpdateDeploymentRequest const& request) {
        return stub->AsyncUpdateDeployment(cq, std::move(context), options,
                                           request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::config::v1::Deployment>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigConnectionImpl::DeleteDeployment(
    google::cloud::config::v1::DeleteDeploymentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteDeployment(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::config::v1::Deployment>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::config::v1::DeleteDeploymentRequest const& request) {
        return stub->AsyncDeleteDeployment(cq, std::move(context), options,
                                           request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::config::v1::Deployment>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::config::v1::Revision>
ConfigConnectionImpl::ListRevisions(
    google::cloud::config::v1::ListRevisionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListRevisions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::config::v1::Revision>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<config_v1::ConfigRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::config::v1::ListRevisionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::config::v1::ListRevisionsRequest const&
                       request) {
              return stub->ListRevisions(context, request);
            },
            r, function_name);
      },
      [](google::cloud::config::v1::ListRevisionsResponse r) {
        std::vector<google::cloud::config::v1::Revision> result(
            r.revisions().size());
        auto& messages = *r.mutable_revisions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::config::v1::Revision> ConfigConnectionImpl::GetRevision(
    google::cloud::config::v1::GetRevisionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetRevision(request),
      [this](grpc::ClientContext& context,
             google::cloud::config::v1::GetRevisionRequest const& request) {
        return stub_->GetRevision(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::config::v1::Resource> ConfigConnectionImpl::GetResource(
    google::cloud::config::v1::GetResourceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetResource(request),
      [this](grpc::ClientContext& context,
             google::cloud::config::v1::GetResourceRequest const& request) {
        return stub_->GetResource(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::config::v1::Resource>
ConfigConnectionImpl::ListResources(
    google::cloud::config::v1::ListResourcesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListResources(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::config::v1::Resource>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<config_v1::ConfigRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::config::v1::ListResourcesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::config::v1::ListResourcesRequest const&
                       request) {
              return stub->ListResources(context, request);
            },
            r, function_name);
      },
      [](google::cloud::config::v1::ListResourcesResponse r) {
        std::vector<google::cloud::config::v1::Resource> result(
            r.resources().size());
        auto& messages = *r.mutable_resources();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::config::v1::Statefile>
ConfigConnectionImpl::ExportDeploymentStatefile(
    google::cloud::config::v1::ExportDeploymentStatefileRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ExportDeploymentStatefile(request),
      [this](grpc::ClientContext& context,
             google::cloud::config::v1::ExportDeploymentStatefileRequest const&
                 request) {
        return stub_->ExportDeploymentStatefile(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::config::v1::Statefile>
ConfigConnectionImpl::ExportRevisionStatefile(
    google::cloud::config::v1::ExportRevisionStatefileRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ExportRevisionStatefile(request),
      [this](grpc::ClientContext& context,
             google::cloud::config::v1::ExportRevisionStatefileRequest const&
                 request) {
        return stub_->ExportRevisionStatefile(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::config::v1::Statefile>
ConfigConnectionImpl::ImportStatefile(
    google::cloud::config::v1::ImportStatefileRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ImportStatefile(request),
      [this](grpc::ClientContext& context,
             google::cloud::config::v1::ImportStatefileRequest const& request) {
        return stub_->ImportStatefile(context, request);
      },
      request, __func__);
}

Status ConfigConnectionImpl::DeleteStatefile(
    google::cloud::config::v1::DeleteStatefileRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteStatefile(request),
      [this](grpc::ClientContext& context,
             google::cloud::config::v1::DeleteStatefileRequest const& request) {
        return stub_->DeleteStatefile(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigConnectionImpl::LockDeployment(
    google::cloud::config::v1::LockDeploymentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->LockDeployment(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::config::v1::Deployment>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::config::v1::LockDeploymentRequest const& request) {
        return stub->AsyncLockDeployment(cq, std::move(context), options,
                                         request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::config::v1::Deployment>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigConnectionImpl::UnlockDeployment(
    google::cloud::config::v1::UnlockDeploymentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UnlockDeployment(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::config::v1::Deployment>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::config::v1::UnlockDeploymentRequest const& request) {
        return stub->AsyncUnlockDeployment(cq, std::move(context), options,
                                           request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::config::v1::Deployment>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::config::v1::LockInfo>
ConfigConnectionImpl::ExportLockInfo(
    google::cloud::config::v1::ExportLockInfoRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ExportLockInfo(request),
      [this](grpc::ClientContext& context,
             google::cloud::config::v1::ExportLockInfoRequest const& request) {
        return stub_->ExportLockInfo(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::config::v1::Preview>>
ConfigConnectionImpl::CreatePreview(
    google::cloud::config::v1::CreatePreviewRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreatePreview(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::config::v1::Preview>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::config::v1::CreatePreviewRequest const& request) {
        return stub->AsyncCreatePreview(cq, std::move(context), options,
                                        request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::config::v1::Preview>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::config::v1::Preview> ConfigConnectionImpl::GetPreview(
    google::cloud::config::v1::GetPreviewRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetPreview(request),
      [this](grpc::ClientContext& context,
             google::cloud::config::v1::GetPreviewRequest const& request) {
        return stub_->GetPreview(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::config::v1::Preview>
ConfigConnectionImpl::ListPreviews(
    google::cloud::config::v1::ListPreviewsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListPreviews(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::config::v1::Preview>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<config_v1::ConfigRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::config::v1::ListPreviewsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::config::v1::ListPreviewsRequest const& request) {
              return stub->ListPreviews(context, request);
            },
            r, function_name);
      },
      [](google::cloud::config::v1::ListPreviewsResponse r) {
        std::vector<google::cloud::config::v1::Preview> result(
            r.previews().size());
        auto& messages = *r.mutable_previews();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::config::v1::Preview>>
ConfigConnectionImpl::DeletePreview(
    google::cloud::config::v1::DeletePreviewRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeletePreview(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::config::v1::Preview>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::config::v1::DeletePreviewRequest const& request) {
        return stub->AsyncDeletePreview(cq, std::move(context), options,
                                        request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::config::v1::Preview>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::config::v1::ExportPreviewResultResponse>
ConfigConnectionImpl::ExportPreviewResult(
    google::cloud::config::v1::ExportPreviewResultRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ExportPreviewResult(request),
      [this](grpc::ClientContext& context,
             google::cloud::config::v1::ExportPreviewResultRequest const&
                 request) {
        return stub_->ExportPreviewResult(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace config_v1_internal
}  // namespace cloud
}  // namespace google
