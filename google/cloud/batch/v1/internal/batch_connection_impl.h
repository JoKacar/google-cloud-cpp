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
// source: google/cloud/batch/v1/batch.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_INTERNAL_BATCH_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_INTERNAL_BATCH_CONNECTION_IMPL_H

#include "google/cloud/batch/v1/batch_connection.h"
#include "google/cloud/batch/v1/batch_connection_idempotency_policy.h"
#include "google/cloud/batch/v1/batch_options.h"
#include "google/cloud/batch/v1/internal/batch_retry_traits.h"
#include "google/cloud/batch/v1/internal/batch_stub.h"
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
namespace batch_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BatchServiceConnectionImpl : public batch_v1::BatchServiceConnection {
 public:
  ~BatchServiceConnectionImpl() override = default;

  BatchServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<batch_v1_internal::BatchServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::batch::v1::Job> CreateJob(
      google::cloud::batch::v1::CreateJobRequest const& request) override;

  StatusOr<google::cloud::batch::v1::Job> GetJob(
      google::cloud::batch::v1::GetJobRequest const& request) override;

  future<StatusOr<google::cloud::batch::v1::OperationMetadata>> DeleteJob(
      google::cloud::batch::v1::DeleteJobRequest const& request) override;

  StreamRange<google::cloud::batch::v1::Job> ListJobs(
      google::cloud::batch::v1::ListJobsRequest request) override;

  StatusOr<google::cloud::batch::v1::Task> GetTask(
      google::cloud::batch::v1::GetTaskRequest const& request) override;

  StreamRange<google::cloud::batch::v1::Task> ListTasks(
      google::cloud::batch::v1::ListTasksRequest request) override;

 private:
  std::unique_ptr<batch_v1::BatchServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<batch_v1::BatchServiceRetryPolicyOption>()) {
      return options.get<batch_v1::BatchServiceRetryPolicyOption>()->clone();
    }
    return options_.get<batch_v1::BatchServiceRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<batch_v1::BatchServiceBackoffPolicyOption>()) {
      return options.get<batch_v1::BatchServiceBackoffPolicyOption>()->clone();
    }
    return options_.get<batch_v1::BatchServiceBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<batch_v1::BatchServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<batch_v1::BatchServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<batch_v1::BatchServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<batch_v1::BatchServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<batch_v1::BatchServicePollingPolicyOption>()) {
      return options.get<batch_v1::BatchServicePollingPolicyOption>()->clone();
    }
    return options_.get<batch_v1::BatchServicePollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<batch_v1_internal::BatchServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace batch_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_INTERNAL_BATCH_CONNECTION_IMPL_H
