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
// source: google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_HTTPS_PROXIES_V1_REGION_TARGET_HTTPS_PROXIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_HTTPS_PROXIES_V1_REGION_TARGET_HTTPS_PROXIES_CONNECTION_H

#include "google/cloud/backoff_policy.h"
#include "google/cloud/compute/region_target_https_proxies/v1/internal/region_target_https_proxies_retry_traits.h"
#include "google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies_connection_idempotency_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_target_https_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using RegionTargetHttpsProxiesRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    compute_region_target_https_proxies_v1_internal::RegionTargetHttpsProxiesRetryTraits>;

using RegionTargetHttpsProxiesLimitedTimeRetryPolicy = ::google::cloud::internal::LimitedTimeRetryPolicy<
    compute_region_target_https_proxies_v1_internal::RegionTargetHttpsProxiesRetryTraits>;

using RegionTargetHttpsProxiesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_region_target_https_proxies_v1_internal::RegionTargetHttpsProxiesRetryTraits>;

/**
 * The `RegionTargetHttpsProxiesConnection` object for `RegionTargetHttpsProxiesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RegionTargetHttpsProxiesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `RegionTargetHttpsProxiesClient`.
 *
 * To create a concrete instance, see `MakeRegionTargetHttpsProxiesConnection()`.
 *
 * For mocking, see `compute_region_target_https_proxies_v1_mocks::MockRegionTargetHttpsProxiesConnection`.
 */
class RegionTargetHttpsProxiesConnection {
 public:
  virtual ~RegionTargetHttpsProxiesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionTargetHttpsProxies(google::cloud::cpp::compute::region_target_https_proxies::v1::DeleteRegionTargetHttpsProxiesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
  GetRegionTargetHttpsProxies(google::cloud::cpp::compute::region_target_https_proxies::v1::GetRegionTargetHttpsProxiesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionTargetHttpsProxies(google::cloud::cpp::compute::region_target_https_proxies::v1::InsertRegionTargetHttpsProxiesRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::TargetHttpsProxy>
  ListRegionTargetHttpsProxies(google::cloud::cpp::compute::region_target_https_proxies::v1::ListRegionTargetHttpsProxiesRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRegionTargetHttpsProxies(google::cloud::cpp::compute::region_target_https_proxies::v1::PatchRegionTargetHttpsProxiesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSslCertificates(google::cloud::cpp::compute::region_target_https_proxies::v1::SetSslCertificatesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetUrlMap(google::cloud::cpp::compute::region_target_https_proxies::v1::SetUrlMapRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_target_https_proxies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_HTTPS_PROXIES_V1_REGION_TARGET_HTTPS_PROXIES_CONNECTION_H
