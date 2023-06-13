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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_V1_INTERNAL_IDENTITY_AWARE_PROXY_ADMIN_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_V1_INTERNAL_IDENTITY_AWARE_PROXY_ADMIN_TRACING_CONNECTION_H

#include "google/cloud/iap/v1/identity_aware_proxy_admin_connection.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace iap_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class IdentityAwareProxyAdminServiceTracingConnection
    : public iap_v1::IdentityAwareProxyAdminServiceConnection {
 public:
  ~IdentityAwareProxyAdminServiceTracingConnection() override = default;

  explicit IdentityAwareProxyAdminServiceTracingConnection(
      std::shared_ptr<iap_v1::IdentityAwareProxyAdminServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::cloud::iap::v1::IapSettings> GetIapSettings(
      google::cloud::iap::v1::GetIapSettingsRequest const& request) override;

  StatusOr<google::cloud::iap::v1::IapSettings> UpdateIapSettings(
      google::cloud::iap::v1::UpdateIapSettingsRequest const& request) override;

  StreamRange<google::cloud::iap::v1::TunnelDestGroup> ListTunnelDestGroups(
      google::cloud::iap::v1::ListTunnelDestGroupsRequest request) override;

  StatusOr<google::cloud::iap::v1::TunnelDestGroup> CreateTunnelDestGroup(
      google::cloud::iap::v1::CreateTunnelDestGroupRequest const& request)
      override;

  StatusOr<google::cloud::iap::v1::TunnelDestGroup> GetTunnelDestGroup(
      google::cloud::iap::v1::GetTunnelDestGroupRequest const& request)
      override;

  Status DeleteTunnelDestGroup(
      google::cloud::iap::v1::DeleteTunnelDestGroupRequest const& request)
      override;

  StatusOr<google::cloud::iap::v1::TunnelDestGroup> UpdateTunnelDestGroup(
      google::cloud::iap::v1::UpdateTunnelDestGroupRequest const& request)
      override;

 private:
  std::shared_ptr<iap_v1::IdentityAwareProxyAdminServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<iap_v1::IdentityAwareProxyAdminServiceConnection>
MakeIdentityAwareProxyAdminServiceTracingConnection(
    std::shared_ptr<iap_v1::IdentityAwareProxyAdminServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_V1_INTERNAL_IDENTITY_AWARE_PROXY_ADMIN_TRACING_CONNECTION_H
