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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_TEST_CASES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_TEST_CASES_CONNECTION_H

#include "google/cloud/dialogflow_cx/internal/test_cases_retry_traits.h"
#include "google/cloud/dialogflow_cx/test_cases_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/cx/v3/test_case.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using TestCasesRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    dialogflow_cx_internal::TestCasesRetryTraits>;

using TestCasesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        dialogflow_cx_internal::TestCasesRetryTraits>;

using TestCasesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        dialogflow_cx_internal::TestCasesRetryTraits>;

/**
 * The `TestCasesConnection` object for `TestCasesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `TestCasesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `TestCasesClient`.
 *
 * To create a concrete instance, see `MakeTestCasesConnection()`.
 *
 * For mocking, see `dialogflow_cx_mocks::MockTestCasesConnection`.
 */
class TestCasesConnection {
 public:
  virtual ~TestCasesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::dialogflow::cx::v3::TestCase>
  ListTestCases(
      google::cloud::dialogflow::cx::v3::ListTestCasesRequest request);

  virtual Status BatchDeleteTestCases(
      google::cloud::dialogflow::cx::v3::BatchDeleteTestCasesRequest const&
          request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::TestCase> GetTestCase(
      google::cloud::dialogflow::cx::v3::GetTestCaseRequest const& request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::TestCase> CreateTestCase(
      google::cloud::dialogflow::cx::v3::CreateTestCaseRequest const& request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::TestCase> UpdateTestCase(
      google::cloud::dialogflow::cx::v3::UpdateTestCaseRequest const& request);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::RunTestCaseResponse>>
  RunTestCase(
      google::cloud::dialogflow::cx::v3::RunTestCaseRequest const& request);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::BatchRunTestCasesResponse>>
  BatchRunTestCases(
      google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
          request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::CalculateCoverageResponse>
  CalculateCoverage(
      google::cloud::dialogflow::cx::v3::CalculateCoverageRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::ImportTestCasesResponse>>
  ImportTestCases(
      google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const& request);

  virtual future<
      StatusOr<google::cloud::dialogflow::cx::v3::ExportTestCasesResponse>>
  ExportTestCases(
      google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const& request);

  virtual StreamRange<google::cloud::dialogflow::cx::v3::TestCaseResult>
  ListTestCaseResults(
      google::cloud::dialogflow::cx::v3::ListTestCaseResultsRequest request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::TestCaseResult>
  GetTestCaseResult(
      google::cloud::dialogflow::cx::v3::GetTestCaseResultRequest const&
          request);
};

/**
 * A factory function to construct an object of type `TestCasesConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of TestCasesClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `TestCasesConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dialogflow_cx::TestCasesPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `TestCasesConnection` created by
 * this function.
 */
std::shared_ptr<TestCasesConnection> MakeTestCasesConnection(
    std::string const& location, Options options = {});

/**
 * A backwards-compatible version of the previous factory function.  Unless
 * the service also offers a global endpoint, the default value of the
 * `EndpointOption` may be useless, in which case it must be overridden.
 *
 * @deprecated Please use the `location` overload instead.
 */
std::shared_ptr<TestCasesConnection> MakeTestCasesConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_TEST_CASES_CONNECTION_H
