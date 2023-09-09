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
// source: google/cloud/compute/zone_operations/v1/zone_operations.proto

#include "google/cloud/compute/zone_operations/v1/zone_operations_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_zone_operations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ZoneOperationsConnectionIdempotencyPolicy::
    ~ZoneOperationsConnectionIdempotencyPolicy() = default;

std::unique_ptr<ZoneOperationsConnectionIdempotencyPolicy>
ZoneOperationsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ZoneOperationsConnectionIdempotencyPolicy>(*this);
}

Idempotency ZoneOperationsConnectionIdempotencyPolicy::DeleteZoneOperation(
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteZoneOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ZoneOperationsConnectionIdempotencyPolicy::GetZoneOperation(
    google::cloud::cpp::compute::zone_operations::v1::
        GetZoneOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ZoneOperationsConnectionIdempotencyPolicy::ListZoneOperations(
    google::cloud::cpp::compute::zone_operations::v1::
        ListZoneOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ZoneOperationsConnectionIdempotencyPolicy::Wait(
    google::cloud::cpp::compute::zone_operations::v1::WaitRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ZoneOperationsConnectionIdempotencyPolicy>
MakeDefaultZoneOperationsConnectionIdempotencyPolicy() {
  return std::make_unique<ZoneOperationsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_zone_operations_v1
}  // namespace cloud
}  // namespace google
