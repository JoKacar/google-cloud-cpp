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
// google/cloud/compute/region_backend_services/v1/region_backend_services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_BACKEND_SERVICES_V1_INTERNAL_REGION_BACKEND_SERVICES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_BACKEND_SERVICES_V1_INTERNAL_REGION_BACKEND_SERVICES_TRACING_CONNECTION_H

#include "google/cloud/compute/region_backend_services/v1/region_backend_services_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_backend_services_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class RegionBackendServicesTracingConnection
    : public compute_region_backend_services_v1::
          RegionBackendServicesConnection {
 public:
  ~RegionBackendServicesTracingConnection() override = default;

  explicit RegionBackendServicesTracingConnection(
      std::shared_ptr<
          compute_region_backend_services_v1::RegionBackendServicesConnection>
          child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionBackendServices(
      google::cloud::cpp::compute::region_backend_services::v1::
          DeleteRegionBackendServicesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::BackendService>
  GetRegionBackendServices(
      google::cloud::cpp::compute::region_backend_services::v1::
          GetRegionBackendServicesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::BackendServiceGroupHealth>
  GetHealth(google::cloud::cpp::compute::region_backend_services::v1::
                GetHealthRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::region_backend_services::v1::
          GetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionBackendServices(
      google::cloud::cpp::compute::region_backend_services::v1::
          InsertRegionBackendServicesRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::BackendService>
  ListRegionBackendServices(
      google::cloud::cpp::compute::region_backend_services::v1::
          ListRegionBackendServicesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRegionBackendServices(
      google::cloud::cpp::compute::region_backend_services::v1::
          PatchRegionBackendServicesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::region_backend_services::v1::
          SetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateRegionBackendServices(
      google::cloud::cpp::compute::region_backend_services::v1::
          UpdateRegionBackendServicesRequest const& request) override;

 private:
  std::shared_ptr<
      compute_region_backend_services_v1::RegionBackendServicesConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<
    compute_region_backend_services_v1::RegionBackendServicesConnection>
MakeRegionBackendServicesTracingConnection(
    std::shared_ptr<
        compute_region_backend_services_v1::RegionBackendServicesConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_backend_services_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_BACKEND_SERVICES_V1_INTERNAL_REGION_BACKEND_SERVICES_TRACING_CONNECTION_H
