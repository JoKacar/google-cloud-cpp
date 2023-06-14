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
// source: google/cloud/vmmigration/v1/vmmigration.proto

#include "google/cloud/vmmigration/v1/internal/vm_migration_option_defaults.h"
#include "google/cloud/vmmigration/v1/vm_migration_connection.h"
#include "google/cloud/vmmigration/v1/vm_migration_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace vmmigration_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options VmMigrationDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_VM_MIGRATION_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_VM_MIGRATION_AUTHORITY", "vmmigration.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<vmmigration_v1::VmMigrationRetryPolicyOption>()) {
    options.set<vmmigration_v1::VmMigrationRetryPolicyOption>(
        vmmigration_v1::VmMigrationLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<vmmigration_v1::VmMigrationBackoffPolicyOption>()) {
    options.set<vmmigration_v1::VmMigrationBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<vmmigration_v1::VmMigrationPollingPolicyOption>()) {
    options.set<vmmigration_v1::VmMigrationPollingPolicyOption>(
        GenericPollingPolicy<
            vmmigration_v1::VmMigrationRetryPolicyOption::Type,
            vmmigration_v1::VmMigrationBackoffPolicyOption::Type>(
            options.get<vmmigration_v1::VmMigrationRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          vmmigration_v1::VmMigrationConnectionIdempotencyPolicyOption>()) {
    options.set<vmmigration_v1::VmMigrationConnectionIdempotencyPolicyOption>(
        vmmigration_v1::MakeDefaultVmMigrationConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmmigration_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
