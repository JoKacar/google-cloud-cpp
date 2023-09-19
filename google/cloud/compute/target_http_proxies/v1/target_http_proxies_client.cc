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
// source: google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto

#include "google/cloud/compute/target_http_proxies/v1/target_http_proxies_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_http_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetHttpProxiesClient::TargetHttpProxiesClient(
    std::shared_ptr<TargetHttpProxiesConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
TargetHttpProxiesClient::~TargetHttpProxiesClient() = default;

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::TargetHttpProxiesScopedList>>
TargetHttpProxiesClient::AggregatedListTargetHttpProxies(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_http_proxies::v1::
      AggregatedListTargetHttpProxiesRequest request;
  request.set_project(project);
  return connection_->AggregatedListTargetHttpProxies(request);
}

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::TargetHttpProxiesScopedList>>
TargetHttpProxiesClient::AggregatedListTargetHttpProxies(
    google::cloud::cpp::compute::target_http_proxies::v1::
        AggregatedListTargetHttpProxiesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListTargetHttpProxies(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesClient::DeleteTargetHttpProxy(
    std::string const& project, std::string const& target_http_proxy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_http_proxies::v1::
      DeleteTargetHttpProxyRequest request;
  request.set_project(project);
  request.set_target_http_proxy(target_http_proxy);
  return connection_->DeleteTargetHttpProxy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesClient::DeleteTargetHttpProxy(
    google::cloud::cpp::compute::target_http_proxies::v1::
        DeleteTargetHttpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTargetHttpProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxy>
TargetHttpProxiesClient::GetTargetHttpProxy(
    std::string const& project, std::string const& target_http_proxy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_http_proxies::v1::
      GetTargetHttpProxyRequest request;
  request.set_project(project);
  request.set_target_http_proxy(target_http_proxy);
  return connection_->GetTargetHttpProxy(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxy>
TargetHttpProxiesClient::GetTargetHttpProxy(
    google::cloud::cpp::compute::target_http_proxies::v1::
        GetTargetHttpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTargetHttpProxy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesClient::InsertTargetHttpProxy(
    std::string const& project,
    google::cloud::cpp::compute::v1::TargetHttpProxy const&
        target_http_proxy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_http_proxies::v1::
      InsertTargetHttpProxyRequest request;
  request.set_project(project);
  *request.mutable_target_http_proxy_resource() = target_http_proxy_resource;
  return connection_->InsertTargetHttpProxy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesClient::InsertTargetHttpProxy(
    google::cloud::cpp::compute::target_http_proxies::v1::
        InsertTargetHttpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertTargetHttpProxy(request);
}

StreamRange<google::cloud::cpp::compute::v1::TargetHttpProxy>
TargetHttpProxiesClient::ListTargetHttpProxies(std::string const& project,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_http_proxies::v1::
      ListTargetHttpProxiesRequest request;
  request.set_project(project);
  return connection_->ListTargetHttpProxies(request);
}

StreamRange<google::cloud::cpp::compute::v1::TargetHttpProxy>
TargetHttpProxiesClient::ListTargetHttpProxies(
    google::cloud::cpp::compute::target_http_proxies::v1::
        ListTargetHttpProxiesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTargetHttpProxies(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesClient::PatchTargetHttpProxy(
    std::string const& project, std::string const& target_http_proxy,
    google::cloud::cpp::compute::v1::TargetHttpProxy const&
        target_http_proxy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_http_proxies::v1::
      PatchTargetHttpProxyRequest request;
  request.set_project(project);
  request.set_target_http_proxy(target_http_proxy);
  *request.mutable_target_http_proxy_resource() = target_http_proxy_resource;
  return connection_->PatchTargetHttpProxy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesClient::PatchTargetHttpProxy(
    google::cloud::cpp::compute::target_http_proxies::v1::
        PatchTargetHttpProxyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchTargetHttpProxy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesClient::SetUrlMap(
    std::string const& project, std::string const& target_http_proxy,
    google::cloud::cpp::compute::v1::UrlMapReference const&
        url_map_reference_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_http_proxies::v1::SetUrlMapRequest
      request;
  request.set_project(project);
  request.set_target_http_proxy(target_http_proxy);
  *request.mutable_url_map_reference_resource() = url_map_reference_resource;
  return connection_->SetUrlMap(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesClient::SetUrlMap(
    google::cloud::cpp::compute::target_http_proxies::v1::
        SetUrlMapRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetUrlMap(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_http_proxies_v1
}  // namespace cloud
}  // namespace google
