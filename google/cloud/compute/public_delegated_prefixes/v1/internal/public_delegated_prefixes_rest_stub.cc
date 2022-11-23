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
// google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto

#include "google/cloud/compute/public_delegated_prefixes/v1/internal/public_delegated_prefixes_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.pb.h>
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_public_delegated_prefixes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultPublicDelegatedPrefixesRestStub::DefaultPublicDelegatedPrefixesRestStub(
    Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultPublicDelegatedPrefixesRestStub::DefaultPublicDelegatedPrefixesRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefixAggregatedList>
DefaultPublicDelegatedPrefixesRestStub::AggregatedListPublicDelegatedPrefixes(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        AggregatedListPublicDelegatedPrefixesRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::PublicDelegatedPrefixAggregatedList>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(),
                   "/aggregated/publicDelegatedPrefixes"),
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
DefaultPublicDelegatedPrefixesRestStub::AsyncDeletePublicDelegatedPrefixes(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        DeletePublicDelegatedPrefixesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request,
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/regions/", request.region(),
                             "/publicDelegatedPrefixes/",
                             request.public_delegated_prefix(), "")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
DefaultPublicDelegatedPrefixesRestStub::GetPublicDelegatedPrefixes(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        GetPublicDelegatedPrefixesRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::PublicDelegatedPrefix>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(), "/regions/",
                   request.region(), "/publicDelegatedPrefixes/",
                   request.public_delegated_prefix(), ""),
      {std::make_pair("project", request.project()),
       std::make_pair("region", request.region())});
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultPublicDelegatedPrefixesRestStub::AsyncInsertPublicDelegatedPrefixes(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        InsertPublicDelegatedPrefixesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.public_delegated_prefix_resource(),
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/regions/", request.region(),
                             "/publicDelegatedPrefixes")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefixList>
DefaultPublicDelegatedPrefixesRestStub::ListPublicDelegatedPrefixes(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        ListPublicDelegatedPrefixesRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::PublicDelegatedPrefixList>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(), "/regions/",
                   request.region(), "/publicDelegatedPrefixes"),
      {std::make_pair("filter", request.filter()),
       std::make_pair("max_results", std::to_string(request.max_results())),
       std::make_pair("order_by", request.order_by()),
       std::make_pair("page_token", request.page_token()),
       std::make_pair("project", request.project()),
       std::make_pair("return_partial_success",
                      std::to_string(request.return_partial_success()))});
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultPublicDelegatedPrefixesRestStub::AsyncPatchPublicDelegatedPrefixes(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        PatchPublicDelegatedPrefixesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Patch<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.public_delegated_prefix_resource(),
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/regions/", request.region(),
                             "/publicDelegatedPrefixes/",
                             request.public_delegated_prefix(), "")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultPublicDelegatedPrefixesRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        GetRegionOperationsRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
                *operations, *rest_context, request,
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/regions/", request.region(), "/operations/",
                             request.operation())));
      },
      std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status> DefaultPublicDelegatedPrefixesRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteRegionOperationsRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{[](auto p, auto operations, auto request, auto rest_context) {
                  p.set_value(rest_internal::Post<google::protobuf::Empty>(
                      *operations, *rest_context, request,
                      absl::StrCat("/compute/v1/projects/", request.project(),
                                   "/regions/", request.region(),
                                   "/operations/", request.operation())));
                },
                std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_delegated_prefixes_v1_internal
}  // namespace cloud
}  // namespace google
