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
// source: google/cloud/compute/target_instances/v1/target_instances.proto

#include "google/cloud/compute/target_instances/v1/internal/target_instances_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_instances_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TargetInstancesTracingConnection::TargetInstancesTracingConnection(
    std::shared_ptr<compute_target_instances_v1::TargetInstancesConnection>
        child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::cpp::compute::v1::TargetInstanceAggregatedList>
TargetInstancesTracingConnection::AggregatedListTargetInstances(
    google::cloud::cpp::compute::target_instances::v1::
        AggregatedListTargetInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_instances_v1::TargetInstancesConnection::"
      "AggregatedListTargetInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->AggregatedListTargetInstances(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesTracingConnection::DeleteTargetInstance(
    google::cloud::cpp::compute::target_instances::v1::
        DeleteTargetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_instances_v1::TargetInstancesConnection::"
      "DeleteTargetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteTargetInstance(request));
}

StatusOr<google::cloud::cpp::compute::v1::TargetInstance>
TargetInstancesTracingConnection::GetTargetInstance(
    google::cloud::cpp::compute::target_instances::v1::
        GetTargetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_instances_v1::TargetInstancesConnection::"
      "GetTargetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTargetInstance(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesTracingConnection::InsertTargetInstance(
    google::cloud::cpp::compute::target_instances::v1::
        InsertTargetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_instances_v1::TargetInstancesConnection::"
      "InsertTargetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertTargetInstance(request));
}

StreamRange<google::cloud::cpp::compute::v1::TargetInstance>
TargetInstancesTracingConnection::ListTargetInstances(
    google::cloud::cpp::compute::target_instances::v1::
        ListTargetInstancesRequest request) {
  auto span = internal::MakeSpan(
      "compute_target_instances_v1::TargetInstancesConnection::"
      "ListTargetInstances");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListTargetInstances(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::TargetInstance>(std::move(span),
                                                       std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_target_instances_v1::TargetInstancesConnection>
MakeTargetInstancesTracingConnection(
    std::shared_ptr<compute_target_instances_v1::TargetInstancesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<TargetInstancesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_instances_v1_internal
}  // namespace cloud
}  // namespace google
