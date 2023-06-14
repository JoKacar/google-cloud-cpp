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
// source: google/monitoring/v3/notification_service.proto

#include "google/cloud/monitoring/v3/internal/notification_channel_option_defaults.h"
#include "google/cloud/monitoring/v3/notification_channel_connection.h"
#include "google/cloud/monitoring/v3/notification_channel_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options NotificationChannelServiceDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options),
      "GOOGLE_CLOUD_CPP_NOTIFICATION_CHANNEL_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_NOTIFICATION_CHANNEL_SERVICE_AUTHORITY",
      "monitoring.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options
           .has<monitoring_v3::NotificationChannelServiceRetryPolicyOption>()) {
    options.set<monitoring_v3::NotificationChannelServiceRetryPolicyOption>(
        monitoring_v3::NotificationChannelServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<
          monitoring_v3::NotificationChannelServiceBackoffPolicyOption>()) {
    options.set<monitoring_v3::NotificationChannelServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<
          monitoring_v3::
              NotificationChannelServiceConnectionIdempotencyPolicyOption>()) {
    options.set<
        monitoring_v3::
            NotificationChannelServiceConnectionIdempotencyPolicyOption>(
        monitoring_v3::
            MakeDefaultNotificationChannelServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
