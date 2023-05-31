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
// source: google/cloud/compute/target_ssl_proxies/v1/target_ssl_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_SSL_PROXIES_V1_INTERNAL_TARGET_SSL_PROXIES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_SSL_PROXIES_V1_INTERNAL_TARGET_SSL_PROXIES_TRACING_CONNECTION_H

#include "google/cloud/compute/target_ssl_proxies/v1/target_ssl_proxies_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_ssl_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TargetSslProxiesTracingConnection
    : public compute_target_ssl_proxies_v1::TargetSslProxiesConnection {
 public:
  ~TargetSslProxiesTracingConnection() override = default;

  explicit TargetSslProxiesTracingConnection(
    std::shared_ptr<compute_target_ssl_proxies_v1::TargetSslProxiesConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteTargetSslProxies(google::cloud::cpp::compute::target_ssl_proxies::v1::DeleteTargetSslProxiesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetSslProxy>
  GetTargetSslProxies(google::cloud::cpp::compute::target_ssl_proxies::v1::GetTargetSslProxiesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertTargetSslProxies(google::cloud::cpp::compute::target_ssl_proxies::v1::InsertTargetSslProxiesRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::TargetSslProxy>
  ListTargetSslProxies(google::cloud::cpp::compute::target_ssl_proxies::v1::ListTargetSslProxiesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetBackendService(google::cloud::cpp::compute::target_ssl_proxies::v1::SetBackendServiceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetCertificateMap(google::cloud::cpp::compute::target_ssl_proxies::v1::SetCertificateMapRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetProxyHeader(google::cloud::cpp::compute::target_ssl_proxies::v1::SetProxyHeaderRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSslCertificates(google::cloud::cpp::compute::target_ssl_proxies::v1::SetSslCertificatesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSslPolicy(google::cloud::cpp::compute::target_ssl_proxies::v1::SetSslPolicyRequest const& request) override;

 private:
  std::shared_ptr<compute_target_ssl_proxies_v1::TargetSslProxiesConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_target_ssl_proxies_v1::TargetSslProxiesConnection>
MakeTargetSslProxiesTracingConnection(
    std::shared_ptr<compute_target_ssl_proxies_v1::TargetSslProxiesConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_ssl_proxies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_SSL_PROXIES_V1_INTERNAL_TARGET_SSL_PROXIES_TRACING_CONNECTION_H
