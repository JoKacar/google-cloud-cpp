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
// source: google/cloud/compute/instance_templates/v1/instance_templates.proto

#include "google/cloud/compute/instance_templates/v1/internal/instance_templates_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/instance_templates/v1/instance_templates.pb.h>
#include <google/longrunning/operations.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_instance_templates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultInstanceTemplatesRestStub::DefaultInstanceTemplatesRestStub(
    Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultInstanceTemplatesRestStub::DefaultInstanceTemplatesRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

StatusOr<google::cloud::cpp::compute::v1::InstanceTemplateAggregatedList>
DefaultInstanceTemplatesRestStub::AggregatedListInstanceTemplates(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        AggregatedListInstanceTemplatesRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::InstanceTemplateAggregatedList>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(),
                   "/aggregated/instanceTemplates"),
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
DefaultInstanceTemplatesRestStub::AsyncDeleteInstanceTemplates(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        DeleteInstanceTemplatesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request,
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/global/instanceTemplates/",
                             request.instance_template(), "")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::InstanceTemplate>
DefaultInstanceTemplatesRestStub::GetInstanceTemplates(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        GetInstanceTemplatesRequest const& request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::InstanceTemplate>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(),
                   "/global/instanceTemplates/", request.instance_template(),
                   ""),
      {std::make_pair("project", request.project())});
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultInstanceTemplatesRestStub::GetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        GetIamPolicyRequest const& request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(),
                   "/global/instanceTemplates/", request.resource(),
                   "/getIamPolicy"),
      {std::make_pair(
           "options_requested_policy_version",
           std::to_string(request.options_requested_policy_version())),
       std::make_pair("project", request.project())});
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceTemplatesRestStub::AsyncInsertInstanceTemplates(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        InsertInstanceTemplatesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.instance_template_resource(),
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/global/instanceTemplates")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::InstanceTemplateList>
DefaultInstanceTemplatesRestStub::ListInstanceTemplates(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        ListInstanceTemplatesRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::InstanceTemplateList>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(),
                   "/global/instanceTemplates"),
      {std::make_pair("filter", request.filter()),
       std::make_pair("max_results", std::to_string(request.max_results())),
       std::make_pair("order_by", request.order_by()),
       std::make_pair("page_token", request.page_token()),
       std::make_pair("return_partial_success",
                      std::to_string(request.return_partial_success()))});
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultInstanceTemplatesRestStub::SetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        SetIamPolicyRequest const& request) {
  return rest_internal::Post<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request.global_set_policy_request_resource(),
      absl::StrCat("/compute/v1/projects/", request.project(),
                   "/global/instanceTemplates/", request.resource(),
                   "/setIamPolicy"));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
DefaultInstanceTemplatesRestStub::TestIamPermissions(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        TestIamPermissionsRequest const& request) {
  return rest_internal::Post<
      google::cloud::cpp::compute::v1::TestPermissionsResponse>(
      *service_, rest_context, request.test_permissions_request_resource(),
      absl::StrCat("/compute/v1/projects/", request.project(),
                   "/global/instanceTemplates/", request.resource(),
                   "/testIamPermissions"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceTemplatesRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetGlobalOperationsRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
                *operations, *rest_context, request,
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/global/operations/", request.operation())));
      },
      std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status> DefaultInstanceTemplatesRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteGlobalOperationsRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<google::protobuf::Empty>(
            *operations, *rest_context, request,
            absl::StrCat("/compute/v1/projects/", request.project(),
                         "/global/operations/", request.operation())));
      },
      std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_templates_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
