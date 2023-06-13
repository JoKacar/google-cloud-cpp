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
// source: google/cloud/datacatalog/v1/policytagmanager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_POLICY_TAG_MANAGER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_POLICY_TAG_MANAGER_CONNECTION_H

#include "google/cloud/datacatalog/v1/internal/policy_tag_manager_retry_traits.h"
#include "google/cloud/datacatalog/v1/policy_tag_manager_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/datacatalog/v1/policytagmanager.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace datacatalog_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using PolicyTagManagerRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        datacatalog_v1_internal::PolicyTagManagerRetryTraits>;

using PolicyTagManagerLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        datacatalog_v1_internal::PolicyTagManagerRetryTraits>;

using PolicyTagManagerLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        datacatalog_v1_internal::PolicyTagManagerRetryTraits>;

/**
 * The `PolicyTagManagerConnection` object for `PolicyTagManagerClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `PolicyTagManagerClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `PolicyTagManagerClient`.
 *
 * To create a concrete instance, see `MakePolicyTagManagerConnection()`.
 *
 * For mocking, see `datacatalog_v1_mocks::MockPolicyTagManagerConnection`.
 */
class PolicyTagManagerConnection {
 public:
  virtual ~PolicyTagManagerConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::datacatalog::v1::Taxonomy> CreateTaxonomy(
      google::cloud::datacatalog::v1::CreateTaxonomyRequest const& request);

  virtual Status DeleteTaxonomy(
      google::cloud::datacatalog::v1::DeleteTaxonomyRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::v1::Taxonomy> UpdateTaxonomy(
      google::cloud::datacatalog::v1::UpdateTaxonomyRequest const& request);

  virtual StreamRange<google::cloud::datacatalog::v1::Taxonomy> ListTaxonomies(
      google::cloud::datacatalog::v1::ListTaxonomiesRequest request);

  virtual StatusOr<google::cloud::datacatalog::v1::Taxonomy> GetTaxonomy(
      google::cloud::datacatalog::v1::GetTaxonomyRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::v1::PolicyTag> CreatePolicyTag(
      google::cloud::datacatalog::v1::CreatePolicyTagRequest const& request);

  virtual Status DeletePolicyTag(
      google::cloud::datacatalog::v1::DeletePolicyTagRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::v1::PolicyTag> UpdatePolicyTag(
      google::cloud::datacatalog::v1::UpdatePolicyTagRequest const& request);

  virtual StreamRange<google::cloud::datacatalog::v1::PolicyTag> ListPolicyTags(
      google::cloud::datacatalog::v1::ListPolicyTagsRequest request);

  virtual StatusOr<google::cloud::datacatalog::v1::PolicyTag> GetPolicyTag(
      google::cloud::datacatalog::v1::GetPolicyTagRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `PolicyTagManagerConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of PolicyTagManagerClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `PolicyTagManagerConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::datacatalog_v1::PolicyTagManagerPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `PolicyTagManagerConnection` created
 * by this function.
 */
std::shared_ptr<PolicyTagManagerConnection> MakePolicyTagManagerConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_POLICY_TAG_MANAGER_CONNECTION_H
