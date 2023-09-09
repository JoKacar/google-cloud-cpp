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
// source: google/cloud/compute/region_autoscalers/v1/region_autoscalers.proto

#include "google/cloud/compute/region_autoscalers/v1/region_autoscalers_connection.h"
#include "google/cloud/compute/region_autoscalers/v1/internal/region_autoscalers_option_defaults.h"
#include "google/cloud/compute/region_autoscalers/v1/internal/region_autoscalers_tracing_connection.h"
#include "google/cloud/compute/region_autoscalers/v1/region_autoscalers_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_autoscalers_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionAutoscalersConnection::~RegionAutoscalersConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionAutoscalersConnection::DeleteRegionAutoscaler(
    google::cloud::cpp::compute::region_autoscalers::v1::
        DeleteRegionAutoscalerRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Autoscaler>
RegionAutoscalersConnection::GetRegionAutoscaler(
    google::cloud::cpp::compute::region_autoscalers::v1::
        GetRegionAutoscalerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionAutoscalersConnection::InsertRegionAutoscaler(
    google::cloud::cpp::compute::region_autoscalers::v1::
        InsertRegionAutoscalerRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::Autoscaler>
RegionAutoscalersConnection::ListRegionAutoscalers(
    google::cloud::cpp::compute::region_autoscalers::v1::
        ListRegionAutoscalersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::Autoscaler>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionAutoscalersConnection::PatchRegionAutoscaler(
    google::cloud::cpp::compute::region_autoscalers::v1::
        PatchRegionAutoscalerRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionAutoscalersConnection::UpdateRegionAutoscaler(
    google::cloud::cpp::compute::region_autoscalers::v1::
        UpdateRegionAutoscalerRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_autoscalers_v1
}  // namespace cloud
}  // namespace google
