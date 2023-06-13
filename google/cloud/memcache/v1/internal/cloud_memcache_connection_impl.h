// Copyright 2022 Google LLC
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
// source: google/cloud/memcache/v1/cloud_memcache.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_V1_INTERNAL_CLOUD_MEMCACHE_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_V1_INTERNAL_CLOUD_MEMCACHE_CONNECTION_IMPL_H

#include "google/cloud/memcache/v1/cloud_memcache_connection.h"
#include "google/cloud/memcache/v1/cloud_memcache_connection_idempotency_policy.h"
#include "google/cloud/memcache/v1/cloud_memcache_options.h"
#include "google/cloud/memcache/v1/internal/cloud_memcache_retry_traits.h"
#include "google/cloud/memcache/v1/internal/cloud_memcache_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace memcache_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudMemcacheConnectionImpl
    : public memcache_v1::CloudMemcacheConnection {
 public:
  ~CloudMemcacheConnectionImpl() override = default;

  CloudMemcacheConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<memcache_v1_internal::CloudMemcacheStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::memcache::v1::Instance> ListInstances(
      google::cloud::memcache::v1::ListInstancesRequest request) override;

  StatusOr<google::cloud::memcache::v1::Instance> GetInstance(
      google::cloud::memcache::v1::GetInstanceRequest const& request) override;

  future<StatusOr<google::cloud::memcache::v1::Instance>> CreateInstance(
      google::cloud::memcache::v1::CreateInstanceRequest const& request)
      override;

  future<StatusOr<google::cloud::memcache::v1::Instance>> UpdateInstance(
      google::cloud::memcache::v1::UpdateInstanceRequest const& request)
      override;

  future<StatusOr<google::cloud::memcache::v1::Instance>> UpdateParameters(
      google::cloud::memcache::v1::UpdateParametersRequest const& request)
      override;

  future<StatusOr<google::cloud::memcache::v1::OperationMetadata>>
  DeleteInstance(google::cloud::memcache::v1::DeleteInstanceRequest const&
                     request) override;

  future<StatusOr<google::cloud::memcache::v1::Instance>> ApplyParameters(
      google::cloud::memcache::v1::ApplyParametersRequest const& request)
      override;

  future<StatusOr<google::cloud::memcache::v1::Instance>> RescheduleMaintenance(
      google::cloud::memcache::v1::RescheduleMaintenanceRequest const& request)
      override;

 private:
  std::unique_ptr<memcache_v1::CloudMemcacheRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<memcache_v1::CloudMemcacheRetryPolicyOption>()) {
      return options.get<memcache_v1::CloudMemcacheRetryPolicyOption>()
          ->clone();
    }
    return options_.get<memcache_v1::CloudMemcacheRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<memcache_v1::CloudMemcacheBackoffPolicyOption>()) {
      return options.get<memcache_v1::CloudMemcacheBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<memcache_v1::CloudMemcacheBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<memcache_v1::CloudMemcacheConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            memcache_v1::CloudMemcacheConnectionIdempotencyPolicyOption>()) {
      return options
          .get<memcache_v1::CloudMemcacheConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<memcache_v1::CloudMemcacheConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<memcache_v1::CloudMemcachePollingPolicyOption>()) {
      return options.get<memcache_v1::CloudMemcachePollingPolicyOption>()
          ->clone();
    }
    return options_.get<memcache_v1::CloudMemcachePollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<memcache_v1_internal::CloudMemcacheStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace memcache_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_V1_INTERNAL_CLOUD_MEMCACHE_CONNECTION_IMPL_H
