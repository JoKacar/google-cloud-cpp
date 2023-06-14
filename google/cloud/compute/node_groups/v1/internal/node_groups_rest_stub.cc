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
// source: google/cloud/compute/node_groups/v1/node_groups.proto

#include "google/cloud/compute/node_groups/v1/internal/node_groups_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/node_groups/v1/node_groups.pb.h>
#include <google/longrunning/operations.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_node_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultNodeGroupsRestStub::DefaultNodeGroupsRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultNodeGroupsRestStub::DefaultNodeGroupsRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNodeGroupsRestStub::AsyncAddNodes(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.node_groups_add_nodes_request_resource(),
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/zones/", request.zone(), "/nodeGroups/",
                             request.node_group(), "/addNodes")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroupAggregatedList>
DefaultNodeGroupsRestStub::AggregatedListNodeGroups(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::node_groups::v1::
        AggregatedListNodeGroupsRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::NodeGroupAggregatedList>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(),
                   "/aggregated/nodeGroups"),
      {std::make_pair("filter", request.filter()),
       std::make_pair("include_all_scopes",
                      std::to_string(request.include_all_scopes())),
       std::make_pair("max_results", std::to_string(request.max_results())),
       std::make_pair("order_by", request.order_by()),
       std::make_pair("page_token", request.page_token()),
       std::make_pair("return_partial_success",
                      std::to_string(request.return_partial_success()))});
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNodeGroupsRestStub::AsyncDeleteNodeGroups(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::node_groups::v1::DeleteNodeGroupsRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request,
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/zones/", request.zone(), "/nodeGroups/",
                             request.node_group(), "")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNodeGroupsRestStub::AsyncDeleteNodes(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.node_groups_delete_nodes_request_resource(),
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/zones/", request.zone(), "/nodeGroups/",
                             request.node_group(), "/deleteNodes")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroup>
DefaultNodeGroupsRestStub::GetNodeGroups(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::node_groups::v1::GetNodeGroupsRequest const&
        request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::NodeGroup>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                   request.zone(), "/nodeGroups/", request.node_group(), ""),
      {std::make_pair("project", request.project()),
       std::make_pair("zone", request.zone())});
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultNodeGroupsRestStub::GetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const&
        request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                   request.zone(), "/nodeGroups/", request.resource(),
                   "/getIamPolicy"),
      {std::make_pair(
           "options_requested_policy_version",
           std::to_string(request.options_requested_policy_version())),
       std::make_pair("project", request.project()),
       std::make_pair("zone", request.zone())});
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNodeGroupsRestStub::AsyncInsertNodeGroups(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::node_groups::v1::InsertNodeGroupsRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.node_group_resource(),
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/zones/", request.zone(), "/nodeGroups")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroupList>
DefaultNodeGroupsRestStub::ListNodeGroups(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::node_groups::v1::ListNodeGroupsRequest const&
        request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::NodeGroupList>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                   request.zone(), "/nodeGroups"),
      {std::make_pair("filter", request.filter()),
       std::make_pair("max_results", std::to_string(request.max_results())),
       std::make_pair("order_by", request.order_by()),
       std::make_pair("page_token", request.page_token()),
       std::make_pair("project", request.project()),
       std::make_pair("return_partial_success",
                      std::to_string(request.return_partial_success()))});
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroupsListNodes>
DefaultNodeGroupsRestStub::ListNodes(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::node_groups::v1::ListNodesRequest const&
        request) {
  return rest_internal::Post<
      google::cloud::cpp::compute::v1::NodeGroupsListNodes>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                   request.zone(), "/nodeGroups/", request.node_group(),
                   "/listNodes"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNodeGroupsRestStub::AsyncPatchNodeGroups(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::node_groups::v1::PatchNodeGroupsRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Patch<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.node_group_resource(),
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/zones/", request.zone(), "/nodeGroups/",
                             request.node_group(), "")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultNodeGroupsRestStub::SetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const&
        request) {
  return rest_internal::Post<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request.zone_set_policy_request_resource(),
      absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                   request.zone(), "/nodeGroups/", request.resource(),
                   "/setIamPolicy"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNodeGroupsRestStub::AsyncSetNodeTemplate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::node_groups::v1::SetNodeTemplateRequest const&
        request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.node_groups_set_node_template_request_resource(),
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/zones/", request.zone(), "/nodeGroups/",
                             request.node_group(), "/setNodeTemplate")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
DefaultNodeGroupsRestStub::TestIamPermissions(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::node_groups::v1::
        TestIamPermissionsRequest const& request) {
  return rest_internal::Post<
      google::cloud::cpp::compute::v1::TestPermissionsResponse>(
      *service_, rest_context, request.test_permissions_request_resource(),
      absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                   request.zone(), "/nodeGroups/", request.resource(),
                   "/testIamPermissions"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNodeGroupsRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        GetZoneOperationsRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
                *operations, *rest_context, request,
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/zones/", request.zone(), "/operations/",
                             request.operation())));
      },
      std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status> DefaultNodeGroupsRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteZoneOperationsRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<google::protobuf::Empty>(
            *operations, *rest_context, request,
            absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                         request.zone(), "/operations/", request.operation())));
      },
      std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_groups_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
