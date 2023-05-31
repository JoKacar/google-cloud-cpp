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
// source: google/cloud/compute/region_url_maps/v1/region_url_maps.proto

#include "google/cloud/compute/region_url_maps/v1/region_url_maps_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_url_maps_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

RegionUrlMapsConnectionIdempotencyPolicy::
    ~RegionUrlMapsConnectionIdempotencyPolicy() = default;

std::unique_ptr<RegionUrlMapsConnectionIdempotencyPolicy>
RegionUrlMapsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<RegionUrlMapsConnectionIdempotencyPolicy>(*this);
}

Idempotency RegionUrlMapsConnectionIdempotencyPolicy::DeleteRegionUrlMaps(
    google::cloud::cpp::compute::region_url_maps::v1::
        DeleteRegionUrlMapsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionUrlMapsConnectionIdempotencyPolicy::GetRegionUrlMaps(
    google::cloud::cpp::compute::region_url_maps::v1::
        GetRegionUrlMapsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RegionUrlMapsConnectionIdempotencyPolicy::InsertRegionUrlMaps(
    google::cloud::cpp::compute::region_url_maps::v1::
        InsertRegionUrlMapsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionUrlMapsConnectionIdempotencyPolicy::ListRegionUrlMaps(
    google::cloud::cpp::compute::region_url_maps::v1::
        ListRegionUrlMapsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RegionUrlMapsConnectionIdempotencyPolicy::PatchRegionUrlMaps(
    google::cloud::cpp::compute::region_url_maps::v1::
        PatchRegionUrlMapsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionUrlMapsConnectionIdempotencyPolicy::UpdateRegionUrlMaps(
    google::cloud::cpp::compute::region_url_maps::v1::
        UpdateRegionUrlMapsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RegionUrlMapsConnectionIdempotencyPolicy::Validate(
    google::cloud::cpp::compute::region_url_maps::v1::ValidateRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<RegionUrlMapsConnectionIdempotencyPolicy>
MakeDefaultRegionUrlMapsConnectionIdempotencyPolicy() {
  return std::make_unique<RegionUrlMapsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_url_maps_v1
}  // namespace cloud
}  // namespace google
