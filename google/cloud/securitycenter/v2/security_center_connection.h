// Copyright 2024 Google LLC
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
// source: google/cloud/securitycenter/v2/securitycenter_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V2_SECURITY_CENTER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V2_SECURITY_CENTER_CONNECTION_H

#include "google/cloud/securitycenter/v2/internal/security_center_retry_traits.h"
#include "google/cloud/securitycenter/v2/security_center_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/securitycenter/v2/securitycenter_service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace securitycenter_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `SecurityCenterConnection`.
class SecurityCenterRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<SecurityCenterRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `SecurityCenterConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SecurityCenterLimitedErrorCountRetryPolicy
    : public SecurityCenterRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit SecurityCenterLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  SecurityCenterLimitedErrorCountRetryPolicy(
      SecurityCenterLimitedErrorCountRetryPolicy&& rhs) noexcept
      : SecurityCenterLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  SecurityCenterLimitedErrorCountRetryPolicy(
      SecurityCenterLimitedErrorCountRetryPolicy const& rhs) noexcept
      : SecurityCenterLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<SecurityCenterRetryPolicy> clone() const override {
    return std::make_unique<SecurityCenterLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SecurityCenterRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      securitycenter_v2_internal::SecurityCenterRetryTraits>
      impl_;
};

/**
 * A retry policy for `SecurityCenterConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SecurityCenterLimitedTimeRetryPolicy : public SecurityCenterRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit SecurityCenterLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  SecurityCenterLimitedTimeRetryPolicy(
      SecurityCenterLimitedTimeRetryPolicy&& rhs) noexcept
      : SecurityCenterLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  SecurityCenterLimitedTimeRetryPolicy(
      SecurityCenterLimitedTimeRetryPolicy const& rhs) noexcept
      : SecurityCenterLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<SecurityCenterRetryPolicy> clone() const override {
    return std::make_unique<SecurityCenterLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SecurityCenterRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      securitycenter_v2_internal::SecurityCenterRetryTraits>
      impl_;
};

/**
 * The `SecurityCenterConnection` object for `SecurityCenterClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `SecurityCenterClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `SecurityCenterClient`.
 *
 * To create a concrete instance, see `MakeSecurityCenterConnection()`.
 *
 * For mocking, see `securitycenter_v2_mocks::MockSecurityCenterConnection`.
 */
class SecurityCenterConnection {
 public:
  virtual ~SecurityCenterConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::securitycenter::v2::
                       BatchCreateResourceValueConfigsResponse>
  BatchCreateResourceValueConfigs(
      google::cloud::securitycenter::v2::
          BatchCreateResourceValueConfigsRequest const& request);

  virtual future<
      StatusOr<google::cloud::securitycenter::v2::BulkMuteFindingsResponse>>
  BulkMuteFindings(
      google::cloud::securitycenter::v2::BulkMuteFindingsRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v2::BigQueryExport>
  CreateBigQueryExport(
      google::cloud::securitycenter::v2::CreateBigQueryExportRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v2::Finding> CreateFinding(
      google::cloud::securitycenter::v2::CreateFindingRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v2::MuteConfig>
  CreateMuteConfig(
      google::cloud::securitycenter::v2::CreateMuteConfigRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v2::NotificationConfig>
  CreateNotificationConfig(
      google::cloud::securitycenter::v2::CreateNotificationConfigRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v2::Source> CreateSource(
      google::cloud::securitycenter::v2::CreateSourceRequest const& request);

  virtual Status DeleteBigQueryExport(
      google::cloud::securitycenter::v2::DeleteBigQueryExportRequest const&
          request);

  virtual Status DeleteMuteConfig(
      google::cloud::securitycenter::v2::DeleteMuteConfigRequest const&
          request);

  virtual Status DeleteNotificationConfig(
      google::cloud::securitycenter::v2::DeleteNotificationConfigRequest const&
          request);

  virtual Status DeleteResourceValueConfig(
      google::cloud::securitycenter::v2::DeleteResourceValueConfigRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v2::BigQueryExport>
  GetBigQueryExport(
      google::cloud::securitycenter::v2::GetBigQueryExportRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v2::Simulation> GetSimulation(
      google::cloud::securitycenter::v2::GetSimulationRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v2::ValuedResource>
  GetValuedResource(
      google::cloud::securitycenter::v2::GetValuedResourceRequest const&
          request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v2::MuteConfig> GetMuteConfig(
      google::cloud::securitycenter::v2::GetMuteConfigRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v2::NotificationConfig>
  GetNotificationConfig(
      google::cloud::securitycenter::v2::GetNotificationConfigRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v2::ResourceValueConfig>
  GetResourceValueConfig(
      google::cloud::securitycenter::v2::GetResourceValueConfigRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v2::Source> GetSource(
      google::cloud::securitycenter::v2::GetSourceRequest const& request);

  virtual StreamRange<google::cloud::securitycenter::v2::GroupResult>
  GroupFindings(
      google::cloud::securitycenter::v2::GroupFindingsRequest request);

  virtual StreamRange<google::cloud::securitycenter::v2::AttackPath>
  ListAttackPaths(
      google::cloud::securitycenter::v2::ListAttackPathsRequest request);

  virtual StreamRange<google::cloud::securitycenter::v2::BigQueryExport>
  ListBigQueryExports(
      google::cloud::securitycenter::v2::ListBigQueryExportsRequest request);

  virtual StreamRange<google::cloud::securitycenter::v2::ListFindingsResponse::
                          ListFindingsResult>
  ListFindings(google::cloud::securitycenter::v2::ListFindingsRequest request);

  virtual StreamRange<google::cloud::securitycenter::v2::MuteConfig>
  ListMuteConfigs(
      google::cloud::securitycenter::v2::ListMuteConfigsRequest request);

  virtual StreamRange<google::cloud::securitycenter::v2::NotificationConfig>
  ListNotificationConfigs(
      google::cloud::securitycenter::v2::ListNotificationConfigsRequest
          request);

  virtual StreamRange<google::cloud::securitycenter::v2::ResourceValueConfig>
  ListResourceValueConfigs(
      google::cloud::securitycenter::v2::ListResourceValueConfigsRequest
          request);

  virtual StreamRange<google::cloud::securitycenter::v2::Source> ListSources(
      google::cloud::securitycenter::v2::ListSourcesRequest request);

  virtual StreamRange<google::cloud::securitycenter::v2::ValuedResource>
  ListValuedResources(
      google::cloud::securitycenter::v2::ListValuedResourcesRequest request);

  virtual StatusOr<google::cloud::securitycenter::v2::Finding> SetFindingState(
      google::cloud::securitycenter::v2::SetFindingStateRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v2::Finding> SetMute(
      google::cloud::securitycenter::v2::SetMuteRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v2::BigQueryExport>
  UpdateBigQueryExport(
      google::cloud::securitycenter::v2::UpdateBigQueryExportRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v2::ExternalSystem>
  UpdateExternalSystem(
      google::cloud::securitycenter::v2::UpdateExternalSystemRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v2::Finding> UpdateFinding(
      google::cloud::securitycenter::v2::UpdateFindingRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v2::MuteConfig>
  UpdateMuteConfig(
      google::cloud::securitycenter::v2::UpdateMuteConfigRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v2::NotificationConfig>
  UpdateNotificationConfig(
      google::cloud::securitycenter::v2::UpdateNotificationConfigRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v2::ResourceValueConfig>
  UpdateResourceValueConfig(
      google::cloud::securitycenter::v2::UpdateResourceValueConfigRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v2::SecurityMarks>
  UpdateSecurityMarks(
      google::cloud::securitycenter::v2::UpdateSecurityMarksRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v2::Source> UpdateSource(
      google::cloud::securitycenter::v2::UpdateSourceRequest const& request);
};

/**
 * A factory function to construct an object of type `SecurityCenterConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of SecurityCenterClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `SecurityCenterConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::securitycenter_v2::SecurityCenterPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `SecurityCenterConnection` created by
 * this function.
 */
std::shared_ptr<SecurityCenterConnection> MakeSecurityCenterConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V2_SECURITY_CENTER_CONNECTION_H
