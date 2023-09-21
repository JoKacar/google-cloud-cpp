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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALL_POLICIES_V1_MOCKS_MOCK_FIREWALL_POLICIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALL_POLICIES_V1_MOCKS_MOCK_FIREWALL_POLICIES_CONNECTION_H

#include "google/cloud/compute/firewall_policies/v1/firewall_policies_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_firewall_policies_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `FirewallPoliciesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `FirewallPoliciesClient`. To do so,
 * construct an object of type `FirewallPoliciesClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockFirewallPoliciesConnection
    : public compute_firewall_policies_v1::FirewallPoliciesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddAssociation,
              (google::cloud::cpp::compute::firewall_policies::v1::
                   AddAssociationRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, AddRule,
      (google::cloud::cpp::compute::firewall_policies::v1::AddRuleRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              CloneRules,
              (google::cloud::cpp::compute::firewall_policies::v1::
                   CloneRulesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteFirewallPolicy,
              (google::cloud::cpp::compute::firewall_policies::v1::
                   DeleteFirewallPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>,
              GetFirewallPolicy,
              (google::cloud::cpp::compute::firewall_policies::v1::
                   GetFirewallPolicyRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>,
      GetAssociation,
      (google::cloud::cpp::compute::firewall_policies::v1::
           GetAssociationRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Policy>, GetIamPolicy,
              (google::cloud::cpp::compute::firewall_policies::v1::
                   GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>, GetRule,
      (google::cloud::cpp::compute::firewall_policies::v1::GetRuleRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertFirewallPolicy,
              (google::cloud::cpp::compute::firewall_policies::v1::
                   InsertFirewallPolicyRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>),
              ListFirewallPolicies,
              (google::cloud::cpp::compute::firewall_policies::v1::
                   ListFirewallPoliciesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::
                           FirewallPoliciesListAssociationsResponse>,
              ListAssociations,
              (google::cloud::cpp::compute::firewall_policies::v1::
                   ListAssociationsRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, Move,
      (google::cloud::cpp::compute::firewall_policies::v1::MoveRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchFirewallPolicy,
              (google::cloud::cpp::compute::firewall_policies::v1::
                   PatchFirewallPolicyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchRule,
              (google::cloud::cpp::compute::firewall_policies::v1::
                   PatchRuleRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveAssociation,
              (google::cloud::cpp::compute::firewall_policies::v1::
                   RemoveAssociationRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveRule,
              (google::cloud::cpp::compute::firewall_policies::v1::
                   RemoveRuleRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Policy>, SetIamPolicy,
              (google::cloud::cpp::compute::firewall_policies::v1::
                   SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>,
      TestIamPermissions,
      (google::cloud::cpp::compute::firewall_policies::v1::
           TestIamPermissionsRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_firewall_policies_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALL_POLICIES_V1_MOCKS_MOCK_FIREWALL_POLICIES_CONNECTION_H
