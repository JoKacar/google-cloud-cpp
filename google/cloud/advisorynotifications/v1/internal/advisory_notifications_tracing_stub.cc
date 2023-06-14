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

#include "google/cloud/advisorynotifications/v1/internal/advisory_notifications_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace advisorynotifications_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AdvisoryNotificationsServiceTracingStub::
    AdvisoryNotificationsServiceTracingStub(
        std::shared_ptr<AdvisoryNotificationsServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::advisorynotifications::v1::ListNotificationsResponse>
AdvisoryNotificationsServiceTracingStub::ListNotifications(
    grpc::ClientContext& context,
    google::cloud::advisorynotifications::v1::ListNotificationsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.advisorynotifications.v1.AdvisoryNotificationsService",
      "ListNotifications");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListNotifications(context, request));
}

StatusOr<google::cloud::advisorynotifications::v1::Notification>
AdvisoryNotificationsServiceTracingStub::GetNotification(
    grpc::ClientContext& context,
    google::cloud::advisorynotifications::v1::GetNotificationRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.advisorynotifications.v1.AdvisoryNotificationsService",
      "GetNotification");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetNotification(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<AdvisoryNotificationsServiceStub>
MakeAdvisoryNotificationsServiceTracingStub(
    std::shared_ptr<AdvisoryNotificationsServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<AdvisoryNotificationsServiceTracingStub>(
      std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace advisorynotifications_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
