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
// source: google/cloud/bigquery/reservation/v1/reservation.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_RESERVATION_V1_MOCKS_MOCK_RESERVATION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_RESERVATION_V1_MOCKS_MOCK_RESERVATION_CONNECTION_H

#include "google/cloud/bigquery/reservation/v1/reservation_connection.h"
#include <gmock/gmock.h>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace bigquery_reservation_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ReservationServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ReservationServiceClient`. To do
 * so, construct an object of type `ReservationServiceClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockReservationServiceConnection
    : public bigquery_reservation_v1::ReservationServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::reservation::v1::Reservation>,
      CreateReservation,
      (google::cloud::bigquery::reservation::v1::CreateReservationRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::bigquery::reservation::v1::Reservation>,
      ListReservations,
      (google::cloud::bigquery::reservation::v1::ListReservationsRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::reservation::v1::Reservation>,
      GetReservation,
      (google::cloud::bigquery::reservation::v1::GetReservationRequest const&
           request),
      (override));

  MOCK_METHOD(
      Status, DeleteReservation,
      (google::cloud::bigquery::reservation::v1::DeleteReservationRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::reservation::v1::Reservation>,
      UpdateReservation,
      (google::cloud::bigquery::reservation::v1::UpdateReservationRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>,
      CreateCapacityCommitment,
      (google::cloud::bigquery::reservation::v1::
           CreateCapacityCommitmentRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::bigquery::reservation::v1::CapacityCommitment>,
      ListCapacityCommitments,
      (google::cloud::bigquery::reservation::v1::ListCapacityCommitmentsRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>,
      GetCapacityCommitment,
      (google::cloud::bigquery::reservation::v1::
           GetCapacityCommitmentRequest const& request),
      (override));

  MOCK_METHOD(Status, DeleteCapacityCommitment,
              (google::cloud::bigquery::reservation::v1::
                   DeleteCapacityCommitmentRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>,
      UpdateCapacityCommitment,
      (google::cloud::bigquery::reservation::v1::
           UpdateCapacityCommitmentRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::bigquery::reservation::v1::
                           SplitCapacityCommitmentResponse>,
              SplitCapacityCommitment,
              (google::cloud::bigquery::reservation::v1::
                   SplitCapacityCommitmentRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>,
      MergeCapacityCommitments,
      (google::cloud::bigquery::reservation::v1::
           MergeCapacityCommitmentsRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::reservation::v1::Assignment>,
      CreateAssignment,
      (google::cloud::bigquery::reservation::v1::CreateAssignmentRequest const&
           request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::bigquery::reservation::v1::Assignment>,
              ListAssignments,
              (google::cloud::bigquery::reservation::v1::ListAssignmentsRequest
                   request),
              (override));

  MOCK_METHOD(
      Status, DeleteAssignment,
      (google::cloud::bigquery::reservation::v1::DeleteAssignmentRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::bigquery::reservation::v1::Assignment>,
      SearchAssignments,
      (google::cloud::bigquery::reservation::v1::SearchAssignmentsRequest
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::bigquery::reservation::v1::Assignment>,
      SearchAllAssignments,
      (google::cloud::bigquery::reservation::v1::SearchAllAssignmentsRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::reservation::v1::Assignment>,
      MoveAssignment,
      (google::cloud::bigquery::reservation::v1::MoveAssignmentRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::reservation::v1::Assignment>,
      UpdateAssignment,
      (google::cloud::bigquery::reservation::v1::UpdateAssignmentRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>,
      GetBiReservation,
      (google::cloud::bigquery::reservation::v1::GetBiReservationRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>,
              UpdateBiReservation,
              (google::cloud::bigquery::reservation::v1::
                   UpdateBiReservationRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_reservation_v1_mocks
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_RESERVATION_V1_MOCKS_MOCK_RESERVATION_CONNECTION_H
