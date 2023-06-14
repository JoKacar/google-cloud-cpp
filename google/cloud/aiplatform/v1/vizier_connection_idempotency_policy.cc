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
// source: google/cloud/aiplatform/v1/vizier_service.proto

#include "google/cloud/aiplatform/v1/vizier_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

VizierServiceConnectionIdempotencyPolicy::
    ~VizierServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<VizierServiceConnectionIdempotencyPolicy>
VizierServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<VizierServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency VizierServiceConnectionIdempotencyPolicy::CreateStudy(
    google::cloud::aiplatform::v1::CreateStudyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VizierServiceConnectionIdempotencyPolicy::GetStudy(
    google::cloud::aiplatform::v1::GetStudyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency VizierServiceConnectionIdempotencyPolicy::ListStudies(
    google::cloud::aiplatform::v1::ListStudiesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency VizierServiceConnectionIdempotencyPolicy::DeleteStudy(
    google::cloud::aiplatform::v1::DeleteStudyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VizierServiceConnectionIdempotencyPolicy::LookupStudy(
    google::cloud::aiplatform::v1::LookupStudyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VizierServiceConnectionIdempotencyPolicy::SuggestTrials(
    google::cloud::aiplatform::v1::SuggestTrialsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VizierServiceConnectionIdempotencyPolicy::CreateTrial(
    google::cloud::aiplatform::v1::CreateTrialRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VizierServiceConnectionIdempotencyPolicy::GetTrial(
    google::cloud::aiplatform::v1::GetTrialRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency VizierServiceConnectionIdempotencyPolicy::ListTrials(
    google::cloud::aiplatform::v1::ListTrialsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency VizierServiceConnectionIdempotencyPolicy::AddTrialMeasurement(
    google::cloud::aiplatform::v1::AddTrialMeasurementRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VizierServiceConnectionIdempotencyPolicy::CompleteTrial(
    google::cloud::aiplatform::v1::CompleteTrialRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VizierServiceConnectionIdempotencyPolicy::DeleteTrial(
    google::cloud::aiplatform::v1::DeleteTrialRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
VizierServiceConnectionIdempotencyPolicy::CheckTrialEarlyStoppingState(
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VizierServiceConnectionIdempotencyPolicy::StopTrial(
    google::cloud::aiplatform::v1::StopTrialRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VizierServiceConnectionIdempotencyPolicy::ListOptimalTrials(
    google::cloud::aiplatform::v1::ListOptimalTrialsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<VizierServiceConnectionIdempotencyPolicy>
MakeDefaultVizierServiceConnectionIdempotencyPolicy() {
  return std::make_unique<VizierServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
