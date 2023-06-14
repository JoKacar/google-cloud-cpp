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

#include "google/cloud/dialogflow_es/agents_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AgentsClient::AgentsClient(std::shared_ptr<AgentsConnection> connection,
                           Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
AgentsClient::~AgentsClient() = default;

StatusOr<google::cloud::dialogflow::v2::Agent> AgentsClient::GetAgent(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::GetAgentRequest request;
  request.set_parent(parent);
  return connection_->GetAgent(request);
}

StatusOr<google::cloud::dialogflow::v2::Agent> AgentsClient::GetAgent(
    google::cloud::dialogflow::v2::GetAgentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAgent(request);
}

StatusOr<google::cloud::dialogflow::v2::Agent> AgentsClient::SetAgent(
    google::cloud::dialogflow::v2::Agent const& agent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::SetAgentRequest request;
  *request.mutable_agent() = agent;
  return connection_->SetAgent(request);
}

StatusOr<google::cloud::dialogflow::v2::Agent> AgentsClient::SetAgent(
    google::cloud::dialogflow::v2::SetAgentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetAgent(request);
}

Status AgentsClient::DeleteAgent(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::DeleteAgentRequest request;
  request.set_parent(parent);
  return connection_->DeleteAgent(request);
}

Status AgentsClient::DeleteAgent(
    google::cloud::dialogflow::v2::DeleteAgentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAgent(request);
}

StreamRange<google::cloud::dialogflow::v2::Agent> AgentsClient::SearchAgents(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::SearchAgentsRequest request;
  request.set_parent(parent);
  return connection_->SearchAgents(request);
}

StreamRange<google::cloud::dialogflow::v2::Agent> AgentsClient::SearchAgents(
    google::cloud::dialogflow::v2::SearchAgentsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchAgents(std::move(request));
}

future<StatusOr<google::protobuf::Struct>> AgentsClient::TrainAgent(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::TrainAgentRequest request;
  request.set_parent(parent);
  return connection_->TrainAgent(request);
}

future<StatusOr<google::protobuf::Struct>> AgentsClient::TrainAgent(
    google::cloud::dialogflow::v2::TrainAgentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TrainAgent(request);
}

future<StatusOr<google::cloud::dialogflow::v2::ExportAgentResponse>>
AgentsClient::ExportAgent(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::ExportAgentRequest request;
  request.set_parent(parent);
  return connection_->ExportAgent(request);
}

future<StatusOr<google::cloud::dialogflow::v2::ExportAgentResponse>>
AgentsClient::ExportAgent(
    google::cloud::dialogflow::v2::ExportAgentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportAgent(request);
}

future<StatusOr<google::protobuf::Struct>> AgentsClient::ImportAgent(
    google::cloud::dialogflow::v2::ImportAgentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportAgent(request);
}

future<StatusOr<google::protobuf::Struct>> AgentsClient::RestoreAgent(
    google::cloud::dialogflow::v2::RestoreAgentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RestoreAgent(request);
}

StatusOr<google::cloud::dialogflow::v2::ValidationResult>
AgentsClient::GetValidationResult(
    google::cloud::dialogflow::v2::GetValidationResultRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetValidationResult(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
