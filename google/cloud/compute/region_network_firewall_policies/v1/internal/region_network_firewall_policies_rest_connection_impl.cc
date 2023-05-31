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
// source: google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies.proto

#include "google/cloud/compute/region_network_firewall_policies/v1/internal/region_network_firewall_policies_rest_connection_impl.h"
#include "google/cloud/common_options.h"
#include "google/cloud/compute/region_network_firewall_policies/v1/internal/region_network_firewall_policies_rest_stub_factory.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_network_firewall_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionNetworkFirewallPoliciesRestConnectionImpl::RegionNetworkFirewallPoliciesRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_region_network_firewall_policies_v1_internal::RegionNetworkFirewallPoliciesRestStub> stub,
    Options options)
  : background_(std::move(background)), stub_(std::move(stub)),
    options_(internal::MergeOptions(
        std::move(options),
        RegionNetworkFirewallPoliciesConnection::options())) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesRestConnectionImpl::AddAssociation(google::cloud::cpp::compute::region_network_firewall_policies::v1::AddAssociationRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::AddAssociationRequest const& request) {
     return stub->AsyncAddAssociation(cq, std::move(context), request);
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
    idempotency_policy()->AddAssociation(request),
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
RegionNetworkFirewallPoliciesRestConnectionImpl::AddRule(google::cloud::cpp::compute::region_network_firewall_policies::v1::AddRuleRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::AddRuleRequest const& request) {
     return stub->AsyncAddRule(cq, std::move(context), request);
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
    idempotency_policy()->AddRule(request),
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
RegionNetworkFirewallPoliciesRestConnectionImpl::CloneRules(google::cloud::cpp::compute::region_network_firewall_policies::v1::CloneRulesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::CloneRulesRequest const& request) {
     return stub->AsyncCloneRules(cq, std::move(context), request);
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
    idempotency_policy()->CloneRules(request),
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
RegionNetworkFirewallPoliciesRestConnectionImpl::DeleteRegionNetworkFirewallPolicies(google::cloud::cpp::compute::region_network_firewall_policies::v1::DeleteRegionNetworkFirewallPoliciesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::DeleteRegionNetworkFirewallPoliciesRequest const& request) {
     return stub->AsyncDeleteRegionNetworkFirewallPolicies(cq, std::move(context), request);
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
    idempotency_policy()->DeleteRegionNetworkFirewallPolicies(request),
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

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
RegionNetworkFirewallPoliciesRestConnectionImpl::GetRegionNetworkFirewallPolicies(google::cloud::cpp::compute::region_network_firewall_policies::v1::GetRegionNetworkFirewallPoliciesRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetRegionNetworkFirewallPolicies(request),
      [this](rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::GetRegionNetworkFirewallPoliciesRequest const& request) {
        return stub_->GetRegionNetworkFirewallPolicies(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
RegionNetworkFirewallPoliciesRestConnectionImpl::GetAssociation(google::cloud::cpp::compute::region_network_firewall_policies::v1::GetAssociationRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetAssociation(request),
      [this](rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::GetAssociationRequest const& request) {
        return stub_->GetAssociation(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::RegionNetworkFirewallPoliciesGetEffectiveFirewallsResponse>
RegionNetworkFirewallPoliciesRestConnectionImpl::GetEffectiveFirewalls(google::cloud::cpp::compute::region_network_firewall_policies::v1::GetEffectiveFirewallsRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetEffectiveFirewalls(request),
      [this](rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::GetEffectiveFirewallsRequest const& request) {
        return stub_->GetEffectiveFirewalls(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionNetworkFirewallPoliciesRestConnectionImpl::GetIamPolicy(google::cloud::cpp::compute::region_network_firewall_policies::v1::GetIamPolicyRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
RegionNetworkFirewallPoliciesRestConnectionImpl::GetRule(google::cloud::cpp::compute::region_network_firewall_policies::v1::GetRuleRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetRule(request),
      [this](rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::GetRuleRequest const& request) {
        return stub_->GetRule(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesRestConnectionImpl::InsertRegionNetworkFirewallPolicies(google::cloud::cpp::compute::region_network_firewall_policies::v1::InsertRegionNetworkFirewallPoliciesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::InsertRegionNetworkFirewallPoliciesRequest const& request) {
     return stub->AsyncInsertRegionNetworkFirewallPolicies(cq, std::move(context), request);
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
    idempotency_policy()->InsertRegionNetworkFirewallPolicies(request),
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

StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>
RegionNetworkFirewallPoliciesRestConnectionImpl::ListRegionNetworkFirewallPolicies(google::cloud::cpp::compute::region_network_firewall_policies::v1::ListRegionNetworkFirewallPoliciesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<compute_region_network_firewall_policies_v1::RegionNetworkFirewallPoliciesRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListRegionNetworkFirewallPolicies(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name]
        (google::cloud::cpp::compute::region_network_firewall_policies::v1::ListRegionNetworkFirewallPoliciesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context, google::cloud::cpp::compute::region_network_firewall_policies::v1::ListRegionNetworkFirewallPoliciesRequest const& request) {
              return stub->ListRegionNetworkFirewallPolicies(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::FirewallPolicyList r) {
        std::vector<google::cloud::cpp::compute::v1::FirewallPolicy> result(r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesRestConnectionImpl::PatchRegionNetworkFirewallPolicies(google::cloud::cpp::compute::region_network_firewall_policies::v1::PatchRegionNetworkFirewallPoliciesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::PatchRegionNetworkFirewallPoliciesRequest const& request) {
     return stub->AsyncPatchRegionNetworkFirewallPolicies(cq, std::move(context), request);
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
    idempotency_policy()->PatchRegionNetworkFirewallPolicies(request),
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
RegionNetworkFirewallPoliciesRestConnectionImpl::PatchRule(google::cloud::cpp::compute::region_network_firewall_policies::v1::PatchRuleRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::PatchRuleRequest const& request) {
     return stub->AsyncPatchRule(cq, std::move(context), request);
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
    idempotency_policy()->PatchRule(request),
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
RegionNetworkFirewallPoliciesRestConnectionImpl::RemoveAssociation(google::cloud::cpp::compute::region_network_firewall_policies::v1::RemoveAssociationRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::RemoveAssociationRequest const& request) {
     return stub->AsyncRemoveAssociation(cq, std::move(context), request);
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
    idempotency_policy()->RemoveAssociation(request),
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
RegionNetworkFirewallPoliciesRestConnectionImpl::RemoveRule(google::cloud::cpp::compute::region_network_firewall_policies::v1::RemoveRuleRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::RemoveRuleRequest const& request) {
     return stub->AsyncRemoveRule(cq, std::move(context), request);
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
    idempotency_policy()->RemoveRule(request),
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

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionNetworkFirewallPoliciesRestConnectionImpl::SetIamPolicy(google::cloud::cpp::compute::region_network_firewall_policies::v1::SetIamPolicyRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->SetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
RegionNetworkFirewallPoliciesRestConnectionImpl::TestIamPermissions(google::cloud::cpp::compute::region_network_firewall_policies::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->TestIamPermissions(request),
      [this](rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::region_network_firewall_policies::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(rest_context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_network_firewall_policies_v1_internal
}  // namespace cloud
}  // namespace google
