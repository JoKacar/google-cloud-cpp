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
// source: google/cloud/resourcemanager/v3/organizations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_ORGANIZATIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_ORGANIZATIONS_CONNECTION_H

#include "google/cloud/resourcemanager/v3/internal/organizations_retry_traits.h"
#include "google/cloud/resourcemanager/v3/organizations_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/resourcemanager/v3/organizations.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace resourcemanager_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using OrganizationsRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        resourcemanager_v3_internal::OrganizationsRetryTraits>;

using OrganizationsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        resourcemanager_v3_internal::OrganizationsRetryTraits>;

using OrganizationsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        resourcemanager_v3_internal::OrganizationsRetryTraits>;

/**
 * The `OrganizationsConnection` object for `OrganizationsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `OrganizationsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `OrganizationsClient`.
 *
 * To create a concrete instance, see `MakeOrganizationsConnection()`.
 *
 * For mocking, see `resourcemanager_v3_mocks::MockOrganizationsConnection`.
 */
class OrganizationsConnection {
 public:
  virtual ~OrganizationsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::resourcemanager::v3::Organization>
  GetOrganization(
      google::cloud::resourcemanager::v3::GetOrganizationRequest const&
          request);

  virtual StreamRange<google::cloud::resourcemanager::v3::Organization>
  SearchOrganizations(
      google::cloud::resourcemanager::v3::SearchOrganizationsRequest request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);
};

/**
 * A factory function to construct an object of type `OrganizationsConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of OrganizationsClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `OrganizationsConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::resourcemanager_v3::OrganizationsPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `OrganizationsConnection` created by
 * this function.
 */
std::shared_ptr<OrganizationsConnection> MakeOrganizationsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_ORGANIZATIONS_CONNECTION_H
