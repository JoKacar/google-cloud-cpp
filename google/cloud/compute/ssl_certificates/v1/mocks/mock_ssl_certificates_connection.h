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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SSL_CERTIFICATES_V1_MOCKS_MOCK_SSL_CERTIFICATES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SSL_CERTIFICATES_V1_MOCKS_MOCK_SSL_CERTIFICATES_CONNECTION_H

#include "google/cloud/compute/ssl_certificates/v1/ssl_certificates_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_ssl_certificates_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `SslCertificatesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `SslCertificatesClient`. To do so,
 * construct an object of type `SslCertificatesClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockSslCertificatesConnection
    : public compute_ssl_certificates_v1::SslCertificatesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::SslCertificateAggregatedList>,
      AggregatedListSslCertificates,
      (google::cloud::cpp::compute::ssl_certificates::v1::
           AggregatedListSslCertificatesRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteSslCertificates,
              (google::cloud::cpp::compute::ssl_certificates::v1::
                   DeleteSslCertificatesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::SslCertificate>,
              GetSslCertificates,
              (google::cloud::cpp::compute::ssl_certificates::v1::
                   GetSslCertificatesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertSslCertificates,
              (google::cloud::cpp::compute::ssl_certificates::v1::
                   InsertSslCertificatesRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::cpp::compute::v1::SslCertificate>,
              ListSslCertificates,
              (google::cloud::cpp::compute::ssl_certificates::v1::
                   ListSslCertificatesRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_ssl_certificates_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SSL_CERTIFICATES_V1_MOCKS_MOCK_SSL_CERTIFICATES_CONNECTION_H
