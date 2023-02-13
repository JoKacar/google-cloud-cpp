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

#include "google/cloud/advisorynotifications/advisory_notifications_connection.h"
#include "google/cloud/advisorynotifications/advisory_notifications_options.h"
#include "google/cloud/advisorynotifications/internal/advisory_notifications_connection_impl.h"
#include "google/cloud/advisorynotifications/internal/advisory_notifications_option_defaults.h"
#include "google/cloud/advisorynotifications/internal/advisory_notifications_stub_factory.h"
#include "google/cloud/advisorynotifications/internal/advisory_notifications_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace advisorynotifications {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AdvisoryNotificationsServiceConnection::
    ~AdvisoryNotificationsServiceConnection() = default;

StreamRange<google::cloud::advisorynotifications::v1::Notification>
AdvisoryNotificationsServiceConnection::ListNotifications(
    google::cloud::advisorynotifications::v1::
        ListNotificationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::advisorynotifications::v1::Notification>>();
}

StatusOr<google::cloud::advisorynotifications::v1::Notification>
AdvisoryNotificationsServiceConnection::GetNotification(
    google::cloud::advisorynotifications::v1::GetNotificationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<AdvisoryNotificationsServiceConnection>
MakeAdvisoryNotificationsServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 AdvisoryNotificationsServicePolicyOptionList>(
      options, __func__);
  options = advisorynotifications_internal::
      AdvisoryNotificationsServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = advisorynotifications_internal::
      CreateDefaultAdvisoryNotificationsServiceStub(background->cq(), options);
  return advisorynotifications_internal::
      MakeAdvisoryNotificationsServiceTracingConnection(
          std::make_shared<advisorynotifications_internal::
                               AdvisoryNotificationsServiceConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace advisorynotifications
}  // namespace cloud
}  // namespace google
