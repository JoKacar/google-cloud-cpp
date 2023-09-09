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

#include "google/cloud/compute/instance_groups/v1/internal/instance_groups_rest_connection_impl.h"
#include "google/cloud/compute/instance_groups/v1/internal/instance_groups_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceGroupsRestConnectionImpl::InstanceGroupsRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_instance_groups_v1_internal::InstanceGroupsRestStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      InstanceGroupsConnection::options())) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsRestConnectionImpl::AddInstances(
    google::cloud::cpp::compute::instance_groups::v1::AddInstancesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::GetZoneOperationRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::instance_groups::v1::
                         AddInstancesRequest const& request) {
        return stub->AsyncAddInstances(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetZoneOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteZoneOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AddInstances(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupAggregatedList>
InstanceGroupsRestConnectionImpl::AggregatedListInstanceGroups(
    google::cloud::cpp::compute::instance_groups::v1::
        AggregatedListInstanceGroupsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AggregatedListInstanceGroups(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_groups::v1::
                 AggregatedListInstanceGroupsRequest const& request) {
        return stub_->AggregatedListInstanceGroups(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsRestConnectionImpl::DeleteInstanceGroup(
    google::cloud::cpp::compute::instance_groups::v1::
        DeleteInstanceGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::GetZoneOperationRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::instance_groups::v1::
                         DeleteInstanceGroupRequest const& request) {
        return stub->AsyncDeleteInstanceGroup(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetZoneOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteZoneOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteInstanceGroup(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroup>
InstanceGroupsRestConnectionImpl::GetInstanceGroup(
    google::cloud::cpp::compute::instance_groups::v1::
        GetInstanceGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetInstanceGroup(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_groups::v1::
                 GetInstanceGroupRequest const& request) {
        return stub_->GetInstanceGroup(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsRestConnectionImpl::InsertInstanceGroup(
    google::cloud::cpp::compute::instance_groups::v1::
        InsertInstanceGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::GetZoneOperationRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::instance_groups::v1::
                         InsertInstanceGroupRequest const& request) {
        return stub->AsyncInsertInstanceGroup(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetZoneOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteZoneOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InsertInstanceGroup(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StreamRange<google::cloud::cpp::compute::v1::InstanceGroup>
InstanceGroupsRestConnectionImpl::ListInstanceGroups(
    google::cloud::cpp::compute::instance_groups::v1::ListInstanceGroupsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListInstanceGroups(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::InstanceGroup>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           compute_instance_groups_v1::InstanceGroupsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::cpp::compute::instance_groups::v1::
              ListInstanceGroupsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::instance_groups::v1::
                       ListInstanceGroupsRequest const& request) {
              return stub->ListInstanceGroups(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::InstanceGroupList r) {
        std::vector<google::cloud::cpp::compute::v1::InstanceGroup> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::cpp::compute::v1::InstanceWithNamedPorts>
InstanceGroupsRestConnectionImpl::ListInstances(
    google::cloud::cpp::compute::instance_groups::v1::ListInstancesRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListInstances(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::InstanceWithNamedPorts>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           compute_instance_groups_v1::InstanceGroupsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::cpp::compute::instance_groups::v1::
              ListInstancesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::instance_groups::v1::
                       ListInstancesRequest const& request) {
              return stub->ListInstances(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::InstanceGroupsListInstances r) {
        std::vector<google::cloud::cpp::compute::v1::InstanceWithNamedPorts>
            result(r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsRestConnectionImpl::RemoveInstances(
    google::cloud::cpp::compute::instance_groups::v1::
        RemoveInstancesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::GetZoneOperationRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::instance_groups::v1::
                         RemoveInstancesRequest const& request) {
        return stub->AsyncRemoveInstances(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetZoneOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteZoneOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RemoveInstances(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupsRestConnectionImpl::SetNamedPorts(
    google::cloud::cpp::compute::instance_groups::v1::
        SetNamedPortsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::GetZoneOperationRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::instance_groups::v1::
                         SetNamedPortsRequest const& request) {
        return stub->AsyncSetNamedPorts(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetZoneOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteZoneOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetNamedPorts(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_groups_v1_internal
}  // namespace cloud
}  // namespace google
