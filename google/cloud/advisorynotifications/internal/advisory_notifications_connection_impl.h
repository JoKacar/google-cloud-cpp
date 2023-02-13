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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ADVISORYNOTIFICATIONS_INTERNAL_ADVISORY_NOTIFICATIONS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ADVISORYNOTIFICATIONS_INTERNAL_ADVISORY_NOTIFICATIONS_CONNECTION_IMPL_H

#include "google/cloud/advisorynotifications/advisory_notifications_connection.h"
#include "google/cloud/advisorynotifications/advisory_notifications_connection_idempotency_policy.h"
#include "google/cloud/advisorynotifications/advisory_notifications_options.h"
#include "google/cloud/advisorynotifications/internal/advisory_notifications_retry_traits.h"
#include "google/cloud/advisorynotifications/internal/advisory_notifications_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace advisorynotifications_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AdvisoryNotificationsServiceConnectionImpl
    : public advisorynotifications::AdvisoryNotificationsServiceConnection {
 public:
  ~AdvisoryNotificationsServiceConnectionImpl() override = default;

  AdvisoryNotificationsServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          advisorynotifications_internal::AdvisoryNotificationsServiceStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::advisorynotifications::v1::Notification>
  ListNotifications(
      google::cloud::advisorynotifications::v1::ListNotificationsRequest
          request) override;

  StatusOr<google::cloud::advisorynotifications::v1::Notification>
  GetNotification(
      google::cloud::advisorynotifications::v1::GetNotificationRequest const&
          request) override;

 private:
  std::unique_ptr<
      advisorynotifications::AdvisoryNotificationsServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<advisorynotifications::
                        AdvisoryNotificationsServiceRetryPolicyOption>()) {
      return options
          .get<advisorynotifications::
                   AdvisoryNotificationsServiceRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<advisorynotifications::
                 AdvisoryNotificationsServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<advisorynotifications::
                        AdvisoryNotificationsServiceBackoffPolicyOption>()) {
      return options
          .get<advisorynotifications::
                   AdvisoryNotificationsServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<advisorynotifications::
                 AdvisoryNotificationsServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<advisorynotifications::
                      AdvisoryNotificationsServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            advisorynotifications::
                AdvisoryNotificationsServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<
              advisorynotifications::
                  AdvisoryNotificationsServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<
            advisorynotifications::
                AdvisoryNotificationsServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<
      advisorynotifications_internal::AdvisoryNotificationsServiceStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace advisorynotifications_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ADVISORYNOTIFICATIONS_INTERNAL_ADVISORY_NOTIFICATIONS_CONNECTION_IMPL_H
