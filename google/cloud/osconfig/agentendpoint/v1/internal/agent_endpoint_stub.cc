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

#include "google/cloud/osconfig/agentendpoint/v1/internal/agent_endpoint_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include "absl/memory/memory.h"
#include <google/cloud/osconfig/agentendpoint/v1/agentendpoint.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace osconfig_agentendpoint_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AgentEndpointServiceStub::~AgentEndpointServiceStub() = default;

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::osconfig::agentendpoint::v1::
        ReceiveTaskNotificationResponse>>
DefaultAgentEndpointServiceStub::ReceiveTaskNotification(
    std::shared_ptr<grpc::ClientContext> client_context,
    google::cloud::osconfig::agentendpoint::v1::
        ReceiveTaskNotificationRequest const& request) {
  auto stream =
      grpc_stub_->ReceiveTaskNotification(client_context.get(), request);
  return absl::make_unique<google::cloud::internal::StreamingReadRpcImpl<
      google::cloud::osconfig::agentendpoint::v1::
          ReceiveTaskNotificationResponse>>(std::move(client_context),
                                            std::move(stream));
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::StartNextTaskResponse>
DefaultAgentEndpointServiceStub::StartNextTask(
    grpc::ClientContext& client_context,
    google::cloud::osconfig::agentendpoint::v1::StartNextTaskRequest const&
        request) {
  google::cloud::osconfig::agentendpoint::v1::StartNextTaskResponse response;
  auto status = grpc_stub_->StartNextTask(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressResponse>
DefaultAgentEndpointServiceStub::ReportTaskProgress(
    grpc::ClientContext& client_context,
    google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressRequest const&
        request) {
  google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressResponse
      response;
  auto status =
      grpc_stub_->ReportTaskProgress(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteResponse>
DefaultAgentEndpointServiceStub::ReportTaskComplete(
    grpc::ClientContext& client_context,
    google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteRequest const&
        request) {
  google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteResponse
      response;
  auto status =
      grpc_stub_->ReportTaskComplete(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::RegisterAgentResponse>
DefaultAgentEndpointServiceStub::RegisterAgent(
    grpc::ClientContext& client_context,
    google::cloud::osconfig::agentendpoint::v1::RegisterAgentRequest const&
        request) {
  google::cloud::osconfig::agentendpoint::v1::RegisterAgentResponse response;
  auto status = grpc_stub_->RegisterAgent(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportInventoryResponse>
DefaultAgentEndpointServiceStub::ReportInventory(
    grpc::ClientContext& client_context,
    google::cloud::osconfig::agentendpoint::v1::ReportInventoryRequest const&
        request) {
  google::cloud::osconfig::agentendpoint::v1::ReportInventoryResponse response;
  auto status =
      grpc_stub_->ReportInventory(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_agentendpoint_v1_internal
}  // namespace cloud
}  // namespace google
