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
// source: google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto

#include "google/cloud/compute/target_grpc_proxies/v1/internal/target_grpc_proxies_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_grpc_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetGrpcProxiesRestLogging::TargetGrpcProxiesRestLogging(
    std::shared_ptr<TargetGrpcProxiesRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetGrpcProxiesRestLogging::AsyncDeleteTargetGrpcProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        DeleteTargetGrpcProxyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::target_grpc_proxies::v1::
                 DeleteTargetGrpcProxyRequest const& request) {
        return child_->AsyncDeleteTargetGrpcProxy(cq, std::move(rest_context),
                                                  request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TargetGrpcProxy>
TargetGrpcProxiesRestLogging::GetTargetGrpcProxy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        GetTargetGrpcProxyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::target_grpc_proxies::v1::
                 GetTargetGrpcProxyRequest const& request) {
        return child_->GetTargetGrpcProxy(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetGrpcProxiesRestLogging::AsyncInsertTargetGrpcProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        InsertTargetGrpcProxyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::target_grpc_proxies::v1::
                 InsertTargetGrpcProxyRequest const& request) {
        return child_->AsyncInsertTargetGrpcProxy(cq, std::move(rest_context),
                                                  request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TargetGrpcProxyList>
TargetGrpcProxiesRestLogging::ListTargetGrpcProxies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        ListTargetGrpcProxiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::target_grpc_proxies::v1::
                 ListTargetGrpcProxiesRequest const& request) {
        return child_->ListTargetGrpcProxies(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetGrpcProxiesRestLogging::AsyncPatchTargetGrpcProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        PatchTargetGrpcProxyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::target_grpc_proxies::v1::
                 PatchTargetGrpcProxyRequest const& request) {
        return child_->AsyncPatchTargetGrpcProxy(cq, std::move(rest_context),
                                                 request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetGrpcProxiesRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetGlobalOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetGlobalOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<Status> TargetGrpcProxiesRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteGlobalOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteGlobalOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_grpc_proxies_v1_internal
}  // namespace cloud
}  // namespace google
