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
// source: google/cloud/compute/target_instances/v1/target_instances.proto

#include "google/cloud/compute/target_instances/v1/internal/target_instances_rest_connection_impl.h"
#include "google/cloud/common_options.h"
#include "google/cloud/compute/target_instances/v1/internal/target_instances_rest_stub_factory.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_instances_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetInstancesRestConnectionImpl::TargetInstancesRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_target_instances_v1_internal::TargetInstancesRestStub> stub,
    Options options)
  : background_(std::move(background)), stub_(std::move(stub)),
    options_(internal::MergeOptions(
        std::move(options),
        TargetInstancesConnection::options())) {}

StatusOr<google::cloud::cpp::compute::v1::TargetInstanceAggregatedList>
TargetInstancesRestConnectionImpl::AggregatedListTargetInstances(google::cloud::cpp::compute::target_instances::v1::AggregatedListTargetInstancesRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->AggregatedListTargetInstances(request),
      [this](rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::target_instances::v1::AggregatedListTargetInstancesRequest const& request) {
        return stub_->AggregatedListTargetInstances(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesRestConnectionImpl::DeleteTargetInstances(google::cloud::cpp::compute::target_instances::v1::DeleteTargetInstancesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::zone_operations::v1::GetZoneOperationsRequest,
    google::cloud::cpp::compute::zone_operations::v1::DeleteZoneOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::target_instances::v1::DeleteTargetInstancesRequest const& request) {
     return stub->AsyncDeleteTargetInstances(cq, std::move(context), request);
    },
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::zone_operations::v1::GetZoneOperationsRequest const& request) {
     return stub->AsyncGetOperation(cq, std::move(context), request);
    },
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::zone_operations::v1::DeleteZoneOperationsRequest const& request) {
     return stub->AsyncCancelOperation(cq, std::move(context), request);
    },
    [](StatusOr<google::cloud::cpp::compute::v1::Operation> op, std::string const&) {
        return op;
    },
    retry_policy(), backoff_policy(),
    idempotency_policy()->DeleteTargetInstances(request),
    polling_policy(), __func__,
    [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
    },
    [request](std::string const& op, google::cloud::cpp::compute::zone_operations::v1::GetZoneOperationsRequest& r) {

      r.set_project(request.project());
      r.set_zone(request.zone());
      r.set_operation(op);

    },
    [request](std::string const& op, google::cloud::cpp::compute::zone_operations::v1::DeleteZoneOperationsRequest& r) {

      r.set_project(request.project());
      r.set_zone(request.zone());
      r.set_operation(op);

    });

}

StatusOr<google::cloud::cpp::compute::v1::TargetInstance>
TargetInstancesRestConnectionImpl::GetTargetInstances(google::cloud::cpp::compute::target_instances::v1::GetTargetInstancesRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetTargetInstances(request),
      [this](rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::target_instances::v1::GetTargetInstancesRequest const& request) {
        return stub_->GetTargetInstances(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesRestConnectionImpl::InsertTargetInstances(google::cloud::cpp::compute::target_instances::v1::InsertTargetInstancesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::zone_operations::v1::GetZoneOperationsRequest,
    google::cloud::cpp::compute::zone_operations::v1::DeleteZoneOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::target_instances::v1::InsertTargetInstancesRequest const& request) {
     return stub->AsyncInsertTargetInstances(cq, std::move(context), request);
    },
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::zone_operations::v1::GetZoneOperationsRequest const& request) {
     return stub->AsyncGetOperation(cq, std::move(context), request);
    },
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::zone_operations::v1::DeleteZoneOperationsRequest const& request) {
     return stub->AsyncCancelOperation(cq, std::move(context), request);
    },
    [](StatusOr<google::cloud::cpp::compute::v1::Operation> op, std::string const&) {
        return op;
    },
    retry_policy(), backoff_policy(),
    idempotency_policy()->InsertTargetInstances(request),
    polling_policy(), __func__,
    [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
    },
    [request](std::string const& op, google::cloud::cpp::compute::zone_operations::v1::GetZoneOperationsRequest& r) {

      r.set_project(request.project());
      r.set_zone(request.zone());
      r.set_operation(op);

    },
    [request](std::string const& op, google::cloud::cpp::compute::zone_operations::v1::DeleteZoneOperationsRequest& r) {

      r.set_project(request.project());
      r.set_zone(request.zone());
      r.set_operation(op);

    });

}

StreamRange<google::cloud::cpp::compute::v1::TargetInstance>
TargetInstancesRestConnectionImpl::ListTargetInstances(google::cloud::cpp::compute::target_instances::v1::ListTargetInstancesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<compute_target_instances_v1::TargetInstancesRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListTargetInstances(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<google::cloud::cpp::compute::v1::TargetInstance>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name]
        (google::cloud::cpp::compute::target_instances::v1::ListTargetInstancesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context, google::cloud::cpp::compute::target_instances::v1::ListTargetInstancesRequest const& request) {
              return stub->ListTargetInstances(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::TargetInstanceList r) {
        std::vector<google::cloud::cpp::compute::v1::TargetInstance> result(r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_instances_v1_internal
}  // namespace cloud
}  // namespace google
