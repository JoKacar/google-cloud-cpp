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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ORGPOLICY_V2_INTERNAL_ORG_POLICY_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ORGPOLICY_V2_INTERNAL_ORG_POLICY_TRACING_CONNECTION_H

#include "google/cloud/orgpolicy/v2/org_policy_connection.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace orgpolicy_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class OrgPolicyTracingConnection : public orgpolicy_v2::OrgPolicyConnection {
 public:
  ~OrgPolicyTracingConnection() override = default;

  explicit OrgPolicyTracingConnection(
      std::shared_ptr<orgpolicy_v2::OrgPolicyConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::orgpolicy::v2::Constraint> ListConstraints(
      google::cloud::orgpolicy::v2::ListConstraintsRequest request) override;

  StreamRange<google::cloud::orgpolicy::v2::Policy> ListPolicies(
      google::cloud::orgpolicy::v2::ListPoliciesRequest request) override;

  StatusOr<google::cloud::orgpolicy::v2::Policy> GetPolicy(
      google::cloud::orgpolicy::v2::GetPolicyRequest const& request) override;

  StatusOr<google::cloud::orgpolicy::v2::Policy> GetEffectivePolicy(
      google::cloud::orgpolicy::v2::GetEffectivePolicyRequest const& request)
      override;

  StatusOr<google::cloud::orgpolicy::v2::Policy> CreatePolicy(
      google::cloud::orgpolicy::v2::CreatePolicyRequest const& request)
      override;

  StatusOr<google::cloud::orgpolicy::v2::Policy> UpdatePolicy(
      google::cloud::orgpolicy::v2::UpdatePolicyRequest const& request)
      override;

  Status DeletePolicy(google::cloud::orgpolicy::v2::DeletePolicyRequest const&
                          request) override;

 private:
  std::shared_ptr<orgpolicy_v2::OrgPolicyConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<orgpolicy_v2::OrgPolicyConnection>
MakeOrgPolicyTracingConnection(
    std::shared_ptr<orgpolicy_v2::OrgPolicyConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace orgpolicy_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ORGPOLICY_V2_INTERNAL_ORG_POLICY_TRACING_CONNECTION_H
