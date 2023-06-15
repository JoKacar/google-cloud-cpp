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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_HEALTH_CHECK_SERVICES_V1_REGION_HEALTH_CHECK_SERVICES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_HEALTH_CHECK_SERVICES_V1_REGION_HEALTH_CHECK_SERVICES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_health_check_services/v1/region_health_check_services.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_health_check_services_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionHealthCheckServicesConnectionIdempotencyPolicy {
 public:
  virtual ~RegionHealthCheckServicesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<RegionHealthCheckServicesConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency DeleteRegionHealthCheckServices(
      google::cloud::cpp::compute::region_health_check_services::v1::
          DeleteRegionHealthCheckServicesRequest const& request);

  virtual google::cloud::Idempotency GetRegionHealthCheckServices(
      google::cloud::cpp::compute::region_health_check_services::v1::
          GetRegionHealthCheckServicesRequest const& request);

  virtual google::cloud::Idempotency InsertRegionHealthCheckServices(
      google::cloud::cpp::compute::region_health_check_services::v1::
          InsertRegionHealthCheckServicesRequest const& request);

  virtual google::cloud::Idempotency ListRegionHealthCheckServices(
      google::cloud::cpp::compute::region_health_check_services::v1::
          ListRegionHealthCheckServicesRequest request);

  virtual google::cloud::Idempotency PatchRegionHealthCheckServices(
      google::cloud::cpp::compute::region_health_check_services::v1::
          PatchRegionHealthCheckServicesRequest const& request);
};

std::unique_ptr<RegionHealthCheckServicesConnectionIdempotencyPolicy>
MakeDefaultRegionHealthCheckServicesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_health_check_services_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_HEALTH_CHECK_SERVICES_V1_REGION_HEALTH_CHECK_SERVICES_CONNECTION_IDEMPOTENCY_POLICY_H
