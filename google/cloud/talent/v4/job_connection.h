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
// source: google/cloud/talent/v4/job_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_JOB_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_JOB_CONNECTION_H

#include "google/cloud/talent/v4/internal/job_retry_traits.h"
#include "google/cloud/talent/v4/job_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/talent/v4/job_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace talent_v4 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using JobServiceRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    talent_v4_internal::JobServiceRetryTraits>;

using JobServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        talent_v4_internal::JobServiceRetryTraits>;

using JobServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        talent_v4_internal::JobServiceRetryTraits>;

/**
 * The `JobServiceConnection` object for `JobServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `JobServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `JobServiceClient`.
 *
 * To create a concrete instance, see `MakeJobServiceConnection()`.
 *
 * For mocking, see `talent_v4_mocks::MockJobServiceConnection`.
 */
class JobServiceConnection {
 public:
  virtual ~JobServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::talent::v4::Job> CreateJob(
      google::cloud::talent::v4::CreateJobRequest const& request);

  virtual future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
  BatchCreateJobs(
      google::cloud::talent::v4::BatchCreateJobsRequest const& request);

  virtual StatusOr<google::cloud::talent::v4::Job> GetJob(
      google::cloud::talent::v4::GetJobRequest const& request);

  virtual StatusOr<google::cloud::talent::v4::Job> UpdateJob(
      google::cloud::talent::v4::UpdateJobRequest const& request);

  virtual future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
  BatchUpdateJobs(
      google::cloud::talent::v4::BatchUpdateJobsRequest const& request);

  virtual Status DeleteJob(
      google::cloud::talent::v4::DeleteJobRequest const& request);

  virtual future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
  BatchDeleteJobs(
      google::cloud::talent::v4::BatchDeleteJobsRequest const& request);

  virtual StreamRange<google::cloud::talent::v4::Job> ListJobs(
      google::cloud::talent::v4::ListJobsRequest request);

  virtual StatusOr<google::cloud::talent::v4::SearchJobsResponse> SearchJobs(
      google::cloud::talent::v4::SearchJobsRequest const& request);

  virtual StatusOr<google::cloud::talent::v4::SearchJobsResponse>
  SearchJobsForAlert(
      google::cloud::talent::v4::SearchJobsRequest const& request);
};

/**
 * A factory function to construct an object of type `JobServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of JobServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `JobServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::talent_v4::JobServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `JobServiceConnection` created by
 * this function.
 */
std::shared_ptr<JobServiceConnection> MakeJobServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_JOB_CONNECTION_H
