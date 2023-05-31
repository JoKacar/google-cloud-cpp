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
// source: google/cloud/compute/http_health_checks/v1/http_health_checks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTP_HEALTH_CHECKS_V1_HTTP_HEALTH_CHECKS_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTP_HEALTH_CHECKS_V1_HTTP_HEALTH_CHECKS_OPTIONS_H

#include "google/cloud/backoff_policy.h"
#include "google/cloud/compute/http_health_checks/v1/http_health_checks_connection.h"
#include "google/cloud/compute/http_health_checks/v1/http_health_checks_connection_idempotency_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_http_health_checks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Use with `google::cloud::Options` to configure the retry policy.
 *
 * @ingroup google-cloud-compute-options
 */
struct HttpHealthChecksRetryPolicyOption {
  using Type = std::shared_ptr<HttpHealthChecksRetryPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the backoff policy.
 *
 * @ingroup google-cloud-compute-options
 */
struct HttpHealthChecksBackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure which operations are retried.
 *
 * @ingroup google-cloud-compute-options
 */
struct HttpHealthChecksConnectionIdempotencyPolicyOption {
  using Type = std::shared_ptr<HttpHealthChecksConnectionIdempotencyPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the long-running operations
 * polling policy.
 *
 * @ingroup google-cloud-compute-options
 */
struct HttpHealthChecksPollingPolicyOption {
  using Type = std::shared_ptr<PollingPolicy>;
};

/**
 * The options applicable to HttpHealthChecks.
 *
 * @ingroup google-cloud-compute-options
 */
using HttpHealthChecksPolicyOptionList =
    OptionList<HttpHealthChecksRetryPolicyOption,
               HttpHealthChecksBackoffPolicyOption,
               HttpHealthChecksPollingPolicyOption,
               HttpHealthChecksConnectionIdempotencyPolicyOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_http_health_checks_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTP_HEALTH_CHECKS_V1_HTTP_HEALTH_CHECKS_OPTIONS_H
