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
// source: google/cloud/compute/ssl_certificates/v1/ssl_certificates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SSL_CERTIFICATES_V1_INTERNAL_SSL_CERTIFICATES_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SSL_CERTIFICATES_V1_INTERNAL_SSL_CERTIFICATES_REST_LOGGING_DECORATOR_H

#include "google/cloud/compute/ssl_certificates/v1/internal/ssl_certificates_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <google/cloud/compute/ssl_certificates/v1/ssl_certificates.pb.h>
#include <memory>
#include <set>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_ssl_certificates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SslCertificatesRestLogging : public SslCertificatesRestStub {
 public:
  ~SslCertificatesRestLogging() override = default;
  SslCertificatesRestLogging(std::shared_ptr<SslCertificatesRestStub> child,
                             TracingOptions tracing_options,
                             std::set<std::string> components);

  StatusOr<google::cloud::cpp::compute::v1::SslCertificateAggregatedList>
  AggregatedListSslCertificates(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::ssl_certificates::v1::
          AggregatedListSslCertificatesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteSslCertificates(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::ssl_certificates::v1::
          DeleteSslCertificatesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SslCertificate> GetSslCertificates(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::ssl_certificates::v1::
          GetSslCertificatesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertSslCertificates(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::ssl_certificates::v1::
          InsertSslCertificatesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SslCertificateList>
  ListSslCertificates(google::cloud::rest_internal::RestContext& rest_context,
                      google::cloud::cpp::compute::ssl_certificates::v1::
                          ListSslCertificatesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest const& request) override;

 private:
  std::shared_ptr<SslCertificatesRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_ssl_certificates_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SSL_CERTIFICATES_V1_INTERNAL_SSL_CERTIFICATES_REST_LOGGING_DECORATOR_H
