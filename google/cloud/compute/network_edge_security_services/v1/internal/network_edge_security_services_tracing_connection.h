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
// source: google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_EDGE_SECURITY_SERVICES_V1_INTERNAL_NETWORK_EDGE_SECURITY_SERVICES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_EDGE_SECURITY_SERVICES_V1_INTERNAL_NETWORK_EDGE_SECURITY_SERVICES_TRACING_CONNECTION_H

#include "google/cloud/compute/network_edge_security_services/v1/network_edge_security_services_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_edge_security_services_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class NetworkEdgeSecurityServicesTracingConnection
    : public compute_network_edge_security_services_v1::NetworkEdgeSecurityServicesConnection {
 public:
  ~NetworkEdgeSecurityServicesTracingConnection() override = default;

  explicit NetworkEdgeSecurityServicesTracingConnection(
    std::shared_ptr<compute_network_edge_security_services_v1::NetworkEdgeSecurityServicesConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::compute::v1::NetworkEdgeSecurityServiceAggregatedList>
  AggregatedListNetworkEdgeSecurityServices(google::cloud::cpp::compute::network_edge_security_services::v1::AggregatedListNetworkEdgeSecurityServicesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNetworkEdgeSecurityServices(google::cloud::cpp::compute::network_edge_security_services::v1::DeleteNetworkEdgeSecurityServicesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworkEdgeSecurityService>
  GetNetworkEdgeSecurityServices(google::cloud::cpp::compute::network_edge_security_services::v1::GetNetworkEdgeSecurityServicesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNetworkEdgeSecurityServices(google::cloud::cpp::compute::network_edge_security_services::v1::InsertNetworkEdgeSecurityServicesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchNetworkEdgeSecurityServices(google::cloud::cpp::compute::network_edge_security_services::v1::PatchNetworkEdgeSecurityServicesRequest const& request) override;

 private:
  std::shared_ptr<compute_network_edge_security_services_v1::NetworkEdgeSecurityServicesConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_network_edge_security_services_v1::NetworkEdgeSecurityServicesConnection>
MakeNetworkEdgeSecurityServicesTracingConnection(
    std::shared_ptr<compute_network_edge_security_services_v1::NetworkEdgeSecurityServicesConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_edge_security_services_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_EDGE_SECURITY_SERVICES_V1_INTERNAL_NETWORK_EDGE_SECURITY_SERVICES_TRACING_CONNECTION_H
