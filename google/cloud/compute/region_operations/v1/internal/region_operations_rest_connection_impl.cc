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
// source: google/cloud/compute/region_operations/v1/region_operations.proto

#include "google/cloud/compute/region_operations/v1/internal/region_operations_rest_connection_impl.h"
#include "google/cloud/compute/region_operations/v1/internal/region_operations_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_operations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionOperationsRestConnectionImpl::RegionOperationsRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<
        compute_region_operations_v1_internal::RegionOperationsRestStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      RegionOperationsConnection::options())) {}

Status RegionOperationsRestConnectionImpl::DeleteRegionOperation(
    google::cloud::cpp::compute::region_operations::v1::
        DeleteRegionOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteRegionOperation(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_operations::v1::
                 DeleteRegionOperationRequest const& request) {
        return stub_->DeleteRegionOperation(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionOperationsRestConnectionImpl::GetRegionOperation(
    google::cloud::cpp::compute::region_operations::v1::
        GetRegionOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetRegionOperation(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::region_operations::v1::
                 GetRegionOperationRequest const& request) {
        return stub_->GetRegionOperation(rest_context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::cpp::compute::v1::Operation>
RegionOperationsRestConnectionImpl::ListRegionOperations(
    google::cloud::cpp::compute::region_operations::v1::
        ListRegionOperationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListRegionOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::Operation>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           compute_region_operations_v1::RegionOperationsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::cpp::compute::region_operations::v1::
              ListRegionOperationsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::region_operations::v1::
                       ListRegionOperationsRequest const& request) {
              return stub->ListRegionOperations(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::OperationList r) {
        std::vector<google::cloud::cpp::compute::v1::Operation> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionOperationsRestConnectionImpl::Wait(
    google::cloud::cpp::compute::region_operations::v1::WaitRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->Wait(request),
      [this](
          rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::region_operations::v1::WaitRequest const&
              request) { return stub_->Wait(rest_context, request); },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_operations_v1_internal
}  // namespace cloud
}  // namespace google
