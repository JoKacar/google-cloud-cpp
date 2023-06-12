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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SERVICE_ATTACHMENTS_V1_SERVICE_ATTACHMENTS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SERVICE_ATTACHMENTS_V1_SERVICE_ATTACHMENTS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/service_attachments/v1/service_attachments.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_service_attachments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ServiceAttachmentsConnectionIdempotencyPolicy {
 public:
  virtual ~ServiceAttachmentsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ServiceAttachmentsConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency AggregatedListServiceAttachments(
      google::cloud::cpp::compute::service_attachments::v1::
          AggregatedListServiceAttachmentsRequest const& request);

  virtual google::cloud::Idempotency DeleteServiceAttachments(
      google::cloud::cpp::compute::service_attachments::v1::
          DeleteServiceAttachmentsRequest const& request);

  virtual google::cloud::Idempotency GetServiceAttachments(
      google::cloud::cpp::compute::service_attachments::v1::
          GetServiceAttachmentsRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::cloud::cpp::compute::service_attachments::v1::
          GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency InsertServiceAttachments(
      google::cloud::cpp::compute::service_attachments::v1::
          InsertServiceAttachmentsRequest const& request);

  virtual google::cloud::Idempotency ListServiceAttachments(
      google::cloud::cpp::compute::service_attachments::v1::
          ListServiceAttachmentsRequest request);

  virtual google::cloud::Idempotency PatchServiceAttachments(
      google::cloud::cpp::compute::service_attachments::v1::
          PatchServiceAttachmentsRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::cloud::cpp::compute::service_attachments::v1::
          SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::cloud::cpp::compute::service_attachments::v1::
          TestIamPermissionsRequest const& request);
};

std::unique_ptr<ServiceAttachmentsConnectionIdempotencyPolicy>
MakeDefaultServiceAttachmentsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_service_attachments_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SERVICE_ATTACHMENTS_V1_SERVICE_ATTACHMENTS_CONNECTION_IDEMPOTENCY_POLICY_H
