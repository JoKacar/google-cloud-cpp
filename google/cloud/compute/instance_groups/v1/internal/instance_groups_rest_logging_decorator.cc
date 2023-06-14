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
// source: google/cloud/compute/instance_groups/v1/instance_groups.proto

#include "google/cloud/compute/instance_groups/v1/internal/instance_groups_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_instance_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceGroupsRestLogging::InstanceGroupsRestLogging(
    std::shared_ptr<InstanceGroupsRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsRestLogging::AsyncAddInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_groups::v1::AddInstancesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::instance_groups::v1::
                 AddInstancesRequest const& request) {
        return child_->AsyncAddInstances(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupAggregatedList>
InstanceGroupsRestLogging::AggregatedListInstanceGroups(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_groups::v1::
        AggregatedListInstanceGroupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_groups::v1::
                 AggregatedListInstanceGroupsRequest const& request) {
        return child_->AggregatedListInstanceGroups(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsRestLogging::AsyncDeleteInstanceGroups(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_groups::v1::
        DeleteInstanceGroupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::instance_groups::v1::
                 DeleteInstanceGroupsRequest const& request) {
        return child_->AsyncDeleteInstanceGroups(cq, std::move(rest_context),
                                                 request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroup>
InstanceGroupsRestLogging::GetInstanceGroups(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_groups::v1::
        GetInstanceGroupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_groups::v1::
                 GetInstanceGroupsRequest const& request) {
        return child_->GetInstanceGroups(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsRestLogging::AsyncInsertInstanceGroups(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_groups::v1::
        InsertInstanceGroupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::instance_groups::v1::
                 InsertInstanceGroupsRequest const& request) {
        return child_->AsyncInsertInstanceGroups(cq, std::move(rest_context),
                                                 request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupList>
InstanceGroupsRestLogging::ListInstanceGroups(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_groups::v1::
        ListInstanceGroupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_groups::v1::
                 ListInstanceGroupsRequest const& request) {
        return child_->ListInstanceGroups(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupsListInstances>
InstanceGroupsRestLogging::ListInstances(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_groups::v1::
        ListInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_groups::v1::
                 ListInstancesRequest const& request) {
        return child_->ListInstances(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsRestLogging::AsyncRemoveInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_groups::v1::
        RemoveInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::instance_groups::v1::
                 RemoveInstancesRequest const& request) {
        return child_->AsyncRemoveInstances(cq, std::move(rest_context),
                                            request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsRestLogging::AsyncSetNamedPorts(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_groups::v1::
        SetNamedPortsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::instance_groups::v1::
                 SetNamedPortsRequest const& request) {
        return child_->AsyncSetNamedPorts(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        GetZoneOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetZoneOperationsRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<Status> InstanceGroupsRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteZoneOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteZoneOperationsRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_groups_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
