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
// source: google/cloud/sql/v1/cloud_sql_connect.proto

#include "google/cloud/sql/v1/internal/sql_connect_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SqlConnectServiceTracingConnection::SqlConnectServiceTracingConnection(
    std::shared_ptr<sql_v1::SqlConnectServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::sql::v1::ConnectSettings>
SqlConnectServiceTracingConnection::GetConnectSettings(
    google::cloud::sql::v1::GetConnectSettingsRequest const& request) {
  auto span = internal::MakeSpan(
      "sql_v1::SqlConnectServiceConnection::GetConnectSettings");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetConnectSettings(request));
}

StatusOr<google::cloud::sql::v1::GenerateEphemeralCertResponse>
SqlConnectServiceTracingConnection::GenerateEphemeralCert(
    google::cloud::sql::v1::GenerateEphemeralCertRequest const& request) {
  auto span = internal::MakeSpan(
      "sql_v1::SqlConnectServiceConnection::GenerateEphemeralCert");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateEphemeralCert(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<sql_v1::SqlConnectServiceConnection>
MakeSqlConnectServiceTracingConnection(
    std::shared_ptr<sql_v1::SqlConnectServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<SqlConnectServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
