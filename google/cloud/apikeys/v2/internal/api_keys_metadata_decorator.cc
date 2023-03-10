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
// source: google/api/apikeys/v2/apikeys.proto

#include "google/cloud/apikeys/v2/internal/api_keys_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/api/apikeys/v2/apikeys.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace apikeys_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ApiKeysMetadata::ApiKeysMetadata(std::shared_ptr<ApiKeysStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
ApiKeysMetadata::AsyncCreateKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::apikeys::v2::CreateKeyRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateKey(cq, std::move(context), request);
}

StatusOr<google::api::apikeys::v2::ListKeysResponse> ApiKeysMetadata::ListKeys(
    grpc::ClientContext& context,
    google::api::apikeys::v2::ListKeysRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListKeys(context, request);
}

StatusOr<google::api::apikeys::v2::Key> ApiKeysMetadata::GetKey(
    grpc::ClientContext& context,
    google::api::apikeys::v2::GetKeyRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetKey(context, request);
}

StatusOr<google::api::apikeys::v2::GetKeyStringResponse>
ApiKeysMetadata::GetKeyString(
    grpc::ClientContext& context,
    google::api::apikeys::v2::GetKeyStringRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetKeyString(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ApiKeysMetadata::AsyncUpdateKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::apikeys::v2::UpdateKeyRequest const& request) {
  SetMetadata(*context, "key.name=" + request.key().name());
  return child_->AsyncUpdateKey(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ApiKeysMetadata::AsyncDeleteKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::apikeys::v2::DeleteKeyRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteKey(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ApiKeysMetadata::AsyncUndeleteKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::apikeys::v2::UndeleteKeyRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncUndeleteKey(cq, std::move(context), request);
}

StatusOr<google::api::apikeys::v2::LookupKeyResponse>
ApiKeysMetadata::LookupKey(
    grpc::ClientContext& context,
    google::api::apikeys::v2::LookupKeyRequest const& request) {
  SetMetadata(context);
  return child_->LookupKey(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ApiKeysMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ApiKeysMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void ApiKeysMetadata::SetMetadata(grpc::ClientContext& context,
                                  std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void ApiKeysMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace apikeys_v2_internal
}  // namespace cloud
}  // namespace google
