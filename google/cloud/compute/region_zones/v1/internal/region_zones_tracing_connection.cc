// Copyright 2024 Google LLC
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
// source: google/cloud/compute/region_zones/v1/region_zones.proto

#include "google/cloud/compute/region_zones/v1/internal/region_zones_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_zones_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegionZonesTracingConnection::RegionZonesTracingConnection(
    std::shared_ptr<compute_region_zones_v1::RegionZonesConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::cpp::compute::v1::Zone>
RegionZonesTracingConnection::ListRegionZones(
    google::cloud::cpp::compute::region_zones::v1::ListRegionZonesRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_region_zones_v1::RegionZonesConnection::ListRegionZones");
  internal::OTelScope scope(span);
  auto sr = child_->ListRegionZones(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::cpp::compute::v1::Zone>(
      std::move(span), std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_region_zones_v1::RegionZonesConnection>
MakeRegionZonesTracingConnection(
    std::shared_ptr<compute_region_zones_v1::RegionZonesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RegionZonesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_zones_v1_internal
}  // namespace cloud
}  // namespace google
