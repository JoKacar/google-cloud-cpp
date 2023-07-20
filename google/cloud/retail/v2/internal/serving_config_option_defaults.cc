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
// source: google/cloud/retail/v2/serving_config_service.proto

#include "google/cloud/retail/v2/internal/serving_config_option_defaults.h"
#include "google/cloud/retail/v2/serving_config_connection.h"
#include "google/cloud/retail/v2/serving_config_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ServingConfigServiceDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_SERVING_CONFIG_SERVICE_ENDPOINT",
      "", "GOOGLE_CLOUD_CPP_SERVING_CONFIG_SERVICE_AUTHORITY",
      "retail.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<retail_v2::ServingConfigServiceRetryPolicyOption>()) {
    options.set<retail_v2::ServingConfigServiceRetryPolicyOption>(
        retail_v2::ServingConfigServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<retail_v2::ServingConfigServiceBackoffPolicyOption>()) {
    options.set<retail_v2::ServingConfigServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<
          retail_v2::ServingConfigServiceConnectionIdempotencyPolicyOption>()) {
    options
        .set<retail_v2::ServingConfigServiceConnectionIdempotencyPolicyOption>(
            retail_v2::
                MakeDefaultServingConfigServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
