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
// source:
// google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups.proto

#include "google/cloud/compute/network_endpoint_groups/v1/internal/network_endpoint_groups_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_network_endpoint_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworkEndpointGroupsRestMetadata::NetworkEndpointGroupsRestMetadata(
    std::shared_ptr<NetworkEndpointGroupsRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroupAggregatedList>
NetworkEndpointGroupsRestMetadata::AggregatedListNetworkEndpointGroups(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        AggregatedListNetworkEndpointGroupsRequest const& request) {
  SetMetadata(rest_context);
  return child_->AggregatedListNetworkEndpointGroups(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEndpointGroupsRestMetadata::AsyncAttachNetworkEndpoints(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        AttachNetworkEndpointsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncAttachNetworkEndpoints(cq, std::move(rest_context),
                                             request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEndpointGroupsRestMetadata::AsyncDeleteNetworkEndpointGroup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        DeleteNetworkEndpointGroupRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteNetworkEndpointGroup(cq, std::move(rest_context),
                                                 request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEndpointGroupsRestMetadata::AsyncDetachNetworkEndpoints(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        DetachNetworkEndpointsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDetachNetworkEndpoints(cq, std::move(rest_context),
                                             request);
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
NetworkEndpointGroupsRestMetadata::GetNetworkEndpointGroup(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        GetNetworkEndpointGroupRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetNetworkEndpointGroup(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEndpointGroupsRestMetadata::AsyncInsertNetworkEndpointGroup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        InsertNetworkEndpointGroupRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertNetworkEndpointGroup(cq, std::move(rest_context),
                                                 request);
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroupList>
NetworkEndpointGroupsRestMetadata::ListNetworkEndpointGroups(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        ListNetworkEndpointGroupsRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListNetworkEndpointGroups(rest_context, request);
}

StatusOr<
    google::cloud::cpp::compute::v1::NetworkEndpointGroupsListNetworkEndpoints>
NetworkEndpointGroupsRestMetadata::ListNetworkEndpoints(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        ListNetworkEndpointsRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListNetworkEndpoints(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NetworkEndpointGroupsRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::network_endpoint_groups::v1::
        TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context);
  return child_->TestIamPermissions(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEndpointGroupsRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        GetZoneOperationRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> NetworkEndpointGroupsRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteZoneOperationRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void NetworkEndpointGroupsRestMetadata::SetMetadata(
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
}  // namespace compute_network_endpoint_groups_v1_internal
}  // namespace cloud
}  // namespace google
