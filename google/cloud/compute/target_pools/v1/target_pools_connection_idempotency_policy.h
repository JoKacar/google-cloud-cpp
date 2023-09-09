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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_POOLS_V1_TARGET_POOLS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_POOLS_V1_TARGET_POOLS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/target_pools/v1/target_pools.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_pools_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TargetPoolsConnectionIdempotencyPolicy {
 public:
  virtual ~TargetPoolsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<TargetPoolsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency AddHealthCheck(
      google::cloud::cpp::compute::target_pools::v1::
          AddHealthCheckRequest const& request);

  virtual google::cloud::Idempotency AddInstance(
      google::cloud::cpp::compute::target_pools::v1::AddInstanceRequest const&
          request);

  virtual google::cloud::Idempotency AggregatedListTargetPools(
      google::cloud::cpp::compute::target_pools::v1::
          AggregatedListTargetPoolsRequest const& request);

  virtual google::cloud::Idempotency DeleteTargetPool(
      google::cloud::cpp::compute::target_pools::v1::
          DeleteTargetPoolRequest const& request);

  virtual google::cloud::Idempotency GetTargetPool(
      google::cloud::cpp::compute::target_pools::v1::GetTargetPoolRequest const&
          request);

  virtual google::cloud::Idempotency GetHealth(
      google::cloud::cpp::compute::target_pools::v1::GetHealthRequest const&
          request);

  virtual google::cloud::Idempotency InsertTargetPool(
      google::cloud::cpp::compute::target_pools::v1::
          InsertTargetPoolRequest const& request);

  virtual google::cloud::Idempotency ListTargetPools(
      google::cloud::cpp::compute::target_pools::v1::ListTargetPoolsRequest
          request);

  virtual google::cloud::Idempotency RemoveHealthCheck(
      google::cloud::cpp::compute::target_pools::v1::
          RemoveHealthCheckRequest const& request);

  virtual google::cloud::Idempotency RemoveInstance(
      google::cloud::cpp::compute::target_pools::v1::
          RemoveInstanceRequest const& request);

  virtual google::cloud::Idempotency SetBackup(
      google::cloud::cpp::compute::target_pools::v1::SetBackupRequest const&
          request);
};

std::unique_ptr<TargetPoolsConnectionIdempotencyPolicy>
MakeDefaultTargetPoolsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_pools_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_POOLS_V1_TARGET_POOLS_CONNECTION_IDEMPOTENCY_POLICY_H
