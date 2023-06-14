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
// source: google/cloud/compute/instance_templates/v1/instance_templates.proto

#include "google/cloud/compute/instance_templates/v1/internal/instance_templates_rest_connection_impl.h"
#include "google/cloud/compute/instance_templates/v1/internal/instance_templates_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_instance_templates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceTemplatesRestConnectionImpl::InstanceTemplatesRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<
        compute_instance_templates_v1_internal::InstanceTemplatesRestStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), InstanceTemplatesConnection::options())) {}

StatusOr<google::cloud::cpp::compute::v1::InstanceTemplateAggregatedList>
InstanceTemplatesRestConnectionImpl::AggregatedListInstanceTemplates(
    google::cloud::cpp::compute::instance_templates::v1::
        AggregatedListInstanceTemplatesRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->AggregatedListInstanceTemplates(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_templates::v1::
                 AggregatedListInstanceTemplatesRequest const& request) {
        return stub_->AggregatedListInstanceTemplates(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceTemplatesRestConnectionImpl::DeleteInstanceTemplates(
    google::cloud::cpp::compute::instance_templates::v1::
        DeleteInstanceTemplatesRequest const& request) {
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
             google::cloud::cpp::compute::instance_templates::v1::
                 DeleteInstanceTemplatesRequest const& request) {
        return stub->AsyncDeleteInstanceTemplates(cq, std::move(context),
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
      idempotency_policy()->DeleteInstanceTemplates(request), polling_policy(),
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

StatusOr<google::cloud::cpp::compute::v1::InstanceTemplate>
InstanceTemplatesRestConnectionImpl::GetInstanceTemplates(
    google::cloud::cpp::compute::instance_templates::v1::
        GetInstanceTemplatesRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetInstanceTemplates(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_templates::v1::
                 GetInstanceTemplatesRequest const& request) {
        return stub_->GetInstanceTemplates(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstanceTemplatesRestConnectionImpl::GetIamPolicy(
    google::cloud::cpp::compute::instance_templates::v1::
        GetIamPolicyRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_templates::v1::
                 GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceTemplatesRestConnectionImpl::InsertInstanceTemplates(
    google::cloud::cpp::compute::instance_templates::v1::
        InsertInstanceTemplatesRequest const& request) {
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
             google::cloud::cpp::compute::instance_templates::v1::
                 InsertInstanceTemplatesRequest const& request) {
        return stub->AsyncInsertInstanceTemplates(cq, std::move(context),
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
      idempotency_policy()->InsertInstanceTemplates(request), polling_policy(),
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

StreamRange<google::cloud::cpp::compute::v1::InstanceTemplate>
InstanceTemplatesRestConnectionImpl::ListInstanceTemplates(
    google::cloud::cpp::compute::instance_templates::v1::
        ListInstanceTemplatesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<
      compute_instance_templates_v1::InstanceTemplatesRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListInstanceTemplates(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::InstanceTemplate>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::cpp::compute::instance_templates::v1::
                          ListInstanceTemplatesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::instance_templates::v1::
                       ListInstanceTemplatesRequest const& request) {
              return stub->ListInstanceTemplates(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::InstanceTemplateList r) {
        std::vector<google::cloud::cpp::compute::v1::InstanceTemplate> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstanceTemplatesRestConnectionImpl::SetIamPolicy(
    google::cloud::cpp::compute::instance_templates::v1::
        SetIamPolicyRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->SetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_templates::v1::
                 SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
InstanceTemplatesRestConnectionImpl::TestIamPermissions(
    google::cloud::cpp::compute::instance_templates::v1::
        TestIamPermissionsRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->TestIamPermissions(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::instance_templates::v1::
                 TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(rest_context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_templates_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
