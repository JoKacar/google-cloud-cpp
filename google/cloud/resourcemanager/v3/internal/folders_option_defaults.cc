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
// source: google/cloud/resourcemanager/v3/folders.proto

#include "google/cloud/resourcemanager/v3/internal/folders_option_defaults.h"
#include "google/cloud/resourcemanager/v3/folders_connection.h"
#include "google/cloud/resourcemanager/v3/folders_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options FoldersDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_FOLDERS_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_FOLDERS_AUTHORITY",
      "cloudresourcemanager.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<resourcemanager_v3::FoldersRetryPolicyOption>()) {
    options.set<resourcemanager_v3::FoldersRetryPolicyOption>(
        resourcemanager_v3::FoldersLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<resourcemanager_v3::FoldersBackoffPolicyOption>()) {
    options.set<resourcemanager_v3::FoldersBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<resourcemanager_v3::FoldersPollingPolicyOption>()) {
    options.set<resourcemanager_v3::FoldersPollingPolicyOption>(
        GenericPollingPolicy<
            resourcemanager_v3::FoldersRetryPolicyOption::Type,
            resourcemanager_v3::FoldersBackoffPolicyOption::Type>(
            options.get<resourcemanager_v3::FoldersRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          resourcemanager_v3::FoldersConnectionIdempotencyPolicyOption>()) {
    options.set<resourcemanager_v3::FoldersConnectionIdempotencyPolicyOption>(
        resourcemanager_v3::MakeDefaultFoldersConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
