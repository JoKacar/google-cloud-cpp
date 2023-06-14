// Copyright 2023 Google LLC
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
// source: google/cloud/aiplatform/v1/prediction_service.proto

#include "google/cloud/aiplatform/v1/internal/prediction_option_defaults.h"
#include "google/cloud/aiplatform/v1/prediction_connection.h"
#include "google/cloud/aiplatform/v1/prediction_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options PredictionServiceDefaultOptions(std::string const& location,
                                        Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_PREDICTION_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_PREDICTION_SERVICE_AUTHORITY",
      absl::StrCat(location, "-", "aiplatform.googleapis.com"));
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<aiplatform_v1::PredictionServiceRetryPolicyOption>()) {
    options.set<aiplatform_v1::PredictionServiceRetryPolicyOption>(
        aiplatform_v1::PredictionServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<aiplatform_v1::PredictionServiceBackoffPolicyOption>()) {
    options.set<aiplatform_v1::PredictionServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<aiplatform_v1::
                       PredictionServiceConnectionIdempotencyPolicyOption>()) {
    options
        .set<aiplatform_v1::PredictionServiceConnectionIdempotencyPolicyOption>(
            aiplatform_v1::
                MakeDefaultPredictionServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
