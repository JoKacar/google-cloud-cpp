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
// source: google/cloud/recommender/v1/recommender_service.proto

#include "google/cloud/recommender/v1/recommender_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace recommender_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

RecommenderConnectionIdempotencyPolicy::
    ~RecommenderConnectionIdempotencyPolicy() = default;

std::unique_ptr<RecommenderConnectionIdempotencyPolicy>
RecommenderConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<RecommenderConnectionIdempotencyPolicy>(*this);
}

Idempotency RecommenderConnectionIdempotencyPolicy::ListInsights(
    google::cloud::recommender::v1::ListInsightsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RecommenderConnectionIdempotencyPolicy::GetInsight(
    google::cloud::recommender::v1::GetInsightRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RecommenderConnectionIdempotencyPolicy::MarkInsightAccepted(
    google::cloud::recommender::v1::MarkInsightAcceptedRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RecommenderConnectionIdempotencyPolicy::ListRecommendations(
    google::cloud::recommender::v1::ListRecommendationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RecommenderConnectionIdempotencyPolicy::GetRecommendation(
    google::cloud::recommender::v1::GetRecommendationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RecommenderConnectionIdempotencyPolicy::MarkRecommendationClaimed(
    google::cloud::recommender::v1::MarkRecommendationClaimedRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RecommenderConnectionIdempotencyPolicy::MarkRecommendationSucceeded(
    google::cloud::recommender::v1::MarkRecommendationSucceededRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RecommenderConnectionIdempotencyPolicy::MarkRecommendationFailed(
    google::cloud::recommender::v1::MarkRecommendationFailedRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RecommenderConnectionIdempotencyPolicy::GetRecommenderConfig(
    google::cloud::recommender::v1::GetRecommenderConfigRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RecommenderConnectionIdempotencyPolicy::UpdateRecommenderConfig(
    google::cloud::recommender::v1::UpdateRecommenderConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RecommenderConnectionIdempotencyPolicy::GetInsightTypeConfig(
    google::cloud::recommender::v1::GetInsightTypeConfigRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RecommenderConnectionIdempotencyPolicy::UpdateInsightTypeConfig(
    google::cloud::recommender::v1::UpdateInsightTypeConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<RecommenderConnectionIdempotencyPolicy>
MakeDefaultRecommenderConnectionIdempotencyPolicy() {
  return std::make_unique<RecommenderConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recommender_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
