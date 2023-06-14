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
// source: google/cloud/aiplatform/v1/prediction_service.proto

#include "google/cloud/aiplatform/v1/prediction_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

PredictionServiceConnectionIdempotencyPolicy::
    ~PredictionServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<PredictionServiceConnectionIdempotencyPolicy>
PredictionServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<PredictionServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::Predict(
    google::cloud::aiplatform::v1::PredictRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::RawPredict(
    google::cloud::aiplatform::v1::RawPredictRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PredictionServiceConnectionIdempotencyPolicy::Explain(
    google::cloud::aiplatform::v1::ExplainRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<PredictionServiceConnectionIdempotencyPolicy>
MakeDefaultPredictionServiceConnectionIdempotencyPolicy() {
  return std::make_unique<PredictionServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
