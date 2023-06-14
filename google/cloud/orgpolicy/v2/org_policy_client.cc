// Copyright 2022 Google LLC
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
// source: google/cloud/orgpolicy/v2/orgpolicy.proto

#include "google/cloud/orgpolicy/v2/org_policy_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace orgpolicy_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OrgPolicyClient::OrgPolicyClient(
    std::shared_ptr<OrgPolicyConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
OrgPolicyClient::~OrgPolicyClient() = default;

StreamRange<google::cloud::orgpolicy::v2::Constraint>
OrgPolicyClient::ListConstraints(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::orgpolicy::v2::ListConstraintsRequest request;
  request.set_parent(parent);
  return connection_->ListConstraints(request);
}

StreamRange<google::cloud::orgpolicy::v2::Constraint>
OrgPolicyClient::ListConstraints(
    google::cloud::orgpolicy::v2::ListConstraintsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListConstraints(std::move(request));
}

StreamRange<google::cloud::orgpolicy::v2::Policy> OrgPolicyClient::ListPolicies(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::orgpolicy::v2::ListPoliciesRequest request;
  request.set_parent(parent);
  return connection_->ListPolicies(request);
}

StreamRange<google::cloud::orgpolicy::v2::Policy> OrgPolicyClient::ListPolicies(
    google::cloud::orgpolicy::v2::ListPoliciesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListPolicies(std::move(request));
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyClient::GetPolicy(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::orgpolicy::v2::GetPolicyRequest request;
  request.set_name(name);
  return connection_->GetPolicy(request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyClient::GetPolicy(
    google::cloud::orgpolicy::v2::GetPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetPolicy(request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
OrgPolicyClient::GetEffectivePolicy(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::orgpolicy::v2::GetEffectivePolicyRequest request;
  request.set_name(name);
  return connection_->GetEffectivePolicy(request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
OrgPolicyClient::GetEffectivePolicy(
    google::cloud::orgpolicy::v2::GetEffectivePolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEffectivePolicy(request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyClient::CreatePolicy(
    std::string const& parent,
    google::cloud::orgpolicy::v2::Policy const& policy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::orgpolicy::v2::CreatePolicyRequest request;
  request.set_parent(parent);
  *request.mutable_policy() = policy;
  return connection_->CreatePolicy(request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyClient::CreatePolicy(
    google::cloud::orgpolicy::v2::CreatePolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreatePolicy(request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyClient::UpdatePolicy(
    google::cloud::orgpolicy::v2::Policy const& policy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::orgpolicy::v2::UpdatePolicyRequest request;
  *request.mutable_policy() = policy;
  return connection_->UpdatePolicy(request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyClient::UpdatePolicy(
    google::cloud::orgpolicy::v2::UpdatePolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdatePolicy(request);
}

Status OrgPolicyClient::DeletePolicy(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::orgpolicy::v2::DeletePolicyRequest request;
  request.set_name(name);
  return connection_->DeletePolicy(request);
}

Status OrgPolicyClient::DeletePolicy(
    google::cloud::orgpolicy::v2::DeletePolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePolicy(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace orgpolicy_v2
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
