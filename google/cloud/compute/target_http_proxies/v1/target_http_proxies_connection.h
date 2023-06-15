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
// source: google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTP_PROXIES_V1_TARGET_HTTP_PROXIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTP_PROXIES_V1_TARGET_HTTP_PROXIES_CONNECTION_H

#include "google/cloud/compute/target_http_proxies/v1/internal/target_http_proxies_retry_traits.h"
#include "google/cloud/compute/target_http_proxies/v1/target_http_proxies_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/target_http_proxies/v1/target_http_proxies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_http_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using TargetHttpProxiesRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        compute_target_http_proxies_v1_internal::TargetHttpProxiesRetryTraits>;

using TargetHttpProxiesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_target_http_proxies_v1_internal::TargetHttpProxiesRetryTraits>;

using TargetHttpProxiesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_target_http_proxies_v1_internal::TargetHttpProxiesRetryTraits>;

/**
 * The `TargetHttpProxiesConnection` object for `TargetHttpProxiesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `TargetHttpProxiesClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `TargetHttpProxiesClient`.
 *
 * To create a concrete instance, see `MakeTargetHttpProxiesConnection()`.
 *
 * For mocking, see
 * `compute_target_http_proxies_v1_mocks::MockTargetHttpProxiesConnection`.
 */
class TargetHttpProxiesConnection {
 public:
  virtual ~TargetHttpProxiesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<
      google::cloud::cpp::compute::v1::TargetHttpProxyAggregatedList>
  AggregatedListTargetHttpProxies(
      google::cloud::cpp::compute::target_http_proxies::v1::
          AggregatedListTargetHttpProxiesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetHttpProxies(google::cloud::cpp::compute::target_http_proxies::v1::
                              DeleteTargetHttpProxiesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxy>
  GetTargetHttpProxies(google::cloud::cpp::compute::target_http_proxies::v1::
                           GetTargetHttpProxiesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetHttpProxies(google::cloud::cpp::compute::target_http_proxies::v1::
                              InsertTargetHttpProxiesRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::TargetHttpProxy>
  ListTargetHttpProxies(google::cloud::cpp::compute::target_http_proxies::v1::
                            ListTargetHttpProxiesRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchTargetHttpProxies(google::cloud::cpp::compute::target_http_proxies::v1::
                             PatchTargetHttpProxiesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetUrlMap(google::cloud::cpp::compute::target_http_proxies::v1::
                SetUrlMapRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_http_proxies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTP_PROXIES_V1_TARGET_HTTP_PROXIES_CONNECTION_H
