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

#include "google/cloud/deploy/v1/internal/cloud_deploy_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/deploy/v1/cloud_deploy.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace deploy_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudDeployLogging::CloudDeployLogging(std::shared_ptr<CloudDeployStub> child,
                                       TracingOptions tracing_options,
                                       std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::deploy::v1::ListDeliveryPipelinesResponse>
CloudDeployLogging::ListDeliveryPipelines(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListDeliveryPipelinesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::deploy::v1::ListDeliveryPipelinesRequest const&
                 request) {
        return child_->ListDeliveryPipelines(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::DeliveryPipeline>
CloudDeployLogging::GetDeliveryPipeline(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetDeliveryPipelineRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::deploy::v1::GetDeliveryPipelineRequest const&
                 request) {
        return child_->GetDeliveryPipeline(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncCreateDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::deploy::v1::CreateDeliveryPipelineRequest const&
                 request) {
        return child_->AsyncCreateDeliveryPipeline(cq, std::move(context),
                                                   request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncUpdateDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const&
                 request) {
        return child_->AsyncUpdateDeliveryPipeline(cq, std::move(context),
                                                   request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncDeleteDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const&
                 request) {
        return child_->AsyncDeleteDeliveryPipeline(cq, std::move(context),
                                                   request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::ListTargetsResponse>
CloudDeployLogging::ListTargets(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListTargetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::deploy::v1::ListTargetsRequest const& request) {
        return child_->ListTargets(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::Target> CloudDeployLogging::GetTarget(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetTargetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::deploy::v1::GetTargetRequest const& request) {
        return child_->GetTarget(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncCreateTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::CreateTargetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::deploy::v1::CreateTargetRequest const& request) {
        return child_->AsyncCreateTarget(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncUpdateTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::UpdateTargetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::deploy::v1::UpdateTargetRequest const& request) {
        return child_->AsyncUpdateTarget(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncDeleteTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::DeleteTargetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::deploy::v1::DeleteTargetRequest const& request) {
        return child_->AsyncDeleteTarget(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::ListReleasesResponse>
CloudDeployLogging::ListReleases(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListReleasesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::deploy::v1::ListReleasesRequest const& request) {
        return child_->ListReleases(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::Release> CloudDeployLogging::GetRelease(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetReleaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::deploy::v1::GetReleaseRequest const& request) {
        return child_->GetRelease(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncCreateRelease(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::CreateReleaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::deploy::v1::CreateReleaseRequest const& request) {
        return child_->AsyncCreateRelease(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::AbandonReleaseResponse>
CloudDeployLogging::AbandonRelease(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::AbandonReleaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::deploy::v1::AbandonReleaseRequest const& request) {
        return child_->AbandonRelease(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::ApproveRolloutResponse>
CloudDeployLogging::ApproveRollout(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ApproveRolloutRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::deploy::v1::ApproveRolloutRequest const& request) {
        return child_->ApproveRollout(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::ListRolloutsResponse>
CloudDeployLogging::ListRollouts(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListRolloutsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::deploy::v1::ListRolloutsRequest const& request) {
        return child_->ListRollouts(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::Rollout> CloudDeployLogging::GetRollout(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetRolloutRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::deploy::v1::GetRolloutRequest const& request) {
        return child_->GetRollout(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncCreateRollout(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::deploy::v1::CreateRolloutRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::deploy::v1::CreateRolloutRequest const& request) {
        return child_->AsyncCreateRollout(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::RetryJobResponse>
CloudDeployLogging::RetryJob(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::RetryJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::deploy::v1::RetryJobRequest const& request) {
        return child_->RetryJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::ListJobRunsResponse>
CloudDeployLogging::ListJobRuns(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::ListJobRunsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::deploy::v1::ListJobRunsRequest const& request) {
        return child_->ListJobRuns(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::JobRun> CloudDeployLogging::GetJobRun(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetJobRunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::deploy::v1::GetJobRunRequest const& request) {
        return child_->GetJobRun(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::deploy::v1::Config> CloudDeployLogging::GetConfig(
    grpc::ClientContext& context,
    google::cloud::deploy::v1::GetConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::deploy::v1::GetConfigRequest const& request) {
        return child_->GetConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudDeployLogging::AsyncGetOperation(
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

future<Status> CloudDeployLogging::AsyncCancelOperation(
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
}  // namespace deploy_v1_internal
}  // namespace cloud
}  // namespace google
