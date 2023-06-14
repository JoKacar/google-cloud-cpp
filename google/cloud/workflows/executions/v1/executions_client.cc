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
// source: google/cloud/workflows/executions/v1/executions.proto

#include "google/cloud/workflows/executions/v1/executions_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace workflows_executions_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ExecutionsClient::ExecutionsClient(
    std::shared_ptr<ExecutionsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ExecutionsClient::~ExecutionsClient() = default;

StreamRange<google::cloud::workflows::executions::v1::Execution>
ExecutionsClient::ListExecutions(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workflows::executions::v1::ListExecutionsRequest request;
  request.set_parent(parent);
  return connection_->ListExecutions(request);
}

StreamRange<google::cloud::workflows::executions::v1::Execution>
ExecutionsClient::ListExecutions(
    google::cloud::workflows::executions::v1::ListExecutionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListExecutions(std::move(request));
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsClient::CreateExecution(
    std::string const& parent,
    google::cloud::workflows::executions::v1::Execution const& execution,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workflows::executions::v1::CreateExecutionRequest request;
  request.set_parent(parent);
  *request.mutable_execution() = execution;
  return connection_->CreateExecution(request);
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsClient::CreateExecution(
    google::cloud::workflows::executions::v1::CreateExecutionRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateExecution(request);
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsClient::GetExecution(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workflows::executions::v1::GetExecutionRequest request;
  request.set_name(name);
  return connection_->GetExecution(request);
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsClient::GetExecution(
    google::cloud::workflows::executions::v1::GetExecutionRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetExecution(request);
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsClient::CancelExecution(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workflows::executions::v1::CancelExecutionRequest request;
  request.set_name(name);
  return connection_->CancelExecution(request);
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsClient::CancelExecution(
    google::cloud::workflows::executions::v1::CancelExecutionRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelExecution(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_executions_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
