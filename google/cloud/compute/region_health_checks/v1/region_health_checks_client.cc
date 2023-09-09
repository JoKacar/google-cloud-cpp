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
// google/cloud/compute/region_health_checks/v1/region_health_checks.proto

#include "google/cloud/compute/region_health_checks/v1/region_health_checks_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_health_checks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionHealthChecksClient::RegionHealthChecksClient(
    ExperimentalTag, std::shared_ptr<RegionHealthChecksConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionHealthChecksClient::~RegionHealthChecksClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksClient::DeleteRegionHealthCheck(
    std::string const& project, std::string const& region,
    std::string const& health_check, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_checks::v1::
      DeleteRegionHealthCheckRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_health_check(health_check);
  return connection_->DeleteRegionHealthCheck(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksClient::DeleteRegionHealthCheck(
    google::cloud::cpp::compute::region_health_checks::v1::
        DeleteRegionHealthCheckRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRegionHealthCheck(request);
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheck>
RegionHealthChecksClient::GetRegionHealthCheck(std::string const& project,
                                               std::string const& region,
                                               std::string const& health_check,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_checks::v1::
      GetRegionHealthCheckRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_health_check(health_check);
  return connection_->GetRegionHealthCheck(request);
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheck>
RegionHealthChecksClient::GetRegionHealthCheck(
    google::cloud::cpp::compute::region_health_checks::v1::
        GetRegionHealthCheckRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRegionHealthCheck(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksClient::InsertRegionHealthCheck(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::HealthCheck const& health_check_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_checks::v1::
      InsertRegionHealthCheckRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_health_check_resource() = health_check_resource;
  return connection_->InsertRegionHealthCheck(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksClient::InsertRegionHealthCheck(
    google::cloud::cpp::compute::region_health_checks::v1::
        InsertRegionHealthCheckRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertRegionHealthCheck(request);
}

StreamRange<google::cloud::cpp::compute::v1::HealthCheck>
RegionHealthChecksClient::ListRegionHealthChecks(std::string const& project,
                                                 std::string const& region,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_checks::v1::
      ListRegionHealthChecksRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionHealthChecks(request);
}

StreamRange<google::cloud::cpp::compute::v1::HealthCheck>
RegionHealthChecksClient::ListRegionHealthChecks(
    google::cloud::cpp::compute::region_health_checks::v1::
        ListRegionHealthChecksRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionHealthChecks(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksClient::PatchRegionHealthCheck(
    std::string const& project, std::string const& region,
    std::string const& health_check,
    google::cloud::cpp::compute::v1::HealthCheck const& health_check_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_checks::v1::
      PatchRegionHealthCheckRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_health_check(health_check);
  *request.mutable_health_check_resource() = health_check_resource;
  return connection_->PatchRegionHealthCheck(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksClient::PatchRegionHealthCheck(
    google::cloud::cpp::compute::region_health_checks::v1::
        PatchRegionHealthCheckRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchRegionHealthCheck(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksClient::UpdateRegionHealthCheck(
    std::string const& project, std::string const& region,
    std::string const& health_check,
    google::cloud::cpp::compute::v1::HealthCheck const& health_check_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_health_checks::v1::
      UpdateRegionHealthCheckRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_health_check(health_check);
  *request.mutable_health_check_resource() = health_check_resource;
  return connection_->UpdateRegionHealthCheck(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksClient::UpdateRegionHealthCheck(
    google::cloud::cpp::compute::region_health_checks::v1::
        UpdateRegionHealthCheckRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateRegionHealthCheck(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_health_checks_v1
}  // namespace cloud
}  // namespace google
