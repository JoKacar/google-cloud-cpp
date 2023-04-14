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
// source: google/cloud/sql/v1/cloud_sql_databases.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_DATABASES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_DATABASES_CLIENT_H

#include "google/cloud/sql/v1/sql_databases_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service to manage databases.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class SqlDatabasesServiceClient {
 public:
  explicit SqlDatabasesServiceClient(
      ExperimentalTag,
      std::shared_ptr<SqlDatabasesServiceConnection> connection,
      Options opts = {});
  ~SqlDatabasesServiceClient();

  ///@{
  /// @name Copy and move support
  SqlDatabasesServiceClient(SqlDatabasesServiceClient const&) = default;
  SqlDatabasesServiceClient& operator=(SqlDatabasesServiceClient const&) =
      default;
  SqlDatabasesServiceClient(SqlDatabasesServiceClient&&) = default;
  SqlDatabasesServiceClient& operator=(SqlDatabasesServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(SqlDatabasesServiceClient const& a,
                         SqlDatabasesServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SqlDatabasesServiceClient const& a,
                         SqlDatabasesServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Deletes a database from a Cloud SQL instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlDatabasesDeleteRequest,google/cloud/sql/v1/cloud_sql_databases.proto#L88}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlDatabasesDeleteRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_databases.proto#L88}
  ///
  StatusOr<google::cloud::sql::v1::Operation> Delete(
      google::cloud::sql::v1::SqlDatabasesDeleteRequest const& request,
      Options opts = {});

  ///
  /// Retrieves a resource containing information about a database inside a
  /// Cloud SQL instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlDatabasesGetRequest,google/cloud/sql/v1/cloud_sql_databases.proto#L100}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Database,google/cloud/sql/v1/cloud_sql_resources.proto#L132}
  ///
  /// [google.cloud.sql.v1.Database]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L132}
  /// [google.cloud.sql.v1.SqlDatabasesGetRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_databases.proto#L100}
  ///
  StatusOr<google::cloud::sql::v1::Database> Get(
      google::cloud::sql::v1::SqlDatabasesGetRequest const& request,
      Options opts = {});

  ///
  /// Inserts a resource containing information about a database inside a Cloud
  /// SQL instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlDatabasesInsertRequest,google/cloud/sql/v1/cloud_sql_databases.proto#L112}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlDatabasesInsertRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_databases.proto#L112}
  ///
  StatusOr<google::cloud::sql::v1::Operation> Insert(
      google::cloud::sql::v1::SqlDatabasesInsertRequest const& request,
      Options opts = {});

  ///
  /// Lists databases in the specified Cloud SQL instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlDatabasesListRequest,google/cloud/sql/v1/cloud_sql_databases.proto#L123}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::DatabasesListResponse,google/cloud/sql/v1/cloud_sql_databases.proto#L146}
  ///
  /// [google.cloud.sql.v1.DatabasesListResponse]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_databases.proto#L146}
  /// [google.cloud.sql.v1.SqlDatabasesListRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_databases.proto#L123}
  ///
  StatusOr<google::cloud::sql::v1::DatabasesListResponse> List(
      google::cloud::sql::v1::SqlDatabasesListRequest const& request,
      Options opts = {});

  ///
  /// Partially updates a resource containing information about a database
  /// inside a Cloud SQL instance. This method supports patch semantics.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlDatabasesUpdateRequest,google/cloud/sql/v1/cloud_sql_databases.proto#L132}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlDatabasesUpdateRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_databases.proto#L132}
  ///
  StatusOr<google::cloud::sql::v1::Operation> Patch(
      google::cloud::sql::v1::SqlDatabasesUpdateRequest const& request,
      Options opts = {});

  ///
  /// Updates a resource containing information about a database inside a Cloud
  /// SQL instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlDatabasesUpdateRequest,google/cloud/sql/v1/cloud_sql_databases.proto#L132}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlDatabasesUpdateRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_databases.proto#L132}
  ///
  StatusOr<google::cloud::sql::v1::Operation> Update(
      google::cloud::sql::v1::SqlDatabasesUpdateRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<SqlDatabasesServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_DATABASES_CLIENT_H
