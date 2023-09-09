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
// source: google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto

#include "google/cloud/compute/target_tcp_proxies/v1/internal/target_tcp_proxies_rest_connection_impl.h"
#include "google/cloud/compute/target_tcp_proxies/v1/internal/target_tcp_proxies_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_tcp_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetTcpProxiesRestConnectionImpl::TargetTcpProxiesRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<
        compute_target_tcp_proxies_v1_internal::TargetTcpProxiesRestStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      TargetTcpProxiesConnection::options())) {}

StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxyAggregatedList>
TargetTcpProxiesRestConnectionImpl::AggregatedListTargetTcpProxies(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        AggregatedListTargetTcpProxiesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AggregatedListTargetTcpProxies(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::target_tcp_proxies::v1::
                 AggregatedListTargetTcpProxiesRequest const& request) {
        return stub_->AggregatedListTargetTcpProxies(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesRestConnectionImpl::DeleteTargetTcpProxy(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        DeleteTargetTcpProxyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::target_tcp_proxies::v1::
                         DeleteTargetTcpProxyRequest const& request) {
        return stub->AsyncDeleteTargetTcpProxy(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetGlobalOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteGlobalOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteTargetTcpProxy(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy>
TargetTcpProxiesRestConnectionImpl::GetTargetTcpProxy(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        GetTargetTcpProxyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTargetTcpProxy(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::target_tcp_proxies::v1::
                 GetTargetTcpProxyRequest const& request) {
        return stub_->GetTargetTcpProxy(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesRestConnectionImpl::InsertTargetTcpProxy(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        InsertTargetTcpProxyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::target_tcp_proxies::v1::
                         InsertTargetTcpProxyRequest const& request) {
        return stub->AsyncInsertTargetTcpProxy(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetGlobalOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteGlobalOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InsertTargetTcpProxy(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StreamRange<google::cloud::cpp::compute::v1::TargetTcpProxy>
TargetTcpProxiesRestConnectionImpl::ListTargetTcpProxies(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        ListTargetTcpProxiesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListTargetTcpProxies(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::TargetTcpProxy>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           compute_target_tcp_proxies_v1::TargetTcpProxiesRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::cpp::compute::target_tcp_proxies::v1::
              ListTargetTcpProxiesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::target_tcp_proxies::v1::
                       ListTargetTcpProxiesRequest const& request) {
              return stub->ListTargetTcpProxies(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::TargetTcpProxyList r) {
        std::vector<google::cloud::cpp::compute::v1::TargetTcpProxy> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesRestConnectionImpl::SetBackendService(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        SetBackendServiceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::target_tcp_proxies::v1::
                         SetBackendServiceRequest const& request) {
        return stub->AsyncSetBackendService(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetGlobalOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteGlobalOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetBackendService(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetTcpProxiesRestConnectionImpl::SetProxyHeader(
    google::cloud::cpp::compute::target_tcp_proxies::v1::
        SetProxyHeaderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::target_tcp_proxies::v1::
                         SetProxyHeaderRequest const& request) {
        return stub->AsyncSetProxyHeader(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetGlobalOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteGlobalOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetProxyHeader(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_tcp_proxies_v1_internal
}  // namespace cloud
}  // namespace google
