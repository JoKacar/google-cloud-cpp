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
// source: google/cloud/resourcemanager/v3/folders.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_MOCKS_MOCK_FOLDERS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_MOCKS_MOCK_FOLDERS_CONNECTION_H

#include "google/cloud/resourcemanager/v3/folders_connection.h"
#include <gmock/gmock.h>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace resourcemanager_v3_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `FoldersConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `FoldersClient`. To do so,
 * construct an object of type `FoldersClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockFoldersConnection : public resourcemanager_v3::FoldersConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::resourcemanager::v3::Folder>, GetFolder,
      (google::cloud::resourcemanager::v3::GetFolderRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::resourcemanager::v3::Folder>,
              ListFolders,
              (google::cloud::resourcemanager::v3::ListFoldersRequest request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::resourcemanager::v3::Folder>, SearchFolders,
      (google::cloud::resourcemanager::v3::SearchFoldersRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::resourcemanager::v3::Folder>>,
      CreateFolder,
      (google::cloud::resourcemanager::v3::CreateFolderRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::resourcemanager::v3::Folder>>,
      UpdateFolder,
      (google::cloud::resourcemanager::v3::UpdateFolderRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::resourcemanager::v3::Folder>>, MoveFolder,
      (google::cloud::resourcemanager::v3::MoveFolderRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::resourcemanager::v3::Folder>>,
      DeleteFolder,
      (google::cloud::resourcemanager::v3::DeleteFolderRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::resourcemanager::v3::Folder>>,
              UndeleteFolder,
              (google::cloud::resourcemanager::v3::UndeleteFolderRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_mocks
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_MOCKS_MOCK_FOLDERS_CONNECTION_H
