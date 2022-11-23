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
// source:
// google/cloud/compute/network_firewall_policies/v1/network_firewall_policies.proto

#include "google/cloud/compute/network_firewall_policies/v1/internal/network_firewall_policies_rest_connection_impl.h"
#include "google/cloud/compute/network_firewall_policies/v1/internal/network_firewall_policies_rest_stub_factory.h"
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
namespace compute_network_firewall_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworkFirewallPoliciesRestConnectionImpl::
    NetworkFirewallPoliciesRestConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<compute_network_firewall_policies_v1_internal::
                            NetworkFirewallPoliciesRestStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), NetworkFirewallPoliciesConnection::options())) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestConnectionImpl::AddAssociation(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        AddAssociationRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 AddAssociationRequest const& request) {
        return stub->AsyncAddAssociation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetGlobalOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteGlobalOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->AddAssociation(request), polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestConnectionImpl::AddRule(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        AddRuleRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 AddRuleRequest const& request) {
        return stub->AsyncAddRule(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetGlobalOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteGlobalOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(), idempotency_policy()->AddRule(request),
      polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestConnectionImpl::CloneRules(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        CloneRulesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 CloneRulesRequest const& request) {
        return stub->AsyncCloneRules(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetGlobalOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteGlobalOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->CloneRules(request), polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestConnectionImpl::DeleteNetworkFirewallPolicies(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        DeleteNetworkFirewallPoliciesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 DeleteNetworkFirewallPoliciesRequest const& request) {
        return stub->AsyncDeleteNetworkFirewallPolicies(cq, std::move(context),
                                                        request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetGlobalOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteGlobalOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteNetworkFirewallPolicies(request),
      polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
NetworkFirewallPoliciesRestConnectionImpl::GetNetworkFirewallPolicies(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetNetworkFirewallPoliciesRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetNetworkFirewallPolicies(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 GetNetworkFirewallPoliciesRequest const& request) {
        return stub_->GetNetworkFirewallPolicies(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
NetworkFirewallPoliciesRestConnectionImpl::GetAssociation(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetAssociationRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetAssociation(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 GetAssociationRequest const& request) {
        return stub_->GetAssociation(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NetworkFirewallPoliciesRestConnectionImpl::GetIamPolicy(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetIamPolicyRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
NetworkFirewallPoliciesRestConnectionImpl::GetRule(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        GetRuleRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->GetRule(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 GetRuleRequest const& request) {
        return stub_->GetRule(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestConnectionImpl::InsertNetworkFirewallPolicies(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        InsertNetworkFirewallPoliciesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 InsertNetworkFirewallPoliciesRequest const& request) {
        return stub->AsyncInsertNetworkFirewallPolicies(cq, std::move(context),
                                                        request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetGlobalOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteGlobalOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->InsertNetworkFirewallPolicies(request),
      polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>
NetworkFirewallPoliciesRestConnectionImpl::ListNetworkFirewallPolicies(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        ListNetworkFirewallPoliciesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<compute_network_firewall_policies_v1::
                                   NetworkFirewallPoliciesRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListNetworkFirewallPolicies(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::cpp::compute::network_firewall_policies::
                          v1::ListNetworkFirewallPoliciesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::network_firewall_policies::v1::
                       ListNetworkFirewallPoliciesRequest const& request) {
              return stub->ListNetworkFirewallPolicies(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::FirewallPolicyList r) {
        std::vector<google::cloud::cpp::compute::v1::FirewallPolicy> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestConnectionImpl::PatchNetworkFirewallPolicies(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        PatchNetworkFirewallPoliciesRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 PatchNetworkFirewallPoliciesRequest const& request) {
        return stub->AsyncPatchNetworkFirewallPolicies(cq, std::move(context),
                                                       request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetGlobalOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteGlobalOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->PatchNetworkFirewallPolicies(request),
      polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestConnectionImpl::PatchRule(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        PatchRuleRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 PatchRuleRequest const& request) {
        return stub->AsyncPatchRule(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetGlobalOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteGlobalOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->PatchRule(request), polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestConnectionImpl::RemoveAssociation(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        RemoveAssociationRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 RemoveAssociationRequest const& request) {
        return stub->AsyncRemoveAssociation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetGlobalOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteGlobalOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->RemoveAssociation(request), polling_policy(),
      __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkFirewallPoliciesRestConnectionImpl::RemoveRule(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        RemoveRuleRequest const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 RemoveRuleRequest const& request) {
        return stub->AsyncRemoveRule(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetGlobalOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteGlobalOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(), backoff_policy(),
      idempotency_policy()->RemoveRule(request), polling_policy(), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteGlobalOperationsRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NetworkFirewallPoliciesRestConnectionImpl::SetIamPolicy(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        SetIamPolicyRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->SetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NetworkFirewallPoliciesRestConnectionImpl::TestIamPermissions(
    google::cloud::cpp::compute::network_firewall_policies::v1::
        TestIamPermissionsRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->TestIamPermissions(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::network_firewall_policies::v1::
                 TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(rest_context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_firewall_policies_v1_internal
}  // namespace cloud
}  // namespace google
