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
// source: google/cloud/compute/region_disks/v1/region_disks.proto

#include "google/cloud/compute/region_disks/v1/internal/region_disks_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_disks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionDisksRestLogging::RegionDisksRestLogging(
    std::shared_ptr<RegionDisksRestStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestLogging::AsyncAddResourcePolicies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_disks::v1::
        AddResourcePoliciesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_disks::v1::
                 AddResourcePoliciesRequest const& request) {
        return child_->AsyncAddResourcePolicies(cq, std::move(rest_context),
                                                request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestLogging::AsyncBulkInsert(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_disks::v1::BulkInsertRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_disks::v1::
                 BulkInsertRequest const& request) {
        return child_->AsyncBulkInsert(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestLogging::AsyncCreateSnapshot(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_disks::v1::CreateSnapshotRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_disks::v1::
                 CreateSnapshotRequest const& request) {
        return child_->AsyncCreateSnapshot(cq, std::move(rest_context),
                                           request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestLogging::AsyncDeleteRegionDisk(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_disks::v1::
        DeleteRegionDiskRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_disks::v1::
                 DeleteRegionDiskRequest const& request) {
        return child_->AsyncDeleteRegionDisk(cq, std::move(rest_context),
                                             request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Disk>
RegionDisksRestLogging::GetRegionDisk(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_disks::v1::GetRegionDiskRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_disks::v1::
                 GetRegionDiskRequest const& request) {
        return child_->GetRegionDisk(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionDisksRestLogging::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_disks::v1::GetIamPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_disks::v1::
                 GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestLogging::AsyncInsertRegionDisk(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_disks::v1::
        InsertRegionDiskRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_disks::v1::
                 InsertRegionDiskRequest const& request) {
        return child_->AsyncInsertRegionDisk(cq, std::move(rest_context),
                                             request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::DiskList>
RegionDisksRestLogging::ListRegionDisks(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_disks::v1::ListRegionDisksRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_disks::v1::
                 ListRegionDisksRequest const& request) {
        return child_->ListRegionDisks(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestLogging::AsyncRemoveResourcePolicies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_disks::v1::
        RemoveResourcePoliciesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_disks::v1::
                 RemoveResourcePoliciesRequest const& request) {
        return child_->AsyncRemoveResourcePolicies(cq, std::move(rest_context),
                                                   request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestLogging::AsyncResize(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_disks::v1::ResizeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_disks::v1::ResizeRequest const&
                 request) {
        return child_->AsyncResize(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionDisksRestLogging::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_disks::v1::SetIamPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_disks::v1::
                 SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestLogging::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_disks::v1::SetLabelsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> rest_context,
          google::cloud::cpp::compute::region_disks::v1::SetLabelsRequest const&
              request) {
        return child_->AsyncSetLabels(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestLogging::AsyncStartAsyncReplication(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_disks::v1::
        StartAsyncReplicationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_disks::v1::
                 StartAsyncReplicationRequest const& request) {
        return child_->AsyncStartAsyncReplication(cq, std::move(rest_context),
                                                  request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestLogging::AsyncStopAsyncReplication(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_disks::v1::
        StopAsyncReplicationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_disks::v1::
                 StopAsyncReplicationRequest const& request) {
        return child_->AsyncStopAsyncReplication(cq, std::move(rest_context),
                                                 request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestLogging::AsyncStopGroupAsyncReplication(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_disks::v1::
        StopGroupAsyncReplicationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_disks::v1::
                 StopGroupAsyncReplicationRequest const& request) {
        return child_->AsyncStopGroupAsyncReplication(
            cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
RegionDisksRestLogging::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_disks::v1::
        TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_disks::v1::
                 TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestLogging::AsyncUpdateRegionDisk(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_disks::v1::
        UpdateRegionDiskRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_disks::v1::
                 UpdateRegionDiskRequest const& request) {
        return child_->AsyncUpdateRegionDisk(cq, std::move(rest_context),
                                             request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestLogging::AsyncGetOperation(
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

future<Status> RegionDisksRestLogging::AsyncCancelOperation(
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
}  // namespace compute_region_disks_v1_internal
}  // namespace cloud
}  // namespace google
