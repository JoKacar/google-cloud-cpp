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
// google/cloud/compute/region_health_checks/v1/region_health_checks.proto

#include "google/cloud/compute/region_health_checks/v1/region_health_checks_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_region_health_checks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

RegionHealthChecksConnectionIdempotencyPolicy::
    ~RegionHealthChecksConnectionIdempotencyPolicy() = default;

std::unique_ptr<RegionHealthChecksConnectionIdempotencyPolicy>
RegionHealthChecksConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<RegionHealthChecksConnectionIdempotencyPolicy>(*this);
}

Idempotency
RegionHealthChecksConnectionIdempotencyPolicy::DeleteRegionHealthChecks(
    google::cloud::cpp::compute::region_health_checks::v1::
        DeleteRegionHealthChecksRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
RegionHealthChecksConnectionIdempotencyPolicy::GetRegionHealthChecks(
    google::cloud::cpp::compute::region_health_checks::v1::
        GetRegionHealthChecksRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
RegionHealthChecksConnectionIdempotencyPolicy::InsertRegionHealthChecks(
    google::cloud::cpp::compute::region_health_checks::v1::
        InsertRegionHealthChecksRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
RegionHealthChecksConnectionIdempotencyPolicy::ListRegionHealthChecks(
    google::cloud::cpp::compute::region_health_checks::v1::
        ListRegionHealthChecksRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
RegionHealthChecksConnectionIdempotencyPolicy::PatchRegionHealthChecks(
    google::cloud::cpp::compute::region_health_checks::v1::
        PatchRegionHealthChecksRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
RegionHealthChecksConnectionIdempotencyPolicy::UpdateRegionHealthChecks(
    google::cloud::cpp::compute::region_health_checks::v1::
        UpdateRegionHealthChecksRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<RegionHealthChecksConnectionIdempotencyPolicy>
MakeDefaultRegionHealthChecksConnectionIdempotencyPolicy() {
  return std::make_unique<RegionHealthChecksConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_health_checks_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
