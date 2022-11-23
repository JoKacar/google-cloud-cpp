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
// google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_FORWARDING_RULES_V1_GLOBAL_FORWARDING_RULES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_FORWARDING_RULES_V1_GLOBAL_FORWARDING_RULES_CONNECTION_H

#include "google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules_connection_idempotency_policy.h"
#include "google/cloud/compute/global_forwarding_rules/v1/internal/global_forwarding_rules_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_forwarding_rules_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using GlobalForwardingRulesRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        compute_global_forwarding_rules_v1_internal::
            GlobalForwardingRulesRetryTraits>;

using GlobalForwardingRulesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_global_forwarding_rules_v1_internal::
            GlobalForwardingRulesRetryTraits>;

using GlobalForwardingRulesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_global_forwarding_rules_v1_internal::
            GlobalForwardingRulesRetryTraits>;

/**
 * The `GlobalForwardingRulesConnection` object for
 * `GlobalForwardingRulesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `GlobalForwardingRulesClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `GlobalForwardingRulesClient`.
 *
 * To create a concrete instance, see `MakeGlobalForwardingRulesConnection()`.
 *
 * For mocking, see
 * `compute_global_forwarding_rules_v1_mocks::MockGlobalForwardingRulesConnection`.
 */
class GlobalForwardingRulesConnection {
 public:
  virtual ~GlobalForwardingRulesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteGlobalForwardingRules(
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          DeleteGlobalForwardingRulesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::ForwardingRule>
  GetGlobalForwardingRules(
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          GetGlobalForwardingRulesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertGlobalForwardingRules(
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          InsertGlobalForwardingRulesRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::ForwardingRule>
  ListGlobalForwardingRules(
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          ListGlobalForwardingRulesRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchGlobalForwardingRules(
      google::cloud::cpp::compute::global_forwarding_rules::v1::
          PatchGlobalForwardingRulesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetLabels(google::cloud::cpp::compute::global_forwarding_rules::v1::
                SetLabelsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetTarget(google::cloud::cpp::compute::global_forwarding_rules::v1::
                SetTargetRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_forwarding_rules_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_FORWARDING_RULES_V1_GLOBAL_FORWARDING_RULES_CONNECTION_H
