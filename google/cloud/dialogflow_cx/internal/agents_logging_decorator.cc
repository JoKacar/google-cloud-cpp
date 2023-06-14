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

#include "google/cloud/dialogflow_cx/internal/agents_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/agent.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AgentsLogging::AgentsLogging(std::shared_ptr<AgentsStub> child,
                             TracingOptions tracing_options,
                             std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListAgentsResponse>
AgentsLogging::ListAgents(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListAgentsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::cx::v3::ListAgentsRequest const& request) {
        return child_->ListAgents(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent> AgentsLogging::GetAgent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::cx::v3::GetAgentRequest const& request) {
        return child_->GetAgent(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent> AgentsLogging::CreateAgent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CreateAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::CreateAgentRequest const&
                 request) { return child_->CreateAgent(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::Agent> AgentsLogging::UpdateAgent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::UpdateAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::UpdateAgentRequest const&
                 request) { return child_->UpdateAgent(context, request); },
      context, request, __func__, tracing_options_);
}

Status AgentsLogging::DeleteAgent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::DeleteAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::DeleteAgentRequest const&
                 request) { return child_->DeleteAgent(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AgentsLogging::AsyncExportAgent(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::ExportAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::cx::v3::ExportAgentRequest const&
                 request) {
        return child_->AsyncExportAgent(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AgentsLogging::AsyncRestoreAgent(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::RestoreAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::cx::v3::RestoreAgentRequest const&
                 request) {
        return child_->AsyncRestoreAgent(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
AgentsLogging::ValidateAgent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ValidateAgentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::ValidateAgentRequest const&
                 request) { return child_->ValidateAgent(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
AgentsLogging::GetAgentValidationResult(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetAgentValidationResultRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::
                 GetAgentValidationResultRequest const& request) {
        return child_->GetAgentValidationResult(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AgentsLogging::AsyncGetOperation(
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

future<Status> AgentsLogging::AsyncCancelOperation(
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
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
