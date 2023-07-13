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
// source: google/cloud/aiplatform/v1/tensorboard_service.proto

#include "google/cloud/aiplatform/v1/tensorboard_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

TensorboardServiceConnectionIdempotencyPolicy::
    ~TensorboardServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<TensorboardServiceConnectionIdempotencyPolicy>
TensorboardServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<TensorboardServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency TensorboardServiceConnectionIdempotencyPolicy::CreateTensorboard(
    google::cloud::aiplatform::v1::CreateTensorboardRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TensorboardServiceConnectionIdempotencyPolicy::GetTensorboard(
    google::cloud::aiplatform::v1::GetTensorboardRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TensorboardServiceConnectionIdempotencyPolicy::UpdateTensorboard(
    google::cloud::aiplatform::v1::UpdateTensorboardRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TensorboardServiceConnectionIdempotencyPolicy::ListTensorboards(
    google::cloud::aiplatform::v1::ListTensorboardsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency TensorboardServiceConnectionIdempotencyPolicy::DeleteTensorboard(
    google::cloud::aiplatform::v1::DeleteTensorboardRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TensorboardServiceConnectionIdempotencyPolicy::ReadTensorboardUsage(
    google::cloud::aiplatform::v1::ReadTensorboardUsageRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::CreateTensorboardExperiment(
    google::cloud::aiplatform::v1::CreateTensorboardExperimentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::GetTensorboardExperiment(
    google::cloud::aiplatform::v1::GetTensorboardExperimentRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::UpdateTensorboardExperiment(
    google::cloud::aiplatform::v1::UpdateTensorboardExperimentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::ListTensorboardExperiments(
    google::cloud::aiplatform::v1::
        ListTensorboardExperimentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::DeleteTensorboardExperiment(
    google::cloud::aiplatform::v1::DeleteTensorboardExperimentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TensorboardServiceConnectionIdempotencyPolicy::CreateTensorboardRun(
    google::cloud::aiplatform::v1::CreateTensorboardRunRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::BatchCreateTensorboardRuns(
    google::cloud::aiplatform::v1::BatchCreateTensorboardRunsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TensorboardServiceConnectionIdempotencyPolicy::GetTensorboardRun(
    google::cloud::aiplatform::v1::GetTensorboardRunRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TensorboardServiceConnectionIdempotencyPolicy::UpdateTensorboardRun(
    google::cloud::aiplatform::v1::UpdateTensorboardRunRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TensorboardServiceConnectionIdempotencyPolicy::ListTensorboardRuns(
    google::cloud::aiplatform::v1::ListTensorboardRunsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency TensorboardServiceConnectionIdempotencyPolicy::DeleteTensorboardRun(
    google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::BatchCreateTensorboardTimeSeries(
    google::cloud::aiplatform::v1::
        BatchCreateTensorboardTimeSeriesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::CreateTensorboardTimeSeries(
    google::cloud::aiplatform::v1::CreateTensorboardTimeSeriesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::GetTensorboardTimeSeries(
    google::cloud::aiplatform::v1::GetTensorboardTimeSeriesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::UpdateTensorboardTimeSeries(
    google::cloud::aiplatform::v1::UpdateTensorboardTimeSeriesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::ListTensorboardTimeSeries(
    google::cloud::aiplatform::v1::
        ListTensorboardTimeSeriesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::DeleteTensorboardTimeSeries(
    google::cloud::aiplatform::v1::DeleteTensorboardTimeSeriesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TensorboardServiceConnectionIdempotencyPolicy::
    BatchReadTensorboardTimeSeriesData(
        google::cloud::aiplatform::v1::
            BatchReadTensorboardTimeSeriesDataRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::ReadTensorboardTimeSeriesData(
    google::cloud::aiplatform::v1::
        ReadTensorboardTimeSeriesDataRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::WriteTensorboardExperimentData(
    google::cloud::aiplatform::v1::
        WriteTensorboardExperimentDataRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::WriteTensorboardRunData(
    google::cloud::aiplatform::v1::WriteTensorboardRunDataRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
TensorboardServiceConnectionIdempotencyPolicy::ExportTensorboardTimeSeriesData(
    google::cloud::aiplatform::v1::
        ExportTensorboardTimeSeriesDataRequest) {  // NOLINT
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<TensorboardServiceConnectionIdempotencyPolicy>
MakeDefaultTensorboardServiceConnectionIdempotencyPolicy() {
  return std::make_unique<TensorboardServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
