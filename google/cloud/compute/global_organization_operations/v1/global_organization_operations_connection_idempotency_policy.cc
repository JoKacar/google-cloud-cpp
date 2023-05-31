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

#include "google/cloud/compute/global_organization_operations/v1/global_organization_operations_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_organization_operations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

GlobalOrganizationOperationsConnectionIdempotencyPolicy::~GlobalOrganizationOperationsConnectionIdempotencyPolicy() = default;

std::unique_ptr<GlobalOrganizationOperationsConnectionIdempotencyPolicy>
GlobalOrganizationOperationsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<GlobalOrganizationOperationsConnectionIdempotencyPolicy>(*this);
}

Idempotency GlobalOrganizationOperationsConnectionIdempotencyPolicy::DeleteGlobalOrganizationOperations(google::cloud::cpp::compute::global_organization_operations::v1::DeleteGlobalOrganizationOperationsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GlobalOrganizationOperationsConnectionIdempotencyPolicy::GetGlobalOrganizationOperations(google::cloud::cpp::compute::global_organization_operations::v1::GetGlobalOrganizationOperationsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency GlobalOrganizationOperationsConnectionIdempotencyPolicy::ListGlobalOrganizationOperations(google::cloud::cpp::compute::global_organization_operations::v1::ListGlobalOrganizationOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<GlobalOrganizationOperationsConnectionIdempotencyPolicy>
    MakeDefaultGlobalOrganizationOperationsConnectionIdempotencyPolicy() {
  return std::make_unique<GlobalOrganizationOperationsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_organization_operations_v1
}  // namespace cloud
}  // namespace google
