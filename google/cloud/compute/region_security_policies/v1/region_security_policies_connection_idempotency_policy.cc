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
// source: google/cloud/compute/region_security_policies/v1/region_security_policies.proto

#include "google/cloud/compute/region_security_policies/v1/region_security_policies_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_security_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

RegionSecurityPoliciesConnectionIdempotencyPolicy::~RegionSecurityPoliciesConnectionIdempotencyPolicy() = default;

std::unique_ptr<RegionSecurityPoliciesConnectionIdempotencyPolicy>
RegionSecurityPoliciesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<RegionSecurityPoliciesConnectionIdempotencyPolicy>(*this);
}

Idempotency RegionSecurityPoliciesConnectionIdempotencyPolicy::DeleteRegionSecurityPolicies(google::cloud::cpp::compute::region_security_policies::v1::DeleteRegionSecurityPoliciesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionSecurityPoliciesConnectionIdempotencyPolicy::GetRegionSecurityPolicies(google::cloud::cpp::compute::region_security_policies::v1::GetRegionSecurityPoliciesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RegionSecurityPoliciesConnectionIdempotencyPolicy::InsertRegionSecurityPolicies(google::cloud::cpp::compute::region_security_policies::v1::InsertRegionSecurityPoliciesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RegionSecurityPoliciesConnectionIdempotencyPolicy::ListRegionSecurityPolicies(google::cloud::cpp::compute::region_security_policies::v1::ListRegionSecurityPoliciesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RegionSecurityPoliciesConnectionIdempotencyPolicy::PatchRegionSecurityPolicies(google::cloud::cpp::compute::region_security_policies::v1::PatchRegionSecurityPoliciesRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<RegionSecurityPoliciesConnectionIdempotencyPolicy>
    MakeDefaultRegionSecurityPoliciesConnectionIdempotencyPolicy() {
  return std::make_unique<RegionSecurityPoliciesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_security_policies_v1
}  // namespace cloud
}  // namespace google
