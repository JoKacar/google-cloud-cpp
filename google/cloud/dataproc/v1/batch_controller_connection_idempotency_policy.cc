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
// source: google/cloud/dataproc/v1/batches.proto

#include "google/cloud/dataproc/v1/batch_controller_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

BatchControllerConnectionIdempotencyPolicy::
    ~BatchControllerConnectionIdempotencyPolicy() = default;

std::unique_ptr<BatchControllerConnectionIdempotencyPolicy>
BatchControllerConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<BatchControllerConnectionIdempotencyPolicy>(*this);
}

Idempotency BatchControllerConnectionIdempotencyPolicy::CreateBatch(
    google::cloud::dataproc::v1::CreateBatchRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency BatchControllerConnectionIdempotencyPolicy::GetBatch(
    google::cloud::dataproc::v1::GetBatchRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency BatchControllerConnectionIdempotencyPolicy::ListBatches(
    google::cloud::dataproc::v1::ListBatchesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency BatchControllerConnectionIdempotencyPolicy::DeleteBatch(
    google::cloud::dataproc::v1::DeleteBatchRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<BatchControllerConnectionIdempotencyPolicy>
MakeDefaultBatchControllerConnectionIdempotencyPolicy() {
  return std::make_unique<BatchControllerConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
