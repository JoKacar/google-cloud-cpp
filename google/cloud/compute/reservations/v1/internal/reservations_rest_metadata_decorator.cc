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
// source: google/cloud/compute/reservations/v1/reservations.proto

#include "google/cloud/compute/reservations/v1/internal/reservations_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_reservations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ReservationsRestMetadata::ReservationsRestMetadata(
    std::shared_ptr<ReservationsRestStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::cpp::compute::v1::ReservationAggregatedList>
ReservationsRestMetadata::AggregatedListReservations(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::reservations::v1::
        AggregatedListReservationsRequest const& request) {
  SetMetadata(rest_context);
  return child_->AggregatedListReservations(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsRestMetadata::AsyncDeleteReservations(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::reservations::v1::
        DeleteReservationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteReservations(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::Reservation>
ReservationsRestMetadata::GetReservations(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::reservations::v1::GetReservationsRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetReservations(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::reservations::v1::GetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetIamPolicy(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsRestMetadata::AsyncInsertReservations(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::reservations::v1::
        InsertReservationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertReservations(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::ReservationList>
ReservationsRestMetadata::ListReservations(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::reservations::v1::
        ListReservationsRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListReservations(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsRestMetadata::AsyncResize(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::reservations::v1::ResizeRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncResize(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::reservations::v1::SetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->SetIamPolicy(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ReservationsRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::reservations::v1::
        TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context);
  return child_->TestIamPermissions(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsRestMetadata::AsyncUpdateReservations(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::reservations::v1::
        UpdateReservationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncUpdateReservations(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        GetZoneOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> ReservationsRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteZoneOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void ReservationsRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context,
    std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
                  absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_reservations_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
