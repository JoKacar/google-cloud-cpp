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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_INTERCONNECT_ATTACHMENTS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_INTERCONNECT_ATTACHMENTS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_interconnect_attachments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InterconnectAttachmentsConnectionIdempotencyPolicy {
 public:
  virtual ~InterconnectAttachmentsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<InterconnectAttachmentsConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency AggregatedListInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          AggregatedListInterconnectAttachmentsRequest const& request);

  virtual google::cloud::Idempotency DeleteInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          DeleteInterconnectAttachmentsRequest const& request);

  virtual google::cloud::Idempotency GetInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          GetInterconnectAttachmentsRequest const& request);

  virtual google::cloud::Idempotency InsertInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          InsertInterconnectAttachmentsRequest const& request);

  virtual google::cloud::Idempotency ListInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          ListInterconnectAttachmentsRequest request);

  virtual google::cloud::Idempotency PatchInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          PatchInterconnectAttachmentsRequest const& request);

  virtual google::cloud::Idempotency SetLabels(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          SetLabelsRequest const& request);
};

std::unique_ptr<InterconnectAttachmentsConnectionIdempotencyPolicy>
MakeDefaultInterconnectAttachmentsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_attachments_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_INTERCONNECT_ATTACHMENTS_CONNECTION_IDEMPOTENCY_POLICY_H
