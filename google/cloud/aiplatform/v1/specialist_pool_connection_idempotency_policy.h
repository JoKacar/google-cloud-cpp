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
// source: google/cloud/aiplatform/v1/specialist_pool_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_SPECIALIST_POOL_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_SPECIALIST_POOL_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/specialist_pool_service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SpecialistPoolServiceConnectionIdempotencyPolicy {
 public:
  virtual ~SpecialistPoolServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<SpecialistPoolServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency CreateSpecialistPool(
      google::cloud::aiplatform::v1::CreateSpecialistPoolRequest const&
          request);

  virtual google::cloud::Idempotency GetSpecialistPool(
      google::cloud::aiplatform::v1::GetSpecialistPoolRequest const& request);

  virtual google::cloud::Idempotency ListSpecialistPools(
      google::cloud::aiplatform::v1::ListSpecialistPoolsRequest request);

  virtual google::cloud::Idempotency DeleteSpecialistPool(
      google::cloud::aiplatform::v1::DeleteSpecialistPoolRequest const&
          request);

  virtual google::cloud::Idempotency UpdateSpecialistPool(
      google::cloud::aiplatform::v1::UpdateSpecialistPoolRequest const&
          request);
};

std::unique_ptr<SpecialistPoolServiceConnectionIdempotencyPolicy>
MakeDefaultSpecialistPoolServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_SPECIALIST_POOL_CONNECTION_IDEMPOTENCY_POLICY_H
