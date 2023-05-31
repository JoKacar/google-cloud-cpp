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
// source: google/cloud/compute/forwarding_rules/v1/forwarding_rules.proto

#include "google/cloud/compute/forwarding_rules/v1/internal/forwarding_rules_rest_connection_impl.h"
#include "google/cloud/common_options.h"
#include "google/cloud/compute/forwarding_rules/v1/internal/forwarding_rules_rest_stub_factory.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_forwarding_rules_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ForwardingRulesRestConnectionImpl::ForwardingRulesRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_forwarding_rules_v1_internal::ForwardingRulesRestStub> stub,
    Options options)
  : background_(std::move(background)), stub_(std::move(stub)),
    options_(internal::MergeOptions(
        std::move(options),
        ForwardingRulesConnection::options())) {}

StatusOr<google::cloud::cpp::compute::v1::ForwardingRuleAggregatedList>
ForwardingRulesRestConnectionImpl::AggregatedListForwardingRules(google::cloud::cpp::compute::forwarding_rules::v1::AggregatedListForwardingRulesRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->AggregatedListForwardingRules(request),
      [this](rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::forwarding_rules::v1::AggregatedListForwardingRulesRequest const& request) {
        return stub_->AggregatedListForwardingRules(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesRestConnectionImpl::DeleteForwardingRules(google::cloud::cpp::compute::forwarding_rules::v1::DeleteForwardingRulesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::forwarding_rules::v1::DeleteForwardingRulesRequest const& request) {
     return stub->AsyncDeleteForwardingRules(cq, std::move(context), request);
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
    idempotency_policy()->DeleteForwardingRules(request),
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

StatusOr<google::cloud::cpp::compute::v1::ForwardingRule>
ForwardingRulesRestConnectionImpl::GetForwardingRules(google::cloud::cpp::compute::forwarding_rules::v1::GetForwardingRulesRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetForwardingRules(request),
      [this](rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::forwarding_rules::v1::GetForwardingRulesRequest const& request) {
        return stub_->GetForwardingRules(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesRestConnectionImpl::InsertForwardingRules(google::cloud::cpp::compute::forwarding_rules::v1::InsertForwardingRulesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::forwarding_rules::v1::InsertForwardingRulesRequest const& request) {
     return stub->AsyncInsertForwardingRules(cq, std::move(context), request);
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
    idempotency_policy()->InsertForwardingRules(request),
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

StreamRange<google::cloud::cpp::compute::v1::ForwardingRule>
ForwardingRulesRestConnectionImpl::ListForwardingRules(google::cloud::cpp::compute::forwarding_rules::v1::ListForwardingRulesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<compute_forwarding_rules_v1::ForwardingRulesRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListForwardingRules(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<google::cloud::cpp::compute::v1::ForwardingRule>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name]
        (google::cloud::cpp::compute::forwarding_rules::v1::ListForwardingRulesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context, google::cloud::cpp::compute::forwarding_rules::v1::ListForwardingRulesRequest const& request) {
              return stub->ListForwardingRules(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::ForwardingRuleList r) {
        std::vector<google::cloud::cpp::compute::v1::ForwardingRule> result(r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesRestConnectionImpl::PatchForwardingRules(google::cloud::cpp::compute::forwarding_rules::v1::PatchForwardingRulesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::forwarding_rules::v1::PatchForwardingRulesRequest const& request) {
     return stub->AsyncPatchForwardingRules(cq, std::move(context), request);
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
    idempotency_policy()->PatchForwardingRules(request),
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

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesRestConnectionImpl::SetLabels(google::cloud::cpp::compute::forwarding_rules::v1::SetLabelsRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::forwarding_rules::v1::SetLabelsRequest const& request) {
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

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ForwardingRulesRestConnectionImpl::SetTarget(google::cloud::cpp::compute::forwarding_rules::v1::SetTargetRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::forwarding_rules::v1::SetTargetRequest const& request) {
     return stub->AsyncSetTarget(cq, std::move(context), request);
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
    idempotency_policy()->SetTarget(request),
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
}  // namespace compute_forwarding_rules_v1_internal
}  // namespace cloud
}  // namespace google
