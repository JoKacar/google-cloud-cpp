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
// source: google/cloud/dialogflow/v2/agent.proto

#include "google/cloud/dialogflow_es/agents_connection.h"
#include "google/cloud/dialogflow_es/agents_options.h"
#include "google/cloud/dialogflow_es/internal/agents_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/agents_option_defaults.h"
#include "google/cloud/dialogflow_es/internal/agents_stub_factory.h"
#include "google/cloud/dialogflow_es/internal/agents_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AgentsConnection::~AgentsConnection() = default;

StatusOr<google::cloud::dialogflow::v2::Agent> AgentsConnection::GetAgent(
    google::cloud::dialogflow::v2::GetAgentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::Agent> AgentsConnection::SetAgent(
    google::cloud::dialogflow::v2::SetAgentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status AgentsConnection::DeleteAgent(
    google::cloud::dialogflow::v2::DeleteAgentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dialogflow::v2::Agent>
AgentsConnection::SearchAgents(
    google::cloud::dialogflow::v2::
        SearchAgentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::v2::Agent>>();
}

future<StatusOr<google::protobuf::Struct>> AgentsConnection::TrainAgent(
    google::cloud::dialogflow::v2::TrainAgentRequest const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Struct>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::dialogflow::v2::ExportAgentResponse>>
AgentsConnection::ExportAgent(
    google::cloud::dialogflow::v2::ExportAgentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::dialogflow::v2::ExportAgentResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::protobuf::Struct>> AgentsConnection::ImportAgent(
    google::cloud::dialogflow::v2::ImportAgentRequest const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Struct>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::protobuf::Struct>> AgentsConnection::RestoreAgent(
    google::cloud::dialogflow::v2::RestoreAgentRequest const&) {
  return google::cloud::make_ready_future<StatusOr<google::protobuf::Struct>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::dialogflow::v2::ValidationResult>
AgentsConnection::GetValidationResult(
    google::cloud::dialogflow::v2::GetValidationResultRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<AgentsConnection> MakeAgentsConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 AgentsPolicyOptionList>(options, __func__);
  options = dialogflow_es_internal::AgentsDefaultOptions(location,
                                                         std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = dialogflow_es_internal::CreateDefaultAgentsStub(background->cq(),
                                                              options);
  return dialogflow_es_internal::MakeAgentsTracingConnection(
      std::make_shared<dialogflow_es_internal::AgentsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

std::shared_ptr<AgentsConnection> MakeAgentsConnection(Options options) {
  return MakeAgentsConnection(std::string{}, std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
