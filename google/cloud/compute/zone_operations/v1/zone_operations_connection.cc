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
// source: google/cloud/compute/zone_operations/v1/zone_operations.proto

#include "google/cloud/compute/zone_operations/v1/zone_operations_connection.h"
#include "google/cloud/compute/zone_operations/v1/internal/zone_operations_option_defaults.h"
#include "google/cloud/compute/zone_operations/v1/internal/zone_operations_tracing_connection.h"
#include "google/cloud/compute/zone_operations/v1/zone_operations_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_zone_operations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ZoneOperationsConnection::~ZoneOperationsConnection() = default;

Status ZoneOperationsConnection::DeleteZoneOperation(
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteZoneOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ZoneOperationsConnection::GetZoneOperation(
    google::cloud::cpp::compute::zone_operations::v1::
        GetZoneOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::cpp::compute::v1::Operation>
ZoneOperationsConnection::ListZoneOperations(
    google::cloud::cpp::compute::zone_operations::v1::
        ListZoneOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::Operation>>();
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
ZoneOperationsConnection::Wait(
    google::cloud::cpp::compute::zone_operations::v1::WaitRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_zone_operations_v1
}  // namespace cloud
}  // namespace google
