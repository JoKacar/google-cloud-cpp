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
// source: google/cloud/compute/addresses/v1/addresses.proto

#include "google/cloud/compute/addresses/v1/internal/addresses_rest_connection_impl.h"
#include "google/cloud/common_options.h"
#include "google/cloud/compute/addresses/v1/internal/addresses_rest_stub_factory.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_addresses_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AddressesRestConnectionImpl::AddressesRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_addresses_v1_internal::AddressesRestStub> stub,
    Options options)
  : background_(std::move(background)), stub_(std::move(stub)),
    options_(internal::MergeOptions(
        std::move(options),
        AddressesConnection::options())) {}

StatusOr<google::cloud::cpp::compute::v1::AddressAggregatedList>
AddressesRestConnectionImpl::AggregatedListAddresses(google::cloud::cpp::compute::addresses::v1::AggregatedListAddressesRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->AggregatedListAddresses(request),
      [this](rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::addresses::v1::AggregatedListAddressesRequest const& request) {
        return stub_->AggregatedListAddresses(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AddressesRestConnectionImpl::DeleteAddresses(google::cloud::cpp::compute::addresses::v1::DeleteAddressesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::addresses::v1::DeleteAddressesRequest const& request) {
     return stub->AsyncDeleteAddresses(cq, std::move(context), request);
    },
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest const& request) {
     return stub->AsyncGetOperation(cq, std::move(context), request);
    },
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest const& request) {
     return stub->AsyncCancelOperation(cq, std::move(context), request);
    },
    [](StatusOr<google::cloud::cpp::compute::v1::Operation> op, std::string const&) {
        return op;
    },
    retry_policy(), backoff_policy(),
    idempotency_policy()->DeleteAddresses(request),
    polling_policy(), __func__,
    [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
    },
    [request](std::string const& op, google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest& r) {

      r.set_project(request.project());
      r.set_region(request.region());
      r.set_operation(op);

    },
    [request](std::string const& op, google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest& r) {

      r.set_project(request.project());
      r.set_region(request.region());
      r.set_operation(op);

    });

}

StatusOr<google::cloud::cpp::compute::v1::Address>
AddressesRestConnectionImpl::GetAddresses(google::cloud::cpp::compute::addresses::v1::GetAddressesRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetAddresses(request),
      [this](rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::addresses::v1::GetAddressesRequest const& request) {
        return stub_->GetAddresses(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AddressesRestConnectionImpl::InsertAddresses(google::cloud::cpp::compute::addresses::v1::InsertAddressesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::addresses::v1::InsertAddressesRequest const& request) {
     return stub->AsyncInsertAddresses(cq, std::move(context), request);
    },
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest const& request) {
     return stub->AsyncGetOperation(cq, std::move(context), request);
    },
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest const& request) {
     return stub->AsyncCancelOperation(cq, std::move(context), request);
    },
    [](StatusOr<google::cloud::cpp::compute::v1::Operation> op, std::string const&) {
        return op;
    },
    retry_policy(), backoff_policy(),
    idempotency_policy()->InsertAddresses(request),
    polling_policy(), __func__,
    [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
    },
    [request](std::string const& op, google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest& r) {

      r.set_project(request.project());
      r.set_region(request.region());
      r.set_operation(op);

    },
    [request](std::string const& op, google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest& r) {

      r.set_project(request.project());
      r.set_region(request.region());
      r.set_operation(op);

    });

}

StreamRange<google::cloud::cpp::compute::v1::Address>
AddressesRestConnectionImpl::ListAddresses(google::cloud::cpp::compute::addresses::v1::ListAddressesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<compute_addresses_v1::AddressesRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListAddresses(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<google::cloud::cpp::compute::v1::Address>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name]
        (google::cloud::cpp::compute::addresses::v1::ListAddressesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context, google::cloud::cpp::compute::addresses::v1::ListAddressesRequest const& request) {
              return stub->ListAddresses(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::AddressList r) {
        std::vector<google::cloud::cpp::compute::v1::Address> result(r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AddressesRestConnectionImpl::SetLabels(google::cloud::cpp::compute::addresses::v1::SetLabelsRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::addresses::v1::SetLabelsRequest const& request) {
     return stub->AsyncSetLabels(cq, std::move(context), request);
    },
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest const& request) {
     return stub->AsyncGetOperation(cq, std::move(context), request);
    },
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest const& request) {
     return stub->AsyncCancelOperation(cq, std::move(context), request);
    },
    [](StatusOr<google::cloud::cpp::compute::v1::Operation> op, std::string const&) {
        return op;
    },
    retry_policy(), backoff_policy(),
    idempotency_policy()->SetLabels(request),
    polling_policy(), __func__,
    [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
    },
    [request](std::string const& op, google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest& r) {

      r.set_project(request.project());
      r.set_region(request.region());
      r.set_operation(op);

    },
    [request](std::string const& op, google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest& r) {

      r.set_project(request.project());
      r.set_region(request.region());
      r.set_operation(op);

    });

}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_addresses_v1_internal
}  // namespace cloud
}  // namespace google
