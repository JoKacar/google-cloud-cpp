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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_TEST_CASES_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_TEST_CASES_TRACING_STUB_H

#include "google/cloud/dialogflow_cx/internal/test_cases_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TestCasesTracingStub : public TestCasesStub {
 public:
  ~TestCasesTracingStub() override = default;

  explicit TestCasesTracingStub(std::shared_ptr<TestCasesStub> child);

  StatusOr<google::cloud::dialogflow::cx::v3::ListTestCasesResponse>
  ListTestCases(grpc::ClientContext& context,
                google::cloud::dialogflow::cx::v3::ListTestCasesRequest const&
                    request) override;

  Status BatchDeleteTestCases(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::BatchDeleteTestCasesRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::TestCase> GetTestCase(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::GetTestCaseRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::TestCase> CreateTestCase(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::CreateTestCaseRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::TestCase> UpdateTestCase(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::UpdateTestCaseRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRunTestCase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::cx::v3::RunTestCaseRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchRunTestCases(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::CalculateCoverageResponse>
  CalculateCoverage(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::CalculateCoverageRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportTestCases(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportTestCases(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::ListTestCaseResultsResponse>
  ListTestCaseResults(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::ListTestCaseResultsRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::TestCaseResult> GetTestCaseResult(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::GetTestCaseResultRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<TestCasesStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<TestCasesStub> MakeTestCasesTracingStub(
    std::shared_ptr<TestCasesStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_TEST_CASES_TRACING_STUB_H
