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
// source: google/cloud/compute/backend_services/v1/backend_services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_SERVICES_V1_BACKEND_SERVICES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_SERVICES_V1_BACKEND_SERVICES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/backend_services/v1/backend_services.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_backend_services_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BackendServicesConnectionIdempotencyPolicy {
 public:
  virtual ~BackendServicesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<BackendServicesConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency AddSignedUrlKey(
      google::cloud::cpp::compute::backend_services::v1::
          AddSignedUrlKeyRequest const& request);

  virtual google::cloud::Idempotency AggregatedListBackendServices(
      google::cloud::cpp::compute::backend_services::v1::
          AggregatedListBackendServicesRequest const& request);

  virtual google::cloud::Idempotency DeleteBackendServices(
      google::cloud::cpp::compute::backend_services::v1::
          DeleteBackendServicesRequest const& request);

  virtual google::cloud::Idempotency DeleteSignedUrlKey(
      google::cloud::cpp::compute::backend_services::v1::
          DeleteSignedUrlKeyRequest const& request);

  virtual google::cloud::Idempotency GetBackendServices(
      google::cloud::cpp::compute::backend_services::v1::
          GetBackendServicesRequest const& request);

  virtual google::cloud::Idempotency GetHealth(
      google::cloud::cpp::compute::backend_services::v1::GetHealthRequest const&
          request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::cloud::cpp::compute::backend_services::v1::
          GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency InsertBackendServices(
      google::cloud::cpp::compute::backend_services::v1::
          InsertBackendServicesRequest const& request);

  virtual google::cloud::Idempotency ListBackendServices(
      google::cloud::cpp::compute::backend_services::v1::
          ListBackendServicesRequest request);

  virtual google::cloud::Idempotency PatchBackendServices(
      google::cloud::cpp::compute::backend_services::v1::
          PatchBackendServicesRequest const& request);

  virtual google::cloud::Idempotency SetEdgeSecurityPolicy(
      google::cloud::cpp::compute::backend_services::v1::
          SetEdgeSecurityPolicyRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::cloud::cpp::compute::backend_services::v1::
          SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency SetSecurityPolicy(
      google::cloud::cpp::compute::backend_services::v1::
          SetSecurityPolicyRequest const& request);

  virtual google::cloud::Idempotency UpdateBackendServices(
      google::cloud::cpp::compute::backend_services::v1::
          UpdateBackendServicesRequest const& request);
};

std::unique_ptr<BackendServicesConnectionIdempotencyPolicy>
MakeDefaultBackendServicesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_backend_services_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_SERVICES_V1_BACKEND_SERVICES_CONNECTION_IDEMPOTENCY_POLICY_H
