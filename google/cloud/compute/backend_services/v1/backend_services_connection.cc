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
// source: google/cloud/compute/backend_services/v1/backend_services.proto

#include "google/cloud/compute/backend_services/v1/backend_services_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/compute/backend_services/v1/backend_services_options.h"
#include "google/cloud/compute/backend_services/v1/internal/backend_services_option_defaults.h"
#include "google/cloud/compute/backend_services/v1/internal/backend_services_tracing_connection.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_backend_services_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BackendServicesConnection::~BackendServicesConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesConnection::AddSignedUrlKey(
    google::cloud::cpp::compute::backend_services::v1::AddSignedUrlKeyRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::cpp::compute::v1::Operation>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::BackendServiceAggregatedList>
BackendServicesConnection::AggregatedListBackendServices(
    google::cloud::cpp::compute::backend_services::v1::AggregatedListBackendServicesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesConnection::DeleteBackendServices(
    google::cloud::cpp::compute::backend_services::v1::DeleteBackendServicesRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::cpp::compute::v1::Operation>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesConnection::DeleteSignedUrlKey(
    google::cloud::cpp::compute::backend_services::v1::DeleteSignedUrlKeyRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::cpp::compute::v1::Operation>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::BackendService>
BackendServicesConnection::GetBackendServices(
    google::cloud::cpp::compute::backend_services::v1::GetBackendServicesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::BackendServiceGroupHealth>
BackendServicesConnection::GetHealth(
    google::cloud::cpp::compute::backend_services::v1::GetHealthRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
BackendServicesConnection::GetIamPolicy(
    google::cloud::cpp::compute::backend_services::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesConnection::InsertBackendServices(
    google::cloud::cpp::compute::backend_services::v1::InsertBackendServicesRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::cpp::compute::v1::Operation>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::BackendService> BackendServicesConnection::ListBackendServices(
    google::cloud::cpp::compute::backend_services::v1::ListBackendServicesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::BackendService>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesConnection::PatchBackendServices(
    google::cloud::cpp::compute::backend_services::v1::PatchBackendServicesRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::cpp::compute::v1::Operation>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesConnection::SetEdgeSecurityPolicy(
    google::cloud::cpp::compute::backend_services::v1::SetEdgeSecurityPolicyRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::cpp::compute::v1::Operation>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
BackendServicesConnection::SetIamPolicy(
    google::cloud::cpp::compute::backend_services::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesConnection::SetSecurityPolicy(
    google::cloud::cpp::compute::backend_services::v1::SetSecurityPolicyRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::cpp::compute::v1::Operation>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendServicesConnection::UpdateBackendServices(
    google::cloud::cpp::compute::backend_services::v1::UpdateBackendServicesRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::cpp::compute::v1::Operation>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_backend_services_v1
}  // namespace cloud
}  // namespace google
