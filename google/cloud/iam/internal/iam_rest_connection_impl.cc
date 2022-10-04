// Copyright 2022 Google LLC
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
// source: google/iam/admin/v1/iam.proto

#include "google/cloud/iam/internal/iam_rest_connection_impl.h"
#include "google/cloud/iam/internal/iam_option_defaults.h"
#include "google/cloud/iam/internal/iam_rest_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam {
std::shared_ptr<IAMConnection> MakeIAMConnectionRest(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, RestOptionList,
                                 UnifiedCredentialsOptionList,
                                 IAMPolicyOptionList>(options, __func__);
  options = iam_internal::IAMDefaultOptions(std::move(options));
  auto rest_stub = iam_internal::CreateDefaultIAMRestStub(options);
  return std::make_shared<iam_internal::IAMRestConnectionImpl>(
      std::move(rest_stub), std::move(options));
}

}  // namespace iam
namespace iam_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IAMRestConnectionImpl::IAMRestConnectionImpl(
    std::shared_ptr<iam_internal::IAMRestStub> stub, Options options)
    : stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      IAMConnection::options())) {}

StreamRange<google::iam::admin::v1::ServiceAccount>
IAMRestConnectionImpl::ListServiceAccounts(
    google::iam::admin::v1::ListServiceAccountsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<iam::IAMRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListServiceAccounts(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::iam::admin::v1::ServiceAccount>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::iam::admin::v1::ListServiceAccountsRequest const& r) {
        return google::cloud::internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::iam::admin::v1::ListServiceAccountsRequest const&
                       request) {
              return stub->ListServiceAccounts(rest_context, request);
            },
            r, function_name);
      },
      [](google::iam::admin::v1::ListServiceAccountsResponse r) {
        std::vector<google::iam::admin::v1::ServiceAccount> result(
            r.accounts().size());
        auto& messages = *r.mutable_accounts();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMRestConnectionImpl::GetServiceAccount(
    google::iam::admin::v1::GetServiceAccountRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetServiceAccount(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::admin::v1::GetServiceAccountRequest const& request) {
        return stub_->GetServiceAccount(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMRestConnectionImpl::CreateServiceAccount(
    google::iam::admin::v1::CreateServiceAccountRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateServiceAccount(request),
      [this](
          rest_internal::RestContext& rest_context,
          google::iam::admin::v1::CreateServiceAccountRequest const& request) {
        return stub_->CreateServiceAccount(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMRestConnectionImpl::PatchServiceAccount(
    google::iam::admin::v1::PatchServiceAccountRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->PatchServiceAccount(request),
      [this](
          rest_internal::RestContext& rest_context,
          google::iam::admin::v1::PatchServiceAccountRequest const& request) {
        return stub_->PatchServiceAccount(rest_context, request);
      },
      request, __func__);
}

Status IAMRestConnectionImpl::DeleteServiceAccount(
    google::iam::admin::v1::DeleteServiceAccountRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteServiceAccount(request),
      [this](
          rest_internal::RestContext& rest_context,
          google::iam::admin::v1::DeleteServiceAccountRequest const& request) {
        return stub_->DeleteServiceAccount(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
IAMRestConnectionImpl::UndeleteServiceAccount(
    google::iam::admin::v1::UndeleteServiceAccountRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UndeleteServiceAccount(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::admin::v1::UndeleteServiceAccountRequest const&
                 request) {
        return stub_->UndeleteServiceAccount(rest_context, request);
      },
      request, __func__);
}

Status IAMRestConnectionImpl::EnableServiceAccount(
    google::iam::admin::v1::EnableServiceAccountRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->EnableServiceAccount(request),
      [this](
          rest_internal::RestContext& rest_context,
          google::iam::admin::v1::EnableServiceAccountRequest const& request) {
        return stub_->EnableServiceAccount(rest_context, request);
      },
      request, __func__);
}

Status IAMRestConnectionImpl::DisableServiceAccount(
    google::iam::admin::v1::DisableServiceAccountRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DisableServiceAccount(request),
      [this](
          rest_internal::RestContext& rest_context,
          google::iam::admin::v1::DisableServiceAccountRequest const& request) {
        return stub_->DisableServiceAccount(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
IAMRestConnectionImpl::ListServiceAccountKeys(
    google::iam::admin::v1::ListServiceAccountKeysRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->ListServiceAccountKeys(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::admin::v1::ListServiceAccountKeysRequest const&
                 request) {
        return stub_->ListServiceAccountKeys(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMRestConnectionImpl::GetServiceAccountKey(
    google::iam::admin::v1::GetServiceAccountKeyRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetServiceAccountKey(request),
      [this](
          rest_internal::RestContext& rest_context,
          google::iam::admin::v1::GetServiceAccountKeyRequest const& request) {
        return stub_->GetServiceAccountKey(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMRestConnectionImpl::CreateServiceAccountKey(
    google::iam::admin::v1::CreateServiceAccountKeyRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateServiceAccountKey(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::admin::v1::CreateServiceAccountKeyRequest const&
                 request) {
        return stub_->CreateServiceAccountKey(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMRestConnectionImpl::UploadServiceAccountKey(
    google::iam::admin::v1::UploadServiceAccountKeyRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UploadServiceAccountKey(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::admin::v1::UploadServiceAccountKeyRequest const&
                 request) {
        return stub_->UploadServiceAccountKey(rest_context, request);
      },
      request, __func__);
}

Status IAMRestConnectionImpl::DeleteServiceAccountKey(
    google::iam::admin::v1::DeleteServiceAccountKeyRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteServiceAccountKey(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::admin::v1::DeleteServiceAccountKeyRequest const&
                 request) {
        return stub_->DeleteServiceAccountKey(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy> IAMRestConnectionImpl::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy> IAMRestConnectionImpl::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->SetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IAMRestConnectionImpl::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->TestIamPermissions(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(rest_context, request);
      },
      request, __func__);
}

StreamRange<google::iam::admin::v1::Role>
IAMRestConnectionImpl::QueryGrantableRoles(
    google::iam::admin::v1::QueryGrantableRolesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<iam::IAMRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->QueryGrantableRoles(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::iam::admin::v1::Role>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::iam::admin::v1::QueryGrantableRolesRequest const& r) {
        return google::cloud::internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::iam::admin::v1::QueryGrantableRolesRequest const&
                       request) {
              return stub->QueryGrantableRoles(rest_context, request);
            },
            r, function_name);
      },
      [](google::iam::admin::v1::QueryGrantableRolesResponse r) {
        std::vector<google::iam::admin::v1::Role> result(r.roles().size());
        auto& messages = *r.mutable_roles();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::iam::admin::v1::Role> IAMRestConnectionImpl::ListRoles(
    google::iam::admin::v1::ListRolesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<iam::IAMRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListRoles(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::iam::admin::v1::Role>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::iam::admin::v1::ListRolesRequest const& r) {
        return google::cloud::internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::iam::admin::v1::ListRolesRequest const& request) {
              return stub->ListRoles(rest_context, request);
            },
            r, function_name);
      },
      [](google::iam::admin::v1::ListRolesResponse r) {
        std::vector<google::iam::admin::v1::Role> result(r.roles().size());
        auto& messages = *r.mutable_roles();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::iam::admin::v1::Role> IAMRestConnectionImpl::GetRole(
    google::iam::admin::v1::GetRoleRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->GetRole(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::admin::v1::GetRoleRequest const& request) {
        return stub_->GetRole(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::Role> IAMRestConnectionImpl::CreateRole(
    google::iam::admin::v1::CreateRoleRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateRole(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::admin::v1::CreateRoleRequest const& request) {
        return stub_->CreateRole(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::Role> IAMRestConnectionImpl::UpdateRole(
    google::iam::admin::v1::UpdateRoleRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateRole(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::admin::v1::UpdateRoleRequest const& request) {
        return stub_->UpdateRole(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::Role> IAMRestConnectionImpl::DeleteRole(
    google::iam::admin::v1::DeleteRoleRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteRole(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::admin::v1::DeleteRoleRequest const& request) {
        return stub_->DeleteRole(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::Role> IAMRestConnectionImpl::UndeleteRole(
    google::iam::admin::v1::UndeleteRoleRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UndeleteRole(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::admin::v1::UndeleteRoleRequest const& request) {
        return stub_->UndeleteRole(rest_context, request);
      },
      request, __func__);
}

StreamRange<google::iam::admin::v1::Permission>
IAMRestConnectionImpl::QueryTestablePermissions(
    google::iam::admin::v1::QueryTestablePermissionsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<iam::IAMRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->QueryTestablePermissions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::iam::admin::v1::Permission>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::iam::admin::v1::QueryTestablePermissionsRequest const& r) {
        return google::cloud::internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                rest_internal::RestContext& rest_context,
                google::iam::admin::v1::QueryTestablePermissionsRequest const&
                    request) {
              return stub->QueryTestablePermissions(rest_context, request);
            },
            r, function_name);
      },
      [](google::iam::admin::v1::QueryTestablePermissionsResponse r) {
        std::vector<google::iam::admin::v1::Permission> result(
            r.permissions().size());
        auto& messages = *r.mutable_permissions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
IAMRestConnectionImpl::QueryAuditableServices(
    google::iam::admin::v1::QueryAuditableServicesRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->QueryAuditableServices(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::admin::v1::QueryAuditableServicesRequest const&
                 request) {
        return stub_->QueryAuditableServices(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::admin::v1::LintPolicyResponse>
IAMRestConnectionImpl::LintPolicy(
    google::iam::admin::v1::LintPolicyRequest const& request) {
  return google::cloud::internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->LintPolicy(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::admin::v1::LintPolicyRequest const& request) {
        return stub_->LintPolicy(rest_context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google
