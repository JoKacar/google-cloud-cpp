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
// source: google/cloud/advisorynotifications/v1/service.proto

#include "google/cloud/advisorynotifications/advisory_notifications_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace advisorynotifications {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AdvisoryNotificationsServiceClient::AdvisoryNotificationsServiceClient(
    std::shared_ptr<AdvisoryNotificationsServiceConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
AdvisoryNotificationsServiceClient::~AdvisoryNotificationsServiceClient() =
    default;

StreamRange<google::cloud::advisorynotifications::v1::Notification>
AdvisoryNotificationsServiceClient::ListNotifications(std::string const& parent,
                                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::advisorynotifications::v1::ListNotificationsRequest request;
  request.set_parent(parent);
  return connection_->ListNotifications(request);
}

StreamRange<google::cloud::advisorynotifications::v1::Notification>
AdvisoryNotificationsServiceClient::ListNotifications(
    google::cloud::advisorynotifications::v1::ListNotificationsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListNotifications(std::move(request));
}

StatusOr<google::cloud::advisorynotifications::v1::Notification>
AdvisoryNotificationsServiceClient::GetNotification(std::string const& name,
                                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::advisorynotifications::v1::GetNotificationRequest request;
  request.set_name(name);
  return connection_->GetNotification(request);
}

StatusOr<google::cloud::advisorynotifications::v1::Notification>
AdvisoryNotificationsServiceClient::GetNotification(
    google::cloud::advisorynotifications::v1::GetNotificationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetNotification(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace advisorynotifications
}  // namespace cloud
}  // namespace google
