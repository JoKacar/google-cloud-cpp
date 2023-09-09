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
// source: google/cloud/compute/region_ssl_policies/v1/region_ssl_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_POLICIES_V1_REGION_SSL_POLICIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_POLICIES_V1_REGION_SSL_POLICIES_CONNECTION_H

#include "google/cloud/compute/region_ssl_policies/v1/internal/region_ssl_policies_retry_traits.h"
#include "google/cloud/compute/region_ssl_policies/v1/region_ssl_policies_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_ssl_policies/v1/region_ssl_policies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_ssl_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `RegionSslPoliciesConnection`.
class RegionSslPoliciesRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<RegionSslPoliciesRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `RegionSslPoliciesConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class RegionSslPoliciesLimitedErrorCountRetryPolicy
    : public RegionSslPoliciesRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit RegionSslPoliciesLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  RegionSslPoliciesLimitedErrorCountRetryPolicy(
      RegionSslPoliciesLimitedErrorCountRetryPolicy&& rhs) noexcept
      : RegionSslPoliciesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  RegionSslPoliciesLimitedErrorCountRetryPolicy(
      RegionSslPoliciesLimitedErrorCountRetryPolicy const& rhs) noexcept
      : RegionSslPoliciesLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<RegionSslPoliciesRetryPolicy> clone() const override {
    return std::make_unique<RegionSslPoliciesLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = RegionSslPoliciesRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_region_ssl_policies_v1_internal::RegionSslPoliciesRetryTraits>
      impl_;
};

/**
 * A retry policy for `RegionSslPoliciesConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class RegionSslPoliciesLimitedTimeRetryPolicy
    : public RegionSslPoliciesRetryPolicy {
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
  explicit RegionSslPoliciesLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  RegionSslPoliciesLimitedTimeRetryPolicy(
      RegionSslPoliciesLimitedTimeRetryPolicy&& rhs) noexcept
      : RegionSslPoliciesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  RegionSslPoliciesLimitedTimeRetryPolicy(
      RegionSslPoliciesLimitedTimeRetryPolicy const& rhs) noexcept
      : RegionSslPoliciesLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<RegionSslPoliciesRetryPolicy> clone() const override {
    return std::make_unique<RegionSslPoliciesLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = RegionSslPoliciesRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_region_ssl_policies_v1_internal::RegionSslPoliciesRetryTraits>
      impl_;
};

/**
 * The `RegionSslPoliciesConnection` object for `RegionSslPoliciesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RegionSslPoliciesClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `RegionSslPoliciesClient`.
 *
 * To create a concrete instance, see `MakeRegionSslPoliciesConnection()`.
 *
 * For mocking, see
 * `compute_region_ssl_policies_v1_mocks::MockRegionSslPoliciesConnection`.
 */
class RegionSslPoliciesConnection {
 public:
  virtual ~RegionSslPoliciesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionSslPolicy(google::cloud::cpp::compute::region_ssl_policies::v1::
                            DeleteRegionSslPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::SslPolicy>
  GetRegionSslPolicy(google::cloud::cpp::compute::region_ssl_policies::v1::
                         GetRegionSslPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionSslPolicy(google::cloud::cpp::compute::region_ssl_policies::v1::
                            InsertRegionSslPolicyRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::SslPolicy>
  ListRegionSslPolicies(google::cloud::cpp::compute::region_ssl_policies::v1::
                            ListRegionSslPoliciesRequest request);

  virtual StatusOr<
      google::cloud::cpp::compute::v1::SslPoliciesListAvailableFeaturesResponse>
  ListAvailableFeatures(google::cloud::cpp::compute::region_ssl_policies::v1::
                            ListAvailableFeaturesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRegionSslPolicy(google::cloud::cpp::compute::region_ssl_policies::v1::
                           PatchRegionSslPolicyRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_ssl_policies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_POLICIES_V1_REGION_SSL_POLICIES_CONNECTION_H
