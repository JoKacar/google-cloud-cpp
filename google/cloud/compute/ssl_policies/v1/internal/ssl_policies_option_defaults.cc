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
// source: google/cloud/compute/ssl_policies/v1/ssl_policies.proto

#include "google/cloud/compute/ssl_policies/v1/internal/ssl_policies_option_defaults.h"
#include "google/cloud/compute/ssl_policies/v1/ssl_policies_connection.h"
#include "google/cloud/compute/ssl_policies/v1/ssl_policies_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_ssl_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options SslPoliciesDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_SSL_POLICIES_ENDPOINT",
      "", "GOOGLE_CLOUD_CPP_SSL_POLICIES_AUTHORITY",
      "compute.googleapis.com");
  options = google::cloud::internal::PopulateGrpcOptions(
      std::move(options), "");
  if (!options.has<compute_ssl_policies_v1::SslPoliciesRetryPolicyOption>()) {
    options.set<compute_ssl_policies_v1::SslPoliciesRetryPolicyOption>(
        compute_ssl_policies_v1::SslPoliciesLimitedTimeRetryPolicy(
            std::chrono::minutes(30)).clone());
  }
  if (!options.has<compute_ssl_policies_v1::SslPoliciesBackoffPolicyOption>()) {
    options.set<compute_ssl_policies_v1::SslPoliciesBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling).clone());
  }
  if (!options.has<compute_ssl_policies_v1::SslPoliciesPollingPolicyOption>()) {
    options.set<compute_ssl_policies_v1::SslPoliciesPollingPolicyOption>(
        GenericPollingPolicy<
            compute_ssl_policies_v1::SslPoliciesRetryPolicyOption::Type,
            compute_ssl_policies_v1::SslPoliciesBackoffPolicyOption::Type>(
            options.get<compute_ssl_policies_v1::SslPoliciesRetryPolicyOption>()->clone(),
            options.get<compute_ssl_policies_v1::SslPoliciesBackoffPolicyOption>()->clone())
            .clone());
  }
  if (!options.has<compute_ssl_policies_v1::SslPoliciesConnectionIdempotencyPolicyOption>()) {
    options.set<compute_ssl_policies_v1::SslPoliciesConnectionIdempotencyPolicyOption>(
        compute_ssl_policies_v1::MakeDefaultSslPoliciesConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_ssl_policies_v1_internal
}  // namespace cloud
}  // namespace google
