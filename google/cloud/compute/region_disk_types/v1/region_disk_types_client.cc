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
// source: google/cloud/compute/region_disk_types/v1/region_disk_types.proto

#include "google/cloud/compute/region_disk_types/v1/region_disk_types_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_region_disk_types_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionDiskTypesClient::RegionDiskTypesClient(
    ExperimentalTag, std::shared_ptr<RegionDiskTypesConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionDiskTypesClient::~RegionDiskTypesClient() = default;

StatusOr<google::cloud::cpp::compute::v1::DiskType>
RegionDiskTypesClient::GetRegionDiskTypes(std::string const& project,
                                          std::string const& region,
                                          std::string const& disk_type,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_disk_types::v1::GetRegionDiskTypesRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_disk_type(disk_type);
  return connection_->GetRegionDiskTypes(request);
}

StatusOr<google::cloud::cpp::compute::v1::DiskType>
RegionDiskTypesClient::GetRegionDiskTypes(
    google::cloud::cpp::compute::region_disk_types::v1::
        GetRegionDiskTypesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRegionDiskTypes(request);
}

StreamRange<google::cloud::cpp::compute::v1::DiskType>
RegionDiskTypesClient::ListRegionDiskTypes(std::string const& project,
                                           std::string const& region,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_disk_types::v1::ListRegionDiskTypesRequest
      request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionDiskTypes(request);
}

StreamRange<google::cloud::cpp::compute::v1::DiskType>
RegionDiskTypesClient::ListRegionDiskTypes(
    google::cloud::cpp::compute::region_disk_types::v1::
        ListRegionDiskTypesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionDiskTypes(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_disk_types_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
