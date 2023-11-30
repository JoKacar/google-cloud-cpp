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
// source: google/cloud/apigeeregistry/v1/registry_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEEREGISTRY_V1_MOCKS_MOCK_REGISTRY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEEREGISTRY_V1_MOCKS_MOCK_REGISTRY_CONNECTION_H

#include "google/cloud/apigeeregistry/v1/registry_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace apigeeregistry_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `RegistryConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `RegistryClient`. To do so,
 * construct an object of type `RegistryClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockRegistryConnection : public apigeeregistry_v1::RegistryConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::apigeeregistry::v1::Api>), ListApis,
              (google::cloud::apigeeregistry::v1::ListApisRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::apigeeregistry::v1::Api>, GetApi,
              (google::cloud::apigeeregistry::v1::GetApiRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::apigeeregistry::v1::Api>, CreateApi,
      (google::cloud::apigeeregistry::v1::CreateApiRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::apigeeregistry::v1::Api>, UpdateApi,
      (google::cloud::apigeeregistry::v1::UpdateApiRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteApi,
      (google::cloud::apigeeregistry::v1::DeleteApiRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::apigeeregistry::v1::ApiVersion>),
      ListApiVersions,
      (google::cloud::apigeeregistry::v1::ListApiVersionsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::apigeeregistry::v1::ApiVersion>, GetApiVersion,
      (google::cloud::apigeeregistry::v1::GetApiVersionRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::apigeeregistry::v1::ApiVersion>,
              CreateApiVersion,
              (google::cloud::apigeeregistry::v1::CreateApiVersionRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::apigeeregistry::v1::ApiVersion>,
              UpdateApiVersion,
              (google::cloud::apigeeregistry::v1::UpdateApiVersionRequest const&
                   request),
              (override));

  MOCK_METHOD(Status, DeleteApiVersion,
              (google::cloud::apigeeregistry::v1::DeleteApiVersionRequest const&
                   request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::apigeeregistry::v1::ApiSpec>),
              ListApiSpecs,
              (google::cloud::apigeeregistry::v1::ListApiSpecsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>, GetApiSpec,
      (google::cloud::apigeeregistry::v1::GetApiSpecRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::api::HttpBody>, GetApiSpecContents,
      (google::cloud::apigeeregistry::v1::GetApiSpecContentsRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>, CreateApiSpec,
      (google::cloud::apigeeregistry::v1::CreateApiSpecRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>, UpdateApiSpec,
      (google::cloud::apigeeregistry::v1::UpdateApiSpecRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteApiSpec,
      (google::cloud::apigeeregistry::v1::DeleteApiSpecRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>, TagApiSpecRevision,
      (google::cloud::apigeeregistry::v1::TagApiSpecRevisionRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::apigeeregistry::v1::ApiSpec>),
      ListApiSpecRevisions,
      (google::cloud::apigeeregistry::v1::ListApiSpecRevisionsRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>,
              RollbackApiSpec,
              (google::cloud::apigeeregistry::v1::RollbackApiSpecRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>,
      DeleteApiSpecRevision,
      (google::cloud::apigeeregistry::v1::DeleteApiSpecRevisionRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::apigeeregistry::v1::ApiDeployment>),
      ListApiDeployments,
      (google::cloud::apigeeregistry::v1::ListApiDeploymentsRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>,
              GetApiDeployment,
              (google::cloud::apigeeregistry::v1::GetApiDeploymentRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>,
      CreateApiDeployment,
      (google::cloud::apigeeregistry::v1::CreateApiDeploymentRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>,
      UpdateApiDeployment,
      (google::cloud::apigeeregistry::v1::UpdateApiDeploymentRequest const&
           request),
      (override));

  MOCK_METHOD(
      Status, DeleteApiDeployment,
      (google::cloud::apigeeregistry::v1::DeleteApiDeploymentRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>,
      TagApiDeploymentRevision,
      (google::cloud::apigeeregistry::v1::TagApiDeploymentRevisionRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::apigeeregistry::v1::ApiDeployment>),
      ListApiDeploymentRevisions,
      (google::cloud::apigeeregistry::v1::ListApiDeploymentRevisionsRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>,
      RollbackApiDeployment,
      (google::cloud::apigeeregistry::v1::RollbackApiDeploymentRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>,
              DeleteApiDeploymentRevision,
              (google::cloud::apigeeregistry::v1::
                   DeleteApiDeploymentRevisionRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::apigeeregistry::v1::Artifact>),
              ListArtifacts,
              (google::cloud::apigeeregistry::v1::ListArtifactsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::apigeeregistry::v1::Artifact>, GetArtifact,
      (google::cloud::apigeeregistry::v1::GetArtifactRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::api::HttpBody>, GetArtifactContents,
      (google::cloud::apigeeregistry::v1::GetArtifactContentsRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::apigeeregistry::v1::Artifact>, CreateArtifact,
      (google::cloud::apigeeregistry::v1::CreateArtifactRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::apigeeregistry::v1::Artifact>,
              ReplaceArtifact,
              (google::cloud::apigeeregistry::v1::ReplaceArtifactRequest const&
                   request),
              (override));

  MOCK_METHOD(
      Status, DeleteArtifact,
      (google::cloud::apigeeregistry::v1::DeleteArtifactRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigeeregistry_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEEREGISTRY_V1_MOCKS_MOCK_REGISTRY_CONNECTION_H
