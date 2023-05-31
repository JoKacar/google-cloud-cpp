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
// source: google/cloud/compute/region_backend_services/v1/region_backend_services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_BACKEND_SERVICES_V1_REGION_BACKEND_SERVICES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_BACKEND_SERVICES_V1_REGION_BACKEND_SERVICES_CONNECTION_H

#include "google/cloud/backoff_policy.h"
#include "google/cloud/compute/region_backend_services/v1/internal/region_backend_services_retry_traits.h"
#include "google/cloud/compute/region_backend_services/v1/region_backend_services_connection_idempotency_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_backend_services/v1/region_backend_services.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_backend_services_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using RegionBackendServicesRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    compute_region_backend_services_v1_internal::RegionBackendServicesRetryTraits>;

using RegionBackendServicesLimitedTimeRetryPolicy = ::google::cloud::internal::LimitedTimeRetryPolicy<
    compute_region_backend_services_v1_internal::RegionBackendServicesRetryTraits>;

using RegionBackendServicesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_region_backend_services_v1_internal::RegionBackendServicesRetryTraits>;

/**
 * The `RegionBackendServicesConnection` object for `RegionBackendServicesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RegionBackendServicesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `RegionBackendServicesClient`.
 *
 * To create a concrete instance, see `MakeRegionBackendServicesConnection()`.
 *
 * For mocking, see `compute_region_backend_services_v1_mocks::MockRegionBackendServicesConnection`.
 */
class RegionBackendServicesConnection {
 public:
  virtual ~RegionBackendServicesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionBackendServices(google::cloud::cpp::compute::region_backend_services::v1::DeleteRegionBackendServicesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::BackendService>
  GetRegionBackendServices(google::cloud::cpp::compute::region_backend_services::v1::GetRegionBackendServicesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::BackendServiceGroupHealth>
  GetHealth(google::cloud::cpp::compute::region_backend_services::v1::GetHealthRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy>
  GetIamPolicy(google::cloud::cpp::compute::region_backend_services::v1::GetIamPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionBackendServices(google::cloud::cpp::compute::region_backend_services::v1::InsertRegionBackendServicesRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::BackendService>
  ListRegionBackendServices(google::cloud::cpp::compute::region_backend_services::v1::ListRegionBackendServicesRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRegionBackendServices(google::cloud::cpp::compute::region_backend_services::v1::PatchRegionBackendServicesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy>
  SetIamPolicy(google::cloud::cpp::compute::region_backend_services::v1::SetIamPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateRegionBackendServices(google::cloud::cpp::compute::region_backend_services::v1::UpdateRegionBackendServicesRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_backend_services_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_BACKEND_SERVICES_V1_REGION_BACKEND_SERVICES_CONNECTION_H
