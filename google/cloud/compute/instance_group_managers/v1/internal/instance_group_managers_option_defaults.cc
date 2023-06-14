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
// source:
// google/cloud/compute/instance_group_managers/v1/instance_group_managers.proto

#include "google/cloud/compute/instance_group_managers/v1/internal/instance_group_managers_option_defaults.h"
#include "google/cloud/compute/instance_group_managers/v1/instance_group_managers_connection.h"
#include "google/cloud/compute/instance_group_managers/v1/instance_group_managers_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_instance_group_managers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options InstanceGroupManagersDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_INSTANCE_GROUP_MANAGERS_ENDPOINT",
      "", "GOOGLE_CLOUD_CPP_INSTANCE_GROUP_MANAGERS_AUTHORITY",
      "compute.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<compute_instance_group_managers_v1::
                       InstanceGroupManagersRetryPolicyOption>()) {
    options.set<compute_instance_group_managers_v1::
                    InstanceGroupManagersRetryPolicyOption>(
        compute_instance_group_managers_v1::
            InstanceGroupManagersLimitedTimeRetryPolicy(
                std::chrono::minutes(30))
                .clone());
  }
  if (!options.has<compute_instance_group_managers_v1::
                       InstanceGroupManagersBackoffPolicyOption>()) {
    options.set<compute_instance_group_managers_v1::
                    InstanceGroupManagersBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<compute_instance_group_managers_v1::
                       InstanceGroupManagersPollingPolicyOption>()) {
    options.set<compute_instance_group_managers_v1::
                    InstanceGroupManagersPollingPolicyOption>(
        GenericPollingPolicy<
            compute_instance_group_managers_v1::
                InstanceGroupManagersRetryPolicyOption::Type,
            compute_instance_group_managers_v1::
                InstanceGroupManagersBackoffPolicyOption::Type>(
            options
                .get<compute_instance_group_managers_v1::
                         InstanceGroupManagersRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options
           .has<compute_instance_group_managers_v1::
                    InstanceGroupManagersConnectionIdempotencyPolicyOption>()) {
    options.set<compute_instance_group_managers_v1::
                    InstanceGroupManagersConnectionIdempotencyPolicyOption>(
        compute_instance_group_managers_v1::
            MakeDefaultInstanceGroupManagersConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_group_managers_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
