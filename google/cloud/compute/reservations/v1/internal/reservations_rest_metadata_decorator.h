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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESERVATIONS_V1_INTERNAL_RESERVATIONS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESERVATIONS_V1_INTERNAL_RESERVATIONS_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/reservations/v1/internal/reservations_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/reservations/v1/reservations.pb.h>
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_reservations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ReservationsRestMetadata : public ReservationsRestStub {
 public:
  ~ReservationsRestMetadata() override = default;
  explicit ReservationsRestMetadata(std::shared_ptr<ReservationsRestStub> child);

  StatusOr<google::cloud::cpp::compute::v1::ReservationAggregatedList> AggregatedListReservations(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::reservations::v1::AggregatedListReservationsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDeleteReservations(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::reservations::v1::DeleteReservationsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Reservation> GetReservations(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::reservations::v1::GetReservationsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::reservations::v1::GetIamPolicyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncInsertReservations(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::reservations::v1::InsertReservationsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::ReservationList> ListReservations(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::reservations::v1::ListReservationsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncResize(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::reservations::v1::ResizeRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::reservations::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse> TestIamPermissions(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::reservations::v1::TestIamPermissionsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncUpdateReservations(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::reservations::v1::UpdateReservationsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::zone_operations::v1::GetZoneOperationsRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::zone_operations::v1::DeleteZoneOperationsRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<ReservationsRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_reservations_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESERVATIONS_V1_INTERNAL_RESERVATIONS_REST_METADATA_DECORATOR_H
