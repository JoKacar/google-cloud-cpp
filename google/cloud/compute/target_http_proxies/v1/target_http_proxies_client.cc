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

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_target_http_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetHttpProxiesClient::TargetHttpProxiesClient(
    ExperimentalTag, std::shared_ptr<TargetHttpProxiesConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
TargetHttpProxiesClient::~TargetHttpProxiesClient() = default;

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxyAggregatedList>
TargetHttpProxiesClient::AggregatedListTargetHttpProxies(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_http_proxies::v1::
      AggregatedListTargetHttpProxiesRequest request;
  request.set_project(project);
  return connection_->AggregatedListTargetHttpProxies(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxyAggregatedList>
TargetHttpProxiesClient::AggregatedListTargetHttpProxies(
    google::cloud::cpp::compute::target_http_proxies::v1::
        AggregatedListTargetHttpProxiesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListTargetHttpProxies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesClient::DeleteTargetHttpProxies(
    std::string const& project, std::string const& target_http_proxy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_http_proxies::v1::
      DeleteTargetHttpProxiesRequest request;
  request.set_project(project);
  request.set_target_http_proxy(target_http_proxy);
  return connection_->DeleteTargetHttpProxies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesClient::DeleteTargetHttpProxies(
    google::cloud::cpp::compute::target_http_proxies::v1::
        DeleteTargetHttpProxiesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTargetHttpProxies(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxy>
TargetHttpProxiesClient::GetTargetHttpProxies(
    std::string const& project, std::string const& target_http_proxy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_http_proxies::v1::
      GetTargetHttpProxiesRequest request;
  request.set_project(project);
  request.set_target_http_proxy(target_http_proxy);
  return connection_->GetTargetHttpProxies(request);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxy>
TargetHttpProxiesClient::GetTargetHttpProxies(
    google::cloud::cpp::compute::target_http_proxies::v1::
        GetTargetHttpProxiesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTargetHttpProxies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesClient::InsertTargetHttpProxies(
    std::string const& project,
    google::cloud::cpp::compute::v1::TargetHttpProxy const&
        target_http_proxy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_http_proxies::v1::
      InsertTargetHttpProxiesRequest request;
  request.set_project(project);
  *request.mutable_target_http_proxy_resource() = target_http_proxy_resource;
  return connection_->InsertTargetHttpProxies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesClient::InsertTargetHttpProxies(
    google::cloud::cpp::compute::target_http_proxies::v1::
        InsertTargetHttpProxiesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertTargetHttpProxies(request);
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
TargetHttpProxiesClient::PatchTargetHttpProxies(
    std::string const& project, std::string const& target_http_proxy,
    google::cloud::cpp::compute::v1::TargetHttpProxy const&
        target_http_proxy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::target_http_proxies::v1::
      PatchTargetHttpProxiesRequest request;
  request.set_project(project);
  request.set_target_http_proxy(target_http_proxy);
  *request.mutable_target_http_proxy_resource() = target_http_proxy_resource;
  return connection_->PatchTargetHttpProxies(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesClient::PatchTargetHttpProxies(
    google::cloud::cpp::compute::target_http_proxies::v1::
        PatchTargetHttpProxiesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchTargetHttpProxies(request);
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

#include "google/cloud/internal/port_undef.inc"
