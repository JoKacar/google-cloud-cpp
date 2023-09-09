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
// source: google/cloud/compute/region_url_maps/v1/region_url_maps.proto

#include "google/cloud/compute/region_url_maps/v1/internal/region_url_maps_rest_connection_impl.h"
#include "google/cloud/compute/region_url_maps/v1/internal/region_url_maps_rest_stub_factory.h"
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
namespace compute_region_url_maps_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionUrlMapsRestConnectionImpl::RegionUrlMapsRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_region_url_maps_v1_internal::RegionUrlMapsRestStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      RegionUrlMapsConnection::options())) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionUrlMapsRestConnectionImpl::DeleteRegionUrlMap(
    google::cloud::cpp::compute::region_url_maps::v1::
        DeleteRegionUrlMapRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::
          GetRegionOperationRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteRegionOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_url_maps::v1::
                         DeleteRegionUrlMapRequest const& request) {
        return stub->AsyncDeleteRegionUrlMap(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetRegionOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteRegionOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteRegionUrlMap(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    GetRegionOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    DeleteRegionOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::UrlMap>
RegionUrlMapsRestConnectionImpl::GetRegionUrlMap(
    google::cloud::cpp::compute::region_url_maps::v1::
        GetRegionUrlMapRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetRegionUrlMap(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_url_maps::v1::
                 GetRegionUrlMapRequest const& request) {
        return stub_->GetRegionUrlMap(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionUrlMapsRestConnectionImpl::InsertRegionUrlMap(
    google::cloud::cpp::compute::region_url_maps::v1::
        InsertRegionUrlMapRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::
          GetRegionOperationRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteRegionOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_url_maps::v1::
                         InsertRegionUrlMapRequest const& request) {
        return stub->AsyncInsertRegionUrlMap(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetRegionOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteRegionOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InsertRegionUrlMap(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    GetRegionOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    DeleteRegionOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      });
}

StreamRange<google::cloud::cpp::compute::v1::UrlMap>
RegionUrlMapsRestConnectionImpl::ListRegionUrlMaps(
    google::cloud::cpp::compute::region_url_maps::v1::ListRegionUrlMapsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListRegionUrlMaps(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::UrlMap>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           compute_region_url_maps_v1::RegionUrlMapsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::cpp::compute::region_url_maps::v1::
              ListRegionUrlMapsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::region_url_maps::v1::
                       ListRegionUrlMapsRequest const& request) {
              return stub->ListRegionUrlMaps(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::UrlMapList r) {
        std::vector<google::cloud::cpp::compute::v1::UrlMap> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionUrlMapsRestConnectionImpl::PatchRegionUrlMap(
    google::cloud::cpp::compute::region_url_maps::v1::
        PatchRegionUrlMapRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::
          GetRegionOperationRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteRegionOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_url_maps::v1::
                         PatchRegionUrlMapRequest const& request) {
        return stub->AsyncPatchRegionUrlMap(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetRegionOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteRegionOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PatchRegionUrlMap(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    GetRegionOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    DeleteRegionOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionUrlMapsRestConnectionImpl::UpdateRegionUrlMap(
    google::cloud::cpp::compute::region_url_maps::v1::
        UpdateRegionUrlMapRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::
          GetRegionOperationRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteRegionOperationRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_url_maps::v1::
                         UpdateRegionUrlMapRequest const& request) {
        return stub->AsyncUpdateRegionUrlMap(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetRegionOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteRegionOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateRegionUrlMap(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    GetRegionOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    DeleteRegionOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::UrlMapsValidateResponse>
RegionUrlMapsRestConnectionImpl::Validate(
    google::cloud::cpp::compute::region_url_maps::v1::ValidateRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->Validate(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_url_maps::v1::
                 ValidateRequest const& request) {
        return stub_->Validate(rest_context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_url_maps_v1_internal
}  // namespace cloud
}  // namespace google
