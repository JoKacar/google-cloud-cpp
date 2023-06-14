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
// source: google/cloud/compute/regions/v1/regions.proto

#include "google/cloud/compute/regions/v1/regions_connection.h"
#include "google/cloud/compute/regions/v1/internal/regions_option_defaults.h"
#include "google/cloud/compute/regions/v1/internal/regions_tracing_connection.h"
#include "google/cloud/compute/regions/v1/regions_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_regions_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionsConnection::~RegionsConnection() = default;

StatusOr<google::cloud::cpp::compute::v1::Region> RegionsConnection::GetRegions(
    google::cloud::cpp::compute::regions::v1::GetRegionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::cpp::compute::v1::Region>
RegionsConnection::ListRegions(
    google::cloud::cpp::compute::regions::v1::
        ListRegionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::Region>>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_regions_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
