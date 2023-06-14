// Copyright 2021 Google LLC
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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#include "google/cloud/spanner/admin/internal/database_admin_option_defaults.h"
#include "google/cloud/spanner/admin/database_admin_connection.h"
#include "google/cloud/spanner/admin/database_admin_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options DatabaseAdminDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_SPANNER_DEFAULT_ENDPOINT",
      "SPANNER_EMULATOR_HOST", "GOOGLE_CLOUD_CPP_SPANNER_DEFAULT_AUTHORITY",
      "spanner.googleapis.com");
  options = google::cloud::internal::PopulateGrpcOptions(
      std::move(options), "SPANNER_EMULATOR_HOST");
  if (!options.has<spanner_admin::DatabaseAdminRetryPolicyOption>()) {
    options.set<spanner_admin::DatabaseAdminRetryPolicyOption>(
        spanner_admin::DatabaseAdminLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<spanner_admin::DatabaseAdminBackoffPolicyOption>()) {
    options.set<spanner_admin::DatabaseAdminBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<spanner_admin::DatabaseAdminPollingPolicyOption>()) {
    options.set<spanner_admin::DatabaseAdminPollingPolicyOption>(
        GenericPollingPolicy<
            spanner_admin::DatabaseAdminRetryPolicyOption::Type,
            spanner_admin::DatabaseAdminBackoffPolicyOption::Type>(
            options.get<spanner_admin::DatabaseAdminRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          spanner_admin::DatabaseAdminConnectionIdempotencyPolicyOption>()) {
    options.set<spanner_admin::DatabaseAdminConnectionIdempotencyPolicyOption>(
        spanner_admin::MakeDefaultDatabaseAdminConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
