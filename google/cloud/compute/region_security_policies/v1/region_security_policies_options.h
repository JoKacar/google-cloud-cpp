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
// source:
// google/cloud/compute/region_security_policies/v1/region_security_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_REGION_SECURITY_POLICIES_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_REGION_SECURITY_POLICIES_OPTIONS_H

#include "google/cloud/compute/region_security_policies/v1/region_security_policies_connection.h"
#include "google/cloud/compute/region_security_policies/v1/region_security_policies_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_security_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Use with `google::cloud::Options` to configure the retry policy.
 *
 * @ingroup google-cloud-compute-options
 */
struct RegionSecurityPoliciesRetryPolicyOption {
  using Type = std::shared_ptr<RegionSecurityPoliciesRetryPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the backoff policy.
 *
 * @ingroup google-cloud-compute-options
 */
struct RegionSecurityPoliciesBackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure which operations are retried.
 *
 * @ingroup google-cloud-compute-options
 */
struct RegionSecurityPoliciesConnectionIdempotencyPolicyOption {
  using Type =
      std::shared_ptr<RegionSecurityPoliciesConnectionIdempotencyPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the long-running operations
 * polling policy.
 *
 * @ingroup google-cloud-compute-options
 */
struct RegionSecurityPoliciesPollingPolicyOption {
  using Type = std::shared_ptr<PollingPolicy>;
};

/**
 * The options applicable to RegionSecurityPolicies.
 *
 * @ingroup google-cloud-compute-options
 */
using RegionSecurityPoliciesPolicyOptionList =
    OptionList<RegionSecurityPoliciesRetryPolicyOption,
               RegionSecurityPoliciesBackoffPolicyOption,
               RegionSecurityPoliciesPollingPolicyOption,
               RegionSecurityPoliciesConnectionIdempotencyPolicyOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_security_policies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_REGION_SECURITY_POLICIES_OPTIONS_H
