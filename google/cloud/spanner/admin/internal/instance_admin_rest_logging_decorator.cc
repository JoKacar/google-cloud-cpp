// Copyright 2021 Google LLC
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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#include "google/cloud/spanner/admin/internal/instance_admin_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceAdminRestLogging::InstanceAdminRestLogging(
    std::shared_ptr<InstanceAdminRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::spanner::admin::instance::v1::ListInstanceConfigsResponse>
InstanceAdminRestLogging::ListInstanceConfigs(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::instance::v1::ListInstanceConfigsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::spanner::admin::instance::v1::
                 ListInstanceConfigsRequest const& request) {
        return child_->ListInstanceConfigs(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
InstanceAdminRestLogging::GetInstanceConfig(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context,
          google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
              request) {
        return child_->GetInstanceConfig(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminRestLogging::AsyncCreateInstanceConfig(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::spanner::admin::instance::v1::
                 CreateInstanceConfigRequest const& request) {
        return child_->AsyncCreateInstanceConfig(cq, std::move(rest_context),
                                                 request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminRestLogging::AsyncUpdateInstanceConfig(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::spanner::admin::instance::v1::
                 UpdateInstanceConfigRequest const& request) {
        return child_->AsyncUpdateInstanceConfig(cq, std::move(rest_context),
                                                 request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

Status InstanceAdminRestLogging::DeleteInstanceConfig(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::spanner::admin::instance::v1::
                 DeleteInstanceConfigRequest const& request) {
        return child_->DeleteInstanceConfig(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<
    google::spanner::admin::instance::v1::ListInstanceConfigOperationsResponse>
InstanceAdminRestLogging::ListInstanceConfigOperations(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::instance::v1::
        ListInstanceConfigOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::spanner::admin::instance::v1::
                 ListInstanceConfigOperationsRequest const& request) {
        return child_->ListInstanceConfigOperations(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::spanner::admin::instance::v1::ListInstancesResponse>
InstanceAdminRestLogging::ListInstances(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::instance::v1::ListInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::spanner::admin::instance::v1::ListInstancesRequest const&
                 request) {
        return child_->ListInstances(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::spanner::admin::instance::v1::Instance>
InstanceAdminRestLogging::GetInstance(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::instance::v1::GetInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::spanner::admin::instance::v1::GetInstanceRequest const&
                 request) {
        return child_->GetInstance(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminRestLogging::AsyncCreateInstance(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::spanner::admin::instance::v1::CreateInstanceRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::spanner::admin::instance::v1::CreateInstanceRequest const&
                 request) {
        return child_->AsyncCreateInstance(cq, std::move(rest_context),
                                           request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminRestLogging::AsyncUpdateInstance(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::spanner::admin::instance::v1::UpdateInstanceRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::spanner::admin::instance::v1::UpdateInstanceRequest const&
                 request) {
        return child_->AsyncUpdateInstance(cq, std::move(rest_context),
                                           request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

Status InstanceAdminRestLogging::DeleteInstance(
    rest_internal::RestContext& rest_context,
    google::spanner::admin::instance::v1::DeleteInstanceRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::spanner::admin::instance::v1::DeleteInstanceRequest const&
                 request) {
        return child_->DeleteInstance(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> InstanceAdminRestLogging::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> InstanceAdminRestLogging::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
InstanceAdminRestLogging::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
InstanceAdminRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<Status> InstanceAdminRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
