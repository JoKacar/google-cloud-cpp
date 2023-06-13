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
// source: google/cloud/essentialcontacts/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ESSENTIALCONTACTS_V1_MOCKS_MOCK_ESSENTIAL_CONTACTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ESSENTIALCONTACTS_V1_MOCKS_MOCK_ESSENTIAL_CONTACTS_CONNECTION_H

#include "google/cloud/essentialcontacts/v1/essential_contacts_connection.h"
#include <gmock/gmock.h>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace essentialcontacts_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `EssentialContactsServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `EssentialContactsServiceClient`. To
 * do so, construct an object of type `EssentialContactsServiceClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockEssentialContactsServiceConnection
    : public essentialcontacts_v1::EssentialContactsServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::essentialcontacts::v1::Contact>,
              CreateContact,
              (google::cloud::essentialcontacts::v1::CreateContactRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::essentialcontacts::v1::Contact>,
              UpdateContact,
              (google::cloud::essentialcontacts::v1::UpdateContactRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::essentialcontacts::v1::Contact>, ListContacts,
      (google::cloud::essentialcontacts::v1::ListContactsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::essentialcontacts::v1::Contact>, GetContact,
      (google::cloud::essentialcontacts::v1::GetContactRequest const& request),
      (override));

  MOCK_METHOD(Status, DeleteContact,
              (google::cloud::essentialcontacts::v1::DeleteContactRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::essentialcontacts::v1::Contact>,
      ComputeContacts,
      (google::cloud::essentialcontacts::v1::ComputeContactsRequest request),
      (override));

  MOCK_METHOD(
      Status, SendTestMessage,
      (google::cloud::essentialcontacts::v1::SendTestMessageRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace essentialcontacts_v1_mocks
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ESSENTIALCONTACTS_V1_MOCKS_MOCK_ESSENTIAL_CONTACTS_CONNECTION_H
