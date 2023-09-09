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
// source: google/cloud/compute/security_policies/v1/security_policies.proto

#include "google/cloud/compute/security_policies/v1/internal/security_policies_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_security_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityPoliciesRestMetadata::SecurityPoliciesRestMetadata(
    std::shared_ptr<SecurityPoliciesRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestMetadata::AsyncAddRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::security_policies::v1::AddRuleRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncAddRule(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPoliciesAggregatedList>
SecurityPoliciesRestMetadata::AggregatedListSecurityPolicies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::security_policies::v1::
        AggregatedListSecurityPoliciesRequest const& request) {
  SetMetadata(rest_context);
  return child_->AggregatedListSecurityPolicies(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestMetadata::AsyncDeleteSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::security_policies::v1::
        DeleteSecurityPolicyRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteSecurityPolicy(cq, std::move(rest_context),
                                           request);
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy>
SecurityPoliciesRestMetadata::GetSecurityPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::security_policies::v1::
        GetSecurityPolicyRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetSecurityPolicy(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyRule>
SecurityPoliciesRestMetadata::GetRule(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::security_policies::v1::GetRuleRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetRule(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestMetadata::AsyncInsertSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::security_policies::v1::
        InsertSecurityPolicyRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertSecurityPolicy(cq, std::move(rest_context),
                                           request);
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyList>
SecurityPoliciesRestMetadata::ListSecurityPolicies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::security_policies::v1::
        ListSecurityPoliciesRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListSecurityPolicies(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::
             SecurityPoliciesListPreconfiguredExpressionSetsResponse>
SecurityPoliciesRestMetadata::ListPreconfiguredExpressionSets(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::security_policies::v1::
        ListPreconfiguredExpressionSetsRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListPreconfiguredExpressionSets(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestMetadata::AsyncPatchSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::security_policies::v1::
        PatchSecurityPolicyRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchSecurityPolicy(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestMetadata::AsyncPatchRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::security_policies::v1::PatchRuleRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchRule(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestMetadata::AsyncRemoveRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::security_policies::v1::RemoveRuleRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncRemoveRule(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestMetadata::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::security_policies::v1::SetLabelsRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetLabels(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetGlobalOperationRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> SecurityPoliciesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteGlobalOperationRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void SecurityPoliciesRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context,
    std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
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
}  // namespace compute_security_policies_v1_internal
}  // namespace cloud
}  // namespace google
