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
// source:
// google/cloud/compute/global_organization_operations/v1/global_organization_operations.proto

#include "google/cloud/compute/global_organization_operations/v1/internal/global_organization_operations_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_organization_operations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GlobalOrganizationOperationsRestLogging::
    GlobalOrganizationOperationsRestLogging(
        std::shared_ptr<GlobalOrganizationOperationsRestStub> child,
        TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

Status
GlobalOrganizationOperationsRestLogging::DeleteGlobalOrganizationOperation(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::global_organization_operations::v1::
        DeleteGlobalOrganizationOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::global_organization_operations::v1::
                 DeleteGlobalOrganizationOperationRequest const& request) {
        return child_->DeleteGlobalOrganizationOperation(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
GlobalOrganizationOperationsRestLogging::GetGlobalOrganizationOperation(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::global_organization_operations::v1::
        GetGlobalOrganizationOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::global_organization_operations::v1::
                 GetGlobalOrganizationOperationRequest const& request) {
        return child_->GetGlobalOrganizationOperation(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::OperationList>
GlobalOrganizationOperationsRestLogging::ListGlobalOrganizationOperations(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::global_organization_operations::v1::
        ListGlobalOrganizationOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::global_organization_operations::v1::
                 ListGlobalOrganizationOperationsRequest const& request) {
        return child_->ListGlobalOrganizationOperations(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_organization_operations_v1_internal
}  // namespace cloud
}  // namespace google
