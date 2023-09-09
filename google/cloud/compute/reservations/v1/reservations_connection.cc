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

#include "google/cloud/compute/reservations/v1/reservations_connection.h"
#include "google/cloud/compute/reservations/v1/internal/reservations_option_defaults.h"
#include "google/cloud/compute/reservations/v1/internal/reservations_tracing_connection.h"
#include "google/cloud/compute/reservations/v1/reservations_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_reservations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ReservationsConnection::~ReservationsConnection() = default;

StatusOr<google::cloud::cpp::compute::v1::ReservationAggregatedList>
ReservationsConnection::AggregatedListReservations(
    google::cloud::cpp::compute::reservations::v1::
        AggregatedListReservationsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsConnection::DeleteReservation(
    google::cloud::cpp::compute::reservations::v1::
        DeleteReservationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Reservation>
ReservationsConnection::GetReservation(
    google::cloud::cpp::compute::reservations::v1::
        GetReservationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsConnection::GetIamPolicy(
    google::cloud::cpp::compute::reservations::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsConnection::InsertReservation(
    google::cloud::cpp::compute::reservations::v1::
        InsertReservationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::Reservation>
ReservationsConnection::ListReservations(
    google::cloud::cpp::compute::reservations::v1::
        ListReservationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::Reservation>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsConnection::Resize(
    google::cloud::cpp::compute::reservations::v1::ResizeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsConnection::SetIamPolicy(
    google::cloud::cpp::compute::reservations::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ReservationsConnection::TestIamPermissions(
    google::cloud::cpp::compute::reservations::v1::
        TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsConnection::UpdateReservation(
    google::cloud::cpp::compute::reservations::v1::
        UpdateReservationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_reservations_v1
}  // namespace cloud
}  // namespace google
