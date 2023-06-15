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
// source: google/cloud/compute/firewall_policies/v1/firewall_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALL_POLICIES_V1_FIREWALL_POLICIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALL_POLICIES_V1_FIREWALL_POLICIES_CONNECTION_H

#include "google/cloud/compute/firewall_policies/v1/firewall_policies_connection_idempotency_policy.h"
#include "google/cloud/compute/firewall_policies/v1/internal/firewall_policies_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/firewall_policies/v1/firewall_policies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_firewall_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using FirewallPoliciesRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        compute_firewall_policies_v1_internal::FirewallPoliciesRetryTraits>;

using FirewallPoliciesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_firewall_policies_v1_internal::FirewallPoliciesRetryTraits>;

using FirewallPoliciesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_firewall_policies_v1_internal::FirewallPoliciesRetryTraits>;

/**
 * The `FirewallPoliciesConnection` object for `FirewallPoliciesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `FirewallPoliciesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `FirewallPoliciesClient`.
 *
 * To create a concrete instance, see `MakeFirewallPoliciesConnection()`.
 *
 * For mocking, see
 * `compute_firewall_policies_v1_mocks::MockFirewallPoliciesConnection`.
 */
class FirewallPoliciesConnection {
 public:
  virtual ~FirewallPoliciesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddAssociation(google::cloud::cpp::compute::firewall_policies::v1::
                     AddAssociationRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddRule(
      google::cloud::cpp::compute::firewall_policies::v1::AddRuleRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  CloneRules(google::cloud::cpp::compute::firewall_policies::v1::
                 CloneRulesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteFirewallPolicies(google::cloud::cpp::compute::firewall_policies::v1::
                             DeleteFirewallPoliciesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
  GetFirewallPolicies(google::cloud::cpp::compute::firewall_policies::v1::
                          GetFirewallPoliciesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
  GetAssociation(google::cloud::cpp::compute::firewall_policies::v1::
                     GetAssociationRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::firewall_policies::v1::
          GetIamPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule> GetRule(
      google::cloud::cpp::compute::firewall_policies::v1::GetRuleRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertFirewallPolicies(google::cloud::cpp::compute::firewall_policies::v1::
                             InsertFirewallPoliciesRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>
  ListFirewallPolicies(google::cloud::cpp::compute::firewall_policies::v1::
                           ListFirewallPoliciesRequest request);

  virtual StatusOr<
      google::cloud::cpp::compute::v1::FirewallPoliciesListAssociationsResponse>
  ListAssociations(google::cloud::cpp::compute::firewall_policies::v1::
                       ListAssociationsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Move(
      google::cloud::cpp::compute::firewall_policies::v1::MoveRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchFirewallPolicies(google::cloud::cpp::compute::firewall_policies::v1::
                            PatchFirewallPoliciesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRule(google::cloud::cpp::compute::firewall_policies::v1::
                PatchRuleRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveAssociation(google::cloud::cpp::compute::firewall_policies::v1::
                        RemoveAssociationRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveRule(google::cloud::cpp::compute::firewall_policies::v1::
                 RemoveRuleRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::firewall_policies::v1::
          SetIamPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::firewall_policies::v1::
                         TestIamPermissionsRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_firewall_policies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALL_POLICIES_V1_FIREWALL_POLICIES_CONNECTION_H
