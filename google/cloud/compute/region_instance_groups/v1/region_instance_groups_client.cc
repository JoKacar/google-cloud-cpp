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
// google/cloud/compute/region_instance_groups/v1/region_instance_groups.proto

#include "google/cloud/compute/region_instance_groups/v1/region_instance_groups_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_instance_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionInstanceGroupsClient::RegionInstanceGroupsClient(
    ExperimentalTag, std::shared_ptr<RegionInstanceGroupsConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionInstanceGroupsClient::~RegionInstanceGroupsClient() = default;

StatusOr<google::cloud::cpp::compute::v1::InstanceGroup>
RegionInstanceGroupsClient::GetRegionInstanceGroup(
    std::string const& project, std::string const& region,
    std::string const& instance_group, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_groups::v1::
      GetRegionInstanceGroupRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group(instance_group);
  return connection_->GetRegionInstanceGroup(request);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroup>
RegionInstanceGroupsClient::GetRegionInstanceGroup(
    google::cloud::cpp::compute::region_instance_groups::v1::
        GetRegionInstanceGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRegionInstanceGroup(request);
}

StreamRange<google::cloud::cpp::compute::v1::InstanceGroup>
RegionInstanceGroupsClient::ListRegionInstanceGroups(std::string const& project,
                                                     std::string const& region,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_groups::v1::
      ListRegionInstanceGroupsRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionInstanceGroups(request);
}

StreamRange<google::cloud::cpp::compute::v1::InstanceGroup>
RegionInstanceGroupsClient::ListRegionInstanceGroups(
    google::cloud::cpp::compute::region_instance_groups::v1::
        ListRegionInstanceGroupsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionInstanceGroups(std::move(request));
}

StreamRange<google::cloud::cpp::compute::v1::InstanceWithNamedPorts>
RegionInstanceGroupsClient::ListInstances(
    std::string const& project, std::string const& region,
    std::string const& instance_group,
    google::cloud::cpp::compute::v1::
        RegionInstanceGroupsListInstancesRequest const&
            region_instance_groups_list_instances_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_groups::v1::ListInstancesRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group(instance_group);
  *request.mutable_region_instance_groups_list_instances_request_resource() =
      region_instance_groups_list_instances_request_resource;
  return connection_->ListInstances(request);
}

StreamRange<google::cloud::cpp::compute::v1::InstanceWithNamedPorts>
RegionInstanceGroupsClient::ListInstances(
    google::cloud::cpp::compute::region_instance_groups::v1::
        ListInstancesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstances(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupsClient::SetNamedPorts(
    std::string const& project, std::string const& region,
    std::string const& instance_group,
    google::cloud::cpp::compute::v1::
        RegionInstanceGroupsSetNamedPortsRequest const&
            region_instance_groups_set_named_ports_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_groups::v1::SetNamedPortsRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group(instance_group);
  *request.mutable_region_instance_groups_set_named_ports_request_resource() =
      region_instance_groups_set_named_ports_request_resource;
  return connection_->SetNamedPorts(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupsClient::SetNamedPorts(
    google::cloud::cpp::compute::region_instance_groups::v1::
        SetNamedPortsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetNamedPorts(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_groups_v1
}  // namespace cloud
}  // namespace google
