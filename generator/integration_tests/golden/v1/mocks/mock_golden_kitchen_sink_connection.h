// Copyright 2022 Google LLC
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
// source: generator/integration_tests/test.proto

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_MOCKS_MOCK_GOLDEN_KITCHEN_SINK_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_MOCKS_MOCK_GOLDEN_KITCHEN_SINK_CONNECTION_H

#include "generator/integration_tests/golden/v1/golden_kitchen_sink_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace golden_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `GoldenKitchenSinkConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `GoldenKitchenSinkClient`. To do so,
 * construct an object of type `GoldenKitchenSinkClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockGoldenKitchenSinkConnection : public golden_v1::GoldenKitchenSinkConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>,
  GenerateAccessToken,
  (google::test::admin::database::v1::GenerateAccessTokenRequest const& request), (override));

  MOCK_METHOD(StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse>,
  GenerateIdToken,
  (google::test::admin::database::v1::GenerateIdTokenRequest const& request), (override));

  MOCK_METHOD(StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse>,
  WriteLogEntries,
  (google::test::admin::database::v1::WriteLogEntriesRequest const& request), (override));

  MOCK_METHOD((StreamRange<std::string>),
  ListLogs,
  (google::test::admin::database::v1::ListLogsRequest request), (override));

  MOCK_METHOD(StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse>,
  ListServiceAccountKeys,
  (google::test::admin::database::v1::ListServiceAccountKeysRequest const& request), (override));

  MOCK_METHOD(Status,
  DoNothing,
  (google::protobuf::Empty const& request), (override));

  MOCK_METHOD(Status,
  Deprecated2,
  (google::test::admin::database::v1::GenerateAccessTokenRequest const& request), (override));

  MOCK_METHOD(StreamRange<google::test::admin::database::v1::Response>,
  StreamingRead,
  (google::test::admin::database::v1::Request const& request), (override));

  MOCK_METHOD((std::unique_ptr<
      ::google::cloud::AsyncStreamingReadWriteRpc<
          google::test::admin::database::v1::Request, google::test::admin::database::v1::Response>>),
      AsyncStreamingReadWrite, (), (override));

  MOCK_METHOD(Status,
  ExplicitRouting1,
  (google::test::admin::database::v1::ExplicitRoutingRequest const& request), (override));

  MOCK_METHOD(Status,
  ExplicitRouting2,
  (google::test::admin::database::v1::ExplicitRoutingRequest const& request), (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_V1_MOCKS_MOCK_GOLDEN_KITCHEN_SINK_CONNECTION_H
