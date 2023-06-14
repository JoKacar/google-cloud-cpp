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
// source: google/cloud/sql/v1/cloud_sql_users.proto

#include "google/cloud/sql/v1/internal/sql_users_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SqlUsersServiceRestLogging::SqlUsersServiceRestLogging(
    std::shared_ptr<SqlUsersServiceRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::sql::v1::Operation> SqlUsersServiceRestLogging::Delete(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlUsersDeleteRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlUsersDeleteRequest const& request) {
        return child_->Delete(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation> SqlUsersServiceRestLogging::Insert(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlUsersInsertRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlUsersInsertRequest const& request) {
        return child_->Insert(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::UsersListResponse>
SqlUsersServiceRestLogging::List(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlUsersListRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlUsersListRequest const& request) {
        return child_->List(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::sql::v1::Operation> SqlUsersServiceRestLogging::Update(
    rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::SqlUsersUpdateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::sql::v1::SqlUsersUpdateRequest const& request) {
        return child_->Update(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
