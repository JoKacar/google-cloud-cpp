// Copyright 2021 Google LLC
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
// source: google/cloud/bigquery/storage/v1/storage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_STORAGE_V1_MOCKS_MOCK_BIGQUERY_READ_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_STORAGE_V1_MOCKS_MOCK_BIGQUERY_READ_CONNECTION_H

#include "google/cloud/bigquery/storage/v1/bigquery_read_connection.h"
#include <gmock/gmock.h>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace bigquery_storage_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `BigQueryReadConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `BigQueryReadClient`. To do so,
 * construct an object of type `BigQueryReadClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockBigQueryReadConnection
    : public bigquery_storage_v1::BigQueryReadConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::storage::v1::ReadSession>,
      CreateReadSession,
      (google::cloud::bigquery::storage::v1::CreateReadSessionRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::bigquery::storage::v1::ReadRowsResponse>,
      ReadRows,
      (google::cloud::bigquery::storage::v1::ReadRowsRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::storage::v1::SplitReadStreamResponse>,
      SplitReadStream,
      (google::cloud::bigquery::storage::v1::SplitReadStreamRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_storage_v1_mocks
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_STORAGE_V1_MOCKS_MOCK_BIGQUERY_READ_CONNECTION_H
