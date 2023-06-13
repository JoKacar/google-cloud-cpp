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
// source: google/devtools/containeranalysis/v1/containeranalysis.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_V1_CONTAINER_ANALYSIS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_V1_CONTAINER_ANALYSIS_CONNECTION_H

#include "google/cloud/containeranalysis/v1/container_analysis_connection_idempotency_policy.h"
#include "google/cloud/containeranalysis/v1/internal/container_analysis_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/devtools/containeranalysis/v1/containeranalysis.pb.h>
#include <grafeas/v1/grafeas.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace containeranalysis_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ContainerAnalysisRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        containeranalysis_v1_internal::ContainerAnalysisRetryTraits>;

using ContainerAnalysisLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        containeranalysis_v1_internal::ContainerAnalysisRetryTraits>;

using ContainerAnalysisLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        containeranalysis_v1_internal::ContainerAnalysisRetryTraits>;

/**
 * The `ContainerAnalysisConnection` object for `ContainerAnalysisClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ContainerAnalysisClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `ContainerAnalysisClient`.
 *
 * To create a concrete instance, see `MakeContainerAnalysisConnection()`.
 *
 * For mocking, see
 * `containeranalysis_v1_mocks::MockContainerAnalysisConnection`.
 */
class ContainerAnalysisConnection {
 public:
  virtual ~ContainerAnalysisConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual StatusOr<
      google::devtools::containeranalysis::v1::VulnerabilityOccurrencesSummary>
  GetVulnerabilityOccurrencesSummary(
      google::devtools::containeranalysis::v1::
          GetVulnerabilityOccurrencesSummaryRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `ContainerAnalysisConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * ContainerAnalysisClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ContainerAnalysisConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::containeranalysis_v1::ContainerAnalysisPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `ContainerAnalysisConnection` created
 * by this function.
 */
std::shared_ptr<ContainerAnalysisConnection> MakeContainerAnalysisConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_V1_CONTAINER_ANALYSIS_CONNECTION_H
