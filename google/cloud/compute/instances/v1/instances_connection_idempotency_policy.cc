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

#include "google/cloud/compute/instances/v1/instances_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_instances_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

InstancesConnectionIdempotencyPolicy::~InstancesConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<InstancesConnectionIdempotencyPolicy>
InstancesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<InstancesConnectionIdempotencyPolicy>(*this);
}

Idempotency InstancesConnectionIdempotencyPolicy::AddAccessConfig(
    google::cloud::cpp::compute::instances::v1::AddAccessConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::AddResourcePolicies(
    google::cloud::cpp::compute::instances::v1::
        AddResourcePoliciesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::AggregatedListInstances(
    google::cloud::cpp::compute::instances::v1::
        AggregatedListInstancesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::AttachDisk(
    google::cloud::cpp::compute::instances::v1::AttachDiskRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::BulkInsert(
    google::cloud::cpp::compute::instances::v1::BulkInsertRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::DeleteInstance(
    google::cloud::cpp::compute::instances::v1::DeleteInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::DeleteAccessConfig(
    google::cloud::cpp::compute::instances::v1::
        DeleteAccessConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::DetachDisk(
    google::cloud::cpp::compute::instances::v1::DetachDiskRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::GetInstance(
    google::cloud::cpp::compute::instances::v1::GetInstanceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::GetEffectiveFirewalls(
    google::cloud::cpp::compute::instances::v1::
        GetEffectiveFirewallsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::GetGuestAttributes(
    google::cloud::cpp::compute::instances::v1::
        GetGuestAttributesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::GetIamPolicy(
    google::cloud::cpp::compute::instances::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::GetScreenshot(
    google::cloud::cpp::compute::instances::v1::GetScreenshotRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::GetSerialPortOutput(
    google::cloud::cpp::compute::instances::v1::
        GetSerialPortOutputRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::GetShieldedInstanceIdentity(
    google::cloud::cpp::compute::instances::v1::
        GetShieldedInstanceIdentityRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::InsertInstance(
    google::cloud::cpp::compute::instances::v1::InsertInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::ListInstances(
    google::cloud::cpp::compute::instances::v1::
        ListInstancesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::ListReferrers(
    google::cloud::cpp::compute::instances::v1::
        ListReferrersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::RemoveResourcePolicies(
    google::cloud::cpp::compute::instances::v1::
        RemoveResourcePoliciesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::Reset(
    google::cloud::cpp::compute::instances::v1::ResetRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::Resume(
    google::cloud::cpp::compute::instances::v1::ResumeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::SendDiagnosticInterrupt(
    google::cloud::cpp::compute::instances::v1::
        SendDiagnosticInterruptRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::SetDeletionProtection(
    google::cloud::cpp::compute::instances::v1::
        SetDeletionProtectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::SetDiskAutoDelete(
    google::cloud::cpp::compute::instances::v1::
        SetDiskAutoDeleteRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::SetIamPolicy(
    google::cloud::cpp::compute::instances::v1::SetIamPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::SetLabels(
    google::cloud::cpp::compute::instances::v1::SetLabelsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::SetMachineResources(
    google::cloud::cpp::compute::instances::v1::
        SetMachineResourcesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::SetMachineType(
    google::cloud::cpp::compute::instances::v1::SetMachineTypeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::SetMetadata(
    google::cloud::cpp::compute::instances::v1::SetMetadataRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::SetMinCpuPlatform(
    google::cloud::cpp::compute::instances::v1::
        SetMinCpuPlatformRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::SetName(
    google::cloud::cpp::compute::instances::v1::SetNameRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::SetScheduling(
    google::cloud::cpp::compute::instances::v1::SetSchedulingRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::SetServiceAccount(
    google::cloud::cpp::compute::instances::v1::
        SetServiceAccountRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
InstancesConnectionIdempotencyPolicy::SetShieldedInstanceIntegrityPolicy(
    google::cloud::cpp::compute::instances::v1::
        SetShieldedInstanceIntegrityPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::SetTags(
    google::cloud::cpp::compute::instances::v1::SetTagsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::SimulateMaintenanceEvent(
    google::cloud::cpp::compute::instances::v1::
        SimulateMaintenanceEventRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::Start(
    google::cloud::cpp::compute::instances::v1::StartRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::StartWithEncryptionKey(
    google::cloud::cpp::compute::instances::v1::
        StartWithEncryptionKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::Stop(
    google::cloud::cpp::compute::instances::v1::StopRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::Suspend(
    google::cloud::cpp::compute::instances::v1::SuspendRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::TestIamPermissions(
    google::cloud::cpp::compute::instances::v1::
        TestIamPermissionsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::UpdateInstance(
    google::cloud::cpp::compute::instances::v1::UpdateInstanceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::UpdateAccessConfig(
    google::cloud::cpp::compute::instances::v1::
        UpdateAccessConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::UpdateDisplayDevice(
    google::cloud::cpp::compute::instances::v1::
        UpdateDisplayDeviceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::UpdateNetworkInterface(
    google::cloud::cpp::compute::instances::v1::
        UpdateNetworkInterfaceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency InstancesConnectionIdempotencyPolicy::UpdateShieldedInstanceConfig(
    google::cloud::cpp::compute::instances::v1::
        UpdateShieldedInstanceConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<InstancesConnectionIdempotencyPolicy>
MakeDefaultInstancesConnectionIdempotencyPolicy() {
  return std::make_unique<InstancesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instances_v1
}  // namespace cloud
}  // namespace google
