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
// source:
// google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_NETWORK_ENDPOINT_GROUPS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_NETWORK_ENDPOINT_GROUPS_CONNECTION_H

#include "google/cloud/compute/network_endpoint_groups/v1/internal/network_endpoint_groups_retry_traits.h"
#include "google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_endpoint_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `NetworkEndpointGroupsConnection`.
class NetworkEndpointGroupsRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<NetworkEndpointGroupsRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `NetworkEndpointGroupsConnection` based on counting
 * errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class NetworkEndpointGroupsLimitedErrorCountRetryPolicy
    : public NetworkEndpointGroupsRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit NetworkEndpointGroupsLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  NetworkEndpointGroupsLimitedErrorCountRetryPolicy(
      NetworkEndpointGroupsLimitedErrorCountRetryPolicy&& rhs) noexcept
      : NetworkEndpointGroupsLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  NetworkEndpointGroupsLimitedErrorCountRetryPolicy(
      NetworkEndpointGroupsLimitedErrorCountRetryPolicy const& rhs) noexcept
      : NetworkEndpointGroupsLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<NetworkEndpointGroupsRetryPolicy> clone() const override {
    return std::make_unique<NetworkEndpointGroupsLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = NetworkEndpointGroupsRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_network_endpoint_groups_v1_internal::
          NetworkEndpointGroupsRetryTraits>
      impl_;
};

/**
 * A retry policy for `NetworkEndpointGroupsConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class NetworkEndpointGroupsLimitedTimeRetryPolicy
    : public NetworkEndpointGroupsRetryPolicy {
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
  explicit NetworkEndpointGroupsLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  NetworkEndpointGroupsLimitedTimeRetryPolicy(
      NetworkEndpointGroupsLimitedTimeRetryPolicy&& rhs) noexcept
      : NetworkEndpointGroupsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  NetworkEndpointGroupsLimitedTimeRetryPolicy(
      NetworkEndpointGroupsLimitedTimeRetryPolicy const& rhs) noexcept
      : NetworkEndpointGroupsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<NetworkEndpointGroupsRetryPolicy> clone() const override {
    return std::make_unique<NetworkEndpointGroupsLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = NetworkEndpointGroupsRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_network_endpoint_groups_v1_internal::
          NetworkEndpointGroupsRetryTraits>
      impl_;
};

/**
 * The `NetworkEndpointGroupsConnection` object for
 * `NetworkEndpointGroupsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `NetworkEndpointGroupsClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `NetworkEndpointGroupsClient`.
 *
 * To create a concrete instance, see `MakeNetworkEndpointGroupsConnection()`.
 *
 * For mocking, see
 * `compute_network_endpoint_groups_v1_mocks::MockNetworkEndpointGroupsConnection`.
 */
class NetworkEndpointGroupsConnection {
 public:
  virtual ~NetworkEndpointGroupsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<
      google::cloud::cpp::compute::v1::NetworkEndpointGroupAggregatedList>
  AggregatedListNetworkEndpointGroups(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          AggregatedListNetworkEndpointGroupsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AttachNetworkEndpoints(google::cloud::cpp::compute::network_endpoint_groups::
                             v1::AttachNetworkEndpointsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNetworkEndpointGroup(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          DeleteNetworkEndpointGroupRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DetachNetworkEndpoints(google::cloud::cpp::compute::network_endpoint_groups::
                             v1::DetachNetworkEndpointsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  GetNetworkEndpointGroup(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          GetNetworkEndpointGroupRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNetworkEndpointGroup(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          InsertNetworkEndpointGroupRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  ListNetworkEndpointGroups(
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          ListNetworkEndpointGroupsRequest request);

  virtual StreamRange<
      google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>
  ListNetworkEndpoints(google::cloud::cpp::compute::network_endpoint_groups::
                           v1::ListNetworkEndpointsRequest request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::network_endpoint_groups::v1::
                         TestIamPermissionsRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_endpoint_groups_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_NETWORK_ENDPOINT_GROUPS_CONNECTION_H
