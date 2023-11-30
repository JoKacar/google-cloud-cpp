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

#include "google/cloud/apigeeregistry/v1/internal/registry_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace apigeeregistry_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegistryTracingStub::RegistryTracingStub(std::shared_ptr<RegistryStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::apigeeregistry::v1::ListApisResponse>
RegistryTracingStub::ListApis(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ListApisRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "ListApis");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->ListApis(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::Api> RegistryTracingStub::GetApi(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::GetApiRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "GetApi");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetApi(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::Api> RegistryTracingStub::CreateApi(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::CreateApiRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "CreateApi");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->CreateApi(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::Api> RegistryTracingStub::UpdateApi(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::UpdateApiRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "UpdateApi");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->UpdateApi(context, request));
}

Status RegistryTracingStub::DeleteApi(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::DeleteApiRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "DeleteApi");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->DeleteApi(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ListApiVersionsResponse>
RegistryTracingStub::ListApiVersions(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ListApiVersionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "ListApiVersions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListApiVersions(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ApiVersion>
RegistryTracingStub::GetApiVersion(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::GetApiVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "GetApiVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetApiVersion(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ApiVersion>
RegistryTracingStub::CreateApiVersion(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::CreateApiVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "CreateApiVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateApiVersion(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ApiVersion>
RegistryTracingStub::UpdateApiVersion(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::UpdateApiVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "UpdateApiVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateApiVersion(context, request));
}

Status RegistryTracingStub::DeleteApiVersion(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::DeleteApiVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "DeleteApiVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteApiVersion(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ListApiSpecsResponse>
RegistryTracingStub::ListApiSpecs(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ListApiSpecsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "ListApiSpecs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListApiSpecs(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryTracingStub::GetApiSpec(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::GetApiSpecRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "GetApiSpec");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetApiSpec(context, request));
}

StatusOr<google::api::HttpBody> RegistryTracingStub::GetApiSpecContents(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::GetApiSpecContentsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "GetApiSpecContents");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetApiSpecContents(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryTracingStub::CreateApiSpec(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::CreateApiSpecRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "CreateApiSpec");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateApiSpec(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryTracingStub::UpdateApiSpec(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::UpdateApiSpecRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "UpdateApiSpec");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateApiSpec(context, request));
}

Status RegistryTracingStub::DeleteApiSpec(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::DeleteApiSpecRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "DeleteApiSpec");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteApiSpec(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryTracingStub::TagApiSpecRevision(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::TagApiSpecRevisionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "TagApiSpecRevision");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->TagApiSpecRevision(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ListApiSpecRevisionsResponse>
RegistryTracingStub::ListApiSpecRevisions(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ListApiSpecRevisionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "ListApiSpecRevisions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListApiSpecRevisions(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryTracingStub::RollbackApiSpec(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::RollbackApiSpecRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "RollbackApiSpec");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RollbackApiSpec(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ApiSpec>
RegistryTracingStub::DeleteApiSpecRevision(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::DeleteApiSpecRevisionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "DeleteApiSpecRevision");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteApiSpecRevision(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ListApiDeploymentsResponse>
RegistryTracingStub::ListApiDeployments(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ListApiDeploymentsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "ListApiDeployments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListApiDeployments(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryTracingStub::GetApiDeployment(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::GetApiDeploymentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "GetApiDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetApiDeployment(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryTracingStub::CreateApiDeployment(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::CreateApiDeploymentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "CreateApiDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateApiDeployment(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryTracingStub::UpdateApiDeployment(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::UpdateApiDeploymentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "UpdateApiDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateApiDeployment(context, request));
}

Status RegistryTracingStub::DeleteApiDeployment(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::DeleteApiDeploymentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "DeleteApiDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteApiDeployment(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryTracingStub::TagApiDeploymentRevision(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::TagApiDeploymentRevisionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "TagApiDeploymentRevision");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->TagApiDeploymentRevision(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ListApiDeploymentRevisionsResponse>
RegistryTracingStub::ListApiDeploymentRevisions(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ListApiDeploymentRevisionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "ListApiDeploymentRevisions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListApiDeploymentRevisions(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryTracingStub::RollbackApiDeployment(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::RollbackApiDeploymentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "RollbackApiDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RollbackApiDeployment(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ApiDeployment>
RegistryTracingStub::DeleteApiDeploymentRevision(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::DeleteApiDeploymentRevisionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "DeleteApiDeploymentRevision");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteApiDeploymentRevision(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::ListArtifactsResponse>
RegistryTracingStub::ListArtifacts(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ListArtifactsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "ListArtifacts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListArtifacts(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::Artifact>
RegistryTracingStub::GetArtifact(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::GetArtifactRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "GetArtifact");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetArtifact(context, request));
}

StatusOr<google::api::HttpBody> RegistryTracingStub::GetArtifactContents(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::GetArtifactContentsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "GetArtifactContents");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetArtifactContents(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::Artifact>
RegistryTracingStub::CreateArtifact(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::CreateArtifactRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "CreateArtifact");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateArtifact(context, request));
}

StatusOr<google::cloud::apigeeregistry::v1::Artifact>
RegistryTracingStub::ReplaceArtifact(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::ReplaceArtifactRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "ReplaceArtifact");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ReplaceArtifact(context, request));
}

Status RegistryTracingStub::DeleteArtifact(
    grpc::ClientContext& context,
    google::cloud::apigeeregistry::v1::DeleteArtifactRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.apigeeregistry.v1.Registry",
                                     "DeleteArtifact");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteArtifact(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<RegistryStub> MakeRegistryTracingStub(
    std::shared_ptr<RegistryStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<RegistryTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigeeregistry_v1_internal
}  // namespace cloud
}  // namespace google
