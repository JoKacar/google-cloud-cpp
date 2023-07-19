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
// source: google/cloud/support/v2/case_service.proto

#include "google/cloud/support/v2/internal/case_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/support/v2/case_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace support_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CaseServiceMetadata::CaseServiceMetadata(
    std::shared_ptr<CaseServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::support::v2::Case> CaseServiceMetadata::GetCase(
    grpc::ClientContext& context,
    google::cloud::support::v2::GetCaseRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetCase(context, request);
}

StatusOr<google::cloud::support::v2::ListCasesResponse>
CaseServiceMetadata::ListCases(
    grpc::ClientContext& context,
    google::cloud::support::v2::ListCasesRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListCases(context, request);
}

StatusOr<google::cloud::support::v2::SearchCasesResponse>
CaseServiceMetadata::SearchCases(
    grpc::ClientContext& context,
    google::cloud::support::v2::SearchCasesRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->SearchCases(context, request);
}

StatusOr<google::cloud::support::v2::Case> CaseServiceMetadata::CreateCase(
    grpc::ClientContext& context,
    google::cloud::support::v2::CreateCaseRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->CreateCase(context, request);
}

StatusOr<google::cloud::support::v2::Case> CaseServiceMetadata::UpdateCase(
    grpc::ClientContext& context,
    google::cloud::support::v2::UpdateCaseRequest const& request) {
  SetMetadata(context, absl::StrCat("case.name=", request.case_().name()));
  return child_->UpdateCase(context, request);
}

StatusOr<google::cloud::support::v2::Case> CaseServiceMetadata::EscalateCase(
    grpc::ClientContext& context,
    google::cloud::support::v2::EscalateCaseRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->EscalateCase(context, request);
}

StatusOr<google::cloud::support::v2::Case> CaseServiceMetadata::CloseCase(
    grpc::ClientContext& context,
    google::cloud::support::v2::CloseCaseRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->CloseCase(context, request);
}

StatusOr<google::cloud::support::v2::SearchCaseClassificationsResponse>
CaseServiceMetadata::SearchCaseClassifications(
    grpc::ClientContext& context,
    google::cloud::support::v2::SearchCaseClassificationsRequest const&
        request) {
  SetMetadata(context);
  return child_->SearchCaseClassifications(context, request);
}

void CaseServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                      std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void CaseServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace support_v2_internal
}  // namespace cloud
}  // namespace google
