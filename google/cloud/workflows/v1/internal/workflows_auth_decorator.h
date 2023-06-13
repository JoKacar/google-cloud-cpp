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
// source: google/cloud/workflows/v1/workflows.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_V1_INTERNAL_WORKFLOWS_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_V1_INTERNAL_WORKFLOWS_AUTH_DECORATOR_H

#include "google/cloud/workflows/v1/internal/workflows_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace workflows_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class WorkflowsAuth : public WorkflowsStub {
 public:
  ~WorkflowsAuth() override = default;
  WorkflowsAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<WorkflowsStub> child);

  StatusOr<google::cloud::workflows::v1::ListWorkflowsResponse> ListWorkflows(
      grpc::ClientContext& context,
      google::cloud::workflows::v1::ListWorkflowsRequest const& request)
      override;

  StatusOr<google::cloud::workflows::v1::Workflow> GetWorkflow(
      grpc::ClientContext& context,
      google::cloud::workflows::v1::GetWorkflowRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateWorkflow(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::workflows::v1::CreateWorkflowRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteWorkflow(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::workflows::v1::DeleteWorkflowRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateWorkflow(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::workflows::v1::UpdateWorkflowRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<WorkflowsStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_V1_INTERNAL_WORKFLOWS_AUTH_DECORATOR_H
