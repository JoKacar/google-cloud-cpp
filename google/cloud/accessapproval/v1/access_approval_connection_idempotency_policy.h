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
// source: google/cloud/accessapproval/v1/accessapproval.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_V1_ACCESS_APPROVAL_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_V1_ACCESS_APPROVAL_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/accessapproval/v1/accessapproval.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace accessapproval_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AccessApprovalConnectionIdempotencyPolicy {
 public:
  virtual ~AccessApprovalConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<AccessApprovalConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ListApprovalRequests(
      google::cloud::accessapproval::v1::ListApprovalRequestsMessage request);

  virtual google::cloud::Idempotency GetApprovalRequest(
      google::cloud::accessapproval::v1::GetApprovalRequestMessage const&
          request);

  virtual google::cloud::Idempotency ApproveApprovalRequest(
      google::cloud::accessapproval::v1::ApproveApprovalRequestMessage const&
          request);

  virtual google::cloud::Idempotency DismissApprovalRequest(
      google::cloud::accessapproval::v1::DismissApprovalRequestMessage const&
          request);

  virtual google::cloud::Idempotency InvalidateApprovalRequest(
      google::cloud::accessapproval::v1::InvalidateApprovalRequestMessage const&
          request);

  virtual google::cloud::Idempotency GetAccessApprovalSettings(
      google::cloud::accessapproval::v1::GetAccessApprovalSettingsMessage const&
          request);

  virtual google::cloud::Idempotency UpdateAccessApprovalSettings(
      google::cloud::accessapproval::v1::
          UpdateAccessApprovalSettingsMessage const& request);

  virtual google::cloud::Idempotency DeleteAccessApprovalSettings(
      google::cloud::accessapproval::v1::
          DeleteAccessApprovalSettingsMessage const& request);

  virtual google::cloud::Idempotency GetAccessApprovalServiceAccount(
      google::cloud::accessapproval::v1::
          GetAccessApprovalServiceAccountMessage const& request);
};

std::unique_ptr<AccessApprovalConnectionIdempotencyPolicy>
MakeDefaultAccessApprovalConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accessapproval_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_V1_ACCESS_APPROVAL_CONNECTION_IDEMPOTENCY_POLICY_H
