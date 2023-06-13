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
// source: google/cloud/securitycenter/v1/securitycenter_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V1_SECURITY_CENTER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V1_SECURITY_CENTER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/securitycenter/v1/securitycenter_service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace securitycenter_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SecurityCenterConnectionIdempotencyPolicy {
 public:
  virtual ~SecurityCenterConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<SecurityCenterConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency BulkMuteFindings(
      google::cloud::securitycenter::v1::BulkMuteFindingsRequest const&
          request);

  virtual google::cloud::Idempotency CreateSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycenter::v1::
          CreateSecurityHealthAnalyticsCustomModuleRequest const& request);

  virtual google::cloud::Idempotency CreateSource(
      google::cloud::securitycenter::v1::CreateSourceRequest const& request);

  virtual google::cloud::Idempotency CreateFinding(
      google::cloud::securitycenter::v1::CreateFindingRequest const& request);

  virtual google::cloud::Idempotency CreateMuteConfig(
      google::cloud::securitycenter::v1::CreateMuteConfigRequest const&
          request);

  virtual google::cloud::Idempotency CreateNotificationConfig(
      google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
          request);

  virtual google::cloud::Idempotency DeleteMuteConfig(
      google::cloud::securitycenter::v1::DeleteMuteConfigRequest const&
          request);

  virtual google::cloud::Idempotency DeleteNotificationConfig(
      google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
          request);

  virtual google::cloud::Idempotency DeleteSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycenter::v1::
          DeleteSecurityHealthAnalyticsCustomModuleRequest const& request);

  virtual google::cloud::Idempotency GetBigQueryExport(
      google::cloud::securitycenter::v1::GetBigQueryExportRequest const&
          request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency GetMuteConfig(
      google::cloud::securitycenter::v1::GetMuteConfigRequest const& request);

  virtual google::cloud::Idempotency GetNotificationConfig(
      google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
          request);

  virtual google::cloud::Idempotency GetOrganizationSettings(
      google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
          request);

  virtual google::cloud::Idempotency
  GetEffectiveSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycenter::v1::
          GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const&
              request);

  virtual google::cloud::Idempotency GetSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycenter::v1::
          GetSecurityHealthAnalyticsCustomModuleRequest const& request);

  virtual google::cloud::Idempotency GetSource(
      google::cloud::securitycenter::v1::GetSourceRequest const& request);

  virtual google::cloud::Idempotency GroupAssets(
      google::cloud::securitycenter::v1::GroupAssetsRequest request);

  virtual google::cloud::Idempotency GroupFindings(
      google::cloud::securitycenter::v1::GroupFindingsRequest request);

  virtual google::cloud::Idempotency ListAssets(
      google::cloud::securitycenter::v1::ListAssetsRequest request);

  virtual google::cloud::Idempotency
  ListDescendantSecurityHealthAnalyticsCustomModules(
      google::cloud::securitycenter::v1::
          ListDescendantSecurityHealthAnalyticsCustomModulesRequest request);

  virtual google::cloud::Idempotency ListFindings(
      google::cloud::securitycenter::v1::ListFindingsRequest request);

  virtual google::cloud::Idempotency ListMuteConfigs(
      google::cloud::securitycenter::v1::ListMuteConfigsRequest request);

  virtual google::cloud::Idempotency ListNotificationConfigs(
      google::cloud::securitycenter::v1::ListNotificationConfigsRequest
          request);

  virtual google::cloud::Idempotency
  ListEffectiveSecurityHealthAnalyticsCustomModules(
      google::cloud::securitycenter::v1::
          ListEffectiveSecurityHealthAnalyticsCustomModulesRequest request);

  virtual google::cloud::Idempotency ListSecurityHealthAnalyticsCustomModules(
      google::cloud::securitycenter::v1::
          ListSecurityHealthAnalyticsCustomModulesRequest request);

  virtual google::cloud::Idempotency ListSources(
      google::cloud::securitycenter::v1::ListSourcesRequest request);

  virtual google::cloud::Idempotency RunAssetDiscovery(
      google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
          request);

  virtual google::cloud::Idempotency SetFindingState(
      google::cloud::securitycenter::v1::SetFindingStateRequest const& request);

  virtual google::cloud::Idempotency SetMute(
      google::cloud::securitycenter::v1::SetMuteRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency UpdateExternalSystem(
      google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
          request);

  virtual google::cloud::Idempotency UpdateFinding(
      google::cloud::securitycenter::v1::UpdateFindingRequest const& request);

  virtual google::cloud::Idempotency UpdateMuteConfig(
      google::cloud::securitycenter::v1::UpdateMuteConfigRequest const&
          request);

  virtual google::cloud::Idempotency UpdateNotificationConfig(
      google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
          request);

  virtual google::cloud::Idempotency UpdateOrganizationSettings(
      google::cloud::securitycenter::v1::
          UpdateOrganizationSettingsRequest const& request);

  virtual google::cloud::Idempotency UpdateSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycenter::v1::
          UpdateSecurityHealthAnalyticsCustomModuleRequest const& request);

  virtual google::cloud::Idempotency UpdateSource(
      google::cloud::securitycenter::v1::UpdateSourceRequest const& request);

  virtual google::cloud::Idempotency UpdateSecurityMarks(
      google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
          request);

  virtual google::cloud::Idempotency CreateBigQueryExport(
      google::cloud::securitycenter::v1::CreateBigQueryExportRequest const&
          request);

  virtual google::cloud::Idempotency DeleteBigQueryExport(
      google::cloud::securitycenter::v1::DeleteBigQueryExportRequest const&
          request);

  virtual google::cloud::Idempotency UpdateBigQueryExport(
      google::cloud::securitycenter::v1::UpdateBigQueryExportRequest const&
          request);

  virtual google::cloud::Idempotency ListBigQueryExports(
      google::cloud::securitycenter::v1::ListBigQueryExportsRequest request);
};

std::unique_ptr<SecurityCenterConnectionIdempotencyPolicy>
MakeDefaultSecurityCenterConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V1_SECURITY_CENTER_CONNECTION_IDEMPOTENCY_POLICY_H
