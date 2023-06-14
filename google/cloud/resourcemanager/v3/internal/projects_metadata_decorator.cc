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
// source: google/cloud/resourcemanager/v3/projects.proto

#include "google/cloud/resourcemanager/v3/internal/projects_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/resourcemanager/v3/projects.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProjectsMetadata::ProjectsMetadata(
    std::shared_ptr<ProjectsStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::resourcemanager::v3::Project>
ProjectsMetadata::GetProject(
    grpc::ClientContext& context,
    google::cloud::resourcemanager::v3::GetProjectRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetProject(context, request);
}

StatusOr<google::cloud::resourcemanager::v3::ListProjectsResponse>
ProjectsMetadata::ListProjects(
    grpc::ClientContext& context,
    google::cloud::resourcemanager::v3::ListProjectsRequest const& request) {
  SetMetadata(context);
  return child_->ListProjects(context, request);
}

StatusOr<google::cloud::resourcemanager::v3::SearchProjectsResponse>
ProjectsMetadata::SearchProjects(
    grpc::ClientContext& context,
    google::cloud::resourcemanager::v3::SearchProjectsRequest const& request) {
  SetMetadata(context);
  return child_->SearchProjects(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ProjectsMetadata::AsyncCreateProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::resourcemanager::v3::CreateProjectRequest const& request) {
  SetMetadata(*context);
  return child_->AsyncCreateProject(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ProjectsMetadata::AsyncUpdateProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::resourcemanager::v3::UpdateProjectRequest const& request) {
  SetMetadata(*context, "project.name=" + request.project().name());
  return child_->AsyncUpdateProject(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ProjectsMetadata::AsyncMoveProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::resourcemanager::v3::MoveProjectRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncMoveProject(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ProjectsMetadata::AsyncDeleteProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::resourcemanager::v3::DeleteProjectRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteProject(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ProjectsMetadata::AsyncUndeleteProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::resourcemanager::v3::UndeleteProjectRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncUndeleteProject(cq, std::move(context), request);
}

StatusOr<google::iam::v1::Policy> ProjectsMetadata::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> ProjectsMetadata::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ProjectsMetadata::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->TestIamPermissions(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ProjectsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ProjectsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void ProjectsMetadata::SetMetadata(grpc::ClientContext& context,
                                   std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void ProjectsMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
