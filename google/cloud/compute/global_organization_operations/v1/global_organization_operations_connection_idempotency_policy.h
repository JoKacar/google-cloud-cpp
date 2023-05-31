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
// source: google/cloud/compute/global_organization_operations/v1/global_organization_operations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ORGANIZATION_OPERATIONS_V1_GLOBAL_ORGANIZATION_OPERATIONS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ORGANIZATION_OPERATIONS_V1_GLOBAL_ORGANIZATION_OPERATIONS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_organization_operations/v1/global_organization_operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_organization_operations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GlobalOrganizationOperationsConnectionIdempotencyPolicy {
 public:
  virtual ~GlobalOrganizationOperationsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<GlobalOrganizationOperationsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency
  DeleteGlobalOrganizationOperations(google::cloud::cpp::compute::global_organization_operations::v1::DeleteGlobalOrganizationOperationsRequest const& request);

  virtual google::cloud::Idempotency
  GetGlobalOrganizationOperations(google::cloud::cpp::compute::global_organization_operations::v1::GetGlobalOrganizationOperationsRequest const& request);

  virtual google::cloud::Idempotency
  ListGlobalOrganizationOperations(google::cloud::cpp::compute::global_organization_operations::v1::ListGlobalOrganizationOperationsRequest request);
};

std::unique_ptr<GlobalOrganizationOperationsConnectionIdempotencyPolicy>
    MakeDefaultGlobalOrganizationOperationsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_organization_operations_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ORGANIZATION_OPERATIONS_V1_GLOBAL_ORGANIZATION_OPERATIONS_CONNECTION_IDEMPOTENCY_POLICY_H
