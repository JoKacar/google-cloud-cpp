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


#include "google/cloud/compute/firewall_policies/v1/internal/firewall_policies_rest_metadata_decorator.h"
#include "absl/strings/str_format.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_firewall_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FirewallPoliciesRestMetadata::FirewallPoliciesRestMetadata(
    std::shared_ptr<FirewallPoliciesRestStub> child)
    : child_(std::move(child)),
      api_client_header_(google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesRestMetadata::AsyncAddAssociation(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::firewall_policies::v1::AddAssociationRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncAddAssociation(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesRestMetadata::AsyncAddRule(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::firewall_policies::v1::AddRuleRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncAddRule(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesRestMetadata::AsyncCloneRules(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::firewall_policies::v1::CloneRulesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCloneRules(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesRestMetadata::AsyncDeleteFirewallPolicies(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::firewall_policies::v1::DeleteFirewallPoliciesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteFirewallPolicies(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
FirewallPoliciesRestMetadata::GetFirewallPolicies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::firewall_policies::v1::GetFirewallPoliciesRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetFirewallPolicies(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
FirewallPoliciesRestMetadata::GetAssociation(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::firewall_policies::v1::GetAssociationRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetAssociation(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
FirewallPoliciesRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::firewall_policies::v1::GetIamPolicyRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetIamPolicy(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
FirewallPoliciesRestMetadata::GetRule(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::firewall_policies::v1::GetRuleRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetRule(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesRestMetadata::AsyncInsertFirewallPolicies(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::firewall_policies::v1::InsertFirewallPoliciesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertFirewallPolicies(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyList>
FirewallPoliciesRestMetadata::ListFirewallPolicies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::firewall_policies::v1::ListFirewallPoliciesRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListFirewallPolicies(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPoliciesListAssociationsResponse>
FirewallPoliciesRestMetadata::ListAssociations(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::firewall_policies::v1::ListAssociationsRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListAssociations(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesRestMetadata::AsyncMove(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::firewall_policies::v1::MoveRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncMove(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesRestMetadata::AsyncPatchFirewallPolicies(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::firewall_policies::v1::PatchFirewallPoliciesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchFirewallPolicies(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesRestMetadata::AsyncPatchRule(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::firewall_policies::v1::PatchRuleRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchRule(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesRestMetadata::AsyncRemoveAssociation(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::firewall_policies::v1::RemoveAssociationRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncRemoveAssociation(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesRestMetadata::AsyncRemoveRule(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::firewall_policies::v1::RemoveRuleRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncRemoveRule(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
FirewallPoliciesRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::firewall_policies::v1::SetIamPolicyRequest const& request) {
  SetMetadata(rest_context);
  return child_->SetIamPolicy(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
FirewallPoliciesRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::firewall_policies::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context);
  return child_->TestIamPermissions(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_organization_operations::v1::GetGlobalOrganizationOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status>
FirewallPoliciesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_organization_operations::v1::DeleteGlobalOrganizationOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void FirewallPoliciesRestMetadata::SetMetadata(
      rest_internal::RestContext& rest_context,
      std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader(
        "x-goog-user-project", options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader(
        "x-goog-quota-user", options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
        absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
        ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_firewall_policies_v1_internal
}  // namespace cloud
}  // namespace google
