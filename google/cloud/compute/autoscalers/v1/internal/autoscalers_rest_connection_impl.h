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
// source: google/cloud/compute/autoscalers/v1/autoscalers.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_AUTOSCALERS_V1_INTERNAL_AUTOSCALERS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_AUTOSCALERS_V1_INTERNAL_AUTOSCALERS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/autoscalers/v1/autoscalers_connection.h"
#include "google/cloud/compute/autoscalers/v1/autoscalers_connection_idempotency_policy.h"
#include "google/cloud/compute/autoscalers/v1/autoscalers_options.h"
#include "google/cloud/compute/autoscalers/v1/internal/autoscalers_rest_stub.h"
#include "google/cloud/compute/autoscalers/v1/internal/autoscalers_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_autoscalers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AutoscalersRestConnectionImpl
    : public compute_autoscalers_v1::AutoscalersConnection {
 public:
  ~AutoscalersRestConnectionImpl() override = default;

  AutoscalersRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_autoscalers_v1_internal::AutoscalersRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<std::pair<std::string,
                        google::cloud::cpp::compute::v1::AutoscalersScopedList>>
  AggregatedListAutoscalers(
      google::cloud::cpp::compute::autoscalers::v1::
          AggregatedListAutoscalersRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteAutoscaler(
      google::cloud::cpp::compute::autoscalers::v1::
          DeleteAutoscalerRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Autoscaler> GetAutoscaler(
      google::cloud::cpp::compute::autoscalers::v1::GetAutoscalerRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertAutoscaler(
      google::cloud::cpp::compute::autoscalers::v1::
          InsertAutoscalerRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::Autoscaler> ListAutoscalers(
      google::cloud::cpp::compute::autoscalers::v1::ListAutoscalersRequest
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchAutoscaler(
      google::cloud::cpp::compute::autoscalers::v1::
          PatchAutoscalerRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateAutoscaler(
      google::cloud::cpp::compute::autoscalers::v1::
          UpdateAutoscalerRequest const& request) override;

 private:
  static std::unique_ptr<compute_autoscalers_v1::AutoscalersRetryPolicy>
  retry_policy(Options const& options) {
    return options.get<compute_autoscalers_v1::AutoscalersRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_autoscalers_v1::AutoscalersBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_autoscalers_v1::AutoscalersConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_autoscalers_v1::
                 AutoscalersConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_autoscalers_v1::AutoscalersPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_autoscalers_v1_internal::AutoscalersRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_autoscalers_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_AUTOSCALERS_V1_INTERNAL_AUTOSCALERS_REST_CONNECTION_IMPL_H
