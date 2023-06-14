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
// source: google/cloud/notebooks/v1/service.proto

#include "google/cloud/notebooks/v1/internal/notebook_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/notebooks/v1/service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace notebooks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NotebookServiceLogging::NotebookServiceLogging(
    std::shared_ptr<NotebookServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::notebooks::v1::ListInstancesResponse>
NotebookServiceLogging::ListInstances(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::ListInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::notebooks::v1::ListInstancesRequest const& request) {
        return child_->ListInstances(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::notebooks::v1::Instance>
NotebookServiceLogging::GetInstance(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::notebooks::v1::GetInstanceRequest const& request) {
        return child_->GetInstance(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::CreateInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::notebooks::v1::CreateInstanceRequest const& request) {
        return child_->AsyncCreateInstance(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncRegisterInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::RegisterInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::notebooks::v1::RegisterInstanceRequest const&
                 request) {
        return child_->AsyncRegisterInstance(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncSetInstanceAccelerator(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
                 request) {
        return child_->AsyncSetInstanceAccelerator(cq, std::move(context),
                                                   request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncSetInstanceMachineType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
                 request) {
        return child_->AsyncSetInstanceMachineType(cq, std::move(context),
                                                   request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncUpdateInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpdateInstanceConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::notebooks::v1::UpdateInstanceConfigRequest const&
                 request) {
        return child_->AsyncUpdateInstanceConfig(cq, std::move(context),
                                                 request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncUpdateShieldedInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::notebooks::v1::
                 UpdateShieldedInstanceConfigRequest const& request) {
        return child_->AsyncUpdateShieldedInstanceConfig(cq, std::move(context),
                                                         request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncSetInstanceLabels(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::SetInstanceLabelsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::notebooks::v1::SetInstanceLabelsRequest const&
                 request) {
        return child_->AsyncSetInstanceLabels(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::notebooks::v1::UpdateInstanceMetadataItemsResponse>
NotebookServiceLogging::UpdateInstanceMetadataItems(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::UpdateInstanceMetadataItemsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::notebooks::v1::
                 UpdateInstanceMetadataItemsRequest const& request) {
        return child_->UpdateInstanceMetadataItems(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DeleteInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::notebooks::v1::DeleteInstanceRequest const& request) {
        return child_->AsyncDeleteInstance(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncStartInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::StartInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::notebooks::v1::StartInstanceRequest const& request) {
        return child_->AsyncStartInstance(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncStopInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::StopInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::notebooks::v1::StopInstanceRequest const& request) {
        return child_->AsyncStopInstance(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncResetInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::ResetInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::notebooks::v1::ResetInstanceRequest const& request) {
        return child_->AsyncResetInstance(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncReportInstanceInfo(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::ReportInstanceInfoRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::notebooks::v1::ReportInstanceInfoRequest const&
                 request) {
        return child_->AsyncReportInstanceInfo(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::notebooks::v1::IsInstanceUpgradeableResponse>
NotebookServiceLogging::IsInstanceUpgradeable(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const&
                 request) {
        return child_->IsInstanceUpgradeable(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::notebooks::v1::GetInstanceHealthResponse>
NotebookServiceLogging::GetInstanceHealth(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetInstanceHealthRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::notebooks::v1::GetInstanceHealthRequest const&
                 request) {
        return child_->GetInstanceHealth(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncUpgradeInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpgradeInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::notebooks::v1::UpgradeInstanceRequest const& request) {
        return child_->AsyncUpgradeInstance(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncRollbackInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::RollbackInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::notebooks::v1::RollbackInstanceRequest const&
                 request) {
        return child_->AsyncRollbackInstance(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncDiagnoseInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DiagnoseInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::notebooks::v1::DiagnoseInstanceRequest const&
                 request) {
        return child_->AsyncDiagnoseInstance(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncUpgradeInstanceInternal(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
                 request) {
        return child_->AsyncUpgradeInstanceInternal(cq, std::move(context),
                                                    request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::notebooks::v1::ListEnvironmentsResponse>
NotebookServiceLogging::ListEnvironments(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::ListEnvironmentsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::notebooks::v1::ListEnvironmentsRequest const&
                 request) {
        return child_->ListEnvironments(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::notebooks::v1::Environment>
NotebookServiceLogging::GetEnvironment(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::notebooks::v1::GetEnvironmentRequest const& request) {
        return child_->GetEnvironment(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::CreateEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::notebooks::v1::CreateEnvironmentRequest const&
                 request) {
        return child_->AsyncCreateEnvironment(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DeleteEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::notebooks::v1::DeleteEnvironmentRequest const&
                 request) {
        return child_->AsyncDeleteEnvironment(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::notebooks::v1::ListSchedulesResponse>
NotebookServiceLogging::ListSchedules(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::ListSchedulesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::notebooks::v1::ListSchedulesRequest const& request) {
        return child_->ListSchedules(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::notebooks::v1::Schedule>
NotebookServiceLogging::GetSchedule(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetScheduleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::notebooks::v1::GetScheduleRequest const& request) {
        return child_->GetSchedule(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncDeleteSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DeleteScheduleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::notebooks::v1::DeleteScheduleRequest const& request) {
        return child_->AsyncDeleteSchedule(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncCreateSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::CreateScheduleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::notebooks::v1::CreateScheduleRequest const& request) {
        return child_->AsyncCreateSchedule(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncTriggerSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::TriggerScheduleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::notebooks::v1::TriggerScheduleRequest const& request) {
        return child_->AsyncTriggerSchedule(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::notebooks::v1::ListExecutionsResponse>
NotebookServiceLogging::ListExecutions(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::ListExecutionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::notebooks::v1::ListExecutionsRequest const& request) {
        return child_->ListExecutions(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::notebooks::v1::Execution>
NotebookServiceLogging::GetExecution(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetExecutionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::notebooks::v1::GetExecutionRequest const& request) {
        return child_->GetExecution(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncDeleteExecution(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DeleteExecutionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::notebooks::v1::DeleteExecutionRequest const& request) {
        return child_->AsyncDeleteExecution(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncCreateExecution(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::CreateExecutionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::notebooks::v1::CreateExecutionRequest const& request) {
        return child_->AsyncCreateExecution(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceLogging::AsyncGetOperation(
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

future<Status> NotebookServiceLogging::AsyncCancelOperation(
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
}  // namespace notebooks_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
