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
// source: google/cloud/dialogflow/cx/v3/environment.proto

#include "google/cloud/dialogflow_cx/internal/environments_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EnvironmentsTracingConnection::EnvironmentsTracingConnection(
    std::shared_ptr<dialogflow_cx::EnvironmentsConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::dialogflow::cx::v3::Environment>
EnvironmentsTracingConnection::ListEnvironments(
    google::cloud::dialogflow::cx::v3::ListEnvironmentsRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::EnvironmentsConnection::ListEnvironments");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListEnvironments(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::cx::v3::Environment>(std::move(span),
                                                      std::move(sr));
}

StatusOr<google::cloud::dialogflow::cx::v3::Environment>
EnvironmentsTracingConnection::GetEnvironment(
    google::cloud::dialogflow::cx::v3::GetEnvironmentRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::EnvironmentsConnection::GetEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEnvironment(request));
}

future<StatusOr<google::cloud::dialogflow::cx::v3::Environment>>
EnvironmentsTracingConnection::CreateEnvironment(
    google::cloud::dialogflow::cx::v3::CreateEnvironmentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::EnvironmentsConnection::CreateEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateEnvironment(request));
}

future<StatusOr<google::cloud::dialogflow::cx::v3::Environment>>
EnvironmentsTracingConnection::UpdateEnvironment(
    google::cloud::dialogflow::cx::v3::UpdateEnvironmentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::EnvironmentsConnection::UpdateEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateEnvironment(request));
}

Status EnvironmentsTracingConnection::DeleteEnvironment(
    google::cloud::dialogflow::cx::v3::DeleteEnvironmentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::EnvironmentsConnection::DeleteEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteEnvironment(request));
}

StreamRange<google::cloud::dialogflow::cx::v3::Environment>
EnvironmentsTracingConnection::LookupEnvironmentHistory(
    google::cloud::dialogflow::cx::v3::LookupEnvironmentHistoryRequest
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::EnvironmentsConnection::LookupEnvironmentHistory");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->LookupEnvironmentHistory(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::cx::v3::Environment>(std::move(span),
                                                      std::move(sr));
}

future<StatusOr<google::cloud::dialogflow::cx::v3::RunContinuousTestResponse>>
EnvironmentsTracingConnection::RunContinuousTest(
    google::cloud::dialogflow::cx::v3::RunContinuousTestRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::EnvironmentsConnection::RunContinuousTest");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RunContinuousTest(request));
}

StreamRange<google::cloud::dialogflow::cx::v3::ContinuousTestResult>
EnvironmentsTracingConnection::ListContinuousTestResults(
    google::cloud::dialogflow::cx::v3::ListContinuousTestResultsRequest
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::EnvironmentsConnection::ListContinuousTestResults");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListContinuousTestResults(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::cx::v3::ContinuousTestResult>(std::move(span),
                                                               std::move(sr));
}

future<StatusOr<google::cloud::dialogflow::cx::v3::DeployFlowResponse>>
EnvironmentsTracingConnection::DeployFlow(
    google::cloud::dialogflow::cx::v3::DeployFlowRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::EnvironmentsConnection::DeployFlow");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeployFlow(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dialogflow_cx::EnvironmentsConnection>
MakeEnvironmentsTracingConnection(
    std::shared_ptr<dialogflow_cx::EnvironmentsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<EnvironmentsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
