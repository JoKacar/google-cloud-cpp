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
// source: google/cloud/compute/region_disks/v1/region_disks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_DISKS_V1_REGION_DISKS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_DISKS_V1_REGION_DISKS_CONNECTION_H

#include "google/cloud/compute/region_disks/v1/internal/region_disks_retry_traits.h"
#include "google/cloud/compute/region_disks/v1/region_disks_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_disks/v1/region_disks.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_disks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `RegionDisksConnection`.
class RegionDisksRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<RegionDisksRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `RegionDisksConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class RegionDisksLimitedErrorCountRetryPolicy : public RegionDisksRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit RegionDisksLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  RegionDisksLimitedErrorCountRetryPolicy(
      RegionDisksLimitedErrorCountRetryPolicy&& rhs) noexcept
      : RegionDisksLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  RegionDisksLimitedErrorCountRetryPolicy(
      RegionDisksLimitedErrorCountRetryPolicy const& rhs) noexcept
      : RegionDisksLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<RegionDisksRetryPolicy> clone() const override {
    return std::make_unique<RegionDisksLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = RegionDisksRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_region_disks_v1_internal::RegionDisksRetryTraits>
      impl_;
};

/**
 * A retry policy for `RegionDisksConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class RegionDisksLimitedTimeRetryPolicy : public RegionDisksRetryPolicy {
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
  explicit RegionDisksLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  RegionDisksLimitedTimeRetryPolicy(
      RegionDisksLimitedTimeRetryPolicy&& rhs) noexcept
      : RegionDisksLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  RegionDisksLimitedTimeRetryPolicy(
      RegionDisksLimitedTimeRetryPolicy const& rhs) noexcept
      : RegionDisksLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<RegionDisksRetryPolicy> clone() const override {
    return std::make_unique<RegionDisksLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = RegionDisksRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_region_disks_v1_internal::RegionDisksRetryTraits>
      impl_;
};

/**
 * The `RegionDisksConnection` object for `RegionDisksClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RegionDisksClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `RegionDisksClient`.
 *
 * To create a concrete instance, see `MakeRegionDisksConnection()`.
 *
 * For mocking, see `compute_region_disks_v1_mocks::MockRegionDisksConnection`.
 */
class RegionDisksConnection {
 public:
  virtual ~RegionDisksConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddResourcePolicies(google::cloud::cpp::compute::region_disks::v1::
                          AddResourcePoliciesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  BulkInsert(
      google::cloud::cpp::compute::region_disks::v1::BulkInsertRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  CreateSnapshot(google::cloud::cpp::compute::region_disks::v1::
                     CreateSnapshotRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionDisk(google::cloud::cpp::compute::region_disks::v1::
                       DeleteRegionDiskRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Disk> GetRegionDisk(
      google::cloud::cpp::compute::region_disks::v1::GetRegionDiskRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::region_disks::v1::GetIamPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionDisk(google::cloud::cpp::compute::region_disks::v1::
                       InsertRegionDiskRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::Disk> ListRegionDisks(
      google::cloud::cpp::compute::region_disks::v1::ListRegionDisksRequest
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveResourcePolicies(google::cloud::cpp::compute::region_disks::v1::
                             RemoveResourcePoliciesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Resize(
      google::cloud::cpp::compute::region_disks::v1::ResizeRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::region_disks::v1::SetIamPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetLabels(
      google::cloud::cpp::compute::region_disks::v1::SetLabelsRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StartAsyncReplication(google::cloud::cpp::compute::region_disks::v1::
                            StartAsyncReplicationRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StopAsyncReplication(google::cloud::cpp::compute::region_disks::v1::
                           StopAsyncReplicationRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StopGroupAsyncReplication(
      google::cloud::cpp::compute::region_disks::v1::
          StopGroupAsyncReplicationRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::region_disks::v1::
                         TestIamPermissionsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateRegionDisk(google::cloud::cpp::compute::region_disks::v1::
                       UpdateRegionDiskRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_disks_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_DISKS_V1_REGION_DISKS_CONNECTION_H
