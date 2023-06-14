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
// source: google/cloud/osconfig/v1/osconfig_service.proto

#include "google/cloud/osconfig/v1/os_config_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace osconfig_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

OsConfigServiceConnectionIdempotencyPolicy::
    ~OsConfigServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<OsConfigServiceConnectionIdempotencyPolicy>
OsConfigServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<OsConfigServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency OsConfigServiceConnectionIdempotencyPolicy::ExecutePatchJob(
    google::cloud::osconfig::v1::ExecutePatchJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency OsConfigServiceConnectionIdempotencyPolicy::GetPatchJob(
    google::cloud::osconfig::v1::GetPatchJobRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency OsConfigServiceConnectionIdempotencyPolicy::CancelPatchJob(
    google::cloud::osconfig::v1::CancelPatchJobRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency OsConfigServiceConnectionIdempotencyPolicy::ListPatchJobs(
    google::cloud::osconfig::v1::ListPatchJobsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
OsConfigServiceConnectionIdempotencyPolicy::ListPatchJobInstanceDetails(
    google::cloud::osconfig::v1::
        ListPatchJobInstanceDetailsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency OsConfigServiceConnectionIdempotencyPolicy::CreatePatchDeployment(
    google::cloud::osconfig::v1::CreatePatchDeploymentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency OsConfigServiceConnectionIdempotencyPolicy::GetPatchDeployment(
    google::cloud::osconfig::v1::GetPatchDeploymentRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency OsConfigServiceConnectionIdempotencyPolicy::ListPatchDeployments(
    google::cloud::osconfig::v1::ListPatchDeploymentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency OsConfigServiceConnectionIdempotencyPolicy::DeletePatchDeployment(
    google::cloud::osconfig::v1::DeletePatchDeploymentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency OsConfigServiceConnectionIdempotencyPolicy::UpdatePatchDeployment(
    google::cloud::osconfig::v1::UpdatePatchDeploymentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency OsConfigServiceConnectionIdempotencyPolicy::PausePatchDeployment(
    google::cloud::osconfig::v1::PausePatchDeploymentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency OsConfigServiceConnectionIdempotencyPolicy::ResumePatchDeployment(
    google::cloud::osconfig::v1::ResumePatchDeploymentRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<OsConfigServiceConnectionIdempotencyPolicy>
MakeDefaultOsConfigServiceConnectionIdempotencyPolicy() {
  return std::make_unique<OsConfigServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
