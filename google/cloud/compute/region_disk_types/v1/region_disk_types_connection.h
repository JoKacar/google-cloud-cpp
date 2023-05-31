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
// source: google/cloud/compute/region_disk_types/v1/region_disk_types.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_DISK_TYPES_V1_REGION_DISK_TYPES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_DISK_TYPES_V1_REGION_DISK_TYPES_CONNECTION_H

#include "google/cloud/backoff_policy.h"
#include "google/cloud/compute/region_disk_types/v1/internal/region_disk_types_retry_traits.h"
#include "google/cloud/compute/region_disk_types/v1/region_disk_types_connection_idempotency_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_disk_types/v1/region_disk_types.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_disk_types_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using RegionDiskTypesRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    compute_region_disk_types_v1_internal::RegionDiskTypesRetryTraits>;

using RegionDiskTypesLimitedTimeRetryPolicy = ::google::cloud::internal::LimitedTimeRetryPolicy<
    compute_region_disk_types_v1_internal::RegionDiskTypesRetryTraits>;

using RegionDiskTypesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_region_disk_types_v1_internal::RegionDiskTypesRetryTraits>;

/**
 * The `RegionDiskTypesConnection` object for `RegionDiskTypesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RegionDiskTypesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `RegionDiskTypesClient`.
 *
 * To create a concrete instance, see `MakeRegionDiskTypesConnection()`.
 *
 * For mocking, see `compute_region_disk_types_v1_mocks::MockRegionDiskTypesConnection`.
 */
class RegionDiskTypesConnection {
 public:
  virtual ~RegionDiskTypesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::cpp::compute::v1::DiskType>
  GetRegionDiskTypes(google::cloud::cpp::compute::region_disk_types::v1::GetRegionDiskTypesRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::DiskType>
  ListRegionDiskTypes(google::cloud::cpp::compute::region_disk_types::v1::ListRegionDiskTypesRequest request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_disk_types_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_DISK_TYPES_V1_REGION_DISK_TYPES_CONNECTION_H
