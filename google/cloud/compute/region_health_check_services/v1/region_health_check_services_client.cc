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
// google/cloud/compute/region_health_check_services/v1/region_health_check_services.proto

#include "google/cloud/compute/region_health_check_services/v1/region_health_check_services_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_region_health_check_services_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionHealthCheckServicesClient::RegionHealthCheckServicesClient(
    ExperimentalTag,
    std::shared_ptr<RegionHealthCheckServicesConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionHealthCheckServicesClient::~RegionHealthCheckServicesClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesClient::DeleteRegionHealthCheckServices(
    std::string const& project, std::string const& region,
    std::string const& health_check_service, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_check_services::v1::
      DeleteRegionHealthCheckServicesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_health_check_service(health_check_service);
  return connection_->DeleteRegionHealthCheckServices(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesClient::DeleteRegionHealthCheckServices(
    google::cloud::cpp::compute::region_health_check_services::v1::
        DeleteRegionHealthCheckServicesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRegionHealthCheckServices(request);
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheckService>
RegionHealthCheckServicesClient::GetRegionHealthCheckServices(
    std::string const& project, std::string const& region,
    std::string const& health_check_service, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_check_services::v1::
      GetRegionHealthCheckServicesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_health_check_service(health_check_service);
  return connection_->GetRegionHealthCheckServices(request);
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheckService>
RegionHealthCheckServicesClient::GetRegionHealthCheckServices(
    google::cloud::cpp::compute::region_health_check_services::v1::
        GetRegionHealthCheckServicesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRegionHealthCheckServices(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesClient::InsertRegionHealthCheckServices(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::HealthCheckService const&
        health_check_service_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_check_services::v1::
      InsertRegionHealthCheckServicesRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_health_check_service_resource() =
      health_check_service_resource;
  return connection_->InsertRegionHealthCheckServices(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesClient::InsertRegionHealthCheckServices(
    google::cloud::cpp::compute::region_health_check_services::v1::
        InsertRegionHealthCheckServicesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertRegionHealthCheckServices(request);
}

StreamRange<google::cloud::cpp::compute::v1::HealthCheckService>
RegionHealthCheckServicesClient::ListRegionHealthCheckServices(
    std::string const& project, std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_check_services::v1::
      ListRegionHealthCheckServicesRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionHealthCheckServices(request);
}

StreamRange<google::cloud::cpp::compute::v1::HealthCheckService>
RegionHealthCheckServicesClient::ListRegionHealthCheckServices(
    google::cloud::cpp::compute::region_health_check_services::v1::
        ListRegionHealthCheckServicesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionHealthCheckServices(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesClient::PatchRegionHealthCheckServices(
    std::string const& project, std::string const& region,
    std::string const& health_check_service,
    google::cloud::cpp::compute::v1::HealthCheckService const&
        health_check_service_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_check_services::v1::
      PatchRegionHealthCheckServicesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_health_check_service(health_check_service);
  *request.mutable_health_check_service_resource() =
      health_check_service_resource;
  return connection_->PatchRegionHealthCheckServices(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthCheckServicesClient::PatchRegionHealthCheckServices(
    google::cloud::cpp::compute::region_health_check_services::v1::
        PatchRegionHealthCheckServicesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchRegionHealthCheckServices(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_health_check_services_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
