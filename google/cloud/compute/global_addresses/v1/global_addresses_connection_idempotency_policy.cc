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
// source: google/cloud/compute/global_addresses/v1/global_addresses.proto

#include "google/cloud/compute/global_addresses/v1/global_addresses_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_addresses_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

GlobalAddressesConnectionIdempotencyPolicy::
    ~GlobalAddressesConnectionIdempotencyPolicy() = default;

std::unique_ptr<GlobalAddressesConnectionIdempotencyPolicy>
GlobalAddressesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<GlobalAddressesConnectionIdempotencyPolicy>(*this);
}

Idempotency GlobalAddressesConnectionIdempotencyPolicy::DeleteGlobalAddress(
    google::cloud::cpp::compute::global_addresses::v1::
        DeleteGlobalAddressRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GlobalAddressesConnectionIdempotencyPolicy::GetGlobalAddress(
    google::cloud::cpp::compute::global_addresses::v1::
        GetGlobalAddressRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency GlobalAddressesConnectionIdempotencyPolicy::InsertGlobalAddress(
    google::cloud::cpp::compute::global_addresses::v1::
        InsertGlobalAddressRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GlobalAddressesConnectionIdempotencyPolicy::ListGlobalAddresses(
    google::cloud::cpp::compute::global_addresses::v1::
        ListGlobalAddressesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency GlobalAddressesConnectionIdempotencyPolicy::Move(
    google::cloud::cpp::compute::global_addresses::v1::MoveRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GlobalAddressesConnectionIdempotencyPolicy::SetLabels(
    google::cloud::cpp::compute::global_addresses::v1::
        SetLabelsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<GlobalAddressesConnectionIdempotencyPolicy>
MakeDefaultGlobalAddressesConnectionIdempotencyPolicy() {
  return std::make_unique<GlobalAddressesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_addresses_v1
}  // namespace cloud
}  // namespace google
