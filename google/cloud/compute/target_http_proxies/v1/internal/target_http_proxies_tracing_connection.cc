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

#include "google/cloud/compute/target_http_proxies/v1/internal/target_http_proxies_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_http_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TargetHttpProxiesTracingConnection::TargetHttpProxiesTracingConnection(
    std::shared_ptr<compute_target_http_proxies_v1::TargetHttpProxiesConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxyAggregatedList>
TargetHttpProxiesTracingConnection::AggregatedListTargetHttpProxies(google::cloud::cpp::compute::target_http_proxies::v1::AggregatedListTargetHttpProxiesRequest const& request) {
  auto span = internal::MakeSpan("compute_target_http_proxies_v1::TargetHttpProxiesConnection::AggregatedListTargetHttpProxies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AggregatedListTargetHttpProxies(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesTracingConnection::DeleteTargetHttpProxies(google::cloud::cpp::compute::target_http_proxies::v1::DeleteTargetHttpProxiesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_http_proxies_v1::TargetHttpProxiesConnection::DeleteTargetHttpProxies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteTargetHttpProxies(request));
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxy>
TargetHttpProxiesTracingConnection::GetTargetHttpProxies(google::cloud::cpp::compute::target_http_proxies::v1::GetTargetHttpProxiesRequest const& request) {
  auto span = internal::MakeSpan("compute_target_http_proxies_v1::TargetHttpProxiesConnection::GetTargetHttpProxies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTargetHttpProxies(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesTracingConnection::InsertTargetHttpProxies(google::cloud::cpp::compute::target_http_proxies::v1::InsertTargetHttpProxiesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_http_proxies_v1::TargetHttpProxiesConnection::InsertTargetHttpProxies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->InsertTargetHttpProxies(request));
}

StreamRange<google::cloud::cpp::compute::v1::TargetHttpProxy>
TargetHttpProxiesTracingConnection::ListTargetHttpProxies(google::cloud::cpp::compute::target_http_proxies::v1::ListTargetHttpProxiesRequest request) {
  auto span = internal::MakeSpan("compute_target_http_proxies_v1::TargetHttpProxiesConnection::ListTargetHttpProxies");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListTargetHttpProxies(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::cpp::compute::v1::TargetHttpProxy>(
        std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesTracingConnection::PatchTargetHttpProxies(google::cloud::cpp::compute::target_http_proxies::v1::PatchTargetHttpProxiesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_http_proxies_v1::TargetHttpProxiesConnection::PatchTargetHttpProxies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->PatchTargetHttpProxies(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesTracingConnection::SetUrlMap(google::cloud::cpp::compute::target_http_proxies::v1::SetUrlMapRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_http_proxies_v1::TargetHttpProxiesConnection::SetUrlMap");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetUrlMap(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_target_http_proxies_v1::TargetHttpProxiesConnection>
MakeTargetHttpProxiesTracingConnection(
    std::shared_ptr<compute_target_http_proxies_v1::TargetHttpProxiesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<TargetHttpProxiesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_http_proxies_v1_internal
}  // namespace cloud
}  // namespace google
