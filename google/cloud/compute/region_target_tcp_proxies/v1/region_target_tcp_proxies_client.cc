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
// source: google/cloud/compute/region_target_tcp_proxies/v1/region_target_tcp_proxies.proto

#include "google/cloud/compute/region_target_tcp_proxies/v1/region_target_tcp_proxies_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_target_tcp_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionTargetTcpProxiesClient::RegionTargetTcpProxiesClient(ExperimentalTag,
    std::shared_ptr<RegionTargetTcpProxiesConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(std::move(opts),
      connection_->options())) {}
RegionTargetTcpProxiesClient::~RegionTargetTcpProxiesClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetTcpProxiesClient::DeleteRegionTargetTcpProxies(std::string const& project, std::string const& region, std::string const& target_tcp_proxy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_tcp_proxies::v1::DeleteRegionTargetTcpProxiesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_target_tcp_proxy(target_tcp_proxy);
  return connection_->DeleteRegionTargetTcpProxies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetTcpProxiesClient::DeleteRegionTargetTcpProxies(google::cloud::cpp::compute::region_target_tcp_proxies::v1::DeleteRegionTargetTcpProxiesRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRegionTargetTcpProxies(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy>
RegionTargetTcpProxiesClient::GetRegionTargetTcpProxies(std::string const& project, std::string const& region, std::string const& target_tcp_proxy, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_tcp_proxies::v1::GetRegionTargetTcpProxiesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_target_tcp_proxy(target_tcp_proxy);
  return connection_->GetRegionTargetTcpProxies(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy>
RegionTargetTcpProxiesClient::GetRegionTargetTcpProxies(google::cloud::cpp::compute::region_target_tcp_proxies::v1::GetRegionTargetTcpProxiesRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRegionTargetTcpProxies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetTcpProxiesClient::InsertRegionTargetTcpProxies(std::string const& project, std::string const& region, google::cloud::cpp::compute::v1::TargetTcpProxy const& target_tcp_proxy_resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_tcp_proxies::v1::InsertRegionTargetTcpProxiesRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_target_tcp_proxy_resource() = target_tcp_proxy_resource;
  return connection_->InsertRegionTargetTcpProxies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetTcpProxiesClient::InsertRegionTargetTcpProxies(google::cloud::cpp::compute::region_target_tcp_proxies::v1::InsertRegionTargetTcpProxiesRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertRegionTargetTcpProxies(request);
}

StreamRange<google::cloud::cpp::compute::v1::TargetTcpProxy>
RegionTargetTcpProxiesClient::ListRegionTargetTcpProxies(std::string const& project, std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_target_tcp_proxies::v1::ListRegionTargetTcpProxiesRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionTargetTcpProxies(request);
}

StreamRange<google::cloud::cpp::compute::v1::TargetTcpProxy>
RegionTargetTcpProxiesClient::ListRegionTargetTcpProxies(google::cloud::cpp::compute::region_target_tcp_proxies::v1::ListRegionTargetTcpProxiesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionTargetTcpProxies(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_target_tcp_proxies_v1
}  // namespace cloud
}  // namespace google
