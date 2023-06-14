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
// google/cloud/compute/interconnect_locations/v1/interconnect_locations.proto

#include "google/cloud/compute/interconnect_locations/v1/internal/interconnect_locations_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_interconnect_locations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

InterconnectLocationsTracingConnection::InterconnectLocationsTracingConnection(
    std::shared_ptr<
        compute_interconnect_locations_v1::InterconnectLocationsConnection>
        child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::cpp::compute::v1::InterconnectLocation>
InterconnectLocationsTracingConnection::GetInterconnectLocations(
    google::cloud::cpp::compute::interconnect_locations::v1::
        GetInterconnectLocationsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_interconnect_locations_v1::InterconnectLocationsConnection::"
      "GetInterconnectLocations");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInterconnectLocations(request));
}

StreamRange<google::cloud::cpp::compute::v1::InterconnectLocation>
InterconnectLocationsTracingConnection::ListInterconnectLocations(
    google::cloud::cpp::compute::interconnect_locations::v1::
        ListInterconnectLocationsRequest request) {
  auto span = internal::MakeSpan(
      "compute_interconnect_locations_v1::InterconnectLocationsConnection::"
      "ListInterconnectLocations");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListInterconnectLocations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::InterconnectLocation>(std::move(span),
                                                             std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<
    compute_interconnect_locations_v1::InterconnectLocationsConnection>
MakeInterconnectLocationsTracingConnection(
    std::shared_ptr<
        compute_interconnect_locations_v1::InterconnectLocationsConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<InterconnectLocationsTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_locations_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
