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
// source: google/storagetransfer/v1/transfer.proto

#include "google/cloud/storagetransfer/v1/storage_transfer_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace storagetransfer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

StorageTransferServiceConnectionIdempotencyPolicy::
    ~StorageTransferServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<StorageTransferServiceConnectionIdempotencyPolicy>
StorageTransferServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<StorageTransferServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency
StorageTransferServiceConnectionIdempotencyPolicy::GetGoogleServiceAccount(
    google::storagetransfer::v1::GetGoogleServiceAccountRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
StorageTransferServiceConnectionIdempotencyPolicy::CreateTransferJob(
    google::storagetransfer::v1::CreateTransferJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
StorageTransferServiceConnectionIdempotencyPolicy::UpdateTransferJob(
    google::storagetransfer::v1::UpdateTransferJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency StorageTransferServiceConnectionIdempotencyPolicy::GetTransferJob(
    google::storagetransfer::v1::GetTransferJobRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency StorageTransferServiceConnectionIdempotencyPolicy::ListTransferJobs(
    google::storagetransfer::v1::ListTransferJobsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
StorageTransferServiceConnectionIdempotencyPolicy::PauseTransferOperation(
    google::storagetransfer::v1::PauseTransferOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
StorageTransferServiceConnectionIdempotencyPolicy::ResumeTransferOperation(
    google::storagetransfer::v1::ResumeTransferOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency StorageTransferServiceConnectionIdempotencyPolicy::RunTransferJob(
    google::storagetransfer::v1::RunTransferJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
StorageTransferServiceConnectionIdempotencyPolicy::DeleteTransferJob(
    google::storagetransfer::v1::DeleteTransferJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency StorageTransferServiceConnectionIdempotencyPolicy::CreateAgentPool(
    google::storagetransfer::v1::CreateAgentPoolRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency StorageTransferServiceConnectionIdempotencyPolicy::UpdateAgentPool(
    google::storagetransfer::v1::UpdateAgentPoolRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency StorageTransferServiceConnectionIdempotencyPolicy::GetAgentPool(
    google::storagetransfer::v1::GetAgentPoolRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency StorageTransferServiceConnectionIdempotencyPolicy::ListAgentPools(
    google::storagetransfer::v1::ListAgentPoolsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency StorageTransferServiceConnectionIdempotencyPolicy::DeleteAgentPool(
    google::storagetransfer::v1::DeleteAgentPoolRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<StorageTransferServiceConnectionIdempotencyPolicy>
MakeDefaultStorageTransferServiceConnectionIdempotencyPolicy() {
  return std::make_unique<StorageTransferServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
