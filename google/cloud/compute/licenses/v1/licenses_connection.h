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
// source: google/cloud/compute/licenses/v1/licenses.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_LICENSES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_LICENSES_CONNECTION_H

#include "google/cloud/compute/licenses/v1/internal/licenses_retry_traits.h"
#include "google/cloud/compute/licenses/v1/licenses_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/licenses/v1/licenses.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_licenses_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using LicensesRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    compute_licenses_v1_internal::LicensesRetryTraits>;

using LicensesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_licenses_v1_internal::LicensesRetryTraits>;

using LicensesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_licenses_v1_internal::LicensesRetryTraits>;

/**
 * The `LicensesConnection` object for `LicensesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `LicensesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `LicensesClient`.
 *
 * To create a concrete instance, see `MakeLicensesConnection()`.
 *
 * For mocking, see `compute_licenses_v1_mocks::MockLicensesConnection`.
 */
class LicensesConnection {
 public:
  virtual ~LicensesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteLicenses(
      google::cloud::cpp::compute::licenses::v1::DeleteLicensesRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::License> GetLicenses(
      google::cloud::cpp::compute::licenses::v1::GetLicensesRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::licenses::v1::GetIamPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertLicenses(
      google::cloud::cpp::compute::licenses::v1::InsertLicensesRequest const&
          request);

  virtual StreamRange<google::cloud::cpp::compute::v1::License> ListLicenses(
      google::cloud::cpp::compute::licenses::v1::ListLicensesRequest request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::licenses::v1::SetIamPolicyRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::licenses::v1::
                         TestIamPermissionsRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_licenses_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_LICENSES_CONNECTION_H
