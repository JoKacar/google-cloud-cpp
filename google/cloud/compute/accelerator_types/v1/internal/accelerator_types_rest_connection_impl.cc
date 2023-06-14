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
// source: google/cloud/compute/accelerator_types/v1/accelerator_types.proto

#include "google/cloud/compute/accelerator_types/v1/internal/accelerator_types_rest_connection_impl.h"
#include "google/cloud/compute/accelerator_types/v1/internal/accelerator_types_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_accelerator_types_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AcceleratorTypesRestConnectionImpl::AcceleratorTypesRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<
        compute_accelerator_types_v1_internal::AcceleratorTypesRestStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      AcceleratorTypesConnection::options())) {}

StatusOr<google::cloud::cpp::compute::v1::AcceleratorTypeAggregatedList>
AcceleratorTypesRestConnectionImpl::AggregatedListAcceleratorTypes(
    google::cloud::cpp::compute::accelerator_types::v1::
        AggregatedListAcceleratorTypesRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->AggregatedListAcceleratorTypes(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::accelerator_types::v1::
                 AggregatedListAcceleratorTypesRequest const& request) {
        return stub_->AggregatedListAcceleratorTypes(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::AcceleratorType>
AcceleratorTypesRestConnectionImpl::GetAcceleratorTypes(
    google::cloud::cpp::compute::accelerator_types::v1::
        GetAcceleratorTypesRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetAcceleratorTypes(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::accelerator_types::v1::
                 GetAcceleratorTypesRequest const& request) {
        return stub_->GetAcceleratorTypes(rest_context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::cpp::compute::v1::AcceleratorType>
AcceleratorTypesRestConnectionImpl::ListAcceleratorTypes(
    google::cloud::cpp::compute::accelerator_types::v1::
        ListAcceleratorTypesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<
      compute_accelerator_types_v1::AcceleratorTypesRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListAcceleratorTypes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::AcceleratorType>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::cpp::compute::accelerator_types::v1::
                          ListAcceleratorTypesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::accelerator_types::v1::
                       ListAcceleratorTypesRequest const& request) {
              return stub->ListAcceleratorTypes(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::AcceleratorTypeList r) {
        std::vector<google::cloud::cpp::compute::v1::AcceleratorType> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_accelerator_types_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
