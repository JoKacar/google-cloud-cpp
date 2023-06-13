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
// source: google/cloud/compute/region_ssl_policies/v1/region_ssl_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_POLICIES_V1_INTERNAL_REGION_SSL_POLICIES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_POLICIES_V1_INTERNAL_REGION_SSL_POLICIES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/region_ssl_policies/v1/internal/region_ssl_policies_rest_stub.h"
#include "google/cloud/compute/region_ssl_policies/v1/internal/region_ssl_policies_retry_traits.h"
#include "google/cloud/compute/region_ssl_policies/v1/region_ssl_policies_connection.h"
#include "google/cloud/compute/region_ssl_policies/v1/region_ssl_policies_connection_idempotency_policy.h"
#include "google/cloud/compute/region_ssl_policies/v1/region_ssl_policies_options.h"
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
namespace compute_region_ssl_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionSslPoliciesRestConnectionImpl
    : public compute_region_ssl_policies_v1::RegionSslPoliciesConnection {
 public:
  ~RegionSslPoliciesRestConnectionImpl() override = default;

  RegionSslPoliciesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          compute_region_ssl_policies_v1_internal::RegionSslPoliciesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionSslPolicies(
      google::cloud::cpp::compute::region_ssl_policies::v1::
          DeleteRegionSslPoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SslPolicy> GetRegionSslPolicies(
      google::cloud::cpp::compute::region_ssl_policies::v1::
          GetRegionSslPoliciesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionSslPolicies(
      google::cloud::cpp::compute::region_ssl_policies::v1::
          InsertRegionSslPoliciesRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::SslPolicy> ListRegionSslPolicies(
      google::cloud::cpp::compute::region_ssl_policies::v1::
          ListRegionSslPoliciesRequest request) override;

  StatusOr<
      google::cloud::cpp::compute::v1::SslPoliciesListAvailableFeaturesResponse>
  ListAvailableFeatures(
      google::cloud::cpp::compute::region_ssl_policies::v1::
          ListAvailableFeaturesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRegionSslPolicies(
      google::cloud::cpp::compute::region_ssl_policies::v1::
          PatchRegionSslPoliciesRequest const& request) override;

 private:
  std::unique_ptr<compute_region_ssl_policies_v1::RegionSslPoliciesRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_region_ssl_policies_v1::
                        RegionSslPoliciesRetryPolicyOption>()) {
      return options
          .get<compute_region_ssl_policies_v1::
                   RegionSslPoliciesRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_region_ssl_policies_v1::
                 RegionSslPoliciesRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_region_ssl_policies_v1::
                        RegionSslPoliciesBackoffPolicyOption>()) {
      return options
          .get<compute_region_ssl_policies_v1::
                   RegionSslPoliciesBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_region_ssl_policies_v1::
                 RegionSslPoliciesBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<compute_region_ssl_policies_v1::
                      RegionSslPoliciesConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_region_ssl_policies_v1::
                        RegionSslPoliciesConnectionIdempotencyPolicyOption>()) {
      return options
          .get<compute_region_ssl_policies_v1::
                   RegionSslPoliciesConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_region_ssl_policies_v1::
                 RegionSslPoliciesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_region_ssl_policies_v1::
                        RegionSslPoliciesPollingPolicyOption>()) {
      return options
          .get<compute_region_ssl_policies_v1::
                   RegionSslPoliciesPollingPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_region_ssl_policies_v1::
                 RegionSslPoliciesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<
      compute_region_ssl_policies_v1_internal::RegionSslPoliciesRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_ssl_policies_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_POLICIES_V1_INTERNAL_REGION_SSL_POLICIES_REST_CONNECTION_IMPL_H
