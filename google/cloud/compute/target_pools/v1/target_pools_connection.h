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
// source: google/cloud/compute/target_pools/v1/target_pools.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_POOLS_V1_TARGET_POOLS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_POOLS_V1_TARGET_POOLS_CONNECTION_H

#include "google/cloud/compute/target_pools/v1/internal/target_pools_retry_traits.h"
#include "google/cloud/compute/target_pools/v1/target_pools_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/target_pools/v1/target_pools.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_target_pools_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using TargetPoolsRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    compute_target_pools_v1_internal::TargetPoolsRetryTraits>;

using TargetPoolsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_target_pools_v1_internal::TargetPoolsRetryTraits>;

using TargetPoolsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_target_pools_v1_internal::TargetPoolsRetryTraits>;

/**
 * The `TargetPoolsConnection` object for `TargetPoolsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `TargetPoolsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `TargetPoolsClient`.
 *
 * To create a concrete instance, see `MakeTargetPoolsConnection()`.
 *
 * For mocking, see `compute_target_pools_v1_mocks::MockTargetPoolsConnection`.
 */
class TargetPoolsConnection {
 public:
  virtual ~TargetPoolsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddHealthCheck(google::cloud::cpp::compute::target_pools::v1::
                     AddHealthCheckRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddInstance(
      google::cloud::cpp::compute::target_pools::v1::AddInstanceRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TargetPoolAggregatedList>
  AggregatedListTargetPools(
      google::cloud::cpp::compute::target_pools::v1::
          AggregatedListTargetPoolsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetPools(google::cloud::cpp::compute::target_pools::v1::
                        DeleteTargetPoolsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TargetPool> GetTargetPools(
      google::cloud::cpp::compute::target_pools::v1::
          GetTargetPoolsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TargetPoolInstanceHealth>
  GetHealth(
      google::cloud::cpp::compute::target_pools::v1::GetHealthRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetPools(google::cloud::cpp::compute::target_pools::v1::
                        InsertTargetPoolsRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::TargetPool>
  ListTargetPools(
      google::cloud::cpp::compute::target_pools::v1::ListTargetPoolsRequest
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveHealthCheck(google::cloud::cpp::compute::target_pools::v1::
                        RemoveHealthCheckRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveInstance(google::cloud::cpp::compute::target_pools::v1::
                     RemoveInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetBackup(
      google::cloud::cpp::compute::target_pools::v1::SetBackupRequest const&
          request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_pools_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_POOLS_V1_TARGET_POOLS_CONNECTION_H
