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
// source: google/cloud/sql/v1/cloud_sql_ssl_certs.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_SSL_CERTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_SSL_CERTS_CONNECTION_H

#include "google/cloud/sql/v1/internal/sql_ssl_certs_retry_traits.h"
#include "google/cloud/sql/v1/sql_ssl_certs_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/sql/v1/cloud_sql_ssl_certs.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace sql_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using SqlSslCertsServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        sql_v1_internal::SqlSslCertsServiceRetryTraits>;

using SqlSslCertsServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        sql_v1_internal::SqlSslCertsServiceRetryTraits>;

using SqlSslCertsServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        sql_v1_internal::SqlSslCertsServiceRetryTraits>;

/**
 * The `SqlSslCertsServiceConnection` object for `SqlSslCertsServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `SqlSslCertsServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `SqlSslCertsServiceClient`.
 *
 * To create a concrete instance, see `MakeSqlSslCertsServiceConnection()`.
 *
 * For mocking, see `sql_v1_mocks::MockSqlSslCertsServiceConnection`.
 */
class SqlSslCertsServiceConnection {
 public:
  virtual ~SqlSslCertsServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::sql::v1::Operation> Delete(
      google::cloud::sql::v1::SqlSslCertsDeleteRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::SslCert> Get(
      google::cloud::sql::v1::SqlSslCertsGetRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::SslCertsInsertResponse> Insert(
      google::cloud::sql::v1::SqlSslCertsInsertRequest const& request);

  virtual StatusOr<google::cloud::sql::v1::SslCertsListResponse> List(
      google::cloud::sql::v1::SqlSslCertsListRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_SSL_CERTS_CONNECTION_H
