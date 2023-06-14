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
// source: google/cloud/compute/machine_types/v1/machine_types.proto

#include "google/cloud/compute/machine_types/v1/internal/machine_types_option_defaults.h"
#include "google/cloud/compute/machine_types/v1/machine_types_connection.h"
#include "google/cloud/compute/machine_types/v1/machine_types_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_machine_types_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options MachineTypesDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_MACHINE_TYPES_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_MACHINE_TYPES_AUTHORITY", "compute.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<compute_machine_types_v1::MachineTypesRetryPolicyOption>()) {
    options.set<compute_machine_types_v1::MachineTypesRetryPolicyOption>(
        compute_machine_types_v1::MachineTypesLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options
           .has<compute_machine_types_v1::MachineTypesBackoffPolicyOption>()) {
    options.set<compute_machine_types_v1::MachineTypesBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<compute_machine_types_v1::
                       MachineTypesConnectionIdempotencyPolicyOption>()) {
    options.set<compute_machine_types_v1::
                    MachineTypesConnectionIdempotencyPolicyOption>(
        compute_machine_types_v1::
            MakeDefaultMachineTypesConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_machine_types_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
