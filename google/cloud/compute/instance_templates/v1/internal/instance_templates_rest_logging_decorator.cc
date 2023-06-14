// Copyright 2023 Google LLC
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
// source: google/cloud/compute/instance_templates/v1/instance_templates.proto

#include "google/cloud/compute/instance_templates/v1/internal/instance_templates_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_instance_templates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceTemplatesRestLogging::InstanceTemplatesRestLogging(
    std::shared_ptr<InstanceTemplatesRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::cpp::compute::v1::InstanceTemplateAggregatedList>
InstanceTemplatesRestLogging::AggregatedListInstanceTemplates(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        AggregatedListInstanceTemplatesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_templates::v1::
                 AggregatedListInstanceTemplatesRequest const& request) {
        return child_->AggregatedListInstanceTemplates(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceTemplatesRestLogging::AsyncDeleteInstanceTemplates(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        DeleteInstanceTemplatesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::instance_templates::v1::
                 DeleteInstanceTemplatesRequest const& request) {
        return child_->AsyncDeleteInstanceTemplates(cq, std::move(rest_context),
                                                    request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceTemplate>
InstanceTemplatesRestLogging::GetInstanceTemplates(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        GetInstanceTemplatesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_templates::v1::
                 GetInstanceTemplatesRequest const& request) {
        return child_->GetInstanceTemplates(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstanceTemplatesRestLogging::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_templates::v1::
                 GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceTemplatesRestLogging::AsyncInsertInstanceTemplates(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        InsertInstanceTemplatesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::instance_templates::v1::
                 InsertInstanceTemplatesRequest const& request) {
        return child_->AsyncInsertInstanceTemplates(cq, std::move(rest_context),
                                                    request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceTemplateList>
InstanceTemplatesRestLogging::ListInstanceTemplates(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        ListInstanceTemplatesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_templates::v1::
                 ListInstanceTemplatesRequest const& request) {
        return child_->ListInstanceTemplates(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstanceTemplatesRestLogging::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_templates::v1::
                 SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
InstanceTemplatesRestLogging::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_templates::v1::
        TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_templates::v1::
                 TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceTemplatesRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetGlobalOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetGlobalOperationsRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<Status> InstanceTemplatesRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteGlobalOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteGlobalOperationsRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_templates_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
