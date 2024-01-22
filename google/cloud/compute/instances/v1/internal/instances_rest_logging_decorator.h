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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCES_V1_INTERNAL_INSTANCES_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCES_V1_INTERNAL_INSTANCES_REST_LOGGING_DECORATOR_H

#include "google/cloud/compute/instances/v1/internal/instances_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/instances/v1/instances.pb.h>
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace compute_instances_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstancesRestLogging : public InstancesRestStub {
 public:
  ~InstancesRestLogging() override = default;
  InstancesRestLogging(std::shared_ptr<InstancesRestStub> child,
                       TracingOptions tracing_options,
                       std::set<std::string> components);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddAccessConfig(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::AddAccessConfigRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddResourcePolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          AddResourcePoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceAggregatedList>
  AggregatedListInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          AggregatedListInstancesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncAttachDisk(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::AttachDiskRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncBulkInsert(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::BulkInsertRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::DeleteInstanceRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteAccessConfig(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          DeleteAccessConfigRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDetachDisk(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::DetachDiskRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Instance> GetInstance(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::GetInstanceRequest const&
          request) override;

  StatusOr<
      google::cloud::cpp::compute::v1::InstancesGetEffectiveFirewallsResponse>
  GetEffectiveFirewalls(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          GetEffectiveFirewallsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::GuestAttributes> GetGuestAttributes(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          GetGuestAttributesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::GetIamPolicyRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Screenshot> GetScreenshot(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::GetScreenshotRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::SerialPortOutput>
  GetSerialPortOutput(google::cloud::rest_internal::RestContext& rest_context,
                      Options const& options,
                      google::cloud::cpp::compute::instances::v1::
                          GetSerialPortOutputRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::ShieldedInstanceIdentity>
  GetShieldedInstanceIdentity(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          GetShieldedInstanceIdentityRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::InsertInstanceRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceList> ListInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::ListInstancesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceListReferrers>
  ListReferrers(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::ListReferrersRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPerformMaintenance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          PerformMaintenanceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemoveResourcePolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          RemoveResourcePoliciesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncReset(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::ResetRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncResume(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::ResumeRequest const& request)
      override;

  Status SendDiagnosticInterrupt(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          SendDiagnosticInterruptRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetDeletionProtection(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          SetDeletionProtectionRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetDiskAutoDelete(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          SetDiskAutoDeleteRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::SetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetLabels(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::SetLabelsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetMachineResources(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          SetMachineResourcesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetMachineType(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::SetMachineTypeRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetMetadata(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::SetMetadataRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetMinCpuPlatform(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          SetMinCpuPlatformRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetName(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::SetNameRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetScheduling(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::SetSchedulingRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          SetSecurityPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetServiceAccount(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          SetServiceAccountRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetShieldedInstanceIntegrityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          SetShieldedInstanceIntegrityPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetTags(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::SetTagsRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSimulateMaintenanceEvent(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          SimulateMaintenanceEventRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncStart(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::StartRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncStartWithEncryptionKey(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          StartWithEncryptionKeyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncStop(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::StopRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSuspend(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::SuspendRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     Options const& options,
                     google::cloud::cpp::compute::instances::v1::
                         TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::UpdateInstanceRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateAccessConfig(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          UpdateAccessConfigRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateDisplayDevice(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          UpdateDisplayDeviceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateNetworkInterface(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          UpdateNetworkInterfaceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateShieldedInstanceConfig(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::instances::v1::
          UpdateShieldedInstanceConfigRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::zone_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<InstancesRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instances_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCES_V1_INTERNAL_INSTANCES_REST_LOGGING_DECORATOR_H
