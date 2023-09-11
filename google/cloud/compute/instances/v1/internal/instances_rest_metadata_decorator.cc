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
// source: google/cloud/compute/instances/v1/instances.proto

#include "google/cloud/compute/instances/v1/internal/instances_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_instances_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstancesRestMetadata::InstancesRestMetadata(
    std::shared_ptr<InstancesRestStub> child, std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncAddAccessConfig(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::AddAccessConfigRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncAddAccessConfig(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncAddResourcePolicies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::
        AddResourcePoliciesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncAddResourcePolicies(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceAggregatedList>
InstancesRestMetadata::AggregatedListInstances(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instances::v1::
        AggregatedListInstancesRequest const& request) {
  SetMetadata(rest_context);
  return child_->AggregatedListInstances(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncAttachDisk(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::AttachDiskRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncAttachDisk(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncBulkInsert(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::BulkInsertRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncBulkInsert(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncDeleteInstance(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::DeleteInstanceRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteInstance(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncDeleteAccessConfig(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::DeleteAccessConfigRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteAccessConfig(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncDetachDisk(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::DetachDiskRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncDetachDisk(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::Instance>
InstancesRestMetadata::GetInstance(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instances::v1::GetInstanceRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetInstance(rest_context, request);
}

StatusOr<
    google::cloud::cpp::compute::v1::InstancesGetEffectiveFirewallsResponse>
InstancesRestMetadata::GetEffectiveFirewalls(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instances::v1::
        GetEffectiveFirewallsRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetEffectiveFirewalls(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::GuestAttributes>
InstancesRestMetadata::GetGuestAttributes(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instances::v1::GetGuestAttributesRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetGuestAttributes(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstancesRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instances::v1::GetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetIamPolicy(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::Screenshot>
InstancesRestMetadata::GetScreenshot(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instances::v1::GetScreenshotRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetScreenshot(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::SerialPortOutput>
InstancesRestMetadata::GetSerialPortOutput(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instances::v1::
        GetSerialPortOutputRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetSerialPortOutput(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::ShieldedInstanceIdentity>
InstancesRestMetadata::GetShieldedInstanceIdentity(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instances::v1::
        GetShieldedInstanceIdentityRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetShieldedInstanceIdentity(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncInsertInstance(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::InsertInstanceRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertInstance(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceList>
InstancesRestMetadata::ListInstances(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instances::v1::ListInstancesRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->ListInstances(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceListReferrers>
InstancesRestMetadata::ListReferrers(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instances::v1::ListReferrersRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->ListReferrers(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncRemoveResourcePolicies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::
        RemoveResourcePoliciesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncRemoveResourcePolicies(cq, std::move(rest_context),
                                             request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncReset(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::ResetRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncReset(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncResume(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::ResumeRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncResume(cq, std::move(rest_context), request);
}

Status InstancesRestMetadata::SendDiagnosticInterrupt(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instances::v1::
        SendDiagnosticInterruptRequest const& request) {
  SetMetadata(rest_context);
  return child_->SendDiagnosticInterrupt(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncSetDeletionProtection(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::
        SetDeletionProtectionRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetDeletionProtection(cq, std::move(rest_context),
                                            request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncSetDiskAutoDelete(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::SetDiskAutoDeleteRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetDiskAutoDelete(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstancesRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instances::v1::SetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->SetIamPolicy(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::SetLabelsRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetLabels(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncSetMachineResources(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::
        SetMachineResourcesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetMachineResources(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncSetMachineType(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::SetMachineTypeRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetMachineType(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncSetMetadata(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::SetMetadataRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetMetadata(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncSetMinCpuPlatform(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::SetMinCpuPlatformRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetMinCpuPlatform(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncSetName(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::SetNameRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetName(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncSetScheduling(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::SetSchedulingRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetScheduling(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncSetServiceAccount(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::SetServiceAccountRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetServiceAccount(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncSetShieldedInstanceIntegrityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::
        SetShieldedInstanceIntegrityPolicyRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetShieldedInstanceIntegrityPolicy(
      cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncSetTags(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::SetTagsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetTags(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncSimulateMaintenanceEvent(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::
        SimulateMaintenanceEventRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSimulateMaintenanceEvent(cq, std::move(rest_context),
                                               request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncStart(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::StartRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncStart(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncStartWithEncryptionKey(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::
        StartWithEncryptionKeyRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncStartWithEncryptionKey(cq, std::move(rest_context),
                                             request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncStop(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::StopRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncStop(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncSuspend(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::SuspendRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSuspend(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
InstancesRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instances::v1::TestIamPermissionsRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->TestIamPermissions(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncUpdateInstance(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::UpdateInstanceRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncUpdateInstance(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncUpdateAccessConfig(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::UpdateAccessConfigRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncUpdateAccessConfig(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncUpdateDisplayDevice(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::
        UpdateDisplayDeviceRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncUpdateDisplayDevice(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncUpdateNetworkInterface(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::
        UpdateNetworkInterfaceRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncUpdateNetworkInterface(cq, std::move(rest_context),
                                             request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncUpdateShieldedInstanceConfig(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instances::v1::
        UpdateShieldedInstanceConfigRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncUpdateShieldedInstanceConfig(cq, std::move(rest_context),
                                                   request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstancesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> InstancesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void InstancesRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context,
    std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
                  absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instances_v1_internal
}  // namespace cloud
}  // namespace google
