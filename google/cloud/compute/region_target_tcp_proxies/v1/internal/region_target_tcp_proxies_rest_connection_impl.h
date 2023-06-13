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
// google/cloud/compute/region_target_tcp_proxies/v1/region_target_tcp_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_TCP_PROXIES_V1_INTERNAL_REGION_TARGET_TCP_PROXIES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_TCP_PROXIES_V1_INTERNAL_REGION_TARGET_TCP_PROXIES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/region_target_tcp_proxies/v1/internal/region_target_tcp_proxies_rest_stub.h"
#include "google/cloud/compute/region_target_tcp_proxies/v1/internal/region_target_tcp_proxies_retry_traits.h"
#include "google/cloud/compute/region_target_tcp_proxies/v1/region_target_tcp_proxies_connection.h"
#include "google/cloud/compute/region_target_tcp_proxies/v1/region_target_tcp_proxies_connection_idempotency_policy.h"
#include "google/cloud/compute/region_target_tcp_proxies/v1/region_target_tcp_proxies_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_region_target_tcp_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionTargetTcpProxiesRestConnectionImpl
    : public compute_region_target_tcp_proxies_v1::
          RegionTargetTcpProxiesConnection {
 public:
  ~RegionTargetTcpProxiesRestConnectionImpl() override = default;

  RegionTargetTcpProxiesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_region_target_tcp_proxies_v1_internal::
                          RegionTargetTcpProxiesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionTargetTcpProxies(
      google::cloud::cpp::compute::region_target_tcp_proxies::v1::
          DeleteRegionTargetTcpProxiesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy>
  GetRegionTargetTcpProxies(
      google::cloud::cpp::compute::region_target_tcp_proxies::v1::
          GetRegionTargetTcpProxiesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionTargetTcpProxies(
      google::cloud::cpp::compute::region_target_tcp_proxies::v1::
          InsertRegionTargetTcpProxiesRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::TargetTcpProxy>
  ListRegionTargetTcpProxies(
      google::cloud::cpp::compute::region_target_tcp_proxies::v1::
          ListRegionTargetTcpProxiesRequest request) override;

 private:
  std::unique_ptr<
      compute_region_target_tcp_proxies_v1::RegionTargetTcpProxiesRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_region_target_tcp_proxies_v1::
                        RegionTargetTcpProxiesRetryPolicyOption>()) {
      return options
          .get<compute_region_target_tcp_proxies_v1::
                   RegionTargetTcpProxiesRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_region_target_tcp_proxies_v1::
                 RegionTargetTcpProxiesRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_region_target_tcp_proxies_v1::
                        RegionTargetTcpProxiesBackoffPolicyOption>()) {
      return options
          .get<compute_region_target_tcp_proxies_v1::
                   RegionTargetTcpProxiesBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_region_target_tcp_proxies_v1::
                 RegionTargetTcpProxiesBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<compute_region_target_tcp_proxies_v1::
                      RegionTargetTcpProxiesConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            compute_region_target_tcp_proxies_v1::
                RegionTargetTcpProxiesConnectionIdempotencyPolicyOption>()) {
      return options
          .get<compute_region_target_tcp_proxies_v1::
                   RegionTargetTcpProxiesConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_region_target_tcp_proxies_v1::
                 RegionTargetTcpProxiesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_region_target_tcp_proxies_v1::
                        RegionTargetTcpProxiesPollingPolicyOption>()) {
      return options
          .get<compute_region_target_tcp_proxies_v1::
                   RegionTargetTcpProxiesPollingPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_region_target_tcp_proxies_v1::
                 RegionTargetTcpProxiesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_region_target_tcp_proxies_v1_internal::
                      RegionTargetTcpProxiesRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_target_tcp_proxies_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_TCP_PROXIES_V1_INTERNAL_REGION_TARGET_TCP_PROXIES_REST_CONNECTION_IMPL_H
