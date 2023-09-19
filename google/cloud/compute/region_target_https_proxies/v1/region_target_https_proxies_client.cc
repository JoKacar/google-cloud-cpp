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
// google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies.proto

#include "google/cloud/compute/region_target_https_proxies/v1/region_target_https_proxies_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_target_https_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionTargetHttpsProxiesClient::RegionTargetHttpsProxiesClient(
    std::shared_ptr<RegionTargetHttpsProxiesConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionTargetHttpsProxiesClient::~RegionTargetHttpsProxiesClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpsProxiesClient::DeleteTargetHttpsProxy(
    std::string const& project, std::string const& region,
    std::string const& target_https_proxy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_https_proxies::v1::
      DeleteTargetHttpsProxyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_target_https_proxy(target_https_proxy);
  return connection_->DeleteTargetHttpsProxy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpsProxiesClient::DeleteTargetHttpsProxy(
    google::cloud::cpp::compute::region_target_https_proxies::v1::
        DeleteTargetHttpsProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTargetHttpsProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
RegionTargetHttpsProxiesClient::GetTargetHttpsProxy(
    std::string const& project, std::string const& region,
    std::string const& target_https_proxy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_https_proxies::v1::
      GetTargetHttpsProxyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_target_https_proxy(target_https_proxy);
  return connection_->GetTargetHttpsProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
RegionTargetHttpsProxiesClient::GetTargetHttpsProxy(
    google::cloud::cpp::compute::region_target_https_proxies::v1::
        GetTargetHttpsProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTargetHttpsProxy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpsProxiesClient::InsertTargetHttpsProxy(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::TargetHttpsProxy const&
        target_https_proxy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_https_proxies::v1::
      InsertTargetHttpsProxyRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_target_https_proxy_resource() = target_https_proxy_resource;
  return connection_->InsertTargetHttpsProxy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpsProxiesClient::InsertTargetHttpsProxy(
    google::cloud::cpp::compute::region_target_https_proxies::v1::
        InsertTargetHttpsProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertTargetHttpsProxy(request);
}

StreamRange<google::cloud::cpp::compute::v1::TargetHttpsProxy>
RegionTargetHttpsProxiesClient::ListRegionTargetHttpsProxies(
    std::string const& project, std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_https_proxies::v1::
      ListRegionTargetHttpsProxiesRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionTargetHttpsProxies(request);
}

StreamRange<google::cloud::cpp::compute::v1::TargetHttpsProxy>
RegionTargetHttpsProxiesClient::ListRegionTargetHttpsProxies(
    google::cloud::cpp::compute::region_target_https_proxies::v1::
        ListRegionTargetHttpsProxiesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionTargetHttpsProxies(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpsProxiesClient::PatchTargetHttpsProxy(
    std::string const& project, std::string const& region,
    std::string const& target_https_proxy,
    google::cloud::cpp::compute::v1::TargetHttpsProxy const&
        target_https_proxy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_https_proxies::v1::
      PatchTargetHttpsProxyRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_target_https_proxy(target_https_proxy);
  *request.mutable_target_https_proxy_resource() = target_https_proxy_resource;
  return connection_->PatchTargetHttpsProxy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpsProxiesClient::PatchTargetHttpsProxy(
    google::cloud::cpp::compute::region_target_https_proxies::v1::
        PatchTargetHttpsProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchTargetHttpsProxy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpsProxiesClient::SetSslCertificates(
    std::string const& project, std::string const& region,
    std::string const& target_https_proxy,
    google::cloud::cpp::compute::v1::
        RegionTargetHttpsProxiesSetSslCertificatesRequest const&
            region_target_https_proxies_set_ssl_certificates_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_https_proxies::v1::
      SetSslCertificatesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_target_https_proxy(target_https_proxy);
  *request
       .mutable_region_target_https_proxies_set_ssl_certificates_request_resource() =
      region_target_https_proxies_set_ssl_certificates_request_resource;
  return connection_->SetSslCertificates(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpsProxiesClient::SetSslCertificates(
    google::cloud::cpp::compute::region_target_https_proxies::v1::
        SetSslCertificatesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetSslCertificates(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpsProxiesClient::SetUrlMap(
    std::string const& project, std::string const& region,
    std::string const& target_https_proxy,
    google::cloud::cpp::compute::v1::UrlMapReference const&
        url_map_reference_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_https_proxies::v1::SetUrlMapRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_target_https_proxy(target_https_proxy);
  *request.mutable_url_map_reference_resource() = url_map_reference_resource;
  return connection_->SetUrlMap(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetHttpsProxiesClient::SetUrlMap(
    google::cloud::cpp::compute::region_target_https_proxies::v1::
        SetUrlMapRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetUrlMap(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_target_https_proxies_v1
}  // namespace cloud
}  // namespace google
