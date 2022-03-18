// Copyright 2021 Google LLC
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
// source: google/cloud/pubsublite/v1/admin.proto

#include "google/cloud/pubsublite/internal/admin_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/pubsublite/v1/admin.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AdminServiceMetadata::AdminServiceMetadata(
    std::shared_ptr<AdminServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::pubsublite::v1::Topic>
AdminServiceMetadata::CreateTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::CreateTopicRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateTopic(context, request);
}

StatusOr<google::cloud::pubsublite::v1::Topic> AdminServiceMetadata::GetTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetTopicRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetTopic(context, request);
}

StatusOr<google::cloud::pubsublite::v1::TopicPartitions>
AdminServiceMetadata::GetTopicPartitions(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetTopicPartitionsRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetTopicPartitions(context, request);
}

StatusOr<google::cloud::pubsublite::v1::ListTopicsResponse>
AdminServiceMetadata::ListTopics(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListTopicsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListTopics(context, request);
}

StatusOr<google::cloud::pubsublite::v1::Topic>
AdminServiceMetadata::UpdateTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::UpdateTopicRequest const& request) {
  SetMetadata(context, "topic.name=" + request.topic().name());
  return child_->UpdateTopic(context, request);
}

Status AdminServiceMetadata::DeleteTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::DeleteTopicRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteTopic(context, request);
}

StatusOr<google::cloud::pubsublite::v1::ListTopicSubscriptionsResponse>
AdminServiceMetadata::ListTopicSubscriptions(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListTopicSubscriptionsRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->ListTopicSubscriptions(context, request);
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceMetadata::CreateSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::CreateSubscriptionRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateSubscription(context, request);
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceMetadata::GetSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetSubscriptionRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetSubscription(context, request);
}

StatusOr<google::cloud::pubsublite::v1::ListSubscriptionsResponse>
AdminServiceMetadata::ListSubscriptions(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListSubscriptionsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListSubscriptions(context, request);
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceMetadata::UpdateSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::UpdateSubscriptionRequest const& request) {
  SetMetadata(context, "subscription.name=" + request.subscription().name());
  return child_->UpdateSubscription(context, request);
}

Status AdminServiceMetadata::DeleteSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::DeleteSubscriptionRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteSubscription(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AdminServiceMetadata::AsyncSeekSubscription(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::pubsublite::v1::SeekSubscriptionRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncSeekSubscription(cq, std::move(context), request);
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceMetadata::CreateReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::CreateReservationRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateReservation(context, request);
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceMetadata::GetReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetReservationRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetReservation(context, request);
}

StatusOr<google::cloud::pubsublite::v1::ListReservationsResponse>
AdminServiceMetadata::ListReservations(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListReservationsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListReservations(context, request);
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceMetadata::UpdateReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::UpdateReservationRequest const& request) {
  SetMetadata(context, "reservation.name=" + request.reservation().name());
  return child_->UpdateReservation(context, request);
}

Status AdminServiceMetadata::DeleteReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::DeleteReservationRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteReservation(context, request);
}

StatusOr<google::cloud::pubsublite::v1::ListReservationTopicsResponse>
AdminServiceMetadata::ListReservationTopics(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListReservationTopicsRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->ListReservationTopics(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AdminServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> AdminServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void AdminServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void AdminServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google
