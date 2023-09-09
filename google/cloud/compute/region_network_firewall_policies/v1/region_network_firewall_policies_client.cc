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
// google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies.proto

#include "google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_network_firewall_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionNetworkFirewallPoliciesClient::RegionNetworkFirewallPoliciesClient(
    ExperimentalTag,
    std::shared_ptr<RegionNetworkFirewallPoliciesConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionNetworkFirewallPoliciesClient::~RegionNetworkFirewallPoliciesClient() =
    default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::AddAssociation(
    std::string const& project, std::string const& region,
    std::string const& firewall_policy,
    google::cloud::cpp::compute::v1::FirewallPolicyAssociation const&
        firewall_policy_association_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      AddAssociationRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_firewall_policy(firewall_policy);
  *request.mutable_firewall_policy_association_resource() =
      firewall_policy_association_resource;
  return connection_->AddAssociation(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::AddAssociation(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        AddAssociationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddAssociation(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::AddRule(
    std::string const& project, std::string const& region,
    std::string const& firewall_policy,
    google::cloud::cpp::compute::v1::FirewallPolicyRule const&
        firewall_policy_rule_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      AddRuleRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_firewall_policy(firewall_policy);
  *request.mutable_firewall_policy_rule_resource() =
      firewall_policy_rule_resource;
  return connection_->AddRule(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::AddRule(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        AddRuleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddRule(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::CloneRules(
    std::string const& project, std::string const& region,
    std::string const& firewall_policy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      CloneRulesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_firewall_policy(firewall_policy);
  return connection_->CloneRules(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::CloneRules(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        CloneRulesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CloneRules(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::DeleteRegionNetworkFirewallPolicy(
    std::string const& project, std::string const& region,
    std::string const& firewall_policy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      DeleteRegionNetworkFirewallPolicyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_firewall_policy(firewall_policy);
  return connection_->DeleteRegionNetworkFirewallPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::DeleteRegionNetworkFirewallPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        DeleteRegionNetworkFirewallPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRegionNetworkFirewallPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
RegionNetworkFirewallPoliciesClient::GetRegionNetworkFirewallPolicy(
    std::string const& project, std::string const& region,
    std::string const& firewall_policy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      GetRegionNetworkFirewallPolicyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_firewall_policy(firewall_policy);
  return connection_->GetRegionNetworkFirewallPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
RegionNetworkFirewallPoliciesClient::GetRegionNetworkFirewallPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetRegionNetworkFirewallPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRegionNetworkFirewallPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
RegionNetworkFirewallPoliciesClient::GetAssociation(
    std::string const& project, std::string const& region,
    std::string const& firewall_policy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      GetAssociationRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_firewall_policy(firewall_policy);
  return connection_->GetAssociation(request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
RegionNetworkFirewallPoliciesClient::GetAssociation(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetAssociationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAssociation(request);
}

StatusOr<google::cloud::cpp::compute::v1::
             RegionNetworkFirewallPoliciesGetEffectiveFirewallsResponse>
RegionNetworkFirewallPoliciesClient::GetEffectiveFirewalls(
    std::string const& project, std::string const& region,
    std::string const& network, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      GetEffectiveFirewallsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_network(network);
  return connection_->GetEffectiveFirewalls(request);
}

StatusOr<google::cloud::cpp::compute::v1::
             RegionNetworkFirewallPoliciesGetEffectiveFirewallsResponse>
RegionNetworkFirewallPoliciesClient::GetEffectiveFirewalls(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetEffectiveFirewallsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEffectiveFirewalls(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionNetworkFirewallPoliciesClient::GetIamPolicy(std::string const& project,
                                                  std::string const& region,
                                                  std::string const& resource,
                                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      GetIamPolicyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionNetworkFirewallPoliciesClient::GetIamPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetIamPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
RegionNetworkFirewallPoliciesClient::GetRule(std::string const& project,
                                             std::string const& region,
                                             std::string const& firewall_policy,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      GetRuleRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_firewall_policy(firewall_policy);
  return connection_->GetRule(request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
RegionNetworkFirewallPoliciesClient::GetRule(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetRuleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRule(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::InsertRegionNetworkFirewallPolicy(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::FirewallPolicy const&
        firewall_policy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      InsertRegionNetworkFirewallPolicyRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_firewall_policy_resource() = firewall_policy_resource;
  return connection_->InsertRegionNetworkFirewallPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::InsertRegionNetworkFirewallPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        InsertRegionNetworkFirewallPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertRegionNetworkFirewallPolicy(request);
}

StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>
RegionNetworkFirewallPoliciesClient::ListRegionNetworkFirewallPolicies(
    std::string const& project, std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      ListRegionNetworkFirewallPoliciesRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionNetworkFirewallPolicies(request);
}

StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>
RegionNetworkFirewallPoliciesClient::ListRegionNetworkFirewallPolicies(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        ListRegionNetworkFirewallPoliciesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionNetworkFirewallPolicies(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::PatchRegionNetworkFirewallPolicy(
    std::string const& project, std::string const& region,
    std::string const& firewall_policy,
    google::cloud::cpp::compute::v1::FirewallPolicy const&
        firewall_policy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      PatchRegionNetworkFirewallPolicyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_firewall_policy(firewall_policy);
  *request.mutable_firewall_policy_resource() = firewall_policy_resource;
  return connection_->PatchRegionNetworkFirewallPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::PatchRegionNetworkFirewallPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        PatchRegionNetworkFirewallPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchRegionNetworkFirewallPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::PatchRule(
    std::string const& project, std::string const& region,
    std::string const& firewall_policy,
    google::cloud::cpp::compute::v1::FirewallPolicyRule const&
        firewall_policy_rule_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      PatchRuleRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_firewall_policy(firewall_policy);
  *request.mutable_firewall_policy_rule_resource() =
      firewall_policy_rule_resource;
  return connection_->PatchRule(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::PatchRule(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        PatchRuleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchRule(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::RemoveAssociation(
    std::string const& project, std::string const& region,
    std::string const& firewall_policy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      RemoveAssociationRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_firewall_policy(firewall_policy);
  return connection_->RemoveAssociation(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::RemoveAssociation(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        RemoveAssociationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RemoveAssociation(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::RemoveRule(
    std::string const& project, std::string const& region,
    std::string const& firewall_policy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      RemoveRuleRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_firewall_policy(firewall_policy);
  return connection_->RemoveRule(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesClient::RemoveRule(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        RemoveRuleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RemoveRule(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionNetworkFirewallPoliciesClient::SetIamPolicy(
    std::string const& project, std::string const& region,
    std::string const& resource,
    google::cloud::cpp::compute::v1::RegionSetPolicyRequest const&
        region_set_policy_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      SetIamPolicyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_region_set_policy_request_resource() =
      region_set_policy_request_resource;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionNetworkFirewallPoliciesClient::SetIamPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        SetIamPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
RegionNetworkFirewallPoliciesClient::TestIamPermissions(
    std::string const& project, std::string const& region,
    std::string const& resource,
    google::cloud::cpp::compute::v1::TestPermissionsRequest const&
        test_permissions_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_network_firewall_policies::v1::
      TestIamPermissionsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_test_permissions_request_resource() =
      test_permissions_request_resource;
  return connection_->TestIamPermissions(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
RegionNetworkFirewallPoliciesClient::TestIamPermissions(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        TestIamPermissionsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_network_firewall_policies_v1
}  // namespace cloud
}  // namespace google
