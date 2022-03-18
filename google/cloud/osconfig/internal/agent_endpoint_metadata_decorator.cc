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
// source: google/cloud/osconfig/agentendpoint/v1/agentendpoint.proto

#include "google/cloud/osconfig/internal/agent_endpoint_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/osconfig/agentendpoint/v1/agentendpoint.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace osconfig_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AgentEndpointServiceMetadata::AgentEndpointServiceMetadata(
    std::shared_ptr<AgentEndpointServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::osconfig::agentendpoint::v1::
        ReceiveTaskNotificationResponse>>
AgentEndpointServiceMetadata::ReceiveTaskNotification(
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::osconfig::agentendpoint::v1::
        ReceiveTaskNotificationRequest const& request) {
  SetMetadata(*context, {});
  return child_->ReceiveTaskNotification(std::move(context), request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::StartNextTaskResponse>
AgentEndpointServiceMetadata::StartNextTask(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::StartNextTaskRequest const&
        request) {
  SetMetadata(context, {});
  return child_->StartNextTask(context, request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressResponse>
AgentEndpointServiceMetadata::ReportTaskProgress(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressRequest const&
        request) {
  SetMetadata(context, {});
  return child_->ReportTaskProgress(context, request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteResponse>
AgentEndpointServiceMetadata::ReportTaskComplete(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteRequest const&
        request) {
  SetMetadata(context, {});
  return child_->ReportTaskComplete(context, request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::RegisterAgentResponse>
AgentEndpointServiceMetadata::RegisterAgent(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::RegisterAgentRequest const&
        request) {
  SetMetadata(context, {});
  return child_->RegisterAgent(context, request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportInventoryResponse>
AgentEndpointServiceMetadata::ReportInventory(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::ReportInventoryRequest const&
        request) {
  SetMetadata(context, {});
  return child_->ReportInventory(context, request);
}

void AgentEndpointServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void AgentEndpointServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace osconfig_internal
}  // namespace cloud
}  // namespace google
