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

#include "google/cloud/osconfig/agentendpoint/v1/internal/agent_endpoint_auth_decorator.h"
#include <google/cloud/osconfig/agentendpoint/v1/agentendpoint.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace osconfig_agentendpoint_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AgentEndpointServiceAuth::AgentEndpointServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<AgentEndpointServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::osconfig::agentendpoint::v1::
        ReceiveTaskNotificationResponse>>
AgentEndpointServiceAuth::ReceiveTaskNotification(
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::osconfig::agentendpoint::v1::
        ReceiveTaskNotificationRequest const& request) {
  using ErrorStream = ::google::cloud::internal::StreamingReadRpcError<
      google::cloud::osconfig::agentendpoint::v1::
          ReceiveTaskNotificationResponse>;
  auto status = auth_->ConfigureContext(*context);
  if (!status.ok()) return absl::make_unique<ErrorStream>(std::move(status));
  return child_->ReceiveTaskNotification(std::move(context), request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::StartNextTaskResponse>
AgentEndpointServiceAuth::StartNextTask(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::StartNextTaskRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->StartNextTask(context, request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressResponse>
AgentEndpointServiceAuth::ReportTaskProgress(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ReportTaskProgress(context, request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteResponse>
AgentEndpointServiceAuth::ReportTaskComplete(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ReportTaskComplete(context, request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::RegisterAgentResponse>
AgentEndpointServiceAuth::RegisterAgent(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::RegisterAgentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RegisterAgent(context, request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportInventoryResponse>
AgentEndpointServiceAuth::ReportInventory(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::ReportInventoryRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ReportInventory(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_agentendpoint_v1_internal
}  // namespace cloud
}  // namespace google
