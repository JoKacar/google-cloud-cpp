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
// google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto

#include "google/cloud/compute/interconnect_attachments/v1/interconnect_attachments_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_interconnect_attachments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

InterconnectAttachmentsConnectionIdempotencyPolicy::
    ~InterconnectAttachmentsConnectionIdempotencyPolicy() = default;

std::unique_ptr<InterconnectAttachmentsConnectionIdempotencyPolicy>
InterconnectAttachmentsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<InterconnectAttachmentsConnectionIdempotencyPolicy>(
      *this);
}

Idempotency InterconnectAttachmentsConnectionIdempotencyPolicy::
    AggregatedListInterconnectAttachments(
        google::cloud::cpp::compute::interconnect_attachments::v1::
            AggregatedListInterconnectAttachmentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency InterconnectAttachmentsConnectionIdempotencyPolicy::
    DeleteInterconnectAttachment(
        google::cloud::cpp::compute::interconnect_attachments::v1::
            DeleteInterconnectAttachmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
InterconnectAttachmentsConnectionIdempotencyPolicy::GetInterconnectAttachment(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        GetInterconnectAttachmentRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InterconnectAttachmentsConnectionIdempotencyPolicy::
    InsertInterconnectAttachment(
        google::cloud::cpp::compute::interconnect_attachments::v1::
            InsertInterconnectAttachmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
InterconnectAttachmentsConnectionIdempotencyPolicy::ListInterconnectAttachments(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        ListInterconnectAttachmentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
InterconnectAttachmentsConnectionIdempotencyPolicy::PatchInterconnectAttachment(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        PatchInterconnectAttachmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InterconnectAttachmentsConnectionIdempotencyPolicy::SetLabels(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        SetLabelsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<InterconnectAttachmentsConnectionIdempotencyPolicy>
MakeDefaultInterconnectAttachmentsConnectionIdempotencyPolicy() {
  return std::make_unique<InterconnectAttachmentsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_attachments_v1
}  // namespace cloud
}  // namespace google
