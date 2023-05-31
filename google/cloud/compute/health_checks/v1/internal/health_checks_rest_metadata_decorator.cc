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
// source: google/cloud/compute/health_checks/v1/health_checks.proto


#include "google/cloud/compute/health_checks/v1/internal/health_checks_rest_metadata_decorator.h"
#include "absl/strings/str_format.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_health_checks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

HealthChecksRestMetadata::HealthChecksRestMetadata(
    std::shared_ptr<HealthChecksRestStub> child)
    : child_(std::move(child)),
      api_client_header_(google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::cpp::compute::v1::HealthChecksAggregatedList>
HealthChecksRestMetadata::AggregatedListHealthChecks(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::health_checks::v1::AggregatedListHealthChecksRequest const& request) {
  SetMetadata(rest_context);
  return child_->AggregatedListHealthChecks(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksRestMetadata::AsyncDeleteHealthChecks(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::health_checks::v1::DeleteHealthChecksRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteHealthChecks(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheck>
HealthChecksRestMetadata::GetHealthChecks(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::health_checks::v1::GetHealthChecksRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetHealthChecks(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksRestMetadata::AsyncInsertHealthChecks(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::health_checks::v1::InsertHealthChecksRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertHealthChecks(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheckList>
HealthChecksRestMetadata::ListHealthChecks(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::health_checks::v1::ListHealthChecksRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListHealthChecks(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksRestMetadata::AsyncPatchHealthChecks(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::health_checks::v1::PatchHealthChecksRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchHealthChecks(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksRestMetadata::AsyncUpdateHealthChecks(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::health_checks::v1::UpdateHealthChecksRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncUpdateHealthChecks(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::GetGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status>
HealthChecksRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::DeleteGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void HealthChecksRestMetadata::SetMetadata(
      rest_internal::RestContext& rest_context,
      std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader(
        "x-goog-user-project", options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader(
        "x-goog-quota-user", options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
        absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
        ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_health_checks_v1_internal
}  // namespace cloud
}  // namespace google
