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
// google/cloud/compute/target_https_proxies/v1/target_https_proxies.proto

#include "google/cloud/compute/target_https_proxies/v1/internal/target_https_proxies_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <google/cloud/compute/target_https_proxies/v1/target_https_proxies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_https_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultTargetHttpsProxiesRestStub::DefaultTargetHttpsProxiesRestStub(
    Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultTargetHttpsProxiesRestStub::DefaultTargetHttpsProxiesRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxyAggregatedList>
DefaultTargetHttpsProxiesRestStub::AggregatedListTargetHttpsProxies(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        AggregatedListTargetHttpsProxiesRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::TargetHttpsProxyAggregatedList>(
      *service_, rest_context, request,
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "aggregated", "/",
                   "targetHttpsProxies"),
      {std::make_pair("filter", request.filter()),
       std::make_pair("include_all_scopes",
                      request.include_all_scopes() ? "1" : "0"),
       std::make_pair("max_results", std::to_string(request.max_results())),
       std::make_pair("order_by", request.order_by()),
       std::make_pair("page_token", request.page_token()),
       std::make_pair("return_partial_success",
                      request.return_partial_success() ? "1" : "0")});
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultTargetHttpsProxiesRestStub::AsyncDeleteTargetHttpsProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        DeleteTargetHttpsProxyRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request,
                absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                             request.project(), "/", "global", "/",
                             "targetHttpsProxies", "/",
                             request.target_https_proxy())));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
DefaultTargetHttpsProxiesRestStub::GetTargetHttpsProxy(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        GetTargetHttpsProxyRequest const& request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::TargetHttpsProxy>(
      *service_, rest_context, request,
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "global", "/", "targetHttpsProxies",
                   "/", request.target_https_proxy()),
      {});
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultTargetHttpsProxiesRestStub::AsyncInsertTargetHttpsProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        InsertTargetHttpsProxyRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.target_https_proxy_resource(),
                absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                             request.project(), "/", "global", "/",
                             "targetHttpsProxies")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxyList>
DefaultTargetHttpsProxiesRestStub::ListTargetHttpsProxies(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        ListTargetHttpsProxiesRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::TargetHttpsProxyList>(
      *service_, rest_context, request,
      absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                   request.project(), "/", "global", "/", "targetHttpsProxies"),
      {std::make_pair("filter", request.filter()),
       std::make_pair("max_results", std::to_string(request.max_results())),
       std::make_pair("order_by", request.order_by()),
       std::make_pair("page_token", request.page_token()),
       std::make_pair("return_partial_success",
                      request.return_partial_success() ? "1" : "0")});
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultTargetHttpsProxiesRestStub::AsyncPatchTargetHttpsProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        PatchTargetHttpsProxyRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Patch<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.target_https_proxy_resource(),
                absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                             request.project(), "/", "global", "/",
                             "targetHttpsProxies", "/",
                             request.target_https_proxy())));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultTargetHttpsProxiesRestStub::AsyncSetCertificateMap(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        SetCertificateMapRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<
                    google::cloud::cpp::compute::v1::Operation>(
            *service, *rest_context,
            request.target_https_proxies_set_certificate_map_request_resource(),
            absl::StrCat(
                "/", "compute", "/", "v1", "/", "projects", "/",
                request.project(), "/", "global", "/", "targetHttpsProxies",
                "/", request.target_https_proxy(), "/", "setCertificateMap")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultTargetHttpsProxiesRestStub::AsyncSetQuicOverride(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        SetQuicOverrideRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request
                    .target_https_proxies_set_quic_override_request_resource(),
                absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                             request.project(), "/", "global", "/",
                             "targetHttpsProxies", "/",
                             request.target_https_proxy(), "/",
                             "setQuicOverride")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultTargetHttpsProxiesRestStub::AsyncSetSslCertificates(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        SetSslCertificatesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<
                    google::cloud::cpp::compute::v1::Operation>(
            *service, *rest_context,
            request
                .target_https_proxies_set_ssl_certificates_request_resource(),
            absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                         request.project(), "/", "targetHttpsProxies", "/",
                         request.target_https_proxy(), "/",
                         "setSslCertificates")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultTargetHttpsProxiesRestStub::AsyncSetSslPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        SetSslPolicyRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.ssl_policy_reference_resource(),
                absl::StrCat(
                    "/", "compute", "/", "v1", "/", "projects", "/",
                    request.project(), "/", "global", "/", "targetHttpsProxies",
                    "/", request.target_https_proxy(), "/", "setSslPolicy")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultTargetHttpsProxiesRestStub::AsyncSetUrlMap(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::
        SetUrlMapRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.url_map_reference_resource(),
                absl::StrCat("/", "compute", "/", "v1", "/", "projects", "/",
                             request.project(), "/", "targetHttpsProxies", "/",
                             request.target_https_proxy(), "/", "setUrlMap")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultTargetHttpsProxiesRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
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

future<Status> DefaultTargetHttpsProxiesRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
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
}  // namespace compute_target_https_proxies_v1_internal
}  // namespace cloud
}  // namespace google
