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
// source: google/cloud/billing/v1/cloud_billing.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_V1_INTERNAL_CLOUD_BILLING_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_V1_INTERNAL_CLOUD_BILLING_CONNECTION_IMPL_H

#include "google/cloud/billing/v1/cloud_billing_connection.h"
#include "google/cloud/billing/v1/cloud_billing_connection_idempotency_policy.h"
#include "google/cloud/billing/v1/cloud_billing_options.h"
#include "google/cloud/billing/v1/internal/cloud_billing_retry_traits.h"
#include "google/cloud/billing/v1/internal/cloud_billing_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace billing_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudBillingConnectionImpl : public billing_v1::CloudBillingConnection {
 public:
  ~CloudBillingConnectionImpl() override = default;

  CloudBillingConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<billing_v1_internal::CloudBillingStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::billing::v1::BillingAccount> GetBillingAccount(
      google::cloud::billing::v1::GetBillingAccountRequest const& request)
      override;

  StreamRange<google::cloud::billing::v1::BillingAccount> ListBillingAccounts(
      google::cloud::billing::v1::ListBillingAccountsRequest request) override;

  StatusOr<google::cloud::billing::v1::BillingAccount> UpdateBillingAccount(
      google::cloud::billing::v1::UpdateBillingAccountRequest const& request)
      override;

  StatusOr<google::cloud::billing::v1::BillingAccount> CreateBillingAccount(
      google::cloud::billing::v1::CreateBillingAccountRequest const& request)
      override;

  StreamRange<google::cloud::billing::v1::ProjectBillingInfo>
  ListProjectBillingInfo(
      google::cloud::billing::v1::ListProjectBillingInfoRequest request)
      override;

  StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
  GetProjectBillingInfo(
      google::cloud::billing::v1::GetProjectBillingInfoRequest const& request)
      override;

  StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
  UpdateProjectBillingInfo(
      google::cloud::billing::v1::UpdateProjectBillingInfoRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::unique_ptr<billing_v1::CloudBillingRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<billing_v1::CloudBillingRetryPolicyOption>()) {
      return options.get<billing_v1::CloudBillingRetryPolicyOption>()->clone();
    }
    return options_.get<billing_v1::CloudBillingRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<billing_v1::CloudBillingBackoffPolicyOption>()) {
      return options.get<billing_v1::CloudBillingBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<billing_v1::CloudBillingBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<billing_v1::CloudBillingConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<billing_v1::CloudBillingConnectionIdempotencyPolicyOption>()) {
      return options
          .get<billing_v1::CloudBillingConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<billing_v1::CloudBillingConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<billing_v1_internal::CloudBillingStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_V1_INTERNAL_CLOUD_BILLING_CONNECTION_IMPL_H
