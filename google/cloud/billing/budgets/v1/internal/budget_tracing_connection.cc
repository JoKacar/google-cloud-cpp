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

#include "google/cloud/billing/budgets/v1/internal/budget_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace billing_budgets_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BudgetServiceTracingConnection::BudgetServiceTracingConnection(
    std::shared_ptr<billing_budgets_v1::BudgetServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::billing::budgets::v1::Budget>
BudgetServiceTracingConnection::CreateBudget(
    google::cloud::billing::budgets::v1::CreateBudgetRequest const& request) {
  auto span = internal::MakeSpan(
      "billing_budgets_v1::BudgetServiceConnection::CreateBudget");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateBudget(request));
}

StatusOr<google::cloud::billing::budgets::v1::Budget>
BudgetServiceTracingConnection::UpdateBudget(
    google::cloud::billing::budgets::v1::UpdateBudgetRequest const& request) {
  auto span = internal::MakeSpan(
      "billing_budgets_v1::BudgetServiceConnection::UpdateBudget");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateBudget(request));
}

StatusOr<google::cloud::billing::budgets::v1::Budget>
BudgetServiceTracingConnection::GetBudget(
    google::cloud::billing::budgets::v1::GetBudgetRequest const& request) {
  auto span = internal::MakeSpan(
      "billing_budgets_v1::BudgetServiceConnection::GetBudget");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetBudget(request));
}

StreamRange<google::cloud::billing::budgets::v1::Budget>
BudgetServiceTracingConnection::ListBudgets(
    google::cloud::billing::budgets::v1::ListBudgetsRequest request) {
  auto span = internal::MakeSpan(
      "billing_budgets_v1::BudgetServiceConnection::ListBudgets");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListBudgets(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::billing::budgets::v1::Budget>(std::move(span),
                                                   std::move(sr));
}

Status BudgetServiceTracingConnection::DeleteBudget(
    google::cloud::billing::budgets::v1::DeleteBudgetRequest const& request) {
  auto span = internal::MakeSpan(
      "billing_budgets_v1::BudgetServiceConnection::DeleteBudget");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteBudget(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<billing_budgets_v1::BudgetServiceConnection>
MakeBudgetServiceTracingConnection(
    std::shared_ptr<billing_budgets_v1::BudgetServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<BudgetServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_budgets_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
