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
// source: google/cloud/deploy/v1/cloud_deploy.proto

#include "google/cloud/deploy/v1/internal/cloud_deploy_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace deploy_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudDeployTracingStub::CloudDeployTracingStub(
    std::shared_ptr<CloudDeployStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::deploy::v1::ListDeliveryPipelinesResponse>
CloudDeployTracingStub::ListDeliveryPipelines(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListDeliveryPipelinesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "ListDeliveryPipelines");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDeliveryPipelines(context, request));
}

StatusOr<google::cloud::deploy::v1::DeliveryPipeline>
CloudDeployTracingStub::GetDeliveryPipeline(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetDeliveryPipelineRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "GetDeliveryPipeline");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDeliveryPipeline(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployTracingStub::AsyncCreateDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "CreateDeliveryPipeline");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateDeliveryPipeline(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployTracingStub::AsyncUpdateDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "UpdateDeliveryPipeline");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateDeliveryPipeline(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployTracingStub::AsyncDeleteDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "DeleteDeliveryPipeline");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteDeliveryPipeline(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::deploy::v1::ListTargetsResponse>
CloudDeployTracingStub::ListTargets(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListTargetsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "ListTargets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTargets(context, request));
}

StatusOr<google::cloud::deploy::v1::RollbackTargetResponse>
CloudDeployTracingStub::RollbackTarget(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::RollbackTargetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "RollbackTarget");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RollbackTarget(context, request));
}

StatusOr<google::cloud::deploy::v1::Target> CloudDeployTracingStub::GetTarget(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetTargetRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy", "GetTarget");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetTarget(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployTracingStub::AsyncCreateTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::deploy::v1::CreateTargetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "CreateTarget");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateTarget(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployTracingStub::AsyncUpdateTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::deploy::v1::UpdateTargetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "UpdateTarget");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateTarget(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployTracingStub::AsyncDeleteTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::deploy::v1::DeleteTargetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "DeleteTarget");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteTarget(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::deploy::v1::ListCustomTargetTypesResponse>
CloudDeployTracingStub::ListCustomTargetTypes(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListCustomTargetTypesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "ListCustomTargetTypes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListCustomTargetTypes(context, request));
}

StatusOr<google::cloud::deploy::v1::CustomTargetType>
CloudDeployTracingStub::GetCustomTargetType(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetCustomTargetTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "GetCustomTargetType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetCustomTargetType(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployTracingStub::AsyncCreateCustomTargetType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "CreateCustomTargetType");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateCustomTargetType(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployTracingStub::AsyncUpdateCustomTargetType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "UpdateCustomTargetType");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateCustomTargetType(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployTracingStub::AsyncDeleteCustomTargetType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "DeleteCustomTargetType");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteCustomTargetType(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::deploy::v1::ListReleasesResponse>
CloudDeployTracingStub::ListReleases(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListReleasesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "ListReleases");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListReleases(context, request));
}

StatusOr<google::cloud::deploy::v1::Release> CloudDeployTracingStub::GetRelease(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetReleaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "GetRelease");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetRelease(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployTracingStub::AsyncCreateRelease(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::deploy::v1::CreateReleaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "CreateRelease");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateRelease(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::deploy::v1::AbandonReleaseResponse>
CloudDeployTracingStub::AbandonRelease(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::AbandonReleaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "AbandonRelease");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->AbandonRelease(context, request));
}

StatusOr<google::cloud::deploy::v1::ApproveRolloutResponse>
CloudDeployTracingStub::ApproveRollout(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ApproveRolloutRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "ApproveRollout");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ApproveRollout(context, request));
}

StatusOr<google::cloud::deploy::v1::AdvanceRolloutResponse>
CloudDeployTracingStub::AdvanceRollout(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::AdvanceRolloutRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "AdvanceRollout");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->AdvanceRollout(context, request));
}

StatusOr<google::cloud::deploy::v1::CancelRolloutResponse>
CloudDeployTracingStub::CancelRollout(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::CancelRolloutRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "CancelRollout");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelRollout(context, request));
}

StatusOr<google::cloud::deploy::v1::ListRolloutsResponse>
CloudDeployTracingStub::ListRollouts(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListRolloutsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "ListRollouts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListRollouts(context, request));
}

StatusOr<google::cloud::deploy::v1::Rollout> CloudDeployTracingStub::GetRollout(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetRolloutRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "GetRollout");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetRollout(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployTracingStub::AsyncCreateRollout(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::deploy::v1::CreateRolloutRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "CreateRollout");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateRollout(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::deploy::v1::IgnoreJobResponse>
CloudDeployTracingStub::IgnoreJob(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::IgnoreJobRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy", "IgnoreJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->IgnoreJob(context, request));
}

StatusOr<google::cloud::deploy::v1::RetryJobResponse>
CloudDeployTracingStub::RetryJob(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::RetryJobRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy", "RetryJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->RetryJob(context, request));
}

StatusOr<google::cloud::deploy::v1::ListJobRunsResponse>
CloudDeployTracingStub::ListJobRuns(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListJobRunsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "ListJobRuns");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListJobRuns(context, request));
}

StatusOr<google::cloud::deploy::v1::JobRun> CloudDeployTracingStub::GetJobRun(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetJobRunRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy", "GetJobRun");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetJobRun(context, request));
}

StatusOr<google::cloud::deploy::v1::TerminateJobRunResponse>
CloudDeployTracingStub::TerminateJobRun(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::TerminateJobRunRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "TerminateJobRun");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->TerminateJobRun(context, request));
}

StatusOr<google::cloud::deploy::v1::Config> CloudDeployTracingStub::GetConfig(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetConfigRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy", "GetConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetConfig(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployTracingStub::AsyncCreateAutomation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::deploy::v1::CreateAutomationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "CreateAutomation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateAutomation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployTracingStub::AsyncUpdateAutomation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::deploy::v1::UpdateAutomationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "UpdateAutomation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateAutomation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployTracingStub::AsyncDeleteAutomation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::deploy::v1::DeleteAutomationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "DeleteAutomation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteAutomation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::deploy::v1::Automation>
CloudDeployTracingStub::GetAutomation(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetAutomationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "GetAutomation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetAutomation(context, request));
}

StatusOr<google::cloud::deploy::v1::ListAutomationsResponse>
CloudDeployTracingStub::ListAutomations(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListAutomationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "ListAutomations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAutomations(context, request));
}

StatusOr<google::cloud::deploy::v1::AutomationRun>
CloudDeployTracingStub::GetAutomationRun(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetAutomationRunRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "GetAutomationRun");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetAutomationRun(context, request));
}

StatusOr<google::cloud::deploy::v1::ListAutomationRunsResponse>
CloudDeployTracingStub::ListAutomationRuns(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListAutomationRunsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "ListAutomationRuns");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAutomationRuns(context, request));
}

StatusOr<google::cloud::deploy::v1::CancelAutomationRunResponse>
CloudDeployTracingStub::CancelAutomationRun(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::CancelAutomationRunRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.deploy.v1.CloudDeploy",
                                     "CancelAutomationRun");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelAutomationRun(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> CloudDeployTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCancelOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<CloudDeployStub> MakeCloudDeployTracingStub(
    std::shared_ptr<CloudDeployStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<CloudDeployTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace deploy_v1_internal
}  // namespace cloud
}  // namespace google
