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
// google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_EDGE_SECURITY_SERVICES_V1_NETWORK_EDGE_SECURITY_SERVICES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_EDGE_SECURITY_SERVICES_V1_NETWORK_EDGE_SECURITY_SERVICES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_edge_security_services_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworkEdgeSecurityServicesConnectionIdempotencyPolicy {
 public:
  virtual ~NetworkEdgeSecurityServicesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<
      NetworkEdgeSecurityServicesConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency AggregatedListNetworkEdgeSecurityServices(
      google::cloud::cpp::compute::network_edge_security_services::v1::
          AggregatedListNetworkEdgeSecurityServicesRequest const& request);

  virtual google::cloud::Idempotency DeleteNetworkEdgeSecurityService(
      google::cloud::cpp::compute::network_edge_security_services::v1::
          DeleteNetworkEdgeSecurityServiceRequest const& request);

  virtual google::cloud::Idempotency GetNetworkEdgeSecurityService(
      google::cloud::cpp::compute::network_edge_security_services::v1::
          GetNetworkEdgeSecurityServiceRequest const& request);

  virtual google::cloud::Idempotency InsertNetworkEdgeSecurityService(
      google::cloud::cpp::compute::network_edge_security_services::v1::
          InsertNetworkEdgeSecurityServiceRequest const& request);

  virtual google::cloud::Idempotency PatchNetworkEdgeSecurityService(
      google::cloud::cpp::compute::network_edge_security_services::v1::
          PatchNetworkEdgeSecurityServiceRequest const& request);
};

std::unique_ptr<NetworkEdgeSecurityServicesConnectionIdempotencyPolicy>
MakeDefaultNetworkEdgeSecurityServicesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_edge_security_services_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_EDGE_SECURITY_SERVICES_V1_NETWORK_EDGE_SECURITY_SERVICES_CONNECTION_IDEMPOTENCY_POLICY_H
