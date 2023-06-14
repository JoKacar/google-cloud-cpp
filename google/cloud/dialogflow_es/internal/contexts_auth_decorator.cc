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
// source: google/cloud/dialogflow/v2/context.proto

#include "google/cloud/dialogflow_es/internal/contexts_auth_decorator.h"
#include <google/cloud/dialogflow/v2/context.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ContextsAuth::ContextsAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ContextsStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::v2::ListContextsResponse>
ContextsAuth::ListContexts(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListContextsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListContexts(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Context> ContextsAuth::GetContext(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetContextRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetContext(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Context> ContextsAuth::CreateContext(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateContextRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateContext(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Context> ContextsAuth::UpdateContext(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateContextRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateContext(context, request);
}

Status ContextsAuth::DeleteContext(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteContextRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteContext(context, request);
}

Status ContextsAuth::DeleteAllContexts(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteAllContextsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteAllContexts(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
