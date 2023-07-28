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
// source: google/cloud/compute/disks/v1/disks.proto

#include "google/cloud/compute/disks/v1/internal/disks_rest_connection_impl.h"
#include "google/cloud/compute/disks/v1/internal/disks_rest_stub_factory.h"
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
namespace compute_disks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DisksRestConnectionImpl::DisksRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_disks_v1_internal::DisksRestStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      DisksConnection::options())) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksRestConnectionImpl::AddResourcePolicies(
    google::cloud::cpp::compute::disks::v1::AddResourcePoliciesRequest const&
        request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::disks::v1::
                 AddResourcePoliciesRequest const& request) {
        return stub->AsyncAddResourcePolicies(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->AddResourcePolicies(request), polling_policy(),
      __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::DiskAggregatedList>
DisksRestConnectionImpl::AggregatedListDisks(
    google::cloud::cpp::compute::disks::v1::AggregatedListDisksRequest const&
        request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->AggregatedListDisks(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::disks::v1::
                 AggregatedListDisksRequest const& request) {
        return stub_->AggregatedListDisks(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksRestConnectionImpl::BulkInsert(
    google::cloud::cpp::compute::disks::v1::BulkInsertRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::disks::v1::BulkInsertRequest const&
                 request) {
        return stub->AsyncBulkInsert(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->BulkInsert(request), polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksRestConnectionImpl::CreateSnapshot(
    google::cloud::cpp::compute::disks::v1::CreateSnapshotRequest const&
        request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::disks::v1::CreateSnapshotRequest const&
              request) {
        return stub->AsyncCreateSnapshot(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateSnapshot(request), polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksRestConnectionImpl::DeleteDisks(
    google::cloud::cpp::compute::disks::v1::DeleteDisksRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::disks::v1::DeleteDisksRequest const&
                 request) {
        return stub->AsyncDeleteDisks(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteDisks(request), polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::Disk>
DisksRestConnectionImpl::GetDisks(
    google::cloud::cpp::compute::disks::v1::GetDisksRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->GetDisks(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::disks::v1::GetDisksRequest const&
                 request) { return stub_->GetDisks(rest_context, request); },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DisksRestConnectionImpl::GetIamPolicy(
    google::cloud::cpp::compute::disks::v1::GetIamPolicyRequest const&
        request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::disks::v1::GetIamPolicyRequest const&
                 request) {
        return stub_->GetIamPolicy(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksRestConnectionImpl::InsertDisks(
    google::cloud::cpp::compute::disks::v1::InsertDisksRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::disks::v1::InsertDisksRequest const&
                 request) {
        return stub->AsyncInsertDisks(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->InsertDisks(request), polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StreamRange<google::cloud::cpp::compute::v1::Disk>
DisksRestConnectionImpl::ListDisks(
    google::cloud::cpp::compute::disks::v1::ListDisksRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<compute_disks_v1::DisksRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListDisks(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::Disk>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::cpp::compute::disks::v1::ListDisksRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                rest_internal::RestContext& rest_context,
                google::cloud::cpp::compute::disks::v1::ListDisksRequest const&
                    request) { return stub->ListDisks(rest_context, request); },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::DiskList r) {
        std::vector<google::cloud::cpp::compute::v1::Disk> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksRestConnectionImpl::RemoveResourcePolicies(
    google::cloud::cpp::compute::disks::v1::RemoveResourcePoliciesRequest const&
        request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::disks::v1::
                 RemoveResourcePoliciesRequest const& request) {
        return stub->AsyncRemoveResourcePolicies(cq, std::move(context),
                                                 request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->RemoveResourcePolicies(request), polling_policy(),
      __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksRestConnectionImpl::Resize(
    google::cloud::cpp::compute::disks::v1::ResizeRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::disks::v1::ResizeRequest const&
                 request) {
        return stub->AsyncResize(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(), idempotency_policy()->Resize(request),
      polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DisksRestConnectionImpl::SetIamPolicy(
    google::cloud::cpp::compute::disks::v1::SetIamPolicyRequest const&
        request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->SetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::disks::v1::SetIamPolicyRequest const&
                 request) {
        return stub_->SetIamPolicy(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksRestConnectionImpl::SetLabels(
    google::cloud::cpp::compute::disks::v1::SetLabelsRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::disks::v1::SetLabelsRequest const&
                 request) {
        return stub->AsyncSetLabels(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->SetLabels(request), polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksRestConnectionImpl::StartAsyncReplication(
    google::cloud::cpp::compute::disks::v1::StartAsyncReplicationRequest const&
        request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::disks::v1::
                 StartAsyncReplicationRequest const& request) {
        return stub->AsyncStartAsyncReplication(cq, std::move(context),
                                                request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->StartAsyncReplication(request), polling_policy(),
      __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksRestConnectionImpl::StopAsyncReplication(
    google::cloud::cpp::compute::disks::v1::StopAsyncReplicationRequest const&
        request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::disks::v1::
                 StopAsyncReplicationRequest const& request) {
        return stub->AsyncStopAsyncReplication(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->StopAsyncReplication(request), polling_policy(),
      __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksRestConnectionImpl::StopGroupAsyncReplication(
    google::cloud::cpp::compute::disks::v1::
        StopGroupAsyncReplicationRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::disks::v1::
                 StopGroupAsyncReplicationRequest const& request) {
        return stub->AsyncStopGroupAsyncReplication(cq, std::move(context),
                                                    request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->StopGroupAsyncReplication(request),
      polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
DisksRestConnectionImpl::TestIamPermissions(
    google::cloud::cpp::compute::disks::v1::TestIamPermissionsRequest const&
        request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->TestIamPermissions(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::disks::v1::
                 TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksRestConnectionImpl::UpdateDisks(
    google::cloud::cpp::compute::disks::v1::UpdateDisksRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::disks::v1::UpdateDisksRequest const&
                 request) {
        return stub->AsyncUpdateDisks(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateDisks(request), polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_disks_v1_internal
}  // namespace cloud
}  // namespace google
