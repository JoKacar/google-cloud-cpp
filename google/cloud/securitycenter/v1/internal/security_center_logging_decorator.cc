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

#include "google/cloud/securitycenter/v1/internal/security_center_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/securitycenter/v1/securitycenter_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace securitycenter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityCenterLogging::SecurityCenterLogging(
    std::shared_ptr<SecurityCenterStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterLogging::AsyncBulkMuteFindings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::securitycenter::v1::BulkMuteFindingsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::securitycenter::v1::BulkMuteFindingsRequest const&
                 request) {
        return child_->AsyncBulkMuteFindings(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterLogging::CreateSource(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateSourceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::CreateSourceRequest const&
                 request) { return child_->CreateSource(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterLogging::CreateFinding(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateFindingRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::CreateFindingRequest const&
                 request) { return child_->CreateFinding(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterLogging::CreateMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateMuteConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::CreateMuteConfigRequest const&
                 request) {
        return child_->CreateMuteConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterLogging::CreateNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::
                 CreateNotificationConfigRequest const& request) {
        return child_->CreateNotificationConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status SecurityCenterLogging::DeleteMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::DeleteMuteConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::DeleteMuteConfigRequest const&
                 request) {
        return child_->DeleteMuteConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status SecurityCenterLogging::DeleteNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::
                 DeleteNotificationConfigRequest const& request) {
        return child_->DeleteNotificationConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterLogging::GetBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetBigQueryExportRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::GetBigQueryExportRequest const&
                 request) {
        return child_->GetBigQueryExport(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> SecurityCenterLogging::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterLogging::GetMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetMuteConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::GetMuteConfigRequest const&
                 request) { return child_->GetMuteConfig(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterLogging::GetNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
              request) {
        return child_->GetNotificationConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterLogging::GetOrganizationSettings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::
                 GetOrganizationSettingsRequest const& request) {
        return child_->GetOrganizationSettings(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterLogging::GetSource(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetSourceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::securitycenter::v1::GetSourceRequest const& request) {
        return child_->GetSource(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::GroupAssetsResponse>
SecurityCenterLogging::GroupAssets(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GroupAssetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::GroupAssetsRequest const&
                 request) { return child_->GroupAssets(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::GroupFindingsResponse>
SecurityCenterLogging::GroupFindings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GroupFindingsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::GroupFindingsRequest const&
                 request) { return child_->GroupFindings(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::ListAssetsResponse>
SecurityCenterLogging::ListAssets(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListAssetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::securitycenter::v1::ListAssetsRequest const& request) {
        return child_->ListAssets(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::ListFindingsResponse>
SecurityCenterLogging::ListFindings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListFindingsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::ListFindingsRequest const&
                 request) { return child_->ListFindings(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::ListMuteConfigsResponse>
SecurityCenterLogging::ListMuteConfigs(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListMuteConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::ListMuteConfigsRequest const&
                 request) { return child_->ListMuteConfigs(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::ListNotificationConfigsResponse>
SecurityCenterLogging::ListNotificationConfigs(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListNotificationConfigsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::
                 ListNotificationConfigsRequest const& request) {
        return child_->ListNotificationConfigs(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::ListSourcesResponse>
SecurityCenterLogging::ListSources(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListSourcesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::ListSourcesRequest const&
                 request) { return child_->ListSources(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterLogging::AsyncRunAssetDiscovery(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
                 request) {
        return child_->AsyncRunAssetDiscovery(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterLogging::SetFindingState(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::SetFindingStateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::SetFindingStateRequest const&
                 request) { return child_->SetFindingState(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterLogging::SetMute(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::SetMuteRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::SetMuteRequest const& request) {
        return child_->SetMute(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> SecurityCenterLogging::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecurityCenterLogging::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
SecurityCenterLogging::UpdateExternalSystem(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
              request) {
        return child_->UpdateExternalSystem(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterLogging::UpdateFinding(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateFindingRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::UpdateFindingRequest const&
                 request) { return child_->UpdateFinding(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterLogging::UpdateMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateMuteConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::UpdateMuteConfigRequest const&
                 request) {
        return child_->UpdateMuteConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterLogging::UpdateNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::
                 UpdateNotificationConfigRequest const& request) {
        return child_->UpdateNotificationConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterLogging::UpdateOrganizationSettings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateOrganizationSettingsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::
                 UpdateOrganizationSettingsRequest const& request) {
        return child_->UpdateOrganizationSettings(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterLogging::UpdateSource(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateSourceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::securitycenter::v1::UpdateSourceRequest const&
                 request) { return child_->UpdateSource(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
SecurityCenterLogging::UpdateSecurityMarks(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
              request) {
        return child_->UpdateSecurityMarks(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterLogging::CreateBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateBigQueryExportRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::securitycenter::v1::CreateBigQueryExportRequest const&
              request) {
        return child_->CreateBigQueryExport(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status SecurityCenterLogging::DeleteBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::DeleteBigQueryExportRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::securitycenter::v1::DeleteBigQueryExportRequest const&
              request) {
        return child_->DeleteBigQueryExport(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterLogging::UpdateBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateBigQueryExportRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::securitycenter::v1::UpdateBigQueryExportRequest const&
              request) {
        return child_->UpdateBigQueryExport(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::ListBigQueryExportsResponse>
SecurityCenterLogging::ListBigQueryExports(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListBigQueryExportsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::securitycenter::v1::ListBigQueryExportsRequest const&
              request) {
        return child_->ListBigQueryExports(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> SecurityCenterLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_v1_internal
}  // namespace cloud
}  // namespace google
