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
// source: google/cloud/compute/region_autoscalers/v1/region_autoscalers.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_AUTOSCALERS_V1_INTERNAL_REGION_AUTOSCALERS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_AUTOSCALERS_V1_INTERNAL_REGION_AUTOSCALERS_REST_CONNECTION_IMPL_H

#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/compute/region_autoscalers/v1/internal/region_autoscalers_rest_stub.h"
#include "google/cloud/compute/region_autoscalers/v1/internal/region_autoscalers_retry_traits.h"
#include "google/cloud/compute/region_autoscalers/v1/region_autoscalers_connection.h"
#include "google/cloud/compute/region_autoscalers/v1/region_autoscalers_connection_idempotency_policy.h"
#include "google/cloud/compute/region_autoscalers/v1/region_autoscalers_options.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_autoscalers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionAutoscalersRestConnectionImpl
    : public compute_region_autoscalers_v1::RegionAutoscalersConnection {
 public:
  ~RegionAutoscalersRestConnectionImpl() override = default;

  RegionAutoscalersRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_region_autoscalers_v1_internal::RegionAutoscalersRestStub> stub,
    Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionAutoscalers(google::cloud::cpp::compute::region_autoscalers::v1::DeleteRegionAutoscalersRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Autoscaler>
  GetRegionAutoscalers(google::cloud::cpp::compute::region_autoscalers::v1::GetRegionAutoscalersRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionAutoscalers(google::cloud::cpp::compute::region_autoscalers::v1::InsertRegionAutoscalersRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::Autoscaler>
  ListRegionAutoscalers(google::cloud::cpp::compute::region_autoscalers::v1::ListRegionAutoscalersRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRegionAutoscalers(google::cloud::cpp::compute::region_autoscalers::v1::PatchRegionAutoscalersRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateRegionAutoscalers(google::cloud::cpp::compute::region_autoscalers::v1::UpdateRegionAutoscalersRequest const& request) override;

 private:
  std::unique_ptr<compute_region_autoscalers_v1::RegionAutoscalersRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_region_autoscalers_v1::RegionAutoscalersRetryPolicyOption>()) {
      return options.get<compute_region_autoscalers_v1::RegionAutoscalersRetryPolicyOption>()->clone();
    }
    return options_.get<compute_region_autoscalers_v1::RegionAutoscalersRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_region_autoscalers_v1::RegionAutoscalersBackoffPolicyOption>()) {
      return options.get<compute_region_autoscalers_v1::RegionAutoscalersBackoffPolicyOption>()->clone();
    }
    return options_.get<compute_region_autoscalers_v1::RegionAutoscalersBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<compute_region_autoscalers_v1::RegionAutoscalersConnectionIdempotencyPolicy> idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_region_autoscalers_v1::RegionAutoscalersConnectionIdempotencyPolicyOption>()) {
      return options.get<compute_region_autoscalers_v1::RegionAutoscalersConnectionIdempotencyPolicyOption>()->clone();
    }
    return options_.get<compute_region_autoscalers_v1::RegionAutoscalersConnectionIdempotencyPolicyOption>()->
clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_region_autoscalers_v1::RegionAutoscalersPollingPolicyOption>()) {
      return options.get<compute_region_autoscalers_v1::RegionAutoscalersPollingPolicyOption>()->clone();
    }
    return options_.get<compute_region_autoscalers_v1::RegionAutoscalersPollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_region_autoscalers_v1_internal::RegionAutoscalersRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_autoscalers_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_AUTOSCALERS_V1_INTERNAL_REGION_AUTOSCALERS_REST_CONNECTION_IMPL_H
