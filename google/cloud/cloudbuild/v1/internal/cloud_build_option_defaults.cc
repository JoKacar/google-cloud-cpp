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
// source: google/devtools/cloudbuild/v1/cloudbuild.proto

#include "google/cloud/cloudbuild/v1/internal/cloud_build_option_defaults.h"
#include "google/cloud/cloudbuild/v1/cloud_build_connection.h"
#include "google/cloud/cloudbuild/v1/cloud_build_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace cloudbuild_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options CloudBuildDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_CLOUD_BUILD_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_CLOUD_BUILD_AUTHORITY", "cloudbuild.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<cloudbuild_v1::CloudBuildRetryPolicyOption>()) {
    options.set<cloudbuild_v1::CloudBuildRetryPolicyOption>(
        cloudbuild_v1::CloudBuildLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<cloudbuild_v1::CloudBuildBackoffPolicyOption>()) {
    options.set<cloudbuild_v1::CloudBuildBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<cloudbuild_v1::CloudBuildPollingPolicyOption>()) {
    options.set<cloudbuild_v1::CloudBuildPollingPolicyOption>(
        GenericPollingPolicy<
            cloudbuild_v1::CloudBuildRetryPolicyOption::Type,
            cloudbuild_v1::CloudBuildBackoffPolicyOption::Type>(
            options.get<cloudbuild_v1::CloudBuildRetryPolicyOption>()->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options
           .has<cloudbuild_v1::CloudBuildConnectionIdempotencyPolicyOption>()) {
    options.set<cloudbuild_v1::CloudBuildConnectionIdempotencyPolicyOption>(
        cloudbuild_v1::MakeDefaultCloudBuildConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
