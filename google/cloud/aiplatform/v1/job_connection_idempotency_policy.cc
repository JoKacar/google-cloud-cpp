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
// source: google/cloud/aiplatform/v1/job_service.proto

#include "google/cloud/aiplatform/v1/job_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

JobServiceConnectionIdempotencyPolicy::
    ~JobServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<JobServiceConnectionIdempotencyPolicy>
JobServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<JobServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency JobServiceConnectionIdempotencyPolicy::CreateCustomJob(
    google::cloud::aiplatform::v1::CreateCustomJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::GetCustomJob(
    google::cloud::aiplatform::v1::GetCustomJobRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::ListCustomJobs(
    google::cloud::aiplatform::v1::ListCustomJobsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::DeleteCustomJob(
    google::cloud::aiplatform::v1::DeleteCustomJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::CancelCustomJob(
    google::cloud::aiplatform::v1::CancelCustomJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::CreateDataLabelingJob(
    google::cloud::aiplatform::v1::CreateDataLabelingJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::GetDataLabelingJob(
    google::cloud::aiplatform::v1::GetDataLabelingJobRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::ListDataLabelingJobs(
    google::cloud::aiplatform::v1::ListDataLabelingJobsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::DeleteDataLabelingJob(
    google::cloud::aiplatform::v1::DeleteDataLabelingJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::CancelDataLabelingJob(
    google::cloud::aiplatform::v1::CancelDataLabelingJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
JobServiceConnectionIdempotencyPolicy::CreateHyperparameterTuningJob(
    google::cloud::aiplatform::v1::
        CreateHyperparameterTuningJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::GetHyperparameterTuningJob(
    google::cloud::aiplatform::v1::GetHyperparameterTuningJobRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::ListHyperparameterTuningJobs(
    google::cloud::aiplatform::v1::
        ListHyperparameterTuningJobsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
JobServiceConnectionIdempotencyPolicy::DeleteHyperparameterTuningJob(
    google::cloud::aiplatform::v1::
        DeleteHyperparameterTuningJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
JobServiceConnectionIdempotencyPolicy::CancelHyperparameterTuningJob(
    google::cloud::aiplatform::v1::
        CancelHyperparameterTuningJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::CreateNasJob(
    google::cloud::aiplatform::v1::CreateNasJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::GetNasJob(
    google::cloud::aiplatform::v1::GetNasJobRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::ListNasJobs(
    google::cloud::aiplatform::v1::ListNasJobsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::DeleteNasJob(
    google::cloud::aiplatform::v1::DeleteNasJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::CancelNasJob(
    google::cloud::aiplatform::v1::CancelNasJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::GetNasTrialDetail(
    google::cloud::aiplatform::v1::GetNasTrialDetailRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::ListNasTrialDetails(
    google::cloud::aiplatform::v1::ListNasTrialDetailsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::CreateBatchPredictionJob(
    google::cloud::aiplatform::v1::CreateBatchPredictionJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::GetBatchPredictionJob(
    google::cloud::aiplatform::v1::GetBatchPredictionJobRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::ListBatchPredictionJobs(
    google::cloud::aiplatform::v1::ListBatchPredictionJobsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::DeleteBatchPredictionJob(
    google::cloud::aiplatform::v1::DeleteBatchPredictionJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::CancelBatchPredictionJob(
    google::cloud::aiplatform::v1::CancelBatchPredictionJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
JobServiceConnectionIdempotencyPolicy::CreateModelDeploymentMonitoringJob(
    google::cloud::aiplatform::v1::
        CreateModelDeploymentMonitoringJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency JobServiceConnectionIdempotencyPolicy::
    SearchModelDeploymentMonitoringStatsAnomalies(
        google::cloud::aiplatform::v1::
            SearchModelDeploymentMonitoringStatsAnomaliesRequest) {  // NOLINT
  return Idempotency::kNonIdempotent;
}

Idempotency
JobServiceConnectionIdempotencyPolicy::GetModelDeploymentMonitoringJob(
    google::cloud::aiplatform::v1::
        GetModelDeploymentMonitoringJobRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
JobServiceConnectionIdempotencyPolicy::ListModelDeploymentMonitoringJobs(
    google::cloud::aiplatform::v1::
        ListModelDeploymentMonitoringJobsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
JobServiceConnectionIdempotencyPolicy::UpdateModelDeploymentMonitoringJob(
    google::cloud::aiplatform::v1::
        UpdateModelDeploymentMonitoringJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
JobServiceConnectionIdempotencyPolicy::DeleteModelDeploymentMonitoringJob(
    google::cloud::aiplatform::v1::
        DeleteModelDeploymentMonitoringJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
JobServiceConnectionIdempotencyPolicy::PauseModelDeploymentMonitoringJob(
    google::cloud::aiplatform::v1::
        PauseModelDeploymentMonitoringJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
JobServiceConnectionIdempotencyPolicy::ResumeModelDeploymentMonitoringJob(
    google::cloud::aiplatform::v1::
        ResumeModelDeploymentMonitoringJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<JobServiceConnectionIdempotencyPolicy>
MakeDefaultJobServiceConnectionIdempotencyPolicy() {
  return std::make_unique<JobServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
