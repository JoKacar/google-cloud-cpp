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

#include "google/cloud/compute/target_pools/v1/target_pools_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_pools_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

TargetPoolsConnectionIdempotencyPolicy::
    ~TargetPoolsConnectionIdempotencyPolicy() = default;

std::unique_ptr<TargetPoolsConnectionIdempotencyPolicy>
TargetPoolsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<TargetPoolsConnectionIdempotencyPolicy>(*this);
}

Idempotency TargetPoolsConnectionIdempotencyPolicy::AddHealthCheck(
    google::cloud::cpp::compute::target_pools::v1::
        AddHealthCheckRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TargetPoolsConnectionIdempotencyPolicy::AddInstance(
    google::cloud::cpp::compute::target_pools::v1::AddInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TargetPoolsConnectionIdempotencyPolicy::AggregatedListTargetPools(
    google::cloud::cpp::compute::target_pools::v1::
        AggregatedListTargetPoolsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TargetPoolsConnectionIdempotencyPolicy::DeleteTargetPool(
    google::cloud::cpp::compute::target_pools::v1::
        DeleteTargetPoolRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TargetPoolsConnectionIdempotencyPolicy::GetTargetPool(
    google::cloud::cpp::compute::target_pools::v1::
        GetTargetPoolRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TargetPoolsConnectionIdempotencyPolicy::GetHealth(
    google::cloud::cpp::compute::target_pools::v1::GetHealthRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TargetPoolsConnectionIdempotencyPolicy::InsertTargetPool(
    google::cloud::cpp::compute::target_pools::v1::
        InsertTargetPoolRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TargetPoolsConnectionIdempotencyPolicy::ListTargetPools(
    google::cloud::cpp::compute::target_pools::v1::
        ListTargetPoolsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency TargetPoolsConnectionIdempotencyPolicy::RemoveHealthCheck(
    google::cloud::cpp::compute::target_pools::v1::
        RemoveHealthCheckRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TargetPoolsConnectionIdempotencyPolicy::RemoveInstance(
    google::cloud::cpp::compute::target_pools::v1::
        RemoveInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TargetPoolsConnectionIdempotencyPolicy::SetBackup(
    google::cloud::cpp::compute::target_pools::v1::SetBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<TargetPoolsConnectionIdempotencyPolicy>
MakeDefaultTargetPoolsConnectionIdempotencyPolicy() {
  return std::make_unique<TargetPoolsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_pools_v1
}  // namespace cloud
}  // namespace google
