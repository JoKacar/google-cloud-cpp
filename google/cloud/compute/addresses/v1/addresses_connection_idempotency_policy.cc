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
// source: google/cloud/compute/addresses/v1/addresses.proto

#include "google/cloud/compute/addresses/v1/addresses_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_addresses_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

AddressesConnectionIdempotencyPolicy::~AddressesConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<AddressesConnectionIdempotencyPolicy>
AddressesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<AddressesConnectionIdempotencyPolicy>(*this);
}

Idempotency AddressesConnectionIdempotencyPolicy::AggregatedListAddresses(
    google::cloud::cpp::compute::addresses::v1::
        AggregatedListAddressesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AddressesConnectionIdempotencyPolicy::DeleteAddress(
    google::cloud::cpp::compute::addresses::v1::DeleteAddressRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AddressesConnectionIdempotencyPolicy::GetAddress(
    google::cloud::cpp::compute::addresses::v1::GetAddressRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AddressesConnectionIdempotencyPolicy::InsertAddress(
    google::cloud::cpp::compute::addresses::v1::InsertAddressRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AddressesConnectionIdempotencyPolicy::ListAddresses(
    google::cloud::cpp::compute::addresses::v1::
        ListAddressesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AddressesConnectionIdempotencyPolicy::Move(
    google::cloud::cpp::compute::addresses::v1::MoveRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AddressesConnectionIdempotencyPolicy::SetLabels(
    google::cloud::cpp::compute::addresses::v1::SetLabelsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<AddressesConnectionIdempotencyPolicy>
MakeDefaultAddressesConnectionIdempotencyPolicy() {
  return std::make_unique<AddressesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_addresses_v1
}  // namespace cloud
}  // namespace google
