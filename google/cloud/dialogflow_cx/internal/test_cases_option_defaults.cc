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

#include "google/cloud/dialogflow_cx/internal/test_cases_option_defaults.h"
#include "google/cloud/dialogflow_cx/test_cases_connection.h"
#include "google/cloud/dialogflow_cx/test_cases_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options TestCasesDefaultOptions(std::string const& location, Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_TEST_CASES_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_TEST_CASES_AUTHORITY",
      absl::StrCat(location, location.empty() ? "" : "-",
                   "dialogflow.googleapis.com"));
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<dialogflow_cx::TestCasesRetryPolicyOption>()) {
    options.set<dialogflow_cx::TestCasesRetryPolicyOption>(
        dialogflow_cx::TestCasesLimitedTimeRetryPolicy(std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<dialogflow_cx::TestCasesBackoffPolicyOption>()) {
    options.set<dialogflow_cx::TestCasesBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<dialogflow_cx::TestCasesPollingPolicyOption>()) {
    options.set<dialogflow_cx::TestCasesPollingPolicyOption>(
        GenericPollingPolicy<dialogflow_cx::TestCasesRetryPolicyOption::Type,
                             dialogflow_cx::TestCasesBackoffPolicyOption::Type>(
            options.get<dialogflow_cx::TestCasesRetryPolicyOption>()->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options
           .has<dialogflow_cx::TestCasesConnectionIdempotencyPolicyOption>()) {
    options.set<dialogflow_cx::TestCasesConnectionIdempotencyPolicyOption>(
        dialogflow_cx::MakeDefaultTestCasesConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
