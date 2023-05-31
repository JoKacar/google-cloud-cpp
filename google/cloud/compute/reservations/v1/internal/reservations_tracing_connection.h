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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESERVATIONS_V1_INTERNAL_RESERVATIONS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESERVATIONS_V1_INTERNAL_RESERVATIONS_TRACING_CONNECTION_H

#include "google/cloud/compute/reservations/v1/reservations_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_reservations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ReservationsTracingConnection
    : public compute_reservations_v1::ReservationsConnection {
 public:
  ~ReservationsTracingConnection() override = default;

  explicit ReservationsTracingConnection(
    std::shared_ptr<compute_reservations_v1::ReservationsConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::compute::v1::ReservationAggregatedList>
  AggregatedListReservations(google::cloud::cpp::compute::reservations::v1::AggregatedListReservationsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteReservations(google::cloud::cpp::compute::reservations::v1::DeleteReservationsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Reservation>
  GetReservations(google::cloud::cpp::compute::reservations::v1::GetReservationsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy>
  GetIamPolicy(google::cloud::cpp::compute::reservations::v1::GetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertReservations(google::cloud::cpp::compute::reservations::v1::InsertReservationsRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::Reservation>
  ListReservations(google::cloud::cpp::compute::reservations::v1::ListReservationsRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  Resize(google::cloud::cpp::compute::reservations::v1::ResizeRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy>
  SetIamPolicy(google::cloud::cpp::compute::reservations::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::reservations::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateReservations(google::cloud::cpp::compute::reservations::v1::UpdateReservationsRequest const& request) override;

 private:
  std::shared_ptr<compute_reservations_v1::ReservationsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_reservations_v1::ReservationsConnection>
MakeReservationsTracingConnection(
    std::shared_ptr<compute_reservations_v1::ReservationsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_reservations_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESERVATIONS_V1_INTERNAL_RESERVATIONS_TRACING_CONNECTION_H
