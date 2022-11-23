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
// source: google/cloud/compute/resource_policies/v1/resource_policies.proto

#include "google/cloud/compute/resource_policies/v1/internal/resource_policies_option_defaults.h"
#include "google/cloud/compute/resource_policies/v1/resource_policies_connection.h"
#include "google/cloud/compute/resource_policies/v1/resource_policies_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_resource_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ResourcePoliciesDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_RESOURCE_POLICIES_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_RESOURCE_POLICIES_AUTHORITY", "compute.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<
          compute_resource_policies_v1::ResourcePoliciesRetryPolicyOption>()) {
    options.set<
        compute_resource_policies_v1::ResourcePoliciesRetryPolicyOption>(
        compute_resource_policies_v1::ResourcePoliciesLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<compute_resource_policies_v1::
                       ResourcePoliciesBackoffPolicyOption>()) {
    options
        .set<compute_resource_policies_v1::ResourcePoliciesBackoffPolicyOption>(
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone());
  }
  if (!options.has<compute_resource_policies_v1::
                       ResourcePoliciesPollingPolicyOption>()) {
    options
        .set<compute_resource_policies_v1::ResourcePoliciesPollingPolicyOption>(
            GenericPollingPolicy<compute_resource_policies_v1::
                                     ResourcePoliciesRetryPolicyOption::Type,
                                 compute_resource_policies_v1::
                                     ResourcePoliciesBackoffPolicyOption::Type>(
                options
                    .get<compute_resource_policies_v1::
                             ResourcePoliciesRetryPolicyOption>()
                    ->clone(),
                options
                    .get<compute_resource_policies_v1::
                             ResourcePoliciesBackoffPolicyOption>()
                    ->clone())
                .clone());
  }
  if (!options.has<compute_resource_policies_v1::
                       ResourcePoliciesConnectionIdempotencyPolicyOption>()) {
    options.set<compute_resource_policies_v1::
                    ResourcePoliciesConnectionIdempotencyPolicyOption>(
        compute_resource_policies_v1::
            MakeDefaultResourcePoliciesConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_resource_policies_v1_internal
}  // namespace cloud
}  // namespace google
