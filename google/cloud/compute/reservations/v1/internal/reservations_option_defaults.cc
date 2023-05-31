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

#include "google/cloud/compute/reservations/v1/internal/reservations_option_defaults.h"
#include "google/cloud/compute/reservations/v1/reservations_connection.h"
#include "google/cloud/compute/reservations/v1/reservations_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_reservations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ReservationsDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_RESERVATIONS_ENDPOINT",
      "", "GOOGLE_CLOUD_CPP_RESERVATIONS_AUTHORITY",
      "compute.googleapis.com");
  options = google::cloud::internal::PopulateGrpcOptions(
      std::move(options), "");
  if (!options.has<compute_reservations_v1::ReservationsRetryPolicyOption>()) {
    options.set<compute_reservations_v1::ReservationsRetryPolicyOption>(
        compute_reservations_v1::ReservationsLimitedTimeRetryPolicy(
            std::chrono::minutes(30)).clone());
  }
  if (!options.has<compute_reservations_v1::ReservationsBackoffPolicyOption>()) {
    options.set<compute_reservations_v1::ReservationsBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling).clone());
  }
  if (!options.has<compute_reservations_v1::ReservationsPollingPolicyOption>()) {
    options.set<compute_reservations_v1::ReservationsPollingPolicyOption>(
        GenericPollingPolicy<
            compute_reservations_v1::ReservationsRetryPolicyOption::Type,
            compute_reservations_v1::ReservationsBackoffPolicyOption::Type>(
            options.get<compute_reservations_v1::ReservationsRetryPolicyOption>()->clone(),
            options.get<compute_reservations_v1::ReservationsBackoffPolicyOption>()->clone())
            .clone());
  }
  if (!options.has<compute_reservations_v1::ReservationsConnectionIdempotencyPolicyOption>()) {
    options.set<compute_reservations_v1::ReservationsConnectionIdempotencyPolicyOption>(
        compute_reservations_v1::MakeDefaultReservationsConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_reservations_v1_internal
}  // namespace cloud
}  // namespace google
