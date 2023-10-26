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
// google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto

#include "google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_public_delegated_prefixes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

PublicDelegatedPrefixesConnectionIdempotencyPolicy::
    ~PublicDelegatedPrefixesConnectionIdempotencyPolicy() = default;

std::unique_ptr<PublicDelegatedPrefixesConnectionIdempotencyPolicy>
PublicDelegatedPrefixesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<PublicDelegatedPrefixesConnectionIdempotencyPolicy>(
      *this);
}

Idempotency PublicDelegatedPrefixesConnectionIdempotencyPolicy::
    AggregatedListPublicDelegatedPrefixes(
        google::cloud::cpp::compute::public_delegated_prefixes::v1::
            AggregatedListPublicDelegatedPrefixesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency PublicDelegatedPrefixesConnectionIdempotencyPolicy::Announce(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        AnnounceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
PublicDelegatedPrefixesConnectionIdempotencyPolicy::DeletePublicDelegatedPrefix(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        DeletePublicDelegatedPrefixRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
PublicDelegatedPrefixesConnectionIdempotencyPolicy::GetPublicDelegatedPrefix(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        GetPublicDelegatedPrefixRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
PublicDelegatedPrefixesConnectionIdempotencyPolicy::InsertPublicDelegatedPrefix(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        InsertPublicDelegatedPrefixRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
PublicDelegatedPrefixesConnectionIdempotencyPolicy::ListPublicDelegatedPrefixes(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        ListPublicDelegatedPrefixesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
PublicDelegatedPrefixesConnectionIdempotencyPolicy::PatchPublicDelegatedPrefix(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        PatchPublicDelegatedPrefixRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PublicDelegatedPrefixesConnectionIdempotencyPolicy::Withdraw(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        WithdrawRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<PublicDelegatedPrefixesConnectionIdempotencyPolicy>
MakeDefaultPublicDelegatedPrefixesConnectionIdempotencyPolicy() {
  return std::make_unique<PublicDelegatedPrefixesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_delegated_prefixes_v1
}  // namespace cloud
}  // namespace google
