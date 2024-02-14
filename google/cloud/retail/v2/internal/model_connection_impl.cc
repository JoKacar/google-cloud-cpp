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
// source: google/cloud/retail/v2/model_service.proto

#include "google/cloud/retail/v2/internal/model_connection_impl.h"
#include "google/cloud/retail/v2/internal/model_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<retail_v2::ModelServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<retail_v2::ModelServiceRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<retail_v2::ModelServiceBackoffPolicyOption>()->clone();
}

std::unique_ptr<retail_v2::ModelServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<retail_v2::ModelServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<retail_v2::ModelServicePollingPolicyOption>()->clone();
}

}  // namespace

ModelServiceConnectionImpl::ModelServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<retail_v2_internal::ModelServiceStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ModelServiceConnection::options())) {}

future<StatusOr<google::cloud::retail::v2::Model>>
ModelServiceConnectionImpl::CreateModel(
    google::cloud::retail::v2::CreateModelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateModel(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::retail::v2::Model>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::retail::v2::CreateModelRequest const& request) {
        return stub->AsyncCreateModel(cq, std::move(context), options, request);
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
          google::cloud::retail::v2::Model>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::retail::v2::Model> ModelServiceConnectionImpl::GetModel(
    google::cloud::retail::v2::GetModelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetModel(request),
      [this](grpc::ClientContext& context,
             google::cloud::retail::v2::GetModelRequest const& request) {
        return stub_->GetModel(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::retail::v2::Model>
ModelServiceConnectionImpl::PauseModel(
    google::cloud::retail::v2::PauseModelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PauseModel(request),
      [this](grpc::ClientContext& context,
             google::cloud::retail::v2::PauseModelRequest const& request) {
        return stub_->PauseModel(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::retail::v2::Model>
ModelServiceConnectionImpl::ResumeModel(
    google::cloud::retail::v2::ResumeModelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ResumeModel(request),
      [this](grpc::ClientContext& context,
             google::cloud::retail::v2::ResumeModelRequest const& request) {
        return stub_->ResumeModel(context, request);
      },
      request, __func__);
}

Status ModelServiceConnectionImpl::DeleteModel(
    google::cloud::retail::v2::DeleteModelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteModel(request),
      [this](grpc::ClientContext& context,
             google::cloud::retail::v2::DeleteModelRequest const& request) {
        return stub_->DeleteModel(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::retail::v2::Model>
ModelServiceConnectionImpl::ListModels(
    google::cloud::retail::v2::ListModelsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListModels(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::retail::v2::Model>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<retail_v2::ModelServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::retail::v2::ListModelsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::retail::v2::ListModelsRequest const& request) {
              return stub->ListModels(context, request);
            },
            r, function_name);
      },
      [](google::cloud::retail::v2::ListModelsResponse r) {
        std::vector<google::cloud::retail::v2::Model> result(r.models().size());
        auto& messages = *r.mutable_models();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::retail::v2::Model>
ModelServiceConnectionImpl::UpdateModel(
    google::cloud::retail::v2::UpdateModelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateModel(request),
      [this](grpc::ClientContext& context,
             google::cloud::retail::v2::UpdateModelRequest const& request) {
        return stub_->UpdateModel(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::retail::v2::TuneModelResponse>>
ModelServiceConnectionImpl::TuneModel(
    google::cloud::retail::v2::TuneModelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent = idempotency_policy(*current)->TuneModel(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::retail::v2::TuneModelResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::retail::v2::TuneModelRequest const& request) {
        return stub->AsyncTuneModel(cq, std::move(context), options, request);
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
          google::cloud::retail::v2::TuneModelResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
