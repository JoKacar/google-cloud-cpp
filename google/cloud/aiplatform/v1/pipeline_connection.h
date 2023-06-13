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
// source: google/cloud/aiplatform/v1/pipeline_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_PIPELINE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_PIPELINE_CONNECTION_H

#include "google/cloud/aiplatform/v1/internal/pipeline_retry_traits.h"
#include "google/cloud/aiplatform/v1/pipeline_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/pipeline_service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using PipelineServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        aiplatform_v1_internal::PipelineServiceRetryTraits>;

using PipelineServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        aiplatform_v1_internal::PipelineServiceRetryTraits>;

using PipelineServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        aiplatform_v1_internal::PipelineServiceRetryTraits>;

/**
 * The `PipelineServiceConnection` object for `PipelineServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `PipelineServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `PipelineServiceClient`.
 *
 * To create a concrete instance, see `MakePipelineServiceConnection()`.
 *
 * For mocking, see `aiplatform_v1_mocks::MockPipelineServiceConnection`.
 */
class PipelineServiceConnection {
 public:
  virtual ~PipelineServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
  CreateTrainingPipeline(
      google::cloud::aiplatform::v1::CreateTrainingPipelineRequest const&
          request);

  virtual StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
  GetTrainingPipeline(
      google::cloud::aiplatform::v1::GetTrainingPipelineRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::TrainingPipeline>
  ListTrainingPipelines(
      google::cloud::aiplatform::v1::ListTrainingPipelinesRequest request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteTrainingPipeline(
      google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
          request);

  virtual Status CancelTrainingPipeline(
      google::cloud::aiplatform::v1::CancelTrainingPipelineRequest const&
          request);

  virtual StatusOr<google::cloud::aiplatform::v1::PipelineJob>
  CreatePipelineJob(
      google::cloud::aiplatform::v1::CreatePipelineJobRequest const& request);

  virtual StatusOr<google::cloud::aiplatform::v1::PipelineJob> GetPipelineJob(
      google::cloud::aiplatform::v1::GetPipelineJobRequest const& request);

  virtual StreamRange<google::cloud::aiplatform::v1::PipelineJob>
  ListPipelineJobs(
      google::cloud::aiplatform::v1::ListPipelineJobsRequest request);

  virtual future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeletePipelineJob(
      google::cloud::aiplatform::v1::DeletePipelineJobRequest const& request);

  virtual Status CancelPipelineJob(
      google::cloud::aiplatform::v1::CancelPipelineJobRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `PipelineServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of PipelineServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `PipelineServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::aiplatform_v1::PipelineServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `PipelineServiceConnection` created
 * by this function.
 */
std::shared_ptr<PipelineServiceConnection> MakePipelineServiceConnection(
    std::string const& location, Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_PIPELINE_CONNECTION_H
