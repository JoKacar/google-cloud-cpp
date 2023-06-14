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
// source: google/cloud/dialogflow/v2/version.proto

#include "google/cloud/dialogflow_es/internal/versions_auth_decorator.h"
#include <google/cloud/dialogflow/v2/version.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VersionsAuth::VersionsAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<VersionsStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::v2::ListVersionsResponse>
VersionsAuth::ListVersions(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListVersionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListVersions(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Version> VersionsAuth::GetVersion(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetVersion(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Version> VersionsAuth::CreateVersion(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateVersion(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Version> VersionsAuth::UpdateVersion(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateVersion(context, request);
}

Status VersionsAuth::DeleteVersion(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteVersion(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
