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
// source: google/cloud/dialogflow/v2/knowledge_base.proto

#include "google/cloud/dialogflow_es/knowledge_bases_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

KnowledgeBasesConnectionIdempotencyPolicy::
    ~KnowledgeBasesConnectionIdempotencyPolicy() = default;

std::unique_ptr<KnowledgeBasesConnectionIdempotencyPolicy>
KnowledgeBasesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<KnowledgeBasesConnectionIdempotencyPolicy>(*this);
}

Idempotency KnowledgeBasesConnectionIdempotencyPolicy::ListKnowledgeBases(
    google::cloud::dialogflow::v2::ListKnowledgeBasesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency KnowledgeBasesConnectionIdempotencyPolicy::GetKnowledgeBase(
    google::cloud::dialogflow::v2::GetKnowledgeBaseRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency KnowledgeBasesConnectionIdempotencyPolicy::CreateKnowledgeBase(
    google::cloud::dialogflow::v2::CreateKnowledgeBaseRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency KnowledgeBasesConnectionIdempotencyPolicy::DeleteKnowledgeBase(
    google::cloud::dialogflow::v2::DeleteKnowledgeBaseRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency KnowledgeBasesConnectionIdempotencyPolicy::UpdateKnowledgeBase(
    google::cloud::dialogflow::v2::UpdateKnowledgeBaseRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<KnowledgeBasesConnectionIdempotencyPolicy>
MakeDefaultKnowledgeBasesConnectionIdempotencyPolicy() {
  return std::make_unique<KnowledgeBasesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
