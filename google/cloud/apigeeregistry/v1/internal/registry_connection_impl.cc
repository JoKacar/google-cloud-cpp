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

#include "google/cloud/apigeeregistry/v1/internal/registry_connection_impl.h"
#include "google/cloud/apigeeregistry/v1/internal/registry_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace apigeeregistry_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<apigeeregistry_v1::RegistryRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<apigeeregistry_v1::RegistryRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<apigeeregistry_v1::RegistryBackoffPolicyOption>()->clone();
}

std::unique_ptr<apigeeregistry_v1::RegistryConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<apigeeregistry_v1::RegistryConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

RegistryConnectionImpl::RegistryConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<apigeeregistry_v1_internal::RegistryStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      RegistryConnection::options())) {}

StreamRange<google::cloud::apigeeregistry::v1::Api>
RegistryConnectionImpl::ListApis(
    google::cloud::apigeeregistry::v1::ListApisRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListApis(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::apigeeregistry::v1::Api>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<apigeeregistry_v1::RegistryRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::apigeeregistry::v1::ListApisRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::apigeeregistry::v1::ListApisRequest const&
                       request) { return stub->ListApis(context, request); },
            r, function_name);
      },
      [](google::cloud::apigeeregistry::v1::ListApisResponse r) {
        std::vector<google::cloud::apigeeregistry::v1::Api> result(
            r.apis().size());
        auto& messages = *r.mutable_apis();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::apigeeregistry::v1::Api> RegistryConnectionImpl::GetApi(
    google::cloud::apigeeregistry::v1::GetApiRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetApi(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::GetApiRequest const& request) {
        return stub_->GetApi(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::apigeeregistry::v1::Api>
RegistryConnectionImpl::CreateApi(
    google::cloud::apigeeregistry::v1::CreateApiRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateApi(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::apigeeregistry::v1::CreateApiRequest const& request) {
        return stub_->CreateApi(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::apigeeregistry::v1::Api>
RegistryConnectionImpl::UpdateApi(
    google::cloud::apigeeregistry::v1::UpdateApiRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateApi(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::apigeeregistry::v1::UpdateApiRequest const& request) {
        return stub_->UpdateApi(context, request);
      },
      request, __func__);
}

Status RegistryConnectionImpl::DeleteApi(
    google::cloud::apigeeregistry::v1::DeleteApiRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteApi(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::apigeeregistry::v1::DeleteApiRequest const& request) {
        return stub_->DeleteApi(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::apigeeregistry::v1::ApiVersion>
RegistryConnectionImpl::ListApiVersions(
    google::cloud::apigeeregistry::v1::ListApiVersionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListApiVersions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::apigeeregistry::v1::ApiVersion>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<apigeeregistry_v1::RegistryRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::apigeeregistry::v1::ListApiVersionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::apigeeregistry::v1::ListApiVersionsRequest const&
                    request) {
              return stub->ListApiVersions(context, request);
            },
            r, function_name);
      },
      [](google::cloud::apigeeregistry::v1::ListApiVersionsResponse r) {
        std::vector<google::cloud::apigeeregistry::v1::ApiVersion> result(
            r.api_versions().size());
        auto& messages = *r.mutable_api_versions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::apigeeregistry::v1::ApiVersion>
RegistryConnectionImpl::GetApiVersion(
    google::cloud::apigeeregistry::v1::GetApiVersionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetApiVersion(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::GetApiVersionRequest const&
                 request) { return stub_->GetApiVersion(context, request); },
      request, __func__);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiVersion>
RegistryConnectionImpl::CreateApiVersion(
    google::cloud::apigeeregistry::v1::CreateApiVersionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateApiVersion(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::CreateApiVersionRequest const&
                 request) { return stub_->CreateApiVersion(context, request); },
      request, __func__);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiVersion>
RegistryConnectionImpl::UpdateApiVersion(
    google::cloud::apigeeregistry::v1::UpdateApiVersionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateApiVersion(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::UpdateApiVersionRequest const&
                 request) { return stub_->UpdateApiVersion(context, request); },
      request, __func__);
}

Status RegistryConnectionImpl::DeleteApiVersion(
    google::cloud::apigeeregistry::v1::DeleteApiVersionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteApiVersion(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::DeleteApiVersionRequest const&
                 request) { return stub_->DeleteApiVersion(context, request); },
      request, __func__);
}

StreamRange<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryConnectionImpl::ListApiSpecs(
    google::cloud::apigeeregistry::v1::ListApiSpecsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListApiSpecs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::apigeeregistry::v1::ApiSpec>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<apigeeregistry_v1::RegistryRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::apigeeregistry::v1::ListApiSpecsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::apigeeregistry::v1::ListApiSpecsRequest const&
                       request) {
              return stub->ListApiSpecs(context, request);
            },
            r, function_name);
      },
      [](google::cloud::apigeeregistry::v1::ListApiSpecsResponse r) {
        std::vector<google::cloud::apigeeregistry::v1::ApiSpec> result(
            r.api_specs().size());
        auto& messages = *r.mutable_api_specs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryConnectionImpl::GetApiSpec(
    google::cloud::apigeeregistry::v1::GetApiSpecRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetApiSpec(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::apigeeregistry::v1::GetApiSpecRequest const& request) {
        return stub_->GetApiSpec(context, request);
      },
      request, __func__);
}

StatusOr<google::api::HttpBody> RegistryConnectionImpl::GetApiSpecContents(
    google::cloud::apigeeregistry::v1::GetApiSpecContentsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetApiSpecContents(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::GetApiSpecContentsRequest const&
                 request) {
        return stub_->GetApiSpecContents(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryConnectionImpl::CreateApiSpec(
    google::cloud::apigeeregistry::v1::CreateApiSpecRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateApiSpec(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::CreateApiSpecRequest const&
                 request) { return stub_->CreateApiSpec(context, request); },
      request, __func__);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryConnectionImpl::UpdateApiSpec(
    google::cloud::apigeeregistry::v1::UpdateApiSpecRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateApiSpec(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::UpdateApiSpecRequest const&
                 request) { return stub_->UpdateApiSpec(context, request); },
      request, __func__);
}

Status RegistryConnectionImpl::DeleteApiSpec(
    google::cloud::apigeeregistry::v1::DeleteApiSpecRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteApiSpec(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::DeleteApiSpecRequest const&
                 request) { return stub_->DeleteApiSpec(context, request); },
      request, __func__);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryConnectionImpl::TagApiSpecRevision(
    google::cloud::apigeeregistry::v1::TagApiSpecRevisionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TagApiSpecRevision(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::TagApiSpecRevisionRequest const&
                 request) {
        return stub_->TagApiSpecRevision(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryConnectionImpl::ListApiSpecRevisions(
    google::cloud::apigeeregistry::v1::ListApiSpecRevisionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListApiSpecRevisions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::apigeeregistry::v1::ApiSpec>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<apigeeregistry_v1::RegistryRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::apigeeregistry::v1::ListApiSpecRevisionsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::apigeeregistry::v1::
                       ListApiSpecRevisionsRequest const& request) {
              return stub->ListApiSpecRevisions(context, request);
            },
            r, function_name);
      },
      [](google::cloud::apigeeregistry::v1::ListApiSpecRevisionsResponse r) {
        std::vector<google::cloud::apigeeregistry::v1::ApiSpec> result(
            r.api_specs().size());
        auto& messages = *r.mutable_api_specs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryConnectionImpl::RollbackApiSpec(
    google::cloud::apigeeregistry::v1::RollbackApiSpecRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RollbackApiSpec(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::RollbackApiSpecRequest const&
                 request) { return stub_->RollbackApiSpec(context, request); },
      request, __func__);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryConnectionImpl::DeleteApiSpecRevision(
    google::cloud::apigeeregistry::v1::DeleteApiSpecRevisionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteApiSpecRevision(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::apigeeregistry::v1::DeleteApiSpecRevisionRequest const&
              request) {
        return stub_->DeleteApiSpecRevision(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryConnectionImpl::ListApiDeployments(
    google::cloud::apigeeregistry::v1::ListApiDeploymentsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListApiDeployments(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::apigeeregistry::v1::ApiDeployment>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<apigeeregistry_v1::RegistryRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::apigeeregistry::v1::ListApiDeploymentsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::apigeeregistry::v1::
                       ListApiDeploymentsRequest const& request) {
              return stub->ListApiDeployments(context, request);
            },
            r, function_name);
      },
      [](google::cloud::apigeeregistry::v1::ListApiDeploymentsResponse r) {
        std::vector<google::cloud::apigeeregistry::v1::ApiDeployment> result(
            r.api_deployments().size());
        auto& messages = *r.mutable_api_deployments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryConnectionImpl::GetApiDeployment(
    google::cloud::apigeeregistry::v1::GetApiDeploymentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetApiDeployment(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::GetApiDeploymentRequest const&
                 request) { return stub_->GetApiDeployment(context, request); },
      request, __func__);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryConnectionImpl::CreateApiDeployment(
    google::cloud::apigeeregistry::v1::CreateApiDeploymentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateApiDeployment(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::apigeeregistry::v1::CreateApiDeploymentRequest const&
              request) { return stub_->CreateApiDeployment(context, request); },
      request, __func__);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryConnectionImpl::UpdateApiDeployment(
    google::cloud::apigeeregistry::v1::UpdateApiDeploymentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateApiDeployment(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::apigeeregistry::v1::UpdateApiDeploymentRequest const&
              request) { return stub_->UpdateApiDeployment(context, request); },
      request, __func__);
}

Status RegistryConnectionImpl::DeleteApiDeployment(
    google::cloud::apigeeregistry::v1::DeleteApiDeploymentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteApiDeployment(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::apigeeregistry::v1::DeleteApiDeploymentRequest const&
              request) { return stub_->DeleteApiDeployment(context, request); },
      request, __func__);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryConnectionImpl::TagApiDeploymentRevision(
    google::cloud::apigeeregistry::v1::TagApiDeploymentRevisionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TagApiDeploymentRevision(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::
                 TagApiDeploymentRevisionRequest const& request) {
        return stub_->TagApiDeploymentRevision(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryConnectionImpl::ListApiDeploymentRevisions(
    google::cloud::apigeeregistry::v1::ListApiDeploymentRevisionsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListApiDeploymentRevisions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::apigeeregistry::v1::ApiDeployment>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<apigeeregistry_v1::RegistryRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::apigeeregistry::v1::
              ListApiDeploymentRevisionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::apigeeregistry::v1::
                       ListApiDeploymentRevisionsRequest const& request) {
              return stub->ListApiDeploymentRevisions(context, request);
            },
            r, function_name);
      },
      [](google::cloud::apigeeregistry::v1::ListApiDeploymentRevisionsResponse
             r) {
        std::vector<google::cloud::apigeeregistry::v1::ApiDeployment> result(
            r.api_deployments().size());
        auto& messages = *r.mutable_api_deployments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryConnectionImpl::RollbackApiDeployment(
    google::cloud::apigeeregistry::v1::RollbackApiDeploymentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RollbackApiDeployment(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::apigeeregistry::v1::RollbackApiDeploymentRequest const&
              request) {
        return stub_->RollbackApiDeployment(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryConnectionImpl::DeleteApiDeploymentRevision(
    google::cloud::apigeeregistry::v1::DeleteApiDeploymentRevisionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteApiDeploymentRevision(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::
                 DeleteApiDeploymentRevisionRequest const& request) {
        return stub_->DeleteApiDeploymentRevision(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::apigeeregistry::v1::Artifact>
RegistryConnectionImpl::ListArtifacts(
    google::cloud::apigeeregistry::v1::ListArtifactsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListArtifacts(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::apigeeregistry::v1::Artifact>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<apigeeregistry_v1::RegistryRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::apigeeregistry::v1::ListArtifactsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::apigeeregistry::v1::ListArtifactsRequest const&
                    request) { return stub->ListArtifacts(context, request); },
            r, function_name);
      },
      [](google::cloud::apigeeregistry::v1::ListArtifactsResponse r) {
        std::vector<google::cloud::apigeeregistry::v1::Artifact> result(
            r.artifacts().size());
        auto& messages = *r.mutable_artifacts();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::apigeeregistry::v1::Artifact>
RegistryConnectionImpl::GetArtifact(
    google::cloud::apigeeregistry::v1::GetArtifactRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetArtifact(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::GetArtifactRequest const&
                 request) { return stub_->GetArtifact(context, request); },
      request, __func__);
}

StatusOr<google::api::HttpBody> RegistryConnectionImpl::GetArtifactContents(
    google::cloud::apigeeregistry::v1::GetArtifactContentsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetArtifactContents(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::apigeeregistry::v1::GetArtifactContentsRequest const&
              request) { return stub_->GetArtifactContents(context, request); },
      request, __func__);
}

StatusOr<google::cloud::apigeeregistry::v1::Artifact>
RegistryConnectionImpl::CreateArtifact(
    google::cloud::apigeeregistry::v1::CreateArtifactRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateArtifact(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::CreateArtifactRequest const&
                 request) { return stub_->CreateArtifact(context, request); },
      request, __func__);
}

StatusOr<google::cloud::apigeeregistry::v1::Artifact>
RegistryConnectionImpl::ReplaceArtifact(
    google::cloud::apigeeregistry::v1::ReplaceArtifactRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ReplaceArtifact(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::ReplaceArtifactRequest const&
                 request) { return stub_->ReplaceArtifact(context, request); },
      request, __func__);
}

Status RegistryConnectionImpl::DeleteArtifact(
    google::cloud::apigeeregistry::v1::DeleteArtifactRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteArtifact(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigeeregistry::v1::DeleteArtifactRequest const&
                 request) { return stub_->DeleteArtifact(context, request); },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigeeregistry_v1_internal
}  // namespace cloud
}  // namespace google
