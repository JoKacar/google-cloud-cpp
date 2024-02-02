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
// source: google/cloud/bigquery/routines/v2/routines.proto

#include "google/cloud/bigquery/routines/v2/internal/routines_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_routines_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RoutinesRestLogging::RoutinesRestLogging(
    std::shared_ptr<RoutinesRestStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

Status RoutinesRestLogging::DeleteRoutine(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::bigquery::routines::v2::DeleteRoutineRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::bigquery::routines::v2::
                 DeleteRoutineRequest const& request) {
        return child_->DeleteRoutine(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::bigquery::v2::Routine>
RoutinesRestLogging::GetRoutine(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::bigquery::routines::v2::GetRoutineRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context, Options const& options,
          google::cloud::cpp::bigquery::routines::v2::GetRoutineRequest const&
              request) {
        return child_->GetRoutine(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::bigquery::v2::Routine>
RoutinesRestLogging::InsertRoutine(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::bigquery::routines::v2::InsertRoutineRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::bigquery::routines::v2::
                 InsertRoutineRequest const& request) {
        return child_->InsertRoutine(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::bigquery::v2::ListRoutinesResponse>
RoutinesRestLogging::ListRoutines(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::bigquery::routines::v2::ListRoutinesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context, Options const& options,
          google::cloud::cpp::bigquery::routines::v2::ListRoutinesRequest const&
              request) {
        return child_->ListRoutines(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::bigquery::v2::Routine>
RoutinesRestLogging::UpdateRoutine(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::bigquery::routines::v2::UpdateRoutineRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::bigquery::routines::v2::
                 UpdateRoutineRequest const& request) {
        return child_->UpdateRoutine(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_routines_v2_internal
}  // namespace cloud
}  // namespace google
