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
// source: google/cloud/compute/target_pools/v1/target_pools.proto

#include "google/cloud/compute/target_pools/v1/internal/target_pools_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_pools_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TargetPoolsTracingConnection::TargetPoolsTracingConnection(
    std::shared_ptr<compute_target_pools_v1::TargetPoolsConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsTracingConnection::AddHealthCheck(google::cloud::cpp::compute::target_pools::v1::AddHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_pools_v1::TargetPoolsConnection::AddHealthCheck");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->AddHealthCheck(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsTracingConnection::AddInstance(google::cloud::cpp::compute::target_pools::v1::AddInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_pools_v1::TargetPoolsConnection::AddInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->AddInstance(request));
}

StatusOr<google::cloud::cpp::compute::v1::TargetPoolAggregatedList>
TargetPoolsTracingConnection::AggregatedListTargetPools(google::cloud::cpp::compute::target_pools::v1::AggregatedListTargetPoolsRequest const& request) {
  auto span = internal::MakeSpan("compute_target_pools_v1::TargetPoolsConnection::AggregatedListTargetPools");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AggregatedListTargetPools(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsTracingConnection::DeleteTargetPools(google::cloud::cpp::compute::target_pools::v1::DeleteTargetPoolsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_pools_v1::TargetPoolsConnection::DeleteTargetPools");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteTargetPools(request));
}

StatusOr<google::cloud::cpp::compute::v1::TargetPool>
TargetPoolsTracingConnection::GetTargetPools(google::cloud::cpp::compute::target_pools::v1::GetTargetPoolsRequest const& request) {
  auto span = internal::MakeSpan("compute_target_pools_v1::TargetPoolsConnection::GetTargetPools");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTargetPools(request));
}

StatusOr<google::cloud::cpp::compute::v1::TargetPoolInstanceHealth>
TargetPoolsTracingConnection::GetHealth(google::cloud::cpp::compute::target_pools::v1::GetHealthRequest const& request) {
  auto span = internal::MakeSpan("compute_target_pools_v1::TargetPoolsConnection::GetHealth");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetHealth(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsTracingConnection::InsertTargetPools(google::cloud::cpp::compute::target_pools::v1::InsertTargetPoolsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_pools_v1::TargetPoolsConnection::InsertTargetPools");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->InsertTargetPools(request));
}

StreamRange<google::cloud::cpp::compute::v1::TargetPool>
TargetPoolsTracingConnection::ListTargetPools(google::cloud::cpp::compute::target_pools::v1::ListTargetPoolsRequest request) {
  auto span = internal::MakeSpan("compute_target_pools_v1::TargetPoolsConnection::ListTargetPools");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListTargetPools(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::cpp::compute::v1::TargetPool>(
        std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsTracingConnection::RemoveHealthCheck(google::cloud::cpp::compute::target_pools::v1::RemoveHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_pools_v1::TargetPoolsConnection::RemoveHealthCheck");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RemoveHealthCheck(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsTracingConnection::RemoveInstance(google::cloud::cpp::compute::target_pools::v1::RemoveInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_pools_v1::TargetPoolsConnection::RemoveInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RemoveInstance(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsTracingConnection::SetBackup(google::cloud::cpp::compute::target_pools::v1::SetBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_pools_v1::TargetPoolsConnection::SetBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetBackup(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_target_pools_v1::TargetPoolsConnection>
MakeTargetPoolsTracingConnection(
    std::shared_ptr<compute_target_pools_v1::TargetPoolsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<TargetPoolsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_pools_v1_internal
}  // namespace cloud
}  // namespace google
