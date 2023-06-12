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
// source: google/cloud/iap/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_V1_IDENTITY_AWARE_PROXY_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_V1_IDENTITY_AWARE_PROXY_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/iap/v1/service.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iap_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IdentityAwareProxyAdminServiceConnectionIdempotencyPolicy {
 public:
  virtual ~IdentityAwareProxyAdminServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<
      IdentityAwareProxyAdminServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency GetIapSettings(
      google::cloud::iap::v1::GetIapSettingsRequest const& request);

  virtual google::cloud::Idempotency UpdateIapSettings(
      google::cloud::iap::v1::UpdateIapSettingsRequest const& request);

  virtual google::cloud::Idempotency ListTunnelDestGroups(
      google::cloud::iap::v1::ListTunnelDestGroupsRequest request);

  virtual google::cloud::Idempotency CreateTunnelDestGroup(
      google::cloud::iap::v1::CreateTunnelDestGroupRequest const& request);

  virtual google::cloud::Idempotency GetTunnelDestGroup(
      google::cloud::iap::v1::GetTunnelDestGroupRequest const& request);

  virtual google::cloud::Idempotency DeleteTunnelDestGroup(
      google::cloud::iap::v1::DeleteTunnelDestGroupRequest const& request);

  virtual google::cloud::Idempotency UpdateTunnelDestGroup(
      google::cloud::iap::v1::UpdateTunnelDestGroupRequest const& request);
};

std::unique_ptr<IdentityAwareProxyAdminServiceConnectionIdempotencyPolicy>
MakeDefaultIdentityAwareProxyAdminServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_V1_IDENTITY_AWARE_PROXY_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H
