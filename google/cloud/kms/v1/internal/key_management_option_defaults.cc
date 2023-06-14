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
// source: google/cloud/kms/v1/service.proto

#include "google/cloud/kms/v1/internal/key_management_option_defaults.h"
#include "google/cloud/kms/v1/key_management_connection.h"
#include "google/cloud/kms/v1/key_management_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace kms_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options KeyManagementServiceDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_KEY_MANAGEMENT_SERVICE_ENDPOINT",
      "", "GOOGLE_CLOUD_CPP_KEY_MANAGEMENT_SERVICE_AUTHORITY",
      "cloudkms.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<kms_v1::KeyManagementServiceRetryPolicyOption>()) {
    options.set<kms_v1::KeyManagementServiceRetryPolicyOption>(
        kms_v1::KeyManagementServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<kms_v1::KeyManagementServiceBackoffPolicyOption>()) {
    options.set<kms_v1::KeyManagementServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<
          kms_v1::KeyManagementServiceConnectionIdempotencyPolicyOption>()) {
    options.set<kms_v1::KeyManagementServiceConnectionIdempotencyPolicyOption>(
        kms_v1::MakeDefaultKeyManagementServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
