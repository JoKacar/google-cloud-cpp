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
// google/cloud/compute/region_backend_services/v1/region_backend_services.proto

#include "google/cloud/compute/region_backend_services/v1/internal/region_backend_services_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_backend_services_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionBackendServicesRestLogging::RegionBackendServicesRestLogging(
    std::shared_ptr<RegionBackendServicesRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionBackendServicesRestLogging::AsyncDeleteRegionBackendService(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_backend_services::v1::
        DeleteRegionBackendServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_backend_services::v1::
                 DeleteRegionBackendServiceRequest const& request) {
        return child_->AsyncDeleteRegionBackendService(
            cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::BackendService>
RegionBackendServicesRestLogging::GetRegionBackendService(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_backend_services::v1::
        GetRegionBackendServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_backend_services::v1::
                 GetRegionBackendServiceRequest const& request) {
        return child_->GetRegionBackendService(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::BackendServiceGroupHealth>
RegionBackendServicesRestLogging::GetHealth(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_backend_services::v1::
        GetHealthRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_backend_services::v1::
                 GetHealthRequest const& request) {
        return child_->GetHealth(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionBackendServicesRestLogging::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_backend_services::v1::
        GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_backend_services::v1::
                 GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionBackendServicesRestLogging::AsyncInsertRegionBackendService(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_backend_services::v1::
        InsertRegionBackendServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_backend_services::v1::
                 InsertRegionBackendServiceRequest const& request) {
        return child_->AsyncInsertRegionBackendService(
            cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::BackendServiceList>
RegionBackendServicesRestLogging::ListRegionBackendServices(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_backend_services::v1::
        ListRegionBackendServicesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_backend_services::v1::
                 ListRegionBackendServicesRequest const& request) {
        return child_->ListRegionBackendServices(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionBackendServicesRestLogging::AsyncPatchRegionBackendService(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_backend_services::v1::
        PatchRegionBackendServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_backend_services::v1::
                 PatchRegionBackendServiceRequest const& request) {
        return child_->AsyncPatchRegionBackendService(
            cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionBackendServicesRestLogging::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_backend_services::v1::
        SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_backend_services::v1::
                 SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionBackendServicesRestLogging::AsyncUpdateRegionBackendService(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_backend_services::v1::
        UpdateRegionBackendServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::region_backend_services::v1::
                 UpdateRegionBackendServiceRequest const& request) {
        return child_->AsyncUpdateRegionBackendService(
            cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionBackendServicesRestLogging::AsyncGetOperation(
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

future<Status> RegionBackendServicesRestLogging::AsyncCancelOperation(
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
}  // namespace compute_region_backend_services_v1_internal
}  // namespace cloud
}  // namespace google
