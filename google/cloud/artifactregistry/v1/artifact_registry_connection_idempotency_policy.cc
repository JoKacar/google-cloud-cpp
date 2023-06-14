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
// source: google/devtools/artifactregistry/v1/service.proto

#include "google/cloud/artifactregistry/v1/artifact_registry_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace artifactregistry_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ArtifactRegistryConnectionIdempotencyPolicy::
    ~ArtifactRegistryConnectionIdempotencyPolicy() = default;

std::unique_ptr<ArtifactRegistryConnectionIdempotencyPolicy>
ArtifactRegistryConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ArtifactRegistryConnectionIdempotencyPolicy>(*this);
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::ListDockerImages(
    google::devtools::artifactregistry::v1::
        ListDockerImagesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::GetDockerImage(
    google::devtools::artifactregistry::v1::GetDockerImageRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::ListMavenArtifacts(
    google::devtools::artifactregistry::v1::
        ListMavenArtifactsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::GetMavenArtifact(
    google::devtools::artifactregistry::v1::GetMavenArtifactRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::ListNpmPackages(
    google::devtools::artifactregistry::v1::ListNpmPackagesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::GetNpmPackage(
    google::devtools::artifactregistry::v1::GetNpmPackageRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::ListPythonPackages(
    google::devtools::artifactregistry::v1::
        ListPythonPackagesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::GetPythonPackage(
    google::devtools::artifactregistry::v1::GetPythonPackageRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::ImportAptArtifacts(
    google::devtools::artifactregistry::v1::ImportAptArtifactsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::ImportYumArtifacts(
    google::devtools::artifactregistry::v1::ImportYumArtifactsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::ListRepositories(
    google::devtools::artifactregistry::v1::
        ListRepositoriesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::GetRepository(
    google::devtools::artifactregistry::v1::GetRepositoryRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::CreateRepository(
    google::devtools::artifactregistry::v1::CreateRepositoryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::UpdateRepository(
    google::devtools::artifactregistry::v1::UpdateRepositoryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::DeleteRepository(
    google::devtools::artifactregistry::v1::DeleteRepositoryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::ListPackages(
    google::devtools::artifactregistry::v1::ListPackagesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::GetPackage(
    google::devtools::artifactregistry::v1::GetPackageRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::DeletePackage(
    google::devtools::artifactregistry::v1::DeletePackageRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::ListVersions(
    google::devtools::artifactregistry::v1::ListVersionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::GetVersion(
    google::devtools::artifactregistry::v1::GetVersionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::DeleteVersion(
    google::devtools::artifactregistry::v1::DeleteVersionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::ListFiles(
    google::devtools::artifactregistry::v1::ListFilesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::GetFile(
    google::devtools::artifactregistry::v1::GetFileRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::ListTags(
    google::devtools::artifactregistry::v1::ListTagsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::GetTag(
    google::devtools::artifactregistry::v1::GetTagRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::CreateTag(
    google::devtools::artifactregistry::v1::CreateTagRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::UpdateTag(
    google::devtools::artifactregistry::v1::UpdateTagRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::DeleteTag(
    google::devtools::artifactregistry::v1::DeleteTagRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::GetProjectSettings(
    google::devtools::artifactregistry::v1::GetProjectSettingsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::UpdateProjectSettings(
    google::devtools::artifactregistry::v1::
        UpdateProjectSettingsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::GetVPCSCConfig(
    google::devtools::artifactregistry::v1::GetVPCSCConfigRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ArtifactRegistryConnectionIdempotencyPolicy::UpdateVPCSCConfig(
    google::devtools::artifactregistry::v1::UpdateVPCSCConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ArtifactRegistryConnectionIdempotencyPolicy>
MakeDefaultArtifactRegistryConnectionIdempotencyPolicy() {
  return std::make_unique<ArtifactRegistryConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace artifactregistry_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
