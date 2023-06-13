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
// source: google/cloud/scheduler/v1/cloudscheduler.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SCHEDULER_V1_CLOUD_SCHEDULER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SCHEDULER_V1_CLOUD_SCHEDULER_CONNECTION_H

#include "google/cloud/scheduler/v1/cloud_scheduler_connection_idempotency_policy.h"
#include "google/cloud/scheduler/v1/internal/cloud_scheduler_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/scheduler/v1/cloudscheduler.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace scheduler_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using CloudSchedulerRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        scheduler_v1_internal::CloudSchedulerRetryTraits>;

using CloudSchedulerLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        scheduler_v1_internal::CloudSchedulerRetryTraits>;

using CloudSchedulerLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        scheduler_v1_internal::CloudSchedulerRetryTraits>;

/**
 * The `CloudSchedulerConnection` object for `CloudSchedulerClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CloudSchedulerClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `CloudSchedulerClient`.
 *
 * To create a concrete instance, see `MakeCloudSchedulerConnection()`.
 *
 * For mocking, see `scheduler_v1_mocks::MockCloudSchedulerConnection`.
 */
class CloudSchedulerConnection {
 public:
  virtual ~CloudSchedulerConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::scheduler::v1::Job> ListJobs(
      google::cloud::scheduler::v1::ListJobsRequest request);

  virtual StatusOr<google::cloud::scheduler::v1::Job> GetJob(
      google::cloud::scheduler::v1::GetJobRequest const& request);

  virtual StatusOr<google::cloud::scheduler::v1::Job> CreateJob(
      google::cloud::scheduler::v1::CreateJobRequest const& request);

  virtual StatusOr<google::cloud::scheduler::v1::Job> UpdateJob(
      google::cloud::scheduler::v1::UpdateJobRequest const& request);

  virtual Status DeleteJob(
      google::cloud::scheduler::v1::DeleteJobRequest const& request);

  virtual StatusOr<google::cloud::scheduler::v1::Job> PauseJob(
      google::cloud::scheduler::v1::PauseJobRequest const& request);

  virtual StatusOr<google::cloud::scheduler::v1::Job> ResumeJob(
      google::cloud::scheduler::v1::ResumeJobRequest const& request);

  virtual StatusOr<google::cloud::scheduler::v1::Job> RunJob(
      google::cloud::scheduler::v1::RunJobRequest const& request);
};

/**
 * A factory function to construct an object of type `CloudSchedulerConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of CloudSchedulerClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CloudSchedulerConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::scheduler_v1::CloudSchedulerPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CloudSchedulerConnection` created by
 * this function.
 */
std::shared_ptr<CloudSchedulerConnection> MakeCloudSchedulerConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace scheduler_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SCHEDULER_V1_CLOUD_SCHEDULER_CONNECTION_H
