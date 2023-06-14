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

#include "google/cloud/compute/reservations/v1/internal/reservations_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_reservations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ReservationsTracingConnection::ReservationsTracingConnection(
    std::shared_ptr<compute_reservations_v1::ReservationsConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::cpp::compute::v1::ReservationAggregatedList>
ReservationsTracingConnection::AggregatedListReservations(
    google::cloud::cpp::compute::reservations::v1::
        AggregatedListReservationsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::"
      "AggregatedListReservations");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AggregatedListReservations(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsTracingConnection::DeleteReservations(
    google::cloud::cpp::compute::reservations::v1::
        DeleteReservationsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::DeleteReservations");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteReservations(request));
}

StatusOr<google::cloud::cpp::compute::v1::Reservation>
ReservationsTracingConnection::GetReservations(
    google::cloud::cpp::compute::reservations::v1::GetReservationsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::GetReservations");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetReservations(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::reservations::v1::GetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsTracingConnection::InsertReservations(
    google::cloud::cpp::compute::reservations::v1::
        InsertReservationsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::InsertReservations");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertReservations(request));
}

StreamRange<google::cloud::cpp::compute::v1::Reservation>
ReservationsTracingConnection::ListReservations(
    google::cloud::cpp::compute::reservations::v1::ListReservationsRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::ListReservations");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListReservations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::Reservation>(std::move(span),
                                                    std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsTracingConnection::Resize(
    google::cloud::cpp::compute::reservations::v1::ResizeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::Resize");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->Resize(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::reservations::v1::SetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ReservationsTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::reservations::v1::
        TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsTracingConnection::UpdateReservations(
    google::cloud::cpp::compute::reservations::v1::
        UpdateReservationsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_reservations_v1::ReservationsConnection::UpdateReservations");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateReservations(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_reservations_v1::ReservationsConnection>
MakeReservationsTracingConnection(
    std::shared_ptr<compute_reservations_v1::ReservationsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ReservationsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_reservations_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
