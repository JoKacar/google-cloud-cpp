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
// source: google/cloud/compute/region_operations/v1/region_operations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_OPERATIONS_V1_INTERNAL_REGION_OPERATIONS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_OPERATIONS_V1_INTERNAL_REGION_OPERATIONS_TRACING_CONNECTION_H

#include "google/cloud/compute/region_operations/v1/region_operations_connection.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_region_operations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class RegionOperationsTracingConnection
    : public compute_region_operations_v1::RegionOperationsConnection {
 public:
  ~RegionOperationsTracingConnection() override = default;

  explicit RegionOperationsTracingConnection(
      std::shared_ptr<compute_region_operations_v1::RegionOperationsConnection>
          child);

  Options options() override { return child_->options(); }

  Status DeleteRegionOperations(
      google::cloud::cpp::compute::region_operations::v1::
          DeleteRegionOperationsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> GetRegionOperations(
      google::cloud::cpp::compute::region_operations::v1::
          GetRegionOperationsRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::Operation> ListRegionOperations(
      google::cloud::cpp::compute::region_operations::v1::
          ListRegionOperationsRequest request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Wait(
      google::cloud::cpp::compute::region_operations::v1::WaitRequest const&
          request) override;

 private:
  std::shared_ptr<compute_region_operations_v1::RegionOperationsConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_region_operations_v1::RegionOperationsConnection>
MakeRegionOperationsTracingConnection(
    std::shared_ptr<compute_region_operations_v1::RegionOperationsConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_operations_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_OPERATIONS_V1_INTERNAL_REGION_OPERATIONS_TRACING_CONNECTION_H
