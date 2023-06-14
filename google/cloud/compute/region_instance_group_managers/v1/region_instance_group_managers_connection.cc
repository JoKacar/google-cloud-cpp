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
// source:
// google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers.proto

#include "google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers_connection.h"
#include "google/cloud/compute/region_instance_group_managers/v1/internal/region_instance_group_managers_option_defaults.h"
#include "google/cloud/compute/region_instance_group_managers/v1/internal/region_instance_group_managers_tracing_connection.h"
#include "google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_region_instance_group_managers_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionInstanceGroupManagersConnection::
    ~RegionInstanceGroupManagersConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersConnection::AbandonInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        AbandonInstancesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersConnection::ApplyUpdatesToInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ApplyUpdatesToInstancesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersConnection::CreateInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        CreateInstancesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersConnection::DeleteRegionInstanceGroupManagers(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        DeleteRegionInstanceGroupManagersRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersConnection::DeleteInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        DeleteInstancesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersConnection::DeletePerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        DeletePerInstanceConfigsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>
RegionInstanceGroupManagersConnection::GetRegionInstanceGroupManagers(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        GetRegionInstanceGroupManagersRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersConnection::InsertRegionInstanceGroupManagers(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        InsertRegionInstanceGroupManagersRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::InstanceGroupManager>
RegionInstanceGroupManagersConnection::ListRegionInstanceGroupManagers(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListRegionInstanceGroupManagersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::InstanceGroupManager>>();
}

StreamRange<google::cloud::cpp::compute::v1::InstanceManagedByIgmError>
RegionInstanceGroupManagersConnection::ListErrors(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListErrorsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::cpp::compute::v1::InstanceManagedByIgmError>>();
}

StatusOr<google::cloud::cpp::compute::v1::
             RegionInstanceGroupManagersListInstancesResponse>
RegionInstanceGroupManagersConnection::ListManagedInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListManagedInstancesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::cpp::compute::v1::PerInstanceConfig>
RegionInstanceGroupManagersConnection::ListPerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListPerInstanceConfigsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::PerInstanceConfig>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersConnection::PatchRegionInstanceGroupManagers(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        PatchRegionInstanceGroupManagersRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersConnection::PatchPerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        PatchPerInstanceConfigsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersConnection::RecreateInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        RecreateInstancesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersConnection::Resize(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ResizeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersConnection::SetInstanceTemplate(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        SetInstanceTemplateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersConnection::SetTargetPools(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        SetTargetPoolsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersConnection::UpdatePerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        UpdatePerInstanceConfigsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_group_managers_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
