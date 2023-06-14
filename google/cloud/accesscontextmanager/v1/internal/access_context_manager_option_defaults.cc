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
// source: google/identity/accesscontextmanager/v1/access_context_manager.proto

#include "google/cloud/accesscontextmanager/v1/internal/access_context_manager_option_defaults.h"
#include "google/cloud/accesscontextmanager/v1/access_context_manager_connection.h"
#include "google/cloud/accesscontextmanager/v1/access_context_manager_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace accesscontextmanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options AccessContextManagerDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_ACCESS_CONTEXT_MANAGER_ENDPOINT",
      "", "GOOGLE_CLOUD_CPP_ACCESS_CONTEXT_MANAGER_AUTHORITY",
      "accesscontextmanager.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<
          accesscontextmanager_v1::AccessContextManagerRetryPolicyOption>()) {
    options.set<accesscontextmanager_v1::AccessContextManagerRetryPolicyOption>(
        accesscontextmanager_v1::AccessContextManagerLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<
          accesscontextmanager_v1::AccessContextManagerBackoffPolicyOption>()) {
    options
        .set<accesscontextmanager_v1::AccessContextManagerBackoffPolicyOption>(
            ExponentialBackoffPolicy(
                std::chrono::seconds(0), std::chrono::seconds(1),
                std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
                .clone());
  }
  if (!options.has<
          accesscontextmanager_v1::AccessContextManagerPollingPolicyOption>()) {
    options.set<
        accesscontextmanager_v1::AccessContextManagerPollingPolicyOption>(
        GenericPollingPolicy<accesscontextmanager_v1::
                                 AccessContextManagerRetryPolicyOption::Type,
                             accesscontextmanager_v1::
                                 AccessContextManagerBackoffPolicyOption::Type>(
            options
                .get<accesscontextmanager_v1::
                         AccessContextManagerRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options
           .has<accesscontextmanager_v1::
                    AccessContextManagerConnectionIdempotencyPolicyOption>()) {
    options.set<accesscontextmanager_v1::
                    AccessContextManagerConnectionIdempotencyPolicyOption>(
        accesscontextmanager_v1::
            MakeDefaultAccessContextManagerConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accesscontextmanager_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
