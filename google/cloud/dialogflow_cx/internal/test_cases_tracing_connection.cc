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
// source: google/cloud/dialogflow/cx/v3/test_case.proto

#include "google/cloud/dialogflow_cx/internal/test_cases_tracing_connection.h"
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

TestCasesTracingConnection::TestCasesTracingConnection(
    std::shared_ptr<dialogflow_cx::TestCasesConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesTracingConnection::ListTestCases(
    google::cloud::dialogflow::cx::v3::ListTestCasesRequest request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::TestCasesConnection::ListTestCases");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListTestCases(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::cx::v3::TestCase>(std::move(span),
                                                   std::move(sr));
}

Status TestCasesTracingConnection::BatchDeleteTestCases(
    google::cloud::dialogflow::cx::v3::BatchDeleteTestCasesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::TestCasesConnection::BatchDeleteTestCases");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->BatchDeleteTestCases(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesTracingConnection::GetTestCase(
    google::cloud::dialogflow::cx::v3::GetTestCaseRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::TestCasesConnection::GetTestCase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTestCase(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesTracingConnection::CreateTestCase(
    google::cloud::dialogflow::cx::v3::CreateTestCaseRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::TestCasesConnection::CreateTestCase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateTestCase(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesTracingConnection::UpdateTestCase(
    google::cloud::dialogflow::cx::v3::UpdateTestCaseRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::TestCasesConnection::UpdateTestCase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateTestCase(request));
}

future<StatusOr<google::cloud::dialogflow::cx::v3::RunTestCaseResponse>>
TestCasesTracingConnection::RunTestCase(
    google::cloud::dialogflow::cx::v3::RunTestCaseRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::TestCasesConnection::RunTestCase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RunTestCase(request));
}

future<StatusOr<google::cloud::dialogflow::cx::v3::BatchRunTestCasesResponse>>
TestCasesTracingConnection::BatchRunTestCases(
    google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::TestCasesConnection::BatchRunTestCases");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->BatchRunTestCases(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::CalculateCoverageResponse>
TestCasesTracingConnection::CalculateCoverage(
    google::cloud::dialogflow::cx::v3::CalculateCoverageRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::TestCasesConnection::CalculateCoverage");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CalculateCoverage(request));
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ImportTestCasesResponse>>
TestCasesTracingConnection::ImportTestCases(
    google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::TestCasesConnection::ImportTestCases");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->ImportTestCases(request));
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ExportTestCasesResponse>>
TestCasesTracingConnection::ExportTestCases(
    google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::TestCasesConnection::ExportTestCases");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->ExportTestCases(request));
}

StreamRange<google::cloud::dialogflow::cx::v3::TestCaseResult>
TestCasesTracingConnection::ListTestCaseResults(
    google::cloud::dialogflow::cx::v3::ListTestCaseResultsRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::TestCasesConnection::ListTestCaseResults");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListTestCaseResults(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::cx::v3::TestCaseResult>(std::move(span),
                                                         std::move(sr));
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCaseResult>
TestCasesTracingConnection::GetTestCaseResult(
    google::cloud::dialogflow::cx::v3::GetTestCaseResultRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::TestCasesConnection::GetTestCaseResult");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTestCaseResult(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dialogflow_cx::TestCasesConnection>
MakeTestCasesTracingConnection(
    std::shared_ptr<dialogflow_cx::TestCasesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<TestCasesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
