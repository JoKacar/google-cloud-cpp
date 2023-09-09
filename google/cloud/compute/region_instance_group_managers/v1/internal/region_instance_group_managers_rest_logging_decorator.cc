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
// google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers.proto

#include "google/cloud/compute/region_instance_group_managers/v1/internal/region_instance_group_managers_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_instance_group_managers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionInstanceGroupManagersRestLogging::RegionInstanceGroupManagersRestLogging(
    std::shared_ptr<RegionInstanceGroupManagersRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersRestLogging::AsyncAbandonInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        AbandonInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 AbandonInstancesRequest const& request) {
        return child_->AsyncAbandonInstances(cq, std::move(rest_context),
                                             request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersRestLogging::AsyncApplyUpdatesToInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ApplyUpdatesToInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 ApplyUpdatesToInstancesRequest const& request) {
        return child_->AsyncApplyUpdatesToInstances(cq, std::move(rest_context),
                                                    request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersRestLogging::AsyncCreateInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        CreateInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 CreateInstancesRequest const& request) {
        return child_->AsyncCreateInstances(cq, std::move(rest_context),
                                            request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersRestLogging::AsyncDeleteRegionInstanceGroupManager(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        DeleteRegionInstanceGroupManagerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 DeleteRegionInstanceGroupManagerRequest const& request) {
        return child_->AsyncDeleteRegionInstanceGroupManager(
            cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersRestLogging::AsyncDeleteInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        DeleteInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 DeleteInstancesRequest const& request) {
        return child_->AsyncDeleteInstances(cq, std::move(rest_context),
                                            request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersRestLogging::AsyncDeletePerInstanceConfigs(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        DeletePerInstanceConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 DeletePerInstanceConfigsRequest const& request) {
        return child_->AsyncDeletePerInstanceConfigs(
            cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>
RegionInstanceGroupManagersRestLogging::GetRegionInstanceGroupManager(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        GetRegionInstanceGroupManagerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 GetRegionInstanceGroupManagerRequest const& request) {
        return child_->GetRegionInstanceGroupManager(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersRestLogging::AsyncInsertRegionInstanceGroupManager(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        InsertRegionInstanceGroupManagerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 InsertRegionInstanceGroupManagerRequest const& request) {
        return child_->AsyncInsertRegionInstanceGroupManager(
            cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::RegionInstanceGroupManagerList>
RegionInstanceGroupManagersRestLogging::ListRegionInstanceGroupManagers(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListRegionInstanceGroupManagersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 ListRegionInstanceGroupManagersRequest const& request) {
        return child_->ListRegionInstanceGroupManagers(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::
             RegionInstanceGroupManagersListErrorsResponse>
RegionInstanceGroupManagersRestLogging::ListErrors(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListErrorsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 ListErrorsRequest const& request) {
        return child_->ListErrors(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::
             RegionInstanceGroupManagersListInstancesResponse>
RegionInstanceGroupManagersRestLogging::ListManagedInstances(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListManagedInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 ListManagedInstancesRequest const& request) {
        return child_->ListManagedInstances(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::
             RegionInstanceGroupManagersListInstanceConfigsResp>
RegionInstanceGroupManagersRestLogging::ListPerInstanceConfigs(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListPerInstanceConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 ListPerInstanceConfigsRequest const& request) {
        return child_->ListPerInstanceConfigs(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersRestLogging::AsyncPatchRegionInstanceGroupManager(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        PatchRegionInstanceGroupManagerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 PatchRegionInstanceGroupManagerRequest const& request) {
        return child_->AsyncPatchRegionInstanceGroupManager(
            cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersRestLogging::AsyncPatchPerInstanceConfigs(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        PatchPerInstanceConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 PatchPerInstanceConfigsRequest const& request) {
        return child_->AsyncPatchPerInstanceConfigs(cq, std::move(rest_context),
                                                    request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersRestLogging::AsyncRecreateInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        RecreateInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 RecreateInstancesRequest const& request) {
        return child_->AsyncRecreateInstances(cq, std::move(rest_context),
                                              request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersRestLogging::AsyncResize(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ResizeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 ResizeRequest const& request) {
        return child_->AsyncResize(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersRestLogging::AsyncSetInstanceTemplate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        SetInstanceTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 SetInstanceTemplateRequest const& request) {
        return child_->AsyncSetInstanceTemplate(cq, std::move(rest_context),
                                                request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersRestLogging::AsyncSetTargetPools(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        SetTargetPoolsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 SetTargetPoolsRequest const& request) {
        return child_->AsyncSetTargetPools(cq, std::move(rest_context),
                                           request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersRestLogging::AsyncUpdatePerInstanceConfigs(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        UpdatePerInstanceConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_instance_group_managers::v1::
                 UpdatePerInstanceConfigsRequest const& request) {
        return child_->AsyncUpdatePerInstanceConfigs(
            cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        GetRegionOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_operations::v1::
                 GetRegionOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<Status> RegionInstanceGroupManagersRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteRegionOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_operations::v1::
                 DeleteRegionOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_group_managers_v1_internal
}  // namespace cloud
}  // namespace google
