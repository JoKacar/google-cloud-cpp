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
// source: google/cloud/compute/projects/v1/projects.proto

#include "google/cloud/compute/projects/v1/projects_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_projects_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProjectsClient::ProjectsClient(std::shared_ptr<ProjectsConnection> connection,
                               Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ProjectsClient::~ProjectsClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::DisableXpnHost(std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::projects::v1::DisableXpnHostRequest request;
  request.set_project(project);
  return connection_->DisableXpnHost(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::DisableXpnHost(
    google::cloud::cpp::compute::projects::v1::DisableXpnHostRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DisableXpnHost(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::DisableXpnResource(
    std::string const& project,
    google::cloud::cpp::compute::v1::ProjectsDisableXpnResourceRequest const&
        projects_disable_xpn_resource_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::projects::v1::DisableXpnResourceRequest request;
  request.set_project(project);
  *request.mutable_projects_disable_xpn_resource_request_resource() =
      projects_disable_xpn_resource_request_resource;
  return connection_->DisableXpnResource(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::DisableXpnResource(
    google::cloud::cpp::compute::projects::v1::DisableXpnResourceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DisableXpnResource(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::EnableXpnHost(std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::projects::v1::EnableXpnHostRequest request;
  request.set_project(project);
  return connection_->EnableXpnHost(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::EnableXpnHost(
    google::cloud::cpp::compute::projects::v1::EnableXpnHostRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->EnableXpnHost(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::EnableXpnResource(
    std::string const& project,
    google::cloud::cpp::compute::v1::ProjectsEnableXpnResourceRequest const&
        projects_enable_xpn_resource_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::projects::v1::EnableXpnResourceRequest request;
  request.set_project(project);
  *request.mutable_projects_enable_xpn_resource_request_resource() =
      projects_enable_xpn_resource_request_resource;
  return connection_->EnableXpnResource(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::EnableXpnResource(
    google::cloud::cpp::compute::projects::v1::EnableXpnResourceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->EnableXpnResource(request);
}

StatusOr<google::cloud::cpp::compute::v1::Project> ProjectsClient::GetProject(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::projects::v1::GetProjectRequest request;
  request.set_project(project);
  return connection_->GetProject(request);
}

StatusOr<google::cloud::cpp::compute::v1::Project> ProjectsClient::GetProject(
    google::cloud::cpp::compute::projects::v1::GetProjectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetProject(request);
}

StatusOr<google::cloud::cpp::compute::v1::Project> ProjectsClient::GetXpnHost(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::projects::v1::GetXpnHostRequest request;
  request.set_project(project);
  return connection_->GetXpnHost(request);
}

StatusOr<google::cloud::cpp::compute::v1::Project> ProjectsClient::GetXpnHost(
    google::cloud::cpp::compute::projects::v1::GetXpnHostRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetXpnHost(request);
}

StatusOr<google::cloud::cpp::compute::v1::ProjectsGetXpnResources>
ProjectsClient::GetXpnResources(std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::projects::v1::GetXpnResourcesRequest request;
  request.set_project(project);
  return connection_->GetXpnResources(request);
}

StatusOr<google::cloud::cpp::compute::v1::ProjectsGetXpnResources>
ProjectsClient::GetXpnResources(
    google::cloud::cpp::compute::projects::v1::GetXpnResourcesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetXpnResources(request);
}

StreamRange<google::cloud::cpp::compute::v1::Project>
ProjectsClient::ListXpnHosts(
    std::string const& project,
    google::cloud::cpp::compute::v1::ProjectsListXpnHostsRequest const&
        projects_list_xpn_hosts_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::projects::v1::ListXpnHostsRequest request;
  request.set_project(project);
  *request.mutable_projects_list_xpn_hosts_request_resource() =
      projects_list_xpn_hosts_request_resource;
  return connection_->ListXpnHosts(request);
}

StreamRange<google::cloud::cpp::compute::v1::Project>
ProjectsClient::ListXpnHosts(
    google::cloud::cpp::compute::projects::v1::ListXpnHostsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListXpnHosts(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::MoveDisk(std::string const& project,
                         google::cloud::cpp::compute::v1::DiskMoveRequest const&
                             disk_move_request_resource,
                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::projects::v1::MoveDiskRequest request;
  request.set_project(project);
  *request.mutable_disk_move_request_resource() = disk_move_request_resource;
  return connection_->MoveDisk(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::MoveDisk(
    google::cloud::cpp::compute::projects::v1::MoveDiskRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->MoveDisk(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::MoveInstance(
    std::string const& project,
    google::cloud::cpp::compute::v1::InstanceMoveRequest const&
        instance_move_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::projects::v1::MoveInstanceRequest request;
  request.set_project(project);
  *request.mutable_instance_move_request_resource() =
      instance_move_request_resource;
  return connection_->MoveInstance(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::MoveInstance(
    google::cloud::cpp::compute::projects::v1::MoveInstanceRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->MoveInstance(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::SetCloudArmorTier(
    std::string const& project,
    google::cloud::cpp::compute::v1::ProjectsSetCloudArmorTierRequest const&
        projects_set_cloud_armor_tier_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::projects::v1::SetCloudArmorTierRequest request;
  request.set_project(project);
  *request.mutable_projects_set_cloud_armor_tier_request_resource() =
      projects_set_cloud_armor_tier_request_resource;
  return connection_->SetCloudArmorTier(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::SetCloudArmorTier(
    google::cloud::cpp::compute::projects::v1::SetCloudArmorTierRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetCloudArmorTier(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::SetCommonInstanceMetadata(
    std::string const& project,
    google::cloud::cpp::compute::v1::Metadata const& metadata_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::projects::v1::SetCommonInstanceMetadataRequest
      request;
  request.set_project(project);
  *request.mutable_metadata_resource() = metadata_resource;
  return connection_->SetCommonInstanceMetadata(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::SetCommonInstanceMetadata(
    google::cloud::cpp::compute::projects::v1::
        SetCommonInstanceMetadataRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetCommonInstanceMetadata(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::SetDefaultNetworkTier(
    std::string const& project,
    google::cloud::cpp::compute::v1::ProjectsSetDefaultNetworkTierRequest const&
        projects_set_default_network_tier_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::projects::v1::SetDefaultNetworkTierRequest
      request;
  request.set_project(project);
  *request.mutable_projects_set_default_network_tier_request_resource() =
      projects_set_default_network_tier_request_resource;
  return connection_->SetDefaultNetworkTier(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::SetDefaultNetworkTier(
    google::cloud::cpp::compute::projects::v1::
        SetDefaultNetworkTierRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetDefaultNetworkTier(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::SetUsageExportBucket(
    std::string const& project,
    google::cloud::cpp::compute::v1::UsageExportLocation const&
        usage_export_location_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::projects::v1::SetUsageExportBucketRequest
      request;
  request.set_project(project);
  *request.mutable_usage_export_location_resource() =
      usage_export_location_resource;
  return connection_->SetUsageExportBucket(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ProjectsClient::SetUsageExportBucket(
    google::cloud::cpp::compute::projects::v1::
        SetUsageExportBucketRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetUsageExportBucket(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_projects_v1
}  // namespace cloud
}  // namespace google
