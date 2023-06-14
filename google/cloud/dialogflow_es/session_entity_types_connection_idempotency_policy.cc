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
// source: google/cloud/dialogflow/v2/session_entity_type.proto

#include "google/cloud/dialogflow_es/session_entity_types_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

SessionEntityTypesConnectionIdempotencyPolicy::
    ~SessionEntityTypesConnectionIdempotencyPolicy() = default;

std::unique_ptr<SessionEntityTypesConnectionIdempotencyPolicy>
SessionEntityTypesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<SessionEntityTypesConnectionIdempotencyPolicy>(*this);
}

Idempotency
SessionEntityTypesConnectionIdempotencyPolicy::ListSessionEntityTypes(
    google::cloud::dialogflow::v2::ListSessionEntityTypesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency SessionEntityTypesConnectionIdempotencyPolicy::GetSessionEntityType(
    google::cloud::dialogflow::v2::GetSessionEntityTypeRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
SessionEntityTypesConnectionIdempotencyPolicy::CreateSessionEntityType(
    google::cloud::dialogflow::v2::CreateSessionEntityTypeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
SessionEntityTypesConnectionIdempotencyPolicy::UpdateSessionEntityType(
    google::cloud::dialogflow::v2::UpdateSessionEntityTypeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
SessionEntityTypesConnectionIdempotencyPolicy::DeleteSessionEntityType(
    google::cloud::dialogflow::v2::DeleteSessionEntityTypeRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<SessionEntityTypesConnectionIdempotencyPolicy>
MakeDefaultSessionEntityTypesConnectionIdempotencyPolicy() {
  return std::make_unique<SessionEntityTypesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
