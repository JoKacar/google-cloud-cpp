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
// source: google/cloud/compute/forwarding_rules/v1/forwarding_rules.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FORWARDING_RULES_V1_FORWARDING_RULES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FORWARDING_RULES_V1_FORWARDING_RULES_CONNECTION_H

#include "google/cloud/compute/forwarding_rules/v1/forwarding_rules_connection_idempotency_policy.h"
#include "google/cloud/compute/forwarding_rules/v1/internal/forwarding_rules_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/forwarding_rules/v1/forwarding_rules.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_forwarding_rules_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ForwardingRulesRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        compute_forwarding_rules_v1_internal::ForwardingRulesRetryTraits>;

using ForwardingRulesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_forwarding_rules_v1_internal::ForwardingRulesRetryTraits>;

using ForwardingRulesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_forwarding_rules_v1_internal::ForwardingRulesRetryTraits>;

/**
 * The `ForwardingRulesConnection` object for `ForwardingRulesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ForwardingRulesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `ForwardingRulesClient`.
 *
 * To create a concrete instance, see `MakeForwardingRulesConnection()`.
 *
 * For mocking, see
 * `compute_forwarding_rules_v1_mocks::MockForwardingRulesConnection`.
 */
class ForwardingRulesConnection {
 public:
  virtual ~ForwardingRulesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<
      google::cloud::cpp::compute::v1::ForwardingRuleAggregatedList>
  AggregatedListForwardingRules(
      google::cloud::cpp::compute::forwarding_rules::v1::
          AggregatedListForwardingRulesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteForwardingRules(google::cloud::cpp::compute::forwarding_rules::v1::
                            DeleteForwardingRulesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::ForwardingRule>
  GetForwardingRules(google::cloud::cpp::compute::forwarding_rules::v1::
                         GetForwardingRulesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertForwardingRules(google::cloud::cpp::compute::forwarding_rules::v1::
                            InsertForwardingRulesRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::ForwardingRule>
  ListForwardingRules(google::cloud::cpp::compute::forwarding_rules::v1::
                          ListForwardingRulesRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchForwardingRules(google::cloud::cpp::compute::forwarding_rules::v1::
                           PatchForwardingRulesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetLabels(
      google::cloud::cpp::compute::forwarding_rules::v1::SetLabelsRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetTarget(
      google::cloud::cpp::compute::forwarding_rules::v1::SetTargetRequest const&
          request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_forwarding_rules_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FORWARDING_RULES_V1_FORWARDING_RULES_CONNECTION_H
