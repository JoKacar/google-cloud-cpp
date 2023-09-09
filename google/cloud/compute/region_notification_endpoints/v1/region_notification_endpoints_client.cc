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
// google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.proto

#include "google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_notification_endpoints_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionNotificationEndpointsClient::RegionNotificationEndpointsClient(
    ExperimentalTag,
    std::shared_ptr<RegionNotificationEndpointsConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionNotificationEndpointsClient::~RegionNotificationEndpointsClient() =
    default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNotificationEndpointsClient::DeleteRegionNotificationEndpoint(
    std::string const& project, std::string const& region,
    std::string const& notification_endpoint, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_notification_endpoints::v1::
      DeleteRegionNotificationEndpointRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_notification_endpoint(notification_endpoint);
  return connection_->DeleteRegionNotificationEndpoint(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNotificationEndpointsClient::DeleteRegionNotificationEndpoint(
    google::cloud::cpp::compute::region_notification_endpoints::v1::
        DeleteRegionNotificationEndpointRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRegionNotificationEndpoint(request);
}

StatusOr<google::cloud::cpp::compute::v1::NotificationEndpoint>
RegionNotificationEndpointsClient::GetRegionNotificationEndpoint(
    std::string const& project, std::string const& region,
    std::string const& notification_endpoint, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_notification_endpoints::v1::
      GetRegionNotificationEndpointRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_notification_endpoint(notification_endpoint);
  return connection_->GetRegionNotificationEndpoint(request);
}

StatusOr<google::cloud::cpp::compute::v1::NotificationEndpoint>
RegionNotificationEndpointsClient::GetRegionNotificationEndpoint(
    google::cloud::cpp::compute::region_notification_endpoints::v1::
        GetRegionNotificationEndpointRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRegionNotificationEndpoint(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNotificationEndpointsClient::InsertRegionNotificationEndpoint(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::NotificationEndpoint const&
        notification_endpoint_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_notification_endpoints::v1::
      InsertRegionNotificationEndpointRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_notification_endpoint_resource() =
      notification_endpoint_resource;
  return connection_->InsertRegionNotificationEndpoint(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNotificationEndpointsClient::InsertRegionNotificationEndpoint(
    google::cloud::cpp::compute::region_notification_endpoints::v1::
        InsertRegionNotificationEndpointRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertRegionNotificationEndpoint(request);
}

StreamRange<google::cloud::cpp::compute::v1::NotificationEndpoint>
RegionNotificationEndpointsClient::ListRegionNotificationEndpoints(
    std::string const& project, std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_notification_endpoints::v1::
      ListRegionNotificationEndpointsRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionNotificationEndpoints(request);
}

StreamRange<google::cloud::cpp::compute::v1::NotificationEndpoint>
RegionNotificationEndpointsClient::ListRegionNotificationEndpoints(
    google::cloud::cpp::compute::region_notification_endpoints::v1::
        ListRegionNotificationEndpointsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionNotificationEndpoints(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_notification_endpoints_v1
}  // namespace cloud
}  // namespace google
