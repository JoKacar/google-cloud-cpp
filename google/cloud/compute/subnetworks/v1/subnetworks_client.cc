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
// source: google/cloud/compute/subnetworks/v1/subnetworks.proto

#include "google/cloud/compute/subnetworks/v1/subnetworks_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_subnetworks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SubnetworksClient::SubnetworksClient(
    ExperimentalTag, std::shared_ptr<SubnetworksConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
SubnetworksClient::~SubnetworksClient() = default;

StatusOr<google::cloud::cpp::compute::v1::SubnetworkAggregatedList>
SubnetworksClient::AggregatedListSubnetworks(std::string const& project,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::subnetworks::v1::AggregatedListSubnetworksRequest
      request;
  request.set_project(project);
  return connection_->AggregatedListSubnetworks(request);
}

StatusOr<google::cloud::cpp::compute::v1::SubnetworkAggregatedList>
SubnetworksClient::AggregatedListSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::
        AggregatedListSubnetworksRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListSubnetworks(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksClient::DeleteSubnetworks(std::string const& project,
                                     std::string const& region,
                                     std::string const& subnetwork,
                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::subnetworks::v1::DeleteSubnetworksRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_subnetwork(subnetwork);
  return connection_->DeleteSubnetworks(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksClient::DeleteSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::
        DeleteSubnetworksRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSubnetworks(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksClient::ExpandIpCidrRange(
    std::string const& project, std::string const& region,
    std::string const& subnetwork,
    google::cloud::cpp::compute::v1::SubnetworksExpandIpCidrRangeRequest const&
        subnetworks_expand_ip_cidr_range_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::subnetworks::v1::ExpandIpCidrRangeRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_subnetwork(subnetwork);
  *request.mutable_subnetworks_expand_ip_cidr_range_request_resource() =
      subnetworks_expand_ip_cidr_range_request_resource;
  return connection_->ExpandIpCidrRange(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksClient::ExpandIpCidrRange(
    google::cloud::cpp::compute::subnetworks::v1::
        ExpandIpCidrRangeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExpandIpCidrRange(request);
}

StatusOr<google::cloud::cpp::compute::v1::Subnetwork>
SubnetworksClient::GetSubnetworks(std::string const& project,
                                  std::string const& region,
                                  std::string const& subnetwork, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::subnetworks::v1::GetSubnetworksRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_subnetwork(subnetwork);
  return connection_->GetSubnetworks(request);
}

StatusOr<google::cloud::cpp::compute::v1::Subnetwork>
SubnetworksClient::GetSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::GetSubnetworksRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSubnetworks(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
SubnetworksClient::GetIamPolicy(std::string const& project,
                                std::string const& region,
                                std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::subnetworks::v1::GetIamPolicyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
SubnetworksClient::GetIamPolicy(
    google::cloud::cpp::compute::subnetworks::v1::GetIamPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksClient::InsertSubnetworks(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::Subnetwork const& subnetwork_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::subnetworks::v1::InsertSubnetworksRequest
      request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_subnetwork_resource() = subnetwork_resource;
  return connection_->InsertSubnetworks(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksClient::InsertSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::
        InsertSubnetworksRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertSubnetworks(request);
}

StreamRange<google::cloud::cpp::compute::v1::Subnetwork>
SubnetworksClient::ListSubnetworks(std::string const& project,
                                   std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::subnetworks::v1::ListSubnetworksRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListSubnetworks(request);
}

StreamRange<google::cloud::cpp::compute::v1::Subnetwork>
SubnetworksClient::ListSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::ListSubnetworksRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSubnetworks(std::move(request));
}

StreamRange<google::cloud::cpp::compute::v1::UsableSubnetwork>
SubnetworksClient::ListUsable(std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::subnetworks::v1::ListUsableRequest request;
  request.set_project(project);
  return connection_->ListUsable(request);
}

StreamRange<google::cloud::cpp::compute::v1::UsableSubnetwork>
SubnetworksClient::ListUsable(
    google::cloud::cpp::compute::subnetworks::v1::ListUsableRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListUsable(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksClient::PatchSubnetworks(
    std::string const& project, std::string const& region,
    std::string const& subnetwork,
    google::cloud::cpp::compute::v1::Subnetwork const& subnetwork_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::subnetworks::v1::PatchSubnetworksRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_subnetwork(subnetwork);
  *request.mutable_subnetwork_resource() = subnetwork_resource;
  return connection_->PatchSubnetworks(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksClient::PatchSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::PatchSubnetworksRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchSubnetworks(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
SubnetworksClient::SetIamPolicy(
    std::string const& project, std::string const& region,
    std::string const& resource,
    google::cloud::cpp::compute::v1::RegionSetPolicyRequest const&
        region_set_policy_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::subnetworks::v1::SetIamPolicyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_region_set_policy_request_resource() =
      region_set_policy_request_resource;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
SubnetworksClient::SetIamPolicy(
    google::cloud::cpp::compute::subnetworks::v1::SetIamPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksClient::SetPrivateIpGoogleAccess(
    std::string const& project, std::string const& region,
    std::string const& subnetwork,
    google::cloud::cpp::compute::v1::
        SubnetworksSetPrivateIpGoogleAccessRequest const&
            subnetworks_set_private_ip_google_access_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::subnetworks::v1::SetPrivateIpGoogleAccessRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_subnetwork(subnetwork);
  *request.mutable_subnetworks_set_private_ip_google_access_request_resource() =
      subnetworks_set_private_ip_google_access_request_resource;
  return connection_->SetPrivateIpGoogleAccess(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksClient::SetPrivateIpGoogleAccess(
    google::cloud::cpp::compute::subnetworks::v1::
        SetPrivateIpGoogleAccessRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetPrivateIpGoogleAccess(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
SubnetworksClient::TestIamPermissions(
    std::string const& project, std::string const& region,
    std::string const& resource,
    google::cloud::cpp::compute::v1::TestPermissionsRequest const&
        test_permissions_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::subnetworks::v1::TestIamPermissionsRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_test_permissions_request_resource() =
      test_permissions_request_resource;
  return connection_->TestIamPermissions(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
SubnetworksClient::TestIamPermissions(
    google::cloud::cpp::compute::subnetworks::v1::
        TestIamPermissionsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_subnetworks_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
