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

#include "google/cloud/artifactregistry/v1/internal/artifact_registry_connection_impl.h"
#include "google/cloud/artifactregistry/v1/internal/artifact_registry_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace artifactregistry_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ArtifactRegistryConnectionImpl::ArtifactRegistryConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<artifactregistry_v1_internal::ArtifactRegistryStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ArtifactRegistryConnection::options())) {}

StreamRange<google::devtools::artifactregistry::v1::DockerImage>
ArtifactRegistryConnectionImpl::ListDockerImages(
    google::devtools::artifactregistry::v1::ListDockerImagesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<artifactregistry_v1::ArtifactRegistryRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListDockerImages(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::artifactregistry::v1::DockerImage>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::devtools::artifactregistry::v1::ListDockerImagesRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::devtools::artifactregistry::v1::
                       ListDockerImagesRequest const& request) {
              return stub->ListDockerImages(context, request);
            },
            r, function_name);
      },
      [](google::devtools::artifactregistry::v1::ListDockerImagesResponse r) {
        std::vector<google::devtools::artifactregistry::v1::DockerImage> result(
            r.docker_images().size());
        auto& messages = *r.mutable_docker_images();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::devtools::artifactregistry::v1::DockerImage>
ArtifactRegistryConnectionImpl::GetDockerImage(
    google::devtools::artifactregistry::v1::GetDockerImageRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetDockerImage(request),
      [this](
          grpc::ClientContext& context,
          google::devtools::artifactregistry::v1::GetDockerImageRequest const&
              request) { return stub_->GetDockerImage(context, request); },
      request, __func__);
}

StreamRange<google::devtools::artifactregistry::v1::MavenArtifact>
ArtifactRegistryConnectionImpl::ListMavenArtifacts(
    google::devtools::artifactregistry::v1::ListMavenArtifactsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<artifactregistry_v1::ArtifactRegistryRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListMavenArtifacts(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::artifactregistry::v1::MavenArtifact>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::devtools::artifactregistry::v1::
                          ListMavenArtifactsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::devtools::artifactregistry::v1::
                       ListMavenArtifactsRequest const& request) {
              return stub->ListMavenArtifacts(context, request);
            },
            r, function_name);
      },
      [](google::devtools::artifactregistry::v1::ListMavenArtifactsResponse r) {
        std::vector<google::devtools::artifactregistry::v1::MavenArtifact>
            result(r.maven_artifacts().size());
        auto& messages = *r.mutable_maven_artifacts();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::devtools::artifactregistry::v1::MavenArtifact>
ArtifactRegistryConnectionImpl::GetMavenArtifact(
    google::devtools::artifactregistry::v1::GetMavenArtifactRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetMavenArtifact(request),
      [this](
          grpc::ClientContext& context,
          google::devtools::artifactregistry::v1::GetMavenArtifactRequest const&
              request) { return stub_->GetMavenArtifact(context, request); },
      request, __func__);
}

StreamRange<google::devtools::artifactregistry::v1::NpmPackage>
ArtifactRegistryConnectionImpl::ListNpmPackages(
    google::devtools::artifactregistry::v1::ListNpmPackagesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<artifactregistry_v1::ArtifactRegistryRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListNpmPackages(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::artifactregistry::v1::NpmPackage>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::devtools::artifactregistry::v1::ListNpmPackagesRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::devtools::artifactregistry::v1::
                       ListNpmPackagesRequest const& request) {
              return stub->ListNpmPackages(context, request);
            },
            r, function_name);
      },
      [](google::devtools::artifactregistry::v1::ListNpmPackagesResponse r) {
        std::vector<google::devtools::artifactregistry::v1::NpmPackage> result(
            r.npm_packages().size());
        auto& messages = *r.mutable_npm_packages();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::devtools::artifactregistry::v1::NpmPackage>
ArtifactRegistryConnectionImpl::GetNpmPackage(
    google::devtools::artifactregistry::v1::GetNpmPackageRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetNpmPackage(request),
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::GetNpmPackageRequest const&
                 request) { return stub_->GetNpmPackage(context, request); },
      request, __func__);
}

StreamRange<google::devtools::artifactregistry::v1::PythonPackage>
ArtifactRegistryConnectionImpl::ListPythonPackages(
    google::devtools::artifactregistry::v1::ListPythonPackagesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<artifactregistry_v1::ArtifactRegistryRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListPythonPackages(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::artifactregistry::v1::PythonPackage>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::devtools::artifactregistry::v1::
                          ListPythonPackagesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::devtools::artifactregistry::v1::
                       ListPythonPackagesRequest const& request) {
              return stub->ListPythonPackages(context, request);
            },
            r, function_name);
      },
      [](google::devtools::artifactregistry::v1::ListPythonPackagesResponse r) {
        std::vector<google::devtools::artifactregistry::v1::PythonPackage>
            result(r.python_packages().size());
        auto& messages = *r.mutable_python_packages();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::devtools::artifactregistry::v1::PythonPackage>
ArtifactRegistryConnectionImpl::GetPythonPackage(
    google::devtools::artifactregistry::v1::GetPythonPackageRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetPythonPackage(request),
      [this](
          grpc::ClientContext& context,
          google::devtools::artifactregistry::v1::GetPythonPackageRequest const&
              request) { return stub_->GetPythonPackage(context, request); },
      request, __func__);
}

future<StatusOr<
    google::devtools::artifactregistry::v1::ImportAptArtifactsResponse>>
ArtifactRegistryConnectionImpl::ImportAptArtifacts(
    google::devtools::artifactregistry::v1::ImportAptArtifactsRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::artifactregistry::v1::ImportAptArtifactsResponse>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::devtools::artifactregistry::v1::
                 ImportAptArtifactsRequest const& request) {
        return stub->AsyncImportAptArtifacts(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::devtools::artifactregistry::v1::ImportAptArtifactsResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->ImportAptArtifacts(request), polling_policy(),
      __func__);
}

future<StatusOr<
    google::devtools::artifactregistry::v1::ImportYumArtifactsResponse>>
ArtifactRegistryConnectionImpl::ImportYumArtifacts(
    google::devtools::artifactregistry::v1::ImportYumArtifactsRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::artifactregistry::v1::ImportYumArtifactsResponse>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::devtools::artifactregistry::v1::
                 ImportYumArtifactsRequest const& request) {
        return stub->AsyncImportYumArtifacts(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::devtools::artifactregistry::v1::ImportYumArtifactsResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->ImportYumArtifacts(request), polling_policy(),
      __func__);
}

StreamRange<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryConnectionImpl::ListRepositories(
    google::devtools::artifactregistry::v1::ListRepositoriesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<artifactregistry_v1::ArtifactRegistryRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListRepositories(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::artifactregistry::v1::Repository>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::devtools::artifactregistry::v1::ListRepositoriesRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::devtools::artifactregistry::v1::
                       ListRepositoriesRequest const& request) {
              return stub->ListRepositories(context, request);
            },
            r, function_name);
      },
      [](google::devtools::artifactregistry::v1::ListRepositoriesResponse r) {
        std::vector<google::devtools::artifactregistry::v1::Repository> result(
            r.repositories().size());
        auto& messages = *r.mutable_repositories();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryConnectionImpl::GetRepository(
    google::devtools::artifactregistry::v1::GetRepositoryRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetRepository(request),
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::GetRepositoryRequest const&
                 request) { return stub_->GetRepository(context, request); },
      request, __func__);
}

future<StatusOr<google::devtools::artifactregistry::v1::Repository>>
ArtifactRegistryConnectionImpl::CreateRepository(
    google::devtools::artifactregistry::v1::CreateRepositoryRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::artifactregistry::v1::Repository>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::devtools::artifactregistry::v1::CreateRepositoryRequest const&
              request) {
        return stub->AsyncCreateRepository(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::devtools::artifactregistry::v1::Repository>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateRepository(request), polling_policy(),
      __func__);
}

StatusOr<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryConnectionImpl::UpdateRepository(
    google::devtools::artifactregistry::v1::UpdateRepositoryRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateRepository(request),
      [this](
          grpc::ClientContext& context,
          google::devtools::artifactregistry::v1::UpdateRepositoryRequest const&
              request) { return stub_->UpdateRepository(context, request); },
      request, __func__);
}

future<StatusOr<google::devtools::artifactregistry::v1::OperationMetadata>>
ArtifactRegistryConnectionImpl::DeleteRepository(
    google::devtools::artifactregistry::v1::DeleteRepositoryRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::artifactregistry::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::devtools::artifactregistry::v1::DeleteRepositoryRequest const&
              request) {
        return stub->AsyncDeleteRepository(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::devtools::artifactregistry::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteRepository(request), polling_policy(),
      __func__);
}

StreamRange<google::devtools::artifactregistry::v1::Package>
ArtifactRegistryConnectionImpl::ListPackages(
    google::devtools::artifactregistry::v1::ListPackagesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<artifactregistry_v1::ArtifactRegistryRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListPackages(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::artifactregistry::v1::Package>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::devtools::artifactregistry::v1::ListPackagesRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::devtools::artifactregistry::v1::
                       ListPackagesRequest const& request) {
              return stub->ListPackages(context, request);
            },
            r, function_name);
      },
      [](google::devtools::artifactregistry::v1::ListPackagesResponse r) {
        std::vector<google::devtools::artifactregistry::v1::Package> result(
            r.packages().size());
        auto& messages = *r.mutable_packages();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::devtools::artifactregistry::v1::Package>
ArtifactRegistryConnectionImpl::GetPackage(
    google::devtools::artifactregistry::v1::GetPackageRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetPackage(request),
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::GetPackageRequest const&
                 request) { return stub_->GetPackage(context, request); },
      request, __func__);
}

future<StatusOr<google::devtools::artifactregistry::v1::OperationMetadata>>
ArtifactRegistryConnectionImpl::DeletePackage(
    google::devtools::artifactregistry::v1::DeletePackageRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::artifactregistry::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::devtools::artifactregistry::v1::DeletePackageRequest const&
                 request) {
        return stub->AsyncDeletePackage(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::devtools::artifactregistry::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeletePackage(request), polling_policy(), __func__);
}

StreamRange<google::devtools::artifactregistry::v1::Version>
ArtifactRegistryConnectionImpl::ListVersions(
    google::devtools::artifactregistry::v1::ListVersionsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<artifactregistry_v1::ArtifactRegistryRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListVersions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::artifactregistry::v1::Version>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::devtools::artifactregistry::v1::ListVersionsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::devtools::artifactregistry::v1::
                       ListVersionsRequest const& request) {
              return stub->ListVersions(context, request);
            },
            r, function_name);
      },
      [](google::devtools::artifactregistry::v1::ListVersionsResponse r) {
        std::vector<google::devtools::artifactregistry::v1::Version> result(
            r.versions().size());
        auto& messages = *r.mutable_versions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::devtools::artifactregistry::v1::Version>
ArtifactRegistryConnectionImpl::GetVersion(
    google::devtools::artifactregistry::v1::GetVersionRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetVersion(request),
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::GetVersionRequest const&
                 request) { return stub_->GetVersion(context, request); },
      request, __func__);
}

future<StatusOr<google::devtools::artifactregistry::v1::OperationMetadata>>
ArtifactRegistryConnectionImpl::DeleteVersion(
    google::devtools::artifactregistry::v1::DeleteVersionRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::artifactregistry::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::devtools::artifactregistry::v1::DeleteVersionRequest const&
                 request) {
        return stub->AsyncDeleteVersion(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::devtools::artifactregistry::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteVersion(request), polling_policy(), __func__);
}

StreamRange<google::devtools::artifactregistry::v1::File>
ArtifactRegistryConnectionImpl::ListFiles(
    google::devtools::artifactregistry::v1::ListFilesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<artifactregistry_v1::ArtifactRegistryRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListFiles(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::artifactregistry::v1::File>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::devtools::artifactregistry::v1::ListFilesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::devtools::artifactregistry::v1::ListFilesRequest const&
                    request) { return stub->ListFiles(context, request); },
            r, function_name);
      },
      [](google::devtools::artifactregistry::v1::ListFilesResponse r) {
        std::vector<google::devtools::artifactregistry::v1::File> result(
            r.files().size());
        auto& messages = *r.mutable_files();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::devtools::artifactregistry::v1::File>
ArtifactRegistryConnectionImpl::GetFile(
    google::devtools::artifactregistry::v1::GetFileRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->GetFile(request),
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::GetFileRequest const&
                 request) { return stub_->GetFile(context, request); },
      request, __func__);
}

StreamRange<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryConnectionImpl::ListTags(
    google::devtools::artifactregistry::v1::ListTagsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<artifactregistry_v1::ArtifactRegistryRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListTags(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::artifactregistry::v1::Tag>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::devtools::artifactregistry::v1::ListTagsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::devtools::artifactregistry::v1::ListTagsRequest const&
                    request) { return stub->ListTags(context, request); },
            r, function_name);
      },
      [](google::devtools::artifactregistry::v1::ListTagsResponse r) {
        std::vector<google::devtools::artifactregistry::v1::Tag> result(
            r.tags().size());
        auto& messages = *r.mutable_tags();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryConnectionImpl::GetTag(
    google::devtools::artifactregistry::v1::GetTagRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->GetTag(request),
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::GetTagRequest const&
                 request) { return stub_->GetTag(context, request); },
      request, __func__);
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryConnectionImpl::CreateTag(
    google::devtools::artifactregistry::v1::CreateTagRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateTag(request),
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::CreateTagRequest const&
                 request) { return stub_->CreateTag(context, request); },
      request, __func__);
}

StatusOr<google::devtools::artifactregistry::v1::Tag>
ArtifactRegistryConnectionImpl::UpdateTag(
    google::devtools::artifactregistry::v1::UpdateTagRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateTag(request),
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::UpdateTagRequest const&
                 request) { return stub_->UpdateTag(context, request); },
      request, __func__);
}

Status ArtifactRegistryConnectionImpl::DeleteTag(
    google::devtools::artifactregistry::v1::DeleteTagRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteTag(request),
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::DeleteTagRequest const&
                 request) { return stub_->DeleteTag(context, request); },
      request, __func__);
}

StatusOr<google::iam::v1::Policy> ArtifactRegistryConnectionImpl::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->SetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy> ArtifactRegistryConnectionImpl::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ArtifactRegistryConnectionImpl::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->TestIamPermissions(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(context, request);
      },
      request, __func__);
}

StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
ArtifactRegistryConnectionImpl::GetProjectSettings(
    google::devtools::artifactregistry::v1::GetProjectSettingsRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetProjectSettings(request),
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::
                 GetProjectSettingsRequest const& request) {
        return stub_->GetProjectSettings(context, request);
      },
      request, __func__);
}

StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
ArtifactRegistryConnectionImpl::UpdateProjectSettings(
    google::devtools::artifactregistry::v1::UpdateProjectSettingsRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateProjectSettings(request),
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::
                 UpdateProjectSettingsRequest const& request) {
        return stub_->UpdateProjectSettings(context, request);
      },
      request, __func__);
}

StatusOr<google::devtools::artifactregistry::v1::VPCSCConfig>
ArtifactRegistryConnectionImpl::GetVPCSCConfig(
    google::devtools::artifactregistry::v1::GetVPCSCConfigRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetVPCSCConfig(request),
      [this](
          grpc::ClientContext& context,
          google::devtools::artifactregistry::v1::GetVPCSCConfigRequest const&
              request) { return stub_->GetVPCSCConfig(context, request); },
      request, __func__);
}

StatusOr<google::devtools::artifactregistry::v1::VPCSCConfig>
ArtifactRegistryConnectionImpl::UpdateVPCSCConfig(
    google::devtools::artifactregistry::v1::UpdateVPCSCConfigRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateVPCSCConfig(request),
      [this](grpc::ClientContext& context,
             google::devtools::artifactregistry::v1::
                 UpdateVPCSCConfigRequest const& request) {
        return stub_->UpdateVPCSCConfig(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace artifactregistry_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
