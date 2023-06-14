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
// source: google/cloud/datacatalog/v1/policytagmanager.proto

#include "google/cloud/datacatalog/v1/internal/policy_tag_manager_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/datacatalog/v1/policytagmanager.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PolicyTagManagerLogging::PolicyTagManagerLogging(
    std::shared_ptr<PolicyTagManagerStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::datacatalog::v1::Taxonomy>
PolicyTagManagerLogging::CreateTaxonomy(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::CreateTaxonomyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::CreateTaxonomyRequest const&
                 request) { return child_->CreateTaxonomy(context, request); },
      context, request, __func__, tracing_options_);
}

Status PolicyTagManagerLogging::DeleteTaxonomy(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::DeleteTaxonomyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::DeleteTaxonomyRequest const&
                 request) { return child_->DeleteTaxonomy(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::v1::Taxonomy>
PolicyTagManagerLogging::UpdateTaxonomy(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UpdateTaxonomyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::UpdateTaxonomyRequest const&
                 request) { return child_->UpdateTaxonomy(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::v1::ListTaxonomiesResponse>
PolicyTagManagerLogging::ListTaxonomies(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ListTaxonomiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::ListTaxonomiesRequest const&
                 request) { return child_->ListTaxonomies(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::v1::Taxonomy>
PolicyTagManagerLogging::GetTaxonomy(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::GetTaxonomyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::datacatalog::v1::GetTaxonomyRequest const& request) {
        return child_->GetTaxonomy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::v1::PolicyTag>
PolicyTagManagerLogging::CreatePolicyTag(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::CreatePolicyTagRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::CreatePolicyTagRequest const&
                 request) { return child_->CreatePolicyTag(context, request); },
      context, request, __func__, tracing_options_);
}

Status PolicyTagManagerLogging::DeletePolicyTag(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::DeletePolicyTagRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::DeletePolicyTagRequest const&
                 request) { return child_->DeletePolicyTag(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::v1::PolicyTag>
PolicyTagManagerLogging::UpdatePolicyTag(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UpdatePolicyTagRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::UpdatePolicyTagRequest const&
                 request) { return child_->UpdatePolicyTag(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::v1::ListPolicyTagsResponse>
PolicyTagManagerLogging::ListPolicyTags(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ListPolicyTagsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::datacatalog::v1::ListPolicyTagsRequest const&
                 request) { return child_->ListPolicyTags(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::datacatalog::v1::PolicyTag>
PolicyTagManagerLogging::GetPolicyTag(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::GetPolicyTagRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::datacatalog::v1::GetPolicyTagRequest const& request) {
        return child_->GetPolicyTag(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> PolicyTagManagerLogging::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> PolicyTagManagerLogging::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
PolicyTagManagerLogging::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
