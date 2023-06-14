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
// source: google/cloud/kms/v1/ekm_service.proto

#include "google/cloud/kms/v1/ekm_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace kms_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

EkmServiceConnectionIdempotencyPolicy::
    ~EkmServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<EkmServiceConnectionIdempotencyPolicy>
EkmServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<EkmServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency EkmServiceConnectionIdempotencyPolicy::ListEkmConnections(
    google::cloud::kms::v1::ListEkmConnectionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EkmServiceConnectionIdempotencyPolicy::GetEkmConnection(
    google::cloud::kms::v1::GetEkmConnectionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EkmServiceConnectionIdempotencyPolicy::CreateEkmConnection(
    google::cloud::kms::v1::CreateEkmConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EkmServiceConnectionIdempotencyPolicy::UpdateEkmConnection(
    google::cloud::kms::v1::UpdateEkmConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EkmServiceConnectionIdempotencyPolicy::GetEkmConfig(
    google::cloud::kms::v1::GetEkmConfigRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EkmServiceConnectionIdempotencyPolicy::UpdateEkmConfig(
    google::cloud::kms::v1::UpdateEkmConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EkmServiceConnectionIdempotencyPolicy::VerifyConnectivity(
    google::cloud::kms::v1::VerifyConnectivityRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<EkmServiceConnectionIdempotencyPolicy>
MakeDefaultEkmServiceConnectionIdempotencyPolicy() {
  return std::make_unique<EkmServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
