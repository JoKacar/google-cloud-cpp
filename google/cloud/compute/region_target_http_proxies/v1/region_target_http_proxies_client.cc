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
// google/cloud/compute/region_target_http_proxies/v1/region_target_http_proxies.proto

#include "google/cloud/compute/region_target_http_proxies/v1/region_target_http_proxies_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_target_http_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionTargetHttpProxiesClient::RegionTargetHttpProxiesClient(
    ExperimentalTag,
    std::shared_ptr<RegionTargetHttpProxiesConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionTargetHttpProxiesClient::~RegionTargetHttpProxiesClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpProxiesClient::DeleteRegionTargetHttpProxy(
    std::string const& project, std::string const& region,
    std::string const& target_http_proxy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_http_proxies::v1::
      DeleteRegionTargetHttpProxyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_target_http_proxy(target_http_proxy);
  return connection_->DeleteRegionTargetHttpProxy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpProxiesClient::DeleteRegionTargetHttpProxy(
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        DeleteRegionTargetHttpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRegionTargetHttpProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxy>
RegionTargetHttpProxiesClient::GetRegionTargetHttpProxy(
    std::string const& project, std::string const& region,
    std::string const& target_http_proxy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_http_proxies::v1::
      GetRegionTargetHttpProxyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_target_http_proxy(target_http_proxy);
  return connection_->GetRegionTargetHttpProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxy>
RegionTargetHttpProxiesClient::GetRegionTargetHttpProxy(
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        GetRegionTargetHttpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRegionTargetHttpProxy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpProxiesClient::InsertRegionTargetHttpProxy(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::TargetHttpProxy const&
        target_http_proxy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_http_proxies::v1::
      InsertRegionTargetHttpProxyRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_target_http_proxy_resource() = target_http_proxy_resource;
  return connection_->InsertRegionTargetHttpProxy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpProxiesClient::InsertRegionTargetHttpProxy(
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        InsertRegionTargetHttpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertRegionTargetHttpProxy(request);
}

StreamRange<google::cloud::cpp::compute::v1::TargetHttpProxy>
RegionTargetHttpProxiesClient::ListRegionTargetHttpProxies(
    std::string const& project, std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_http_proxies::v1::
      ListRegionTargetHttpProxiesRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionTargetHttpProxies(request);
}

StreamRange<google::cloud::cpp::compute::v1::TargetHttpProxy>
RegionTargetHttpProxiesClient::ListRegionTargetHttpProxies(
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        ListRegionTargetHttpProxiesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionTargetHttpProxies(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpProxiesClient::SetUrlMap(
    std::string const& project, std::string const& region,
    std::string const& target_http_proxy,
    google::cloud::cpp::compute::v1::UrlMapReference const&
        url_map_reference_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_http_proxies::v1::SetUrlMapRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_target_http_proxy(target_http_proxy);
  *request.mutable_url_map_reference_resource() = url_map_reference_resource;
  return connection_->SetUrlMap(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpProxiesClient::SetUrlMap(
    google::cloud::cpp::compute::region_target_http_proxies::v1::
        SetUrlMapRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetUrlMap(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_target_http_proxies_v1
}  // namespace cloud
}  // namespace google
