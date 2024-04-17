// Copyright 2024 Google LLC
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
// source: google/cloud/sql/v1/cloud_sql_available_database_versions.proto

#include "google/cloud/sql/v1/internal/sql_available_database_versions_option_defaults.h"
#include "google/cloud/sql/v1/sql_available_database_versions_connection.h"
#include "google/cloud/sql/v1/sql_available_database_versions_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options SqlAvailableDatabaseVersionsServiceDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options),
      "GOOGLE_CLOUD_CPP_SQL_AVAILABLE_DATABASE_VERSIONS_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_SQL_AVAILABLE_DATABASE_VERSIONS_SERVICE_AUTHORITY",
      "sqladmin.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<
          sql_v1::SqlAvailableDatabaseVersionsServiceRetryPolicyOption>()) {
    options.set<sql_v1::SqlAvailableDatabaseVersionsServiceRetryPolicyOption>(
        sql_v1::SqlAvailableDatabaseVersionsServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<
          sql_v1::SqlAvailableDatabaseVersionsServiceBackoffPolicyOption>()) {
    options.set<sql_v1::SqlAvailableDatabaseVersionsServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<
          sql_v1::
              SqlAvailableDatabaseVersionsServiceConnectionIdempotencyPolicyOption>()) {
    options.set<
        sql_v1::
            SqlAvailableDatabaseVersionsServiceConnectionIdempotencyPolicyOption>(
        sql_v1::
            MakeDefaultSqlAvailableDatabaseVersionsServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google
