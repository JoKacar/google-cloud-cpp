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
// source: google/cloud/compute/subnetworks/v1/subnetworks.proto

#include "google/cloud/compute/subnetworks/v1/internal/subnetworks_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_subnetworks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SubnetworksRestMetadata::SubnetworksRestMetadata(
    std::shared_ptr<SubnetworksRestStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::cpp::compute::v1::SubnetworkAggregatedList>
SubnetworksRestMetadata::AggregatedListSubnetworks(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::subnetworks::v1::
        AggregatedListSubnetworksRequest const& request) {
  SetMetadata(rest_context);
  return child_->AggregatedListSubnetworks(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksRestMetadata::AsyncDeleteSubnetworks(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::subnetworks::v1::
        DeleteSubnetworksRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteSubnetworks(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksRestMetadata::AsyncExpandIpCidrRange(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::subnetworks::v1::
        ExpandIpCidrRangeRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncExpandIpCidrRange(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::Subnetwork>
SubnetworksRestMetadata::GetSubnetworks(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::subnetworks::v1::GetSubnetworksRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetSubnetworks(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
SubnetworksRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::subnetworks::v1::GetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetIamPolicy(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksRestMetadata::AsyncInsertSubnetworks(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::subnetworks::v1::
        InsertSubnetworksRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertSubnetworks(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::SubnetworkList>
SubnetworksRestMetadata::ListSubnetworks(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::subnetworks::v1::ListSubnetworksRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->ListSubnetworks(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::UsableSubnetworksAggregatedList>
SubnetworksRestMetadata::ListUsable(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::subnetworks::v1::ListUsableRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->ListUsable(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksRestMetadata::AsyncPatchSubnetworks(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::subnetworks::v1::PatchSubnetworksRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchSubnetworks(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
SubnetworksRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::subnetworks::v1::SetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->SetIamPolicy(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksRestMetadata::AsyncSetPrivateIpGoogleAccess(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::subnetworks::v1::
        SetPrivateIpGoogleAccessRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetPrivateIpGoogleAccess(cq, std::move(rest_context),
                                               request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
SubnetworksRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::subnetworks::v1::
        TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context);
  return child_->TestIamPermissions(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SubnetworksRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        GetRegionOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> SubnetworksRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteRegionOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void SubnetworksRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context,
    std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
                  absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_subnetworks_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
