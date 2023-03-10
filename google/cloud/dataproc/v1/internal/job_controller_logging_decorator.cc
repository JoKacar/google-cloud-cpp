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
// source: google/cloud/dataproc/v1/jobs.proto

#include "google/cloud/dataproc/v1/internal/job_controller_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataproc/v1/jobs.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobControllerLogging::JobControllerLogging(
    std::shared_ptr<JobControllerStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerLogging::SubmitJob(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::SubmitJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::SubmitJobRequest const& request) {
        return child_->SubmitJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
JobControllerLogging::AsyncSubmitJobAsOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dataproc::v1::SubmitJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::dataproc::v1::SubmitJobRequest const& request) {
        return child_->AsyncSubmitJobAsOperation(cq, std::move(context),
                                                 request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerLogging::GetJob(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::GetJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::GetJobRequest const& request) {
        return child_->GetJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataproc::v1::ListJobsResponse>
JobControllerLogging::ListJobs(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::ListJobsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::ListJobsRequest const& request) {
        return child_->ListJobs(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerLogging::UpdateJob(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::UpdateJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::UpdateJobRequest const& request) {
        return child_->UpdateJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataproc::v1::Job> JobControllerLogging::CancelJob(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::CancelJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::CancelJobRequest const& request) {
        return child_->CancelJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status JobControllerLogging::DeleteJob(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::DeleteJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::DeleteJobRequest const& request) {
        return child_->DeleteJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
JobControllerLogging::AsyncGetOperation(
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

future<Status> JobControllerLogging::AsyncCancelOperation(
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
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
