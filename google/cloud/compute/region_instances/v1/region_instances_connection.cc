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
// source: google/cloud/compute/region_instances/v1/region_instances.proto

#include "google/cloud/compute/region_instances/v1/region_instances_connection.h"
#include "google/cloud/compute/region_instances/v1/internal/region_instances_option_defaults.h"
#include "google/cloud/compute/region_instances/v1/internal/region_instances_tracing_connection.h"
#include "google/cloud/compute/region_instances/v1/region_instances_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_region_instances_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionInstancesConnection::~RegionInstancesConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstancesConnection::BulkInsert(
    google::cloud::cpp::compute::region_instances::v1::
        BulkInsertRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instances_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
