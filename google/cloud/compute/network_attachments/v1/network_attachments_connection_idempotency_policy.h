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
// source: google/cloud/compute/network_attachments/v1/network_attachments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ATTACHMENTS_V1_NETWORK_ATTACHMENTS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ATTACHMENTS_V1_NETWORK_ATTACHMENTS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/network_attachments/v1/network_attachments.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_network_attachments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworkAttachmentsConnectionIdempotencyPolicy {
 public:
  virtual ~NetworkAttachmentsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<NetworkAttachmentsConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency AggregatedListNetworkAttachments(
      google::cloud::cpp::compute::network_attachments::v1::
          AggregatedListNetworkAttachmentsRequest const& request);

  virtual google::cloud::Idempotency DeleteNetworkAttachments(
      google::cloud::cpp::compute::network_attachments::v1::
          DeleteNetworkAttachmentsRequest const& request);

  virtual google::cloud::Idempotency GetNetworkAttachments(
      google::cloud::cpp::compute::network_attachments::v1::
          GetNetworkAttachmentsRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::cloud::cpp::compute::network_attachments::v1::
          GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency InsertNetworkAttachments(
      google::cloud::cpp::compute::network_attachments::v1::
          InsertNetworkAttachmentsRequest const& request);

  virtual google::cloud::Idempotency ListNetworkAttachments(
      google::cloud::cpp::compute::network_attachments::v1::
          ListNetworkAttachmentsRequest request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::cloud::cpp::compute::network_attachments::v1::
          SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::cloud::cpp::compute::network_attachments::v1::
          TestIamPermissionsRequest const& request);
};

std::unique_ptr<NetworkAttachmentsConnectionIdempotencyPolicy>
MakeDefaultNetworkAttachmentsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_attachments_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ATTACHMENTS_V1_NETWORK_ATTACHMENTS_CONNECTION_IDEMPOTENCY_POLICY_H
