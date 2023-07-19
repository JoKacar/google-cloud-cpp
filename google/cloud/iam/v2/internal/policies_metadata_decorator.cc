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
// source: google/iam/v2/policy.proto

#include "google/cloud/iam/v2/internal/policies_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/iam/v2/policy.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iam_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PoliciesMetadata::PoliciesMetadata(
    std::shared_ptr<PoliciesStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::iam::v2::ListPoliciesResponse> PoliciesMetadata::ListPolicies(
    grpc::ClientContext& context,
    google::iam::v2::ListPoliciesRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListPolicies(context, request);
}

StatusOr<google::iam::v2::Policy> PoliciesMetadata::GetPolicy(
    grpc::ClientContext& context,
    google::iam::v2::GetPolicyRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetPolicy(context, request);
}

future<StatusOr<google::longrunning::Operation>>
PoliciesMetadata::AsyncCreatePolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::iam::v2::CreatePolicyRequest const& request) {
  SetMetadata(*context, absl::StrCat("parent=", request.parent()));
  return child_->AsyncCreatePolicy(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
PoliciesMetadata::AsyncUpdatePolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::iam::v2::UpdatePolicyRequest const& request) {
  SetMetadata(*context, absl::StrCat("policy.name=", request.policy().name()));
  return child_->AsyncUpdatePolicy(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
PoliciesMetadata::AsyncDeletePolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::iam::v2::DeletePolicyRequest const& request) {
  SetMetadata(*context, absl::StrCat("name=", request.name()));
  return child_->AsyncDeletePolicy(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
PoliciesMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> PoliciesMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void PoliciesMetadata::SetMetadata(grpc::ClientContext& context,
                                   std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void PoliciesMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace iam_v2_internal
}  // namespace cloud
}  // namespace google
