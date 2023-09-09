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
// google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto

#include "google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_public_advertised_prefixes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

PublicAdvertisedPrefixesConnectionIdempotencyPolicy::
    ~PublicAdvertisedPrefixesConnectionIdempotencyPolicy() = default;

std::unique_ptr<PublicAdvertisedPrefixesConnectionIdempotencyPolicy>
PublicAdvertisedPrefixesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<PublicAdvertisedPrefixesConnectionIdempotencyPolicy>(
      *this);
}

Idempotency PublicAdvertisedPrefixesConnectionIdempotencyPolicy::
    DeletePublicAdvertisedPrefix(
        google::cloud::cpp::compute::public_advertised_prefixes::v1::
            DeletePublicAdvertisedPrefixRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
PublicAdvertisedPrefixesConnectionIdempotencyPolicy::GetPublicAdvertisedPrefix(
    google::cloud::cpp::compute::public_advertised_prefixes::v1::
        GetPublicAdvertisedPrefixRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency PublicAdvertisedPrefixesConnectionIdempotencyPolicy::
    InsertPublicAdvertisedPrefix(
        google::cloud::cpp::compute::public_advertised_prefixes::v1::
            InsertPublicAdvertisedPrefixRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PublicAdvertisedPrefixesConnectionIdempotencyPolicy::
    ListPublicAdvertisedPrefixes(
        google::cloud::cpp::compute::public_advertised_prefixes::v1::
            ListPublicAdvertisedPrefixesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency PublicAdvertisedPrefixesConnectionIdempotencyPolicy::
    PatchPublicAdvertisedPrefix(
        google::cloud::cpp::compute::public_advertised_prefixes::v1::
            PatchPublicAdvertisedPrefixRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<PublicAdvertisedPrefixesConnectionIdempotencyPolicy>
MakeDefaultPublicAdvertisedPrefixesConnectionIdempotencyPolicy() {
  return std::make_unique<
      PublicAdvertisedPrefixesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_advertised_prefixes_v1
}  // namespace cloud
}  // namespace google
