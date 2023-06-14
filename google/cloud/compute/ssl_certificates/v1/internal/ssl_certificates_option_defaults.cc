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
// source: google/cloud/compute/ssl_certificates/v1/ssl_certificates.proto

#include "google/cloud/compute/ssl_certificates/v1/internal/ssl_certificates_option_defaults.h"
#include "google/cloud/compute/ssl_certificates/v1/ssl_certificates_connection.h"
#include "google/cloud/compute/ssl_certificates/v1/ssl_certificates_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_ssl_certificates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options SslCertificatesDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_SSL_CERTIFICATES_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_SSL_CERTIFICATES_AUTHORITY", "compute.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<
          compute_ssl_certificates_v1::SslCertificatesRetryPolicyOption>()) {
    options.set<compute_ssl_certificates_v1::SslCertificatesRetryPolicyOption>(
        compute_ssl_certificates_v1::SslCertificatesLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<
          compute_ssl_certificates_v1::SslCertificatesBackoffPolicyOption>()) {
    options
        .set<compute_ssl_certificates_v1::SslCertificatesBackoffPolicyOption>(
            ExponentialBackoffPolicy(
                std::chrono::seconds(0), std::chrono::seconds(1),
                std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
                .clone());
  }
  if (!options.has<
          compute_ssl_certificates_v1::SslCertificatesPollingPolicyOption>()) {
    options.set<
        compute_ssl_certificates_v1::SslCertificatesPollingPolicyOption>(
        GenericPollingPolicy<
            compute_ssl_certificates_v1::SslCertificatesRetryPolicyOption::Type,
            compute_ssl_certificates_v1::SslCertificatesBackoffPolicyOption::
                Type>(
            options
                .get<compute_ssl_certificates_v1::
                         SslCertificatesRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<compute_ssl_certificates_v1::
                       SslCertificatesConnectionIdempotencyPolicyOption>()) {
    options.set<compute_ssl_certificates_v1::
                    SslCertificatesConnectionIdempotencyPolicyOption>(
        compute_ssl_certificates_v1::
            MakeDefaultSslCertificatesConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_ssl_certificates_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
