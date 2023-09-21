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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FORWARDING_RULES_V1_INTERNAL_FORWARDING_RULES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FORWARDING_RULES_V1_INTERNAL_FORWARDING_RULES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/forwarding_rules/v1/forwarding_rules_connection.h"
#include "google/cloud/compute/forwarding_rules/v1/forwarding_rules_connection_idempotency_policy.h"
#include "google/cloud/compute/forwarding_rules/v1/forwarding_rules_options.h"
#include "google/cloud/compute/forwarding_rules/v1/internal/forwarding_rules_rest_stub.h"
#include "google/cloud/compute/forwarding_rules/v1/internal/forwarding_rules_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_forwarding_rules_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ForwardingRulesRestConnectionImpl
    : public compute_forwarding_rules_v1::ForwardingRulesConnection {
 public:
  ~ForwardingRulesRestConnectionImpl() override = default;

  ForwardingRulesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          compute_forwarding_rules_v1_internal::ForwardingRulesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::ForwardingRulesScopedList>>
  AggregatedListForwardingRules(
      google::cloud::cpp::compute::forwarding_rules::v1::
          AggregatedListForwardingRulesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteForwardingRule(google::cloud::cpp::compute::forwarding_rules::v1::
                           DeleteForwardingRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::ForwardingRule> GetForwardingRule(
      google::cloud::cpp::compute::forwarding_rules::v1::
          GetForwardingRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertForwardingRule(google::cloud::cpp::compute::forwarding_rules::v1::
                           InsertForwardingRuleRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::ForwardingRule>
  ListForwardingRules(google::cloud::cpp::compute::forwarding_rules::v1::
                          ListForwardingRulesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchForwardingRule(google::cloud::cpp::compute::forwarding_rules::v1::
                          PatchForwardingRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::forwarding_rules::v1::SetLabelsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetTarget(
      google::cloud::cpp::compute::forwarding_rules::v1::SetTargetRequest const&
          request) override;

 private:
  static std::unique_ptr<
      compute_forwarding_rules_v1::ForwardingRulesRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_forwarding_rules_v1::ForwardingRulesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_forwarding_rules_v1::ForwardingRulesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_forwarding_rules_v1::ForwardingRulesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_forwarding_rules_v1::
                 ForwardingRulesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_forwarding_rules_v1::ForwardingRulesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_forwarding_rules_v1_internal::ForwardingRulesRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_forwarding_rules_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FORWARDING_RULES_V1_INTERNAL_FORWARDING_RULES_REST_CONNECTION_IMPL_H
