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
// source: google/cloud/filestore/v1/cloud_filestore_service.proto

#include "google/cloud/filestore/v1/cloud_filestore_manager_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace filestore_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

CloudFilestoreManagerConnectionIdempotencyPolicy::
    ~CloudFilestoreManagerConnectionIdempotencyPolicy() = default;

std::unique_ptr<CloudFilestoreManagerConnectionIdempotencyPolicy>
CloudFilestoreManagerConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<CloudFilestoreManagerConnectionIdempotencyPolicy>(
      *this);
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::ListInstances(
    google::cloud::filestore::v1::ListInstancesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::GetInstance(
    google::cloud::filestore::v1::GetInstanceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::CreateInstance(
    google::cloud::filestore::v1::CreateInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::UpdateInstance(
    google::cloud::filestore::v1::UpdateInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::RestoreInstance(
    google::cloud::filestore::v1::RestoreInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::DeleteInstance(
    google::cloud::filestore::v1::DeleteInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::ListSnapshots(
    google::cloud::filestore::v1::ListSnapshotsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::GetSnapshot(
    google::cloud::filestore::v1::GetSnapshotRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::CreateSnapshot(
    google::cloud::filestore::v1::CreateSnapshotRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::DeleteSnapshot(
    google::cloud::filestore::v1::DeleteSnapshotRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::UpdateSnapshot(
    google::cloud::filestore::v1::UpdateSnapshotRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::ListBackups(
    google::cloud::filestore::v1::ListBackupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::GetBackup(
    google::cloud::filestore::v1::GetBackupRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::CreateBackup(
    google::cloud::filestore::v1::CreateBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::DeleteBackup(
    google::cloud::filestore::v1::DeleteBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudFilestoreManagerConnectionIdempotencyPolicy::UpdateBackup(
    google::cloud::filestore::v1::UpdateBackupRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<CloudFilestoreManagerConnectionIdempotencyPolicy>
MakeDefaultCloudFilestoreManagerConnectionIdempotencyPolicy() {
  return std::make_unique<CloudFilestoreManagerConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace filestore_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
