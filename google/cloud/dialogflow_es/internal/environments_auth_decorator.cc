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
// source: google/cloud/dialogflow/v2/environment.proto

#include "google/cloud/dialogflow_es/internal/environments_auth_decorator.h"
#include <google/cloud/dialogflow/v2/environment.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EnvironmentsAuth::EnvironmentsAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<EnvironmentsStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::v2::ListEnvironmentsResponse>
EnvironmentsAuth::ListEnvironments(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListEnvironmentsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListEnvironments(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsAuth::GetEnvironment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetEnvironmentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetEnvironment(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsAuth::CreateEnvironment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateEnvironmentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateEnvironment(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsAuth::UpdateEnvironment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateEnvironmentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateEnvironment(context, request);
}

Status EnvironmentsAuth::DeleteEnvironment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteEnvironmentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteEnvironment(context, request);
}

StatusOr<google::cloud::dialogflow::v2::EnvironmentHistory>
EnvironmentsAuth::GetEnvironmentHistory(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetEnvironmentHistoryRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetEnvironmentHistory(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
