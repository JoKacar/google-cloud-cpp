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
// source: google/cloud/compute/network_attachments/v1/network_attachments.proto

#include "google/cloud/compute/network_attachments/v1/network_attachments_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_network_attachments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworkAttachmentsClient::NetworkAttachmentsClient(
    ExperimentalTag, std::shared_ptr<NetworkAttachmentsConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
NetworkAttachmentsClient::~NetworkAttachmentsClient() = default;

StatusOr<google::cloud::cpp::compute::v1::NetworkAttachmentAggregatedList>
NetworkAttachmentsClient::AggregatedListNetworkAttachments(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::network_attachments::v1::
      AggregatedListNetworkAttachmentsRequest request;
  request.set_project(project);
  return connection_->AggregatedListNetworkAttachments(request);
}

StatusOr<google::cloud::cpp::compute::v1::NetworkAttachmentAggregatedList>
NetworkAttachmentsClient::AggregatedListNetworkAttachments(
    google::cloud::cpp::compute::network_attachments::v1::
        AggregatedListNetworkAttachmentsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListNetworkAttachments(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkAttachmentsClient::DeleteNetworkAttachments(
    std::string const& project, std::string const& region,
    std::string const& network_attachment, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::network_attachments::v1::
      DeleteNetworkAttachmentsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_network_attachment(network_attachment);
  return connection_->DeleteNetworkAttachments(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkAttachmentsClient::DeleteNetworkAttachments(
    google::cloud::cpp::compute::network_attachments::v1::
        DeleteNetworkAttachmentsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNetworkAttachments(request);
}

StatusOr<google::cloud::cpp::compute::v1::NetworkAttachment>
NetworkAttachmentsClient::GetNetworkAttachments(
    std::string const& project, std::string const& region,
    std::string const& network_attachment, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::network_attachments::v1::
      GetNetworkAttachmentsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_network_attachment(network_attachment);
  return connection_->GetNetworkAttachments(request);
}

StatusOr<google::cloud::cpp::compute::v1::NetworkAttachment>
NetworkAttachmentsClient::GetNetworkAttachments(
    google::cloud::cpp::compute::network_attachments::v1::
        GetNetworkAttachmentsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetNetworkAttachments(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NetworkAttachmentsClient::GetIamPolicy(std::string const& project,
                                       std::string const& region,
                                       std::string const& resource,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::network_attachments::v1::GetIamPolicyRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NetworkAttachmentsClient::GetIamPolicy(
    google::cloud::cpp::compute::network_attachments::v1::
        GetIamPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkAttachmentsClient::InsertNetworkAttachments(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::NetworkAttachment const&
        network_attachment_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::network_attachments::v1::
      InsertNetworkAttachmentsRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_network_attachment_resource() = network_attachment_resource;
  return connection_->InsertNetworkAttachments(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkAttachmentsClient::InsertNetworkAttachments(
    google::cloud::cpp::compute::network_attachments::v1::
        InsertNetworkAttachmentsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertNetworkAttachments(request);
}

StreamRange<google::cloud::cpp::compute::v1::NetworkAttachment>
NetworkAttachmentsClient::ListNetworkAttachments(std::string const& project,
                                                 std::string const& region,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::network_attachments::v1::
      ListNetworkAttachmentsRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListNetworkAttachments(request);
}

StreamRange<google::cloud::cpp::compute::v1::NetworkAttachment>
NetworkAttachmentsClient::ListNetworkAttachments(
    google::cloud::cpp::compute::network_attachments::v1::
        ListNetworkAttachmentsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListNetworkAttachments(std::move(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NetworkAttachmentsClient::SetIamPolicy(
    std::string const& project, std::string const& region,
    std::string const& resource,
    google::cloud::cpp::compute::v1::RegionSetPolicyRequest const&
        region_set_policy_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::network_attachments::v1::SetIamPolicyRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_region_set_policy_request_resource() =
      region_set_policy_request_resource;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NetworkAttachmentsClient::SetIamPolicy(
    google::cloud::cpp::compute::network_attachments::v1::
        SetIamPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NetworkAttachmentsClient::TestIamPermissions(
    std::string const& project, std::string const& region,
    std::string const& resource,
    google::cloud::cpp::compute::v1::TestPermissionsRequest const&
        test_permissions_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::network_attachments::v1::
      TestIamPermissionsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_test_permissions_request_resource() =
      test_permissions_request_resource;
  return connection_->TestIamPermissions(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NetworkAttachmentsClient::TestIamPermissions(
    google::cloud::cpp::compute::network_attachments::v1::
        TestIamPermissionsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_attachments_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
