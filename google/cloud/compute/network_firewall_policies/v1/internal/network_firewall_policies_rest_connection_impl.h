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
// google/cloud/compute/network_firewall_policies/v1/network_firewall_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_FIREWALL_POLICIES_V1_INTERNAL_NETWORK_FIREWALL_POLICIES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_FIREWALL_POLICIES_V1_INTERNAL_NETWORK_FIREWALL_POLICIES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/network_firewall_policies/v1/internal/network_firewall_policies_rest_stub.h"
#include "google/cloud/compute/network_firewall_policies/v1/internal/network_firewall_policies_retry_traits.h"
#include "google/cloud/compute/network_firewall_policies/v1/network_firewall_policies_connection.h"
#include "google/cloud/compute/network_firewall_policies/v1/network_firewall_policies_connection_idempotency_policy.h"
#include "google/cloud/compute/network_firewall_policies/v1/network_firewall_policies_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_firewall_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworkFirewallPoliciesRestConnectionImpl
    : public compute_network_firewall_policies_v1::
          NetworkFirewallPoliciesConnection {
 public:
  ~NetworkFirewallPoliciesRestConnectionImpl() override = default;

  NetworkFirewallPoliciesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_network_firewall_policies_v1_internal::
                          NetworkFirewallPoliciesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddAssociation(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          AddAssociationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          AddRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> CloneRules(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          CloneRulesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteFirewallPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          DeleteFirewallPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy> GetFirewallPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          GetFirewallPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
  GetAssociation(google::cloud::cpp::compute::network_firewall_policies::v1::
                     GetAssociationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          GetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule> GetRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          GetRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertFirewallPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          InsertFirewallPolicyRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>
  ListNetworkFirewallPolicies(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          ListNetworkFirewallPoliciesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchFirewallPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          PatchFirewallPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          PatchRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveAssociation(google::cloud::cpp::compute::network_firewall_policies::v1::
                        RemoveAssociationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> RemoveRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          RemoveRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::network_firewall_policies::
                         v1::TestIamPermissionsRequest const& request) override;

 private:
  static std::unique_ptr<
      compute_network_firewall_policies_v1::NetworkFirewallPoliciesRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_network_firewall_policies_v1::
                 NetworkFirewallPoliciesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_network_firewall_policies_v1::
                 NetworkFirewallPoliciesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<compute_network_firewall_policies_v1::
                             NetworkFirewallPoliciesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_network_firewall_policies_v1::
                 NetworkFirewallPoliciesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_network_firewall_policies_v1::
                 NetworkFirewallPoliciesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_network_firewall_policies_v1_internal::
                      NetworkFirewallPoliciesRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_firewall_policies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_FIREWALL_POLICIES_V1_INTERNAL_NETWORK_FIREWALL_POLICIES_REST_CONNECTION_IMPL_H
