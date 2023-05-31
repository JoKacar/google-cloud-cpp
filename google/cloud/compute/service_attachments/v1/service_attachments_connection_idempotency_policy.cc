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
// source: google/cloud/compute/service_attachments/v1/service_attachments.proto

#include "google/cloud/compute/service_attachments/v1/service_attachments_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_service_attachments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ServiceAttachmentsConnectionIdempotencyPolicy::
    ~ServiceAttachmentsConnectionIdempotencyPolicy() = default;

std::unique_ptr<ServiceAttachmentsConnectionIdempotencyPolicy>
ServiceAttachmentsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ServiceAttachmentsConnectionIdempotencyPolicy>(*this);
}

Idempotency
ServiceAttachmentsConnectionIdempotencyPolicy::AggregatedListServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        AggregatedListServiceAttachmentsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
ServiceAttachmentsConnectionIdempotencyPolicy::DeleteServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        DeleteServiceAttachmentsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ServiceAttachmentsConnectionIdempotencyPolicy::GetServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        GetServiceAttachmentsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ServiceAttachmentsConnectionIdempotencyPolicy::GetIamPolicy(
    google::cloud::cpp::compute::service_attachments::v1::
        GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
ServiceAttachmentsConnectionIdempotencyPolicy::InsertServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        InsertServiceAttachmentsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ServiceAttachmentsConnectionIdempotencyPolicy::ListServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        ListServiceAttachmentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
ServiceAttachmentsConnectionIdempotencyPolicy::PatchServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        PatchServiceAttachmentsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ServiceAttachmentsConnectionIdempotencyPolicy::SetIamPolicy(
    google::cloud::cpp::compute::service_attachments::v1::
        SetIamPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ServiceAttachmentsConnectionIdempotencyPolicy::TestIamPermissions(
    google::cloud::cpp::compute::service_attachments::v1::
        TestIamPermissionsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ServiceAttachmentsConnectionIdempotencyPolicy>
MakeDefaultServiceAttachmentsConnectionIdempotencyPolicy() {
  return std::make_unique<ServiceAttachmentsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_service_attachments_v1
}  // namespace cloud
}  // namespace google
