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
// source: google/cloud/clouddms/v1/clouddms.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_DATA_MIGRATION_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_DATA_MIGRATION_OPTIONS_H

#include "google/cloud/datamigration/v1/data_migration_connection.h"
#include "google/cloud/datamigration/v1/data_migration_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace datamigration_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Use with `google::cloud::Options` to configure the retry policy.
 *
 * @ingroup google-cloud-datamigration-options
 */
struct DataMigrationServiceRetryPolicyOption {
  using Type = std::shared_ptr<DataMigrationServiceRetryPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the backoff policy.
 *
 * @ingroup google-cloud-datamigration-options
 */
struct DataMigrationServiceBackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure which operations are retried.
 *
 * @ingroup google-cloud-datamigration-options
 */
struct DataMigrationServiceConnectionIdempotencyPolicyOption {
  using Type = std::shared_ptr<DataMigrationServiceConnectionIdempotencyPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the long-running operations
 * polling policy.
 *
 * @ingroup google-cloud-datamigration-options
 */
struct DataMigrationServicePollingPolicyOption {
  using Type = std::shared_ptr<PollingPolicy>;
};

/**
 * The options applicable to DataMigrationService.
 *
 * @ingroup google-cloud-datamigration-options
 */
using DataMigrationServicePolicyOptionList =
    OptionList<DataMigrationServiceRetryPolicyOption,
               DataMigrationServiceBackoffPolicyOption,
               DataMigrationServicePollingPolicyOption,
               DataMigrationServiceConnectionIdempotencyPolicyOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datamigration_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_DATA_MIGRATION_OPTIONS_H
