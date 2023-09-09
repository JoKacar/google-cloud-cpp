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
// source: google/cloud/compute/disk_types/v1/disk_types.proto

#include "google/cloud/compute/disk_types/v1/internal/disk_types_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_disk_types_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DiskTypesTracingConnection::DiskTypesTracingConnection(
    std::shared_ptr<compute_disk_types_v1::DiskTypesConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::cpp::compute::v1::DiskTypeAggregatedList>
DiskTypesTracingConnection::AggregatedListDiskTypes(
    google::cloud::cpp::compute::disk_types::v1::
        AggregatedListDiskTypesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_disk_types_v1::DiskTypesConnection::AggregatedListDiskTypes");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AggregatedListDiskTypes(request));
}

StatusOr<google::cloud::cpp::compute::v1::DiskType>
DiskTypesTracingConnection::GetDiskType(
    google::cloud::cpp::compute::disk_types::v1::GetDiskTypeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_disk_types_v1::DiskTypesConnection::GetDiskType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDiskType(request));
}

StreamRange<google::cloud::cpp::compute::v1::DiskType>
DiskTypesTracingConnection::ListDiskTypes(
    google::cloud::cpp::compute::disk_types::v1::ListDiskTypesRequest request) {
  auto span = internal::MakeSpan(
      "compute_disk_types_v1::DiskTypesConnection::ListDiskTypes");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListDiskTypes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::DiskType>(std::move(span),
                                                 std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_disk_types_v1::DiskTypesConnection>
MakeDiskTypesTracingConnection(
    std::shared_ptr<compute_disk_types_v1::DiskTypesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<DiskTypesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_disk_types_v1_internal
}  // namespace cloud
}  // namespace google
