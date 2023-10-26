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
// google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_MOCKS_MOCK_PUBLIC_DELEGATED_PREFIXES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_MOCKS_MOCK_PUBLIC_DELEGATED_PREFIXES_CONNECTION_H

#include "google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_public_delegated_prefixes_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `PublicDelegatedPrefixesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `PublicDelegatedPrefixesClient`. To
 * do so, construct an object of type `PublicDelegatedPrefixesClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockPublicDelegatedPrefixesConnection
    : public compute_public_delegated_prefixes_v1::
          PublicDelegatedPrefixesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<std::pair<std::string,
                                     google::cloud::cpp::compute::v1::
                                         PublicDelegatedPrefixesScopedList>>),
              AggregatedListPublicDelegatedPrefixes,
              (google::cloud::cpp::compute::public_delegated_prefixes::v1::
                   AggregatedListPublicDelegatedPrefixesRequest request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Announce,
              (google::cloud::cpp::compute::public_delegated_prefixes::v1::
                   AnnounceRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeletePublicDelegatedPrefix,
              (google::cloud::cpp::compute::public_delegated_prefixes::v1::
                   DeletePublicDelegatedPrefixRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>,
              GetPublicDelegatedPrefix,
              (google::cloud::cpp::compute::public_delegated_prefixes::v1::
                   GetPublicDelegatedPrefixRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertPublicDelegatedPrefix,
              (google::cloud::cpp::compute::public_delegated_prefixes::v1::
                   InsertPublicDelegatedPrefixRequest const& request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>),
      ListPublicDelegatedPrefixes,
      (google::cloud::cpp::compute::public_delegated_prefixes::v1::
           ListPublicDelegatedPrefixesRequest request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchPublicDelegatedPrefix,
              (google::cloud::cpp::compute::public_delegated_prefixes::v1::
                   PatchPublicDelegatedPrefixRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              Withdraw,
              (google::cloud::cpp::compute::public_delegated_prefixes::v1::
                   WithdrawRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_delegated_prefixes_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_MOCKS_MOCK_PUBLIC_DELEGATED_PREFIXES_CONNECTION_H
