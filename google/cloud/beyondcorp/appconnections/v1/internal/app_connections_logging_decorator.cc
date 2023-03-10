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
// source:
// google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto

#include "google/cloud/beyondcorp/appconnections/v1/internal/app_connections_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/beyondcorp/appconnections/v1/app_connections_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_appconnections_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppConnectionsServiceLogging::AppConnectionsServiceLogging(
    std::shared_ptr<AppConnectionsServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<
    google::cloud::beyondcorp::appconnections::v1::ListAppConnectionsResponse>
AppConnectionsServiceLogging::ListAppConnections(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::appconnections::v1::
        ListAppConnectionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::beyondcorp::appconnections::v1::
                 ListAppConnectionsRequest const& request) {
        return child_->ListAppConnections(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceLogging::GetAppConnection(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::appconnections::v1::
        GetAppConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::beyondcorp::appconnections::v1::
                 GetAppConnectionRequest const& request) {
        return child_->GetAppConnection(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceLogging::AsyncCreateAppConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnections::v1::
        CreateAppConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::appconnections::v1::
                 CreateAppConnectionRequest const& request) {
        return child_->AsyncCreateAppConnection(cq, std::move(context),
                                                request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceLogging::AsyncUpdateAppConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnections::v1::
        UpdateAppConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::appconnections::v1::
                 UpdateAppConnectionRequest const& request) {
        return child_->AsyncUpdateAppConnection(cq, std::move(context),
                                                request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceLogging::AsyncDeleteAppConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnections::v1::
        DeleteAppConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::appconnections::v1::
                 DeleteAppConnectionRequest const& request) {
        return child_->AsyncDeleteAppConnection(cq, std::move(context),
                                                request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::beyondcorp::appconnections::v1::
             ResolveAppConnectionsResponse>
AppConnectionsServiceLogging::ResolveAppConnections(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::appconnections::v1::
        ResolveAppConnectionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::beyondcorp::appconnections::v1::
                 ResolveAppConnectionsRequest const& request) {
        return child_->ResolveAppConnections(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> AppConnectionsServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appconnections_v1_internal
}  // namespace cloud
}  // namespace google
