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
// source: google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies.proto

#include "google/cloud/compute/region_network_firewall_policies/v1/internal/region_network_firewall_policies_option_defaults.h"
#include "google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies_connection.h"
#include "google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_network_firewall_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options RegionNetworkFirewallPoliciesDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_REGION_NETWORK_FIREWALL_POLICIES_ENDPOINT",
      "", "GOOGLE_CLOUD_CPP_REGION_NETWORK_FIREWALL_POLICIES_AUTHORITY",
      "compute.googleapis.com");
  options = google::cloud::internal::PopulateGrpcOptions(
      std::move(options), "");
  if (!options.has<compute_region_network_firewall_policies_v1::RegionNetworkFirewallPoliciesRetryPolicyOption>()) {
    options.set<compute_region_network_firewall_policies_v1::RegionNetworkFirewallPoliciesRetryPolicyOption>(
        compute_region_network_firewall_policies_v1::RegionNetworkFirewallPoliciesLimitedTimeRetryPolicy(
            std::chrono::minutes(30)).clone());
  }
  if (!options.has<compute_region_network_firewall_policies_v1::RegionNetworkFirewallPoliciesBackoffPolicyOption>()) {
    options.set<compute_region_network_firewall_policies_v1::RegionNetworkFirewallPoliciesBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling).clone());
  }
  if (!options.has<compute_region_network_firewall_policies_v1::RegionNetworkFirewallPoliciesPollingPolicyOption>()) {
    options.set<compute_region_network_firewall_policies_v1::RegionNetworkFirewallPoliciesPollingPolicyOption>(
        GenericPollingPolicy<
            compute_region_network_firewall_policies_v1::RegionNetworkFirewallPoliciesRetryPolicyOption::Type,
            compute_region_network_firewall_policies_v1::RegionNetworkFirewallPoliciesBackoffPolicyOption::Type>(
            options.get<compute_region_network_firewall_policies_v1::RegionNetworkFirewallPoliciesRetryPolicyOption>()->clone(),
            options.get<compute_region_network_firewall_policies_v1::RegionNetworkFirewallPoliciesBackoffPolicyOption>()->clone())
            .clone());
  }
  if (!options.has<compute_region_network_firewall_policies_v1::RegionNetworkFirewallPoliciesConnectionIdempotencyPolicyOption>()) {
    options.set<compute_region_network_firewall_policies_v1::RegionNetworkFirewallPoliciesConnectionIdempotencyPolicyOption>(
        compute_region_network_firewall_policies_v1::MakeDefaultRegionNetworkFirewallPoliciesConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_network_firewall_policies_v1_internal
}  // namespace cloud
}  // namespace google
