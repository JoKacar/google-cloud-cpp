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
// source: google/cloud/aiplatform/v1/index_service.proto

#include "google/cloud/aiplatform/v1/index_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

IndexServiceConnectionIdempotencyPolicy::
    ~IndexServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<IndexServiceConnectionIdempotencyPolicy>
IndexServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<IndexServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency IndexServiceConnectionIdempotencyPolicy::CreateIndex(
    google::cloud::aiplatform::v1::CreateIndexRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IndexServiceConnectionIdempotencyPolicy::GetIndex(
    google::cloud::aiplatform::v1::GetIndexRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency IndexServiceConnectionIdempotencyPolicy::ListIndexes(
    google::cloud::aiplatform::v1::ListIndexesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency IndexServiceConnectionIdempotencyPolicy::UpdateIndex(
    google::cloud::aiplatform::v1::UpdateIndexRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IndexServiceConnectionIdempotencyPolicy::DeleteIndex(
    google::cloud::aiplatform::v1::DeleteIndexRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IndexServiceConnectionIdempotencyPolicy::UpsertDatapoints(
    google::cloud::aiplatform::v1::UpsertDatapointsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency IndexServiceConnectionIdempotencyPolicy::RemoveDatapoints(
    google::cloud::aiplatform::v1::RemoveDatapointsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<IndexServiceConnectionIdempotencyPolicy>
MakeDefaultIndexServiceConnectionIdempotencyPolicy() {
  return std::make_unique<IndexServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
