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
// source: google/cloud/aiplatform/v1/index_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_INDEX_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_INDEX_CONNECTION_IMPL_H

#include "google/cloud/aiplatform/v1/index_connection.h"
#include "google/cloud/aiplatform/v1/index_connection_idempotency_policy.h"
#include "google/cloud/aiplatform/v1/index_options.h"
#include "google/cloud/aiplatform/v1/internal/index_retry_traits.h"
#include "google/cloud/aiplatform/v1/internal/index_stub.h"
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
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IndexServiceConnectionImpl
    : public aiplatform_v1::IndexServiceConnection {
 public:
  ~IndexServiceConnectionImpl() override = default;

  IndexServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<aiplatform_v1_internal::IndexServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::aiplatform::v1::Index>> CreateIndex(
      google::cloud::aiplatform::v1::CreateIndexRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Index> GetIndex(
      google::cloud::aiplatform::v1::GetIndexRequest const& request) override;

  StreamRange<google::cloud::aiplatform::v1::Index> ListIndexes(
      google::cloud::aiplatform::v1::ListIndexesRequest request) override;

  future<StatusOr<google::cloud::aiplatform::v1::Index>> UpdateIndex(
      google::cloud::aiplatform::v1::UpdateIndexRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteIndex(google::cloud::aiplatform::v1::DeleteIndexRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::UpsertDatapointsResponse>
  UpsertDatapoints(google::cloud::aiplatform::v1::UpsertDatapointsRequest const&
                       request) override;

  StatusOr<google::cloud::aiplatform::v1::RemoveDatapointsResponse>
  RemoveDatapoints(google::cloud::aiplatform::v1::RemoveDatapointsRequest const&
                       request) override;

 private:
  std::unique_ptr<aiplatform_v1::IndexServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<aiplatform_v1::IndexServiceRetryPolicyOption>()) {
      return options.get<aiplatform_v1::IndexServiceRetryPolicyOption>()
          ->clone();
    }
    return options_.get<aiplatform_v1::IndexServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<aiplatform_v1::IndexServiceBackoffPolicyOption>()) {
      return options.get<aiplatform_v1::IndexServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<aiplatform_v1::IndexServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<aiplatform_v1::IndexServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            aiplatform_v1::IndexServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<aiplatform_v1::IndexServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<aiplatform_v1::IndexServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<aiplatform_v1::IndexServicePollingPolicyOption>()) {
      return options.get<aiplatform_v1::IndexServicePollingPolicyOption>()
          ->clone();
    }
    return options_.get<aiplatform_v1::IndexServicePollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<aiplatform_v1_internal::IndexServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_INDEX_CONNECTION_IMPL_H
