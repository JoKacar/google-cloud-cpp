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
// google/cloud/compute/region_health_check_services/v1/region_health_check_services.proto

#include "google/cloud/compute/region_health_check_services/v1/region_health_check_services_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_region_health_check_services_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

RegionHealthCheckServicesConnectionIdempotencyPolicy::
    ~RegionHealthCheckServicesConnectionIdempotencyPolicy() = default;

std::unique_ptr<RegionHealthCheckServicesConnectionIdempotencyPolicy>
RegionHealthCheckServicesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<RegionHealthCheckServicesConnectionIdempotencyPolicy>(
      *this);
}

Idempotency RegionHealthCheckServicesConnectionIdempotencyPolicy::
    DeleteRegionHealthCheckServices(
        google::cloud::cpp::compute::region_health_check_services::v1::
            DeleteRegionHealthCheckServicesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionHealthCheckServicesConnectionIdempotencyPolicy::
    GetRegionHealthCheckServices(
        google::cloud::cpp::compute::region_health_check_services::v1::
            GetRegionHealthCheckServicesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RegionHealthCheckServicesConnectionIdempotencyPolicy::
    InsertRegionHealthCheckServices(
        google::cloud::cpp::compute::region_health_check_services::v1::
            InsertRegionHealthCheckServicesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionHealthCheckServicesConnectionIdempotencyPolicy::
    ListRegionHealthCheckServices(
        google::cloud::cpp::compute::region_health_check_services::v1::
            ListRegionHealthCheckServicesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RegionHealthCheckServicesConnectionIdempotencyPolicy::
    PatchRegionHealthCheckServices(
        google::cloud::cpp::compute::region_health_check_services::v1::
            PatchRegionHealthCheckServicesRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<RegionHealthCheckServicesConnectionIdempotencyPolicy>
MakeDefaultRegionHealthCheckServicesConnectionIdempotencyPolicy() {
  return std::make_unique<
      RegionHealthCheckServicesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_health_check_services_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
