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

#include "google/cloud/apigeeregistry/v1/internal/registry_auth_decorator.h"
#include <google/cloud/apigeeregistry/v1/registry_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace apigeeregistry_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegistryAuth::RegistryAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<RegistryStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::apigeeregistry::v1::ListApisResponse>
RegistryAuth::ListApis(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ListApisRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListApis(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::Api> RegistryAuth::GetApi(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::GetApiRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetApi(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::Api> RegistryAuth::CreateApi(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::CreateApiRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateApi(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::Api> RegistryAuth::UpdateApi(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::UpdateApiRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateApi(context, request);
}

Status RegistryAuth::DeleteApi(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::DeleteApiRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteApi(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ListApiVersionsResponse>
RegistryAuth::ListApiVersions(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ListApiVersionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListApiVersions(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiVersion>
RegistryAuth::GetApiVersion(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::GetApiVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetApiVersion(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiVersion>
RegistryAuth::CreateApiVersion(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::CreateApiVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateApiVersion(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiVersion>
RegistryAuth::UpdateApiVersion(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::UpdateApiVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateApiVersion(context, request);
}

Status RegistryAuth::DeleteApiVersion(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::DeleteApiVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteApiVersion(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ListApiSpecsResponse>
RegistryAuth::ListApiSpecs(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ListApiSpecsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListApiSpecs(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec> RegistryAuth::GetApiSpec(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::GetApiSpecRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetApiSpec(context, request);
}

StatusOr<google::api::HttpBody> RegistryAuth::GetApiSpecContents(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::GetApiSpecContentsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetApiSpecContents(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryAuth::CreateApiSpec(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::CreateApiSpecRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateApiSpec(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryAuth::UpdateApiSpec(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::UpdateApiSpecRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateApiSpec(context, request);
}

Status RegistryAuth::DeleteApiSpec(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::DeleteApiSpecRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteApiSpec(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryAuth::TagApiSpecRevision(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::TagApiSpecRevisionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TagApiSpecRevision(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ListApiSpecRevisionsResponse>
RegistryAuth::ListApiSpecRevisions(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ListApiSpecRevisionsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListApiSpecRevisions(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryAuth::RollbackApiSpec(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::RollbackApiSpecRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RollbackApiSpec(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryAuth::DeleteApiSpecRevision(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::DeleteApiSpecRevisionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteApiSpecRevision(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ListApiDeploymentsResponse>
RegistryAuth::ListApiDeployments(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ListApiDeploymentsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListApiDeployments(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryAuth::GetApiDeployment(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::GetApiDeploymentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetApiDeployment(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryAuth::CreateApiDeployment(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::CreateApiDeploymentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateApiDeployment(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryAuth::UpdateApiDeployment(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::UpdateApiDeploymentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateApiDeployment(context, request);
}

Status RegistryAuth::DeleteApiDeployment(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::DeleteApiDeploymentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteApiDeployment(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryAuth::TagApiDeploymentRevision(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::TagApiDeploymentRevisionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TagApiDeploymentRevision(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ListApiDeploymentRevisionsResponse>
RegistryAuth::ListApiDeploymentRevisions(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ListApiDeploymentRevisionsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListApiDeploymentRevisions(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryAuth::RollbackApiDeployment(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::RollbackApiDeploymentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RollbackApiDeployment(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryAuth::DeleteApiDeploymentRevision(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::DeleteApiDeploymentRevisionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteApiDeploymentRevision(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::ListArtifactsResponse>
RegistryAuth::ListArtifacts(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ListArtifactsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListArtifacts(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::Artifact> RegistryAuth::GetArtifact(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::GetArtifactRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetArtifact(context, request);
}

StatusOr<google::api::HttpBody> RegistryAuth::GetArtifactContents(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::GetArtifactContentsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetArtifactContents(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::Artifact>
RegistryAuth::CreateArtifact(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::CreateArtifactRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateArtifact(context, request);
}

StatusOr<google::cloud::apigeeregistry::v1::Artifact>
RegistryAuth::ReplaceArtifact(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ReplaceArtifactRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ReplaceArtifact(context, request);
}

Status RegistryAuth::DeleteArtifact(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::DeleteArtifactRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteArtifact(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigeeregistry_v1_internal
}  // namespace cloud
}  // namespace google
