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
// source: google/cloud/compute/machine_types/v1/machine_types.proto

#include "google/cloud/compute/machine_types/v1/internal/machine_types_rest_connection_impl.h"
#include "google/cloud/compute/machine_types/v1/internal/machine_types_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_machine_types_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MachineTypesRestConnectionImpl::MachineTypesRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_machine_types_v1_internal::MachineTypesRestStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      MachineTypesConnection::options())) {}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::MachineTypesScopedList>>
MachineTypesRestConnectionImpl::AggregatedListMachineTypes(
    google::cloud::cpp::compute::machine_types::v1::
        AggregatedListMachineTypesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->AggregatedListMachineTypes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::MachineTypesScopedList>>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<compute_machine_types_v1::MachineTypesRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::cpp::compute::machine_types::v1::
              AggregatedListMachineTypesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::machine_types::v1::
                       AggregatedListMachineTypesRequest const& request) {
              return stub->AggregatedListMachineTypes(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::MachineTypeAggregatedList r) {
        std::vector<
            std::pair<std::string,
                      google::cloud::cpp::compute::v1::MachineTypesScopedList>>
            result(r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::cpp::compute::v1::MachineType>
MachineTypesRestConnectionImpl::GetMachineType(
    google::cloud::cpp::compute::machine_types::v1::GetMachineTypeRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetMachineType(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::machine_types::v1::
                 GetMachineTypeRequest const& request) {
        return stub_->GetMachineType(rest_context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::cpp::compute::v1::MachineType>
MachineTypesRestConnectionImpl::ListMachineTypes(
    google::cloud::cpp::compute::machine_types::v1::ListMachineTypesRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListMachineTypes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::MachineType>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<compute_machine_types_v1::MachineTypesRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::cpp::compute::machine_types::v1::
              ListMachineTypesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::machine_types::v1::
                       ListMachineTypesRequest const& request) {
              return stub->ListMachineTypes(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::MachineTypeList r) {
        std::vector<google::cloud::cpp::compute::v1::MachineType> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_machine_types_v1_internal
}  // namespace cloud
}  // namespace google
