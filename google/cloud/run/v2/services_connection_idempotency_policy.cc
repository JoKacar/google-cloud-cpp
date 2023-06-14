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
// source: google/cloud/run/v2/service.proto

#include "google/cloud/run/v2/services_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace run_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ServicesConnectionIdempotencyPolicy::~ServicesConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<ServicesConnectionIdempotencyPolicy>
ServicesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ServicesConnectionIdempotencyPolicy>(*this);
}

Idempotency ServicesConnectionIdempotencyPolicy::CreateService(
    google::cloud::run::v2::CreateServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ServicesConnectionIdempotencyPolicy::GetService(
    google::cloud::run::v2::GetServiceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ServicesConnectionIdempotencyPolicy::ListServices(
    google::cloud::run::v2::ListServicesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ServicesConnectionIdempotencyPolicy::UpdateService(
    google::cloud::run::v2::UpdateServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ServicesConnectionIdempotencyPolicy::DeleteService(
    google::cloud::run::v2::DeleteServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ServicesConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ServicesConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency ServicesConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<ServicesConnectionIdempotencyPolicy>
MakeDefaultServicesConnectionIdempotencyPolicy() {
  return std::make_unique<ServicesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
