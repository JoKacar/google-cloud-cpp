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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECOMMENDER_V1_INTERNAL_RECOMMENDER_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECOMMENDER_V1_INTERNAL_RECOMMENDER_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/recommender/v1/recommender_service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace recommender_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RecommenderStub {
 public:
  virtual ~RecommenderStub() = 0;

  virtual StatusOr<google::cloud::recommender::v1::ListInsightsResponse>
  ListInsights(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::ListInsightsRequest const& request) = 0;

  virtual StatusOr<google::cloud::recommender::v1::Insight> GetInsight(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::GetInsightRequest const& request) = 0;

  virtual StatusOr<google::cloud::recommender::v1::Insight> MarkInsightAccepted(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::MarkInsightAcceptedRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recommender::v1::ListRecommendationsResponse>
  ListRecommendations(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::ListRecommendationsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recommender::v1::Recommendation>
  GetRecommendation(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::GetRecommendationRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationClaimed(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::MarkRecommendationClaimedRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationSucceeded(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::MarkRecommendationSucceededRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationFailed(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::MarkRecommendationFailedRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recommender::v1::RecommenderConfig>
  GetRecommenderConfig(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::GetRecommenderConfigRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recommender::v1::RecommenderConfig>
  UpdateRecommenderConfig(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::UpdateRecommenderConfigRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
  GetInsightTypeConfig(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::GetInsightTypeConfigRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
  UpdateInsightTypeConfig(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::UpdateInsightTypeConfigRequest const&
          request) = 0;
};

class DefaultRecommenderStub : public RecommenderStub {
 public:
  explicit DefaultRecommenderStub(
      std::unique_ptr<
          google::cloud::recommender::v1::Recommender::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::recommender::v1::ListInsightsResponse> ListInsights(
      grpc::ClientContext& client_context,
      google::cloud::recommender::v1::ListInsightsRequest const& request)
      override;

  StatusOr<google::cloud::recommender::v1::Insight> GetInsight(
      grpc::ClientContext& client_context,
      google::cloud::recommender::v1::GetInsightRequest const& request)
      override;

  StatusOr<google::cloud::recommender::v1::Insight> MarkInsightAccepted(
      grpc::ClientContext& client_context,
      google::cloud::recommender::v1::MarkInsightAcceptedRequest const& request)
      override;

  StatusOr<google::cloud::recommender::v1::ListRecommendationsResponse>
  ListRecommendations(
      grpc::ClientContext& client_context,
      google::cloud::recommender::v1::ListRecommendationsRequest const& request)
      override;

  StatusOr<google::cloud::recommender::v1::Recommendation> GetRecommendation(
      grpc::ClientContext& client_context,
      google::cloud::recommender::v1::GetRecommendationRequest const& request)
      override;

  StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationClaimed(
      grpc::ClientContext& client_context,
      google::cloud::recommender::v1::MarkRecommendationClaimedRequest const&
          request) override;

  StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationSucceeded(
      grpc::ClientContext& client_context,
      google::cloud::recommender::v1::MarkRecommendationSucceededRequest const&
          request) override;

  StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationFailed(
      grpc::ClientContext& client_context,
      google::cloud::recommender::v1::MarkRecommendationFailedRequest const&
          request) override;

  StatusOr<google::cloud::recommender::v1::RecommenderConfig>
  GetRecommenderConfig(
      grpc::ClientContext& client_context,
      google::cloud::recommender::v1::GetRecommenderConfigRequest const&
          request) override;

  StatusOr<google::cloud::recommender::v1::RecommenderConfig>
  UpdateRecommenderConfig(
      grpc::ClientContext& client_context,
      google::cloud::recommender::v1::UpdateRecommenderConfigRequest const&
          request) override;

  StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
  GetInsightTypeConfig(
      grpc::ClientContext& client_context,
      google::cloud::recommender::v1::GetInsightTypeConfigRequest const&
          request) override;

  StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
  UpdateInsightTypeConfig(
      grpc::ClientContext& client_context,
      google::cloud::recommender::v1::UpdateInsightTypeConfigRequest const&
          request) override;

 private:
  std::unique_ptr<google::cloud::recommender::v1::Recommender::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recommender_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECOMMENDER_V1_INTERNAL_RECOMMENDER_STUB_H
