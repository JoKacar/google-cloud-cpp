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
// source: google/cloud/dialogflow/cx/v3/agent.proto

#include "google/cloud/dialogflow_cx/internal/agents_connection_impl.h"
#include "google/cloud/dialogflow_cx/internal/agents_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<dialogflow_cx::AgentsRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<dialogflow_cx::AgentsRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<dialogflow_cx::AgentsBackoffPolicyOption>()->clone();
}

std::unique_ptr<dialogflow_cx::AgentsConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options.get<dialogflow_cx::AgentsConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<dialogflow_cx::AgentsPollingPolicyOption>()->clone();
}

}  // namespace

AgentsConnectionImpl::AgentsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_cx_internal::AgentsStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      AgentsConnection::options())) {}

StreamRange<google::cloud::dialogflow::cx::v3::Agent>
AgentsConnectionImpl::ListAgents(
    google::cloud::dialogflow::cx::v3::ListAgentsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListAgents(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::Agent>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_cx::AgentsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::dialogflow::cx::v3::ListAgentsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::dialogflow::cx::v3::ListAgentsRequest const&
                       request) { return stub->ListAgents(context, request); },
            r, function_name);
      },
      [](google::cloud::dialogflow::cx::v3::ListAgentsResponse r) {
        std::vector<google::cloud::dialogflow::cx::v3::Agent> result(
            r.agents().size());
        auto& messages = *r.mutable_agents();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent>
AgentsConnectionImpl::GetAgent(
    google::cloud::dialogflow::cx::v3::GetAgentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetAgent(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::cx::v3::GetAgentRequest const& request) {
        return stub_->GetAgent(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent>
AgentsConnectionImpl::CreateAgent(
    google::cloud::dialogflow::cx::v3::CreateAgentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateAgent(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::CreateAgentRequest const&
                 request) { return stub_->CreateAgent(context, request); },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent>
AgentsConnectionImpl::UpdateAgent(
    google::cloud::dialogflow::cx::v3::UpdateAgentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateAgent(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::UpdateAgentRequest const&
                 request) { return stub_->UpdateAgent(context, request); },
      request, __func__);
}

Status AgentsConnectionImpl::DeleteAgent(
    google::cloud::dialogflow::cx::v3::DeleteAgentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteAgent(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::DeleteAgentRequest const&
                 request) { return stub_->DeleteAgent(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ExportAgentResponse>>
AgentsConnectionImpl::ExportAgent(
    google::cloud::dialogflow::cx::v3::ExportAgentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ExportAgent(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::cx::v3::ExportAgentResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dialogflow::cx::v3::ExportAgentRequest const&
              request) {
        return stub->AsyncExportAgent(cq, std::move(context), options, request);
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
          google::cloud::dialogflow::cx::v3::ExportAgentResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::protobuf::Struct>> AgentsConnectionImpl::RestoreAgent(
    google::cloud::dialogflow::cx::v3::RestoreAgentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->RestoreAgent(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::protobuf::Struct>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dialogflow::cx::v3::RestoreAgentRequest const&
              request) {
        return stub->AsyncRestoreAgent(cq, std::move(context), options,
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
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::protobuf::Struct>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
AgentsConnectionImpl::ValidateAgent(
    google::cloud::dialogflow::cx::v3::ValidateAgentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ValidateAgent(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::ValidateAgentRequest const&
                 request) { return stub_->ValidateAgent(context, request); },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
AgentsConnectionImpl::GetAgentValidationResult(
    google::cloud::dialogflow::cx::v3::GetAgentValidationResultRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetAgentValidationResult(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::
                 GetAgentValidationResultRequest const& request) {
        return stub_->GetAgentValidationResult(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::GenerativeSettings>
AgentsConnectionImpl::GetGenerativeSettings(
    google::cloud::dialogflow::cx::v3::GetGenerativeSettingsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetGenerativeSettings(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::cx::v3::GetGenerativeSettingsRequest const&
              request) {
        return stub_->GetGenerativeSettings(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::GenerativeSettings>
AgentsConnectionImpl::UpdateGenerativeSettings(
    google::cloud::dialogflow::cx::v3::UpdateGenerativeSettingsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateGenerativeSettings(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::
                 UpdateGenerativeSettingsRequest const& request) {
        return stub_->UpdateGenerativeSettings(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
