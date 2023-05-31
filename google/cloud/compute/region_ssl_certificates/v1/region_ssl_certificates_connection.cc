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
// source: google/cloud/compute/region_ssl_certificates/v1/region_ssl_certificates.proto

#include "google/cloud/compute/region_ssl_certificates/v1/region_ssl_certificates_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/compute/region_ssl_certificates/v1/internal/region_ssl_certificates_option_defaults.h"
#include "google/cloud/compute/region_ssl_certificates/v1/internal/region_ssl_certificates_tracing_connection.h"
#include "google/cloud/compute/region_ssl_certificates/v1/region_ssl_certificates_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_ssl_certificates_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionSslCertificatesConnection::~RegionSslCertificatesConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslCertificatesConnection::DeleteRegionSslCertificates(
    google::cloud::cpp::compute::region_ssl_certificates::v1::DeleteRegionSslCertificatesRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::cpp::compute::v1::Operation>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::SslCertificate>
RegionSslCertificatesConnection::GetRegionSslCertificates(
    google::cloud::cpp::compute::region_ssl_certificates::v1::GetRegionSslCertificatesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslCertificatesConnection::InsertRegionSslCertificates(
    google::cloud::cpp::compute::region_ssl_certificates::v1::InsertRegionSslCertificatesRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::cpp::compute::v1::Operation>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::SslCertificate> RegionSslCertificatesConnection::ListRegionSslCertificates(
    google::cloud::cpp::compute::region_ssl_certificates::v1::ListRegionSslCertificatesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::SslCertificate>>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_ssl_certificates_v1
}  // namespace cloud
}  // namespace google
