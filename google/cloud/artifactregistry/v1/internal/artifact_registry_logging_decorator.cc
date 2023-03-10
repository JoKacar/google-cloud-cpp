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

#include "google/cloud/artifactregistry/v1/internal/artifact_registry_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/devtools/artifactregistry/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace artifactregistry_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ArtifactRegistryLogging::ArtifactRegistryLogging(
    std::shared_ptr<ArtifactRegistryStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::devtools::artifactregistry::v1::ListDockerImagesResponse>
ArtifactRegistryLogging::ListDockerImages(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListDockerImagesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::devtools::artifactregistry::v1::ListDockerImagesRequest const&
              request) { return child_->ListDockerImages(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::DockerImage>
ArtifactRegistryLogging::GetDockerImage(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetDockerImageRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::devtools::artifactregistry::v1::GetDockerImageRequest const&
              request) { return child_->GetDockerImage(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::ListMavenArtifactsResponse>
ArtifactRegistryLogging::ListMavenArtifacts(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListMavenArtifactsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::
                 ListMavenArtifactsRequest const& request) {
        return child_->ListMavenArtifacts(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::MavenArtifact>
ArtifactRegistryLogging::GetMavenArtifact(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetMavenArtifactRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::devtools::artifactregistry::v1::GetMavenArtifactRequest const&
              request) { return child_->GetMavenArtifact(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::ListNpmPackagesResponse>
ArtifactRegistryLogging::ListNpmPackages(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListNpmPackagesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::devtools::artifactregistry::v1::ListNpmPackagesRequest const&
              request) { return child_->ListNpmPackages(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::NpmPackage>
ArtifactRegistryLogging::GetNpmPackage(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetNpmPackageRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::GetNpmPackageRequest const&
                 request) { return child_->GetNpmPackage(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::ListPythonPackagesResponse>
ArtifactRegistryLogging::ListPythonPackages(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListPythonPackagesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::
                 ListPythonPackagesRequest const& request) {
        return child_->ListPythonPackages(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::PythonPackage>
ArtifactRegistryLogging::GetPythonPackage(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetPythonPackageRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::devtools::artifactregistry::v1::GetPythonPackageRequest const&
              request) { return child_->GetPythonPackage(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ArtifactRegistryLogging::AsyncImportAptArtifacts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::ImportAptArtifactsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::devtools::artifactregistry::v1::
                 ImportAptArtifactsRequest const& request) {
        return child_->AsyncImportAptArtifacts(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ArtifactRegistryLogging::AsyncImportYumArtifacts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::ImportYumArtifactsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::devtools::artifactregistry::v1::
                 ImportYumArtifactsRequest const& request) {
        return child_->AsyncImportYumArtifacts(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::ListRepositoriesResponse>
ArtifactRegistryLogging::ListRepositories(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListRepositoriesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::devtools::artifactregistry::v1::ListRepositoriesRequest const&
              request) { return child_->ListRepositories(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryLogging::GetRepository(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetRepositoryRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::GetRepositoryRequest const&
                 request) { return child_->GetRepository(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ArtifactRegistryLogging::AsyncCreateRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::CreateRepositoryRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::devtools::artifactregistry::v1::CreateRepositoryRequest const&
              request) {
        return child_->AsyncCreateRepository(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryLogging::UpdateRepository(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::UpdateRepositoryRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::devtools::artifactregistry::v1::UpdateRepositoryRequest const&
              request) { return child_->UpdateRepository(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ArtifactRegistryLogging::AsyncDeleteRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::DeleteRepositoryRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::devtools::artifactregistry::v1::DeleteRepositoryRequest const&
              request) {
        return child_->AsyncDeleteRepository(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::ListPackagesResponse>
ArtifactRegistryLogging::ListPackages(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListPackagesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::ListPackagesRequest const&
                 request) { return child_->ListPackages(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::Package>
ArtifactRegistryLogging::GetPackage(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetPackageRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::GetPackageRequest const&
                 request) { return child_->GetPackage(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ArtifactRegistryLogging::AsyncDeletePackage(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::DeletePackageRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::devtools::artifactregistry::v1::DeletePackageRequest const&
                 request) {
        return child_->AsyncDeletePackage(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::ListVersionsResponse>
ArtifactRegistryLogging::ListVersions(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListVersionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::ListVersionsRequest const&
                 request) { return child_->ListVersions(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::Version>
ArtifactRegistryLogging::GetVersion(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetVersionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::GetVersionRequest const&
                 request) { return child_->GetVersion(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ArtifactRegistryLogging::AsyncDeleteVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::artifactregistry::v1::DeleteVersionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::devtools::artifactregistry::v1::DeleteVersionRequest const&
                 request) {
        return child_->AsyncDeleteVersion(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::ListFilesResponse>
ArtifactRegistryLogging::ListFiles(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListFilesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::ListFilesRequest const&
                 request) { return child_->ListFiles(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::File>
ArtifactRegistryLogging::GetFile(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetFileRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::GetFileRequest const&
                 request) { return child_->GetFile(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::ListTagsResponse>
ArtifactRegistryLogging::ListTags(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::ListTagsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::ListTagsRequest const&
                 request) { return child_->ListTags(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryLogging::GetTag(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetTagRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::GetTagRequest const&
                 request) { return child_->GetTag(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryLogging::CreateTag(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::CreateTagRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::CreateTagRequest const&
                 request) { return child_->CreateTag(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryLogging::UpdateTag(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::UpdateTagRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::UpdateTagRequest const&
                 request) { return child_->UpdateTag(context, request); },
      context, request, __func__, tracing_options_);
}

Status ArtifactRegistryLogging::DeleteTag(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::DeleteTagRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::DeleteTagRequest const&
                 request) { return child_->DeleteTag(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> ArtifactRegistryLogging::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> ArtifactRegistryLogging::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ArtifactRegistryLogging::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
ArtifactRegistryLogging::GetProjectSettings(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetProjectSettingsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::
                 GetProjectSettingsRequest const& request) {
        return child_->GetProjectSettings(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
ArtifactRegistryLogging::UpdateProjectSettings(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::UpdateProjectSettingsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::
                 UpdateProjectSettingsRequest const& request) {
        return child_->UpdateProjectSettings(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::VPCSCConfig>
ArtifactRegistryLogging::GetVPCSCConfig(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::GetVPCSCConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::devtools::artifactregistry::v1::GetVPCSCConfigRequest const&
              request) { return child_->GetVPCSCConfig(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::artifactregistry::v1::VPCSCConfig>
ArtifactRegistryLogging::UpdateVPCSCConfig(
    grpc::ClientContext& context,
    google::devtools::artifactregistry::v1::UpdateVPCSCConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::
                 UpdateVPCSCConfigRequest const& request) {
        return child_->UpdateVPCSCConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ArtifactRegistryLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> ArtifactRegistryLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace artifactregistry_v1_internal
}  // namespace cloud
}  // namespace google
