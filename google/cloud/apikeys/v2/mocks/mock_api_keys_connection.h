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
// source: google/api/apikeys/v2/apikeys.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIKEYS_V2_MOCKS_MOCK_API_KEYS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIKEYS_V2_MOCKS_MOCK_API_KEYS_CONNECTION_H

#include "google/cloud/apikeys/v2/api_keys_connection.h"
#include <gmock/gmock.h>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace apikeys_v2_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ApiKeysConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ApiKeysClient`. To do so,
 * construct an object of type `ApiKeysClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockApiKeysConnection : public apikeys_v2::ApiKeysConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::api::apikeys::v2::Key>>, CreateKey,
              (google::api::apikeys::v2::CreateKeyRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::api::apikeys::v2::Key>, ListKeys,
              (google::api::apikeys::v2::ListKeysRequest request), (override));

  MOCK_METHOD(StatusOr<google::api::apikeys::v2::Key>, GetKey,
              (google::api::apikeys::v2::GetKeyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::api::apikeys::v2::GetKeyStringResponse>,
              GetKeyString,
              (google::api::apikeys::v2::GetKeyStringRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::api::apikeys::v2::Key>>, UpdateKey,
              (google::api::apikeys::v2::UpdateKeyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::api::apikeys::v2::Key>>, DeleteKey,
              (google::api::apikeys::v2::DeleteKeyRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::api::apikeys::v2::Key>>, UndeleteKey,
              (google::api::apikeys::v2::UndeleteKeyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::api::apikeys::v2::LookupKeyResponse>, LookupKey,
              (google::api::apikeys::v2::LookupKeyRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apikeys_v2_mocks
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIKEYS_V2_MOCKS_MOCK_API_KEYS_CONNECTION_H
