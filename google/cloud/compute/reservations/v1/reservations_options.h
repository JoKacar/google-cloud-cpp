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
// source: google/cloud/compute/reservations/v1/reservations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESERVATIONS_V1_RESERVATIONS_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESERVATIONS_V1_RESERVATIONS_OPTIONS_H

#include "google/cloud/compute/reservations/v1/reservations_connection.h"
#include "google/cloud/compute/reservations/v1/reservations_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_reservations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Use with `google::cloud::Options` to configure the retry policy.
 *
 * @ingroup google-cloud-compute-options
 */
struct ReservationsRetryPolicyOption {
  using Type = std::shared_ptr<ReservationsRetryPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the backoff policy.
 *
 * @ingroup google-cloud-compute-options
 */
struct ReservationsBackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure which operations are retried.
 *
 * @ingroup google-cloud-compute-options
 */
struct ReservationsConnectionIdempotencyPolicyOption {
  using Type = std::shared_ptr<ReservationsConnectionIdempotencyPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the long-running operations
 * polling policy.
 *
 * @ingroup google-cloud-compute-options
 */
struct ReservationsPollingPolicyOption {
  using Type = std::shared_ptr<PollingPolicy>;
};

/**
 * The options applicable to Reservations.
 *
 * @ingroup google-cloud-compute-options
 */
using ReservationsPolicyOptionList =
    OptionList<ReservationsRetryPolicyOption, ReservationsBackoffPolicyOption,
               ReservationsPollingPolicyOption,
               ReservationsConnectionIdempotencyPolicyOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_reservations_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESERVATIONS_V1_RESERVATIONS_OPTIONS_H
