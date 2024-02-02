// Copyright 2024 Google LLC
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
// source: google/cloud/bigquery/jobs/v2/jobs.proto

#include "google/cloud/bigquery/jobs/v2/internal/jobs_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_jobs_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

JobsRestMetadata::JobsRestMetadata(std::shared_ptr<JobsRestStub> child,
                                   std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::cpp::bigquery::v2::JobCancelResponse>
JobsRestMetadata::Cancel(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::bigquery::jobs::v2::CancelRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->Cancel(rest_context, options, request);
}

Status JobsRestMetadata::DeleteJob(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::bigquery::jobs::v2::DeleteJobRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->DeleteJob(rest_context, options, request);
}

StatusOr<google::cloud::cpp::bigquery::v2::Job> JobsRestMetadata::GetJob(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::bigquery::jobs::v2::GetJobRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetJob(rest_context, options, request);
}

StatusOr<google::cloud::cpp::bigquery::v2::GetQueryResultsResponse>
JobsRestMetadata::GetQueryResults(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::bigquery::jobs::v2::GetQueryResultsRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetQueryResults(rest_context, options, request);
}

StatusOr<google::cloud::cpp::bigquery::v2::Job> JobsRestMetadata::InsertJob(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::bigquery::jobs::v2::InsertJobRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->InsertJob(rest_context, options, request);
}

StatusOr<google::cloud::cpp::bigquery::v2::JobList> JobsRestMetadata::ListJobs(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::bigquery::jobs::v2::ListJobsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListJobs(rest_context, options, request);
}

StatusOr<google::cloud::cpp::bigquery::v2::QueryResponse>
JobsRestMetadata::Query(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::bigquery::jobs::v2::QueryRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->Query(rest_context, options, request);
}

void JobsRestMetadata::SetMetadata(rest_internal::RestContext& rest_context,
                                   Options const& options,
                                   std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
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
}  // namespace bigquery_jobs_v2_internal
}  // namespace cloud
}  // namespace google
