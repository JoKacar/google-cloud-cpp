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
// source: google/cloud/billing/budgets/v1/budget_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_BUDGETS_V1_BUDGET_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_BUDGETS_V1_BUDGET_CONNECTION_H

#include "google/cloud/billing/budgets/v1/budget_connection_idempotency_policy.h"
#include "google/cloud/billing/budgets/v1/internal/budget_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/billing/budgets/v1/budget_service.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace billing_budgets_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using BudgetServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        billing_budgets_v1_internal::BudgetServiceRetryTraits>;

using BudgetServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        billing_budgets_v1_internal::BudgetServiceRetryTraits>;

using BudgetServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        billing_budgets_v1_internal::BudgetServiceRetryTraits>;

/**
 * The `BudgetServiceConnection` object for `BudgetServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `BudgetServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `BudgetServiceClient`.
 *
 * To create a concrete instance, see `MakeBudgetServiceConnection()`.
 *
 * For mocking, see `billing_budgets_v1_mocks::MockBudgetServiceConnection`.
 */
class BudgetServiceConnection {
 public:
  virtual ~BudgetServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::billing::budgets::v1::Budget> CreateBudget(
      google::cloud::billing::budgets::v1::CreateBudgetRequest const& request);

  virtual StatusOr<google::cloud::billing::budgets::v1::Budget> UpdateBudget(
      google::cloud::billing::budgets::v1::UpdateBudgetRequest const& request);

  virtual StatusOr<google::cloud::billing::budgets::v1::Budget> GetBudget(
      google::cloud::billing::budgets::v1::GetBudgetRequest const& request);

  virtual StreamRange<google::cloud::billing::budgets::v1::Budget> ListBudgets(
      google::cloud::billing::budgets::v1::ListBudgetsRequest request);

  virtual Status DeleteBudget(
      google::cloud::billing::budgets::v1::DeleteBudgetRequest const& request);
};

/**
 * A factory function to construct an object of type `BudgetServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of BudgetServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `BudgetServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::billing_budgets_v1::BudgetServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `BudgetServiceConnection` created by
 * this function.
 */
std::shared_ptr<BudgetServiceConnection> MakeBudgetServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_budgets_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_BUDGETS_V1_BUDGET_CONNECTION_H
