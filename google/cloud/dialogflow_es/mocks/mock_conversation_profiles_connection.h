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
// source: google/cloud/dialogflow/v2/conversation_profile.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_CONVERSATION_PROFILES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_CONVERSATION_PROFILES_CONNECTION_H

#include "google/cloud/dialogflow_es/conversation_profiles_connection.h"
#include <gmock/gmock.h>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ConversationProfilesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ConversationProfilesClient`. To do
 * so, construct an object of type `ConversationProfilesClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockConversationProfilesConnection
    : public dialogflow_es::ConversationProfilesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StreamRange<google::cloud::dialogflow::v2::ConversationProfile>,
      ListConversationProfiles,
      (google::cloud::dialogflow::v2::ListConversationProfilesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::ConversationProfile>,
      GetConversationProfile,
      (google::cloud::dialogflow::v2::GetConversationProfileRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::ConversationProfile>,
      CreateConversationProfile,
      (google::cloud::dialogflow::v2::CreateConversationProfileRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::ConversationProfile>,
      UpdateConversationProfile,
      (google::cloud::dialogflow::v2::UpdateConversationProfileRequest const&
           request),
      (override));

  MOCK_METHOD(
      Status, DeleteConversationProfile,
      (google::cloud::dialogflow::v2::DeleteConversationProfileRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::ConversationProfile>>,
      SetSuggestionFeatureConfig,
      (google::cloud::dialogflow::v2::SetSuggestionFeatureConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::ConversationProfile>>,
      ClearSuggestionFeatureConfig,
      (google::cloud::dialogflow::v2::ClearSuggestionFeatureConfigRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_mocks
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_CONVERSATION_PROFILES_CONNECTION_H
