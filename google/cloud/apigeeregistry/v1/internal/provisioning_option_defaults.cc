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
// source: google/cloud/apigeeregistry/v1/provisioning_service.proto

#include "google/cloud/apigeeregistry/v1/internal/provisioning_option_defaults.h"
#include "google/cloud/apigeeregistry/v1/provisioning_connection.h"
#include "google/cloud/apigeeregistry/v1/provisioning_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace apigeeregistry_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ProvisioningDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_APIGEE_REGISTRY_SERVICE_ENDPOINT",
      "", "GOOGLE_CLOUD_CPP_APIGEE_REGISTRY_SERVICE_AUTHORITY",
      "apigeeregistry.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<apigeeregistry_v1::ProvisioningRetryPolicyOption>()) {
    options.set<apigeeregistry_v1::ProvisioningRetryPolicyOption>(
        apigeeregistry_v1::ProvisioningLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<apigeeregistry_v1::ProvisioningBackoffPolicyOption>()) {
    options.set<apigeeregistry_v1::ProvisioningBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<apigeeregistry_v1::ProvisioningPollingPolicyOption>()) {
    options.set<apigeeregistry_v1::ProvisioningPollingPolicyOption>(
        GenericPollingPolicy<
            apigeeregistry_v1::ProvisioningRetryPolicyOption::Type,
            apigeeregistry_v1::ProvisioningBackoffPolicyOption::Type>(
            options.get<apigeeregistry_v1::ProvisioningRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          apigeeregistry_v1::ProvisioningConnectionIdempotencyPolicyOption>()) {
    options
        .set<apigeeregistry_v1::ProvisioningConnectionIdempotencyPolicyOption>(
            apigeeregistry_v1::
                MakeDefaultProvisioningConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigeeregistry_v1_internal
}  // namespace cloud
}  // namespace google
