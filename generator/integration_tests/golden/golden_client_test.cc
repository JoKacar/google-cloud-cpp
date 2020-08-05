// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "generator/integration_tests/golden/database_admin_client.gcpcxx.pb.h"
#include "google/cloud/internal/time_utils.h"
#include "google/cloud/testing_util/assert_ok.h"
#include "google/cloud/testing_util/is_proto_equal.h"
#include "google/cloud/testing_util/status_matchers.h"
#include <gmock/gmock.h>
#include <google/iam/v1/policy.pb.h>
#include <google/protobuf/util/field_mask_util.h>
#include <memory>

namespace google {
namespace cloud {
namespace golden {
inline namespace GOOGLE_CLOUD_CPP_NS {
namespace {

using ::google::cloud::testing_util::IsProtoEqual;
using ::google::cloud::testing_util::StatusIs;
// using ::protobuf::util::FieldMaskUtil::IsPathInFieldMask;
using ::testing::ElementsAre;
using ::testing::HasSubstr;

class MockDatabaseAdminConnection : public DatabaseAdminConnection {
public:
  ~MockDatabaseAdminConnection() = default;

  MOCK_METHOD(
      ListDatabasesRange, ListDatabases,
      (::google::test::admin::database::v1::ListDatabasesRequest request),
      (override));
  MOCK_METHOD(future<StatusOr<::google::test::admin::database::v1::Database>>,
              CreateDatabase,
              (::google::test::admin::database::v1::CreateDatabaseRequest const
                   &request),
              (override));
  MOCK_METHOD(
      StatusOr<::google::test::admin::database::v1::Database>, GetDatabase,
      (::google::test::admin::database::v1::GetDatabaseRequest const &request),
      (override));
  MOCK_METHOD(
      future<StatusOr<
          ::google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>,
      UpdateDatabaseDdl,
      (::google::test::admin::database::v1::UpdateDatabaseDdlRequest const
           &request),
      (override));
  MOCK_METHOD(
      Status, DropDatabase,
      (::google::test::admin::database::v1::DropDatabaseRequest const &request),
      (override));
  MOCK_METHOD(
      StatusOr<::google::test::admin::database::v1::GetDatabaseDdlResponse>,
      GetDatabaseDdl,
      (::google::test::admin::database::v1::GetDatabaseDdlRequest const
           &request),
      (override));
  MOCK_METHOD(StatusOr<::google::iam::v1::Policy>, SetIamPolicy,
              (::google::iam::v1::SetIamPolicyRequest const &request),
              (override));
  MOCK_METHOD(StatusOr<::google::iam::v1::Policy>, GetIamPolicy,
              (::google::iam::v1::GetIamPolicyRequest const &request),
              (override));
  MOCK_METHOD(StatusOr<::google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (::google::iam::v1::TestIamPermissionsRequest const &request),
              (override));
  MOCK_METHOD(
      future<StatusOr<::google::test::admin::database::v1::Backup>>,
      CreateBackup,
      (::google::test::admin::database::v1::CreateBackupRequest const &request),
      (override));
  MOCK_METHOD(
      StatusOr<::google::test::admin::database::v1::Backup>, GetBackup,
      (::google::test::admin::database::v1::GetBackupRequest const &request),
      (override));
  MOCK_METHOD(
      StatusOr<::google::test::admin::database::v1::Backup>, UpdateBackup,
      (::google::test::admin::database::v1::UpdateBackupRequest const &request),
      (override));
  MOCK_METHOD(
      Status, DeleteBackup,
      (::google::test::admin::database::v1::DeleteBackupRequest const &request),
      (override));
  MOCK_METHOD(ListBackupsRange, ListBackups,
              (::google::test::admin::database::v1::ListBackupsRequest request),
              (override));

  MOCK_METHOD(future<StatusOr<::google::test::admin::database::v1::Database>>,
              RestoreDatabase,
              (::google::test::admin::database::v1::RestoreDatabaseRequest const
                   &request),
              (override));
  MOCK_METHOD(
      ListDatabaseOperationsRange, ListDatabaseOperations,
      (::google::test::admin::database::v1::ListDatabaseOperationsRequest
           request),
      (override));
  MOCK_METHOD(ListBackupOperationsRange, ListBackupOperations,
              (::google::test::admin::database::v1::ListBackupOperationsRequest
                   request),
              (override));
};

TEST(GoldenClientTest, ListDatabases) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_instance(
      "/projects/test-project/instances/test-instance");
  EXPECT_CALL(*mock, ListDatabases)
      .WillOnce([expected_instance](::google::test::admin::database::v1::
                                        ListDatabasesRequest const &r) {
        EXPECT_EQ(expected_instance, r.parent());

        return ListDatabasesRange(
            ::google::test::admin::database::v1::ListDatabasesRequest{},
            [](::google::test::admin::database::v1::ListDatabasesRequest const
                   &) {
              return StatusOr<
                  ::google::test::admin::database::v1::ListDatabasesResponse>(
                  Status(StatusCode::kPermissionDenied, "uh-oh"));
            },
            [](::google::test::admin::database::v1::ListDatabasesResponse const
                   &) {
              return std::vector<
                  ::google::test::admin::database::v1::Database>{};
            });
      });

  DatabaseAdminClient client(mock);
  auto range = client.ListDatabases(expected_instance);
  auto begin = range.begin();
  ASSERT_NE(begin, range.end());
  EXPECT_THAT(*begin, StatusIs(StatusCode::kPermissionDenied));
}

TEST(GoldenClientTest, CreateDatabase) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_instance(
      "/projects/test-project/instances/test-instance");
  std::string expected_database(
      "/projects/test-project/instances/test-instance/databases/test-db");
  EXPECT_CALL(*mock, CreateDatabase)
      .WillOnce(
          [expected_instance](
              ::google::test::admin::database::v1::CreateDatabaseRequest const
                  &r) {
            EXPECT_EQ(expected_instance, r.parent());
            EXPECT_THAT(r.create_statement(),
                        HasSubstr("create database test-db"));
            ::google::test::admin::database::v1::Database database;
            database.set_name(r.parent() + "/databases/test-db");
            database.set_state(
                ::google::test::admin::database::v1::Database::CREATING);
            return make_ready_future(make_status_or(database));
          });
  DatabaseAdminClient client(std::move(mock));
  auto fut =
      client.CreateDatabase(expected_instance, "create database test-db");
  ASSERT_EQ(std::future_status::ready, fut.wait_for(std::chrono::seconds(0)));
  auto db = fut.get();
  EXPECT_STATUS_OK(db);
  EXPECT_EQ(expected_database, db->name());
  EXPECT_EQ(::google::test::admin::database::v1::Database::CREATING,
            db->state());
}

TEST(GoldenClientTest, GetDatabase) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_database(
      "/projects/test-project/instances/test-instance/databases/test-db");
  EXPECT_CALL(*mock, GetDatabase)
      .WillOnce(
          [expected_database](
              ::google::test::admin::database::v1::GetDatabaseRequest const
                  &request) {
            EXPECT_EQ(expected_database, request.name());
            ::google::test::admin::database::v1::Database response;
            response.set_name(request.name());
            return response;
          });

  DatabaseAdminClient client(std::move(mock));
  auto response = client.GetDatabase(expected_database);
  EXPECT_STATUS_OK(response);
  EXPECT_EQ(response->name(), expected_database);
}

TEST(GoldenClientTest, UpdateDatabase) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_database(
      "/projects/test-project/instances/test-instance/databases/test-db");
  EXPECT_CALL(*mock, UpdateDatabaseDdl)
      .WillOnce([expected_database](::google::test::admin::database::v1::
                                        UpdateDatabaseDdlRequest const &r) {
        EXPECT_EQ(expected_database, r.database());
        EXPECT_THAT(r.statements(), ElementsAre("-- test only: NOT SQL"));
        ::google::test::admin::database::v1::UpdateDatabaseDdlMetadata metadata;
        metadata.add_statements("-- test only: NOT SQL");
        return make_ready_future(make_status_or(metadata));
      });
  DatabaseAdminClient client(std::move(mock));
  auto fut =
      client.UpdateDatabaseDdl(expected_database, {"-- test only: NOT SQL"});
  ASSERT_EQ(std::future_status::ready, fut.wait_for(std::chrono::seconds(0)));
  auto db = fut.get();
  EXPECT_STATUS_OK(db);
  EXPECT_THAT(db->statements(), ElementsAre("-- test only: NOT SQL"));
}

TEST(GoldenClientTest, DropDatabase) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_database(
      "/projects/test-project/instances/test-instance/databases/test-db");
  EXPECT_CALL(*mock, DropDatabase)
      .WillOnce(
          [expected_database](
              ::google::test::admin::database::v1::DropDatabaseRequest const
                  &request) {
            EXPECT_EQ(expected_database, request.database());
            return Status();
          });
  DatabaseAdminClient client(std::move(mock));
  auto response = client.DropDatabase(expected_database);
  EXPECT_STATUS_OK(response);
}

TEST(GoldenClientTest, GetDatabaseDdl) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_database(
      "/projects/test-project/instances/test-instance/databases/test-db");
  EXPECT_CALL(*mock, GetDatabaseDdl)
      .WillOnce([expected_database](::google::test::admin::database::v1::
                                        GetDatabaseDdlRequest const &r) {
        EXPECT_EQ(expected_database, r.database());
        ::google::test::admin::database::v1::GetDatabaseDdlResponse response;
        response.add_statements("CREATE DATABASE test-db");
        return response;
      });
  DatabaseAdminClient client(std::move(mock));
  auto response = client.GetDatabaseDdl(expected_database);
  EXPECT_STATUS_OK(response);
  ASSERT_EQ(1, response->statements_size());
  ASSERT_EQ("CREATE DATABASE test-db", response->statements(0));
}

TEST(GoldenClientTest, SetIamPolicy) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_database(
      "/projects/test-project/instances/test-instance/databases/test-db");
  EXPECT_CALL(*mock, SetIamPolicy)
      .WillOnce(
          [expected_database](::google::iam::v1::SetIamPolicyRequest const &r) {
            EXPECT_EQ(expected_database, r.resource());
            return r.policy();
          });
  DatabaseAdminClient client(std::move(mock));
  auto response =
      client.SetIamPolicy(expected_database, google::iam::v1::Policy{});
  EXPECT_STATUS_OK(response);
}

TEST(GoldenClientTest, GetIamPolicy) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_database(
      "/projects/test-project/instances/test-instance/databases/test-db");
  std::string const expected_role = "roles/spanner.databaseReader";
  std::string const expected_member = "user:foobar@example.com";
  EXPECT_CALL(*mock, GetIamPolicy)
      .WillOnce([expected_database, expected_role, expected_member](
                    ::google::iam::v1::GetIamPolicyRequest const &r) {
        EXPECT_EQ(expected_database, r.resource());
        google::iam::v1::Policy response;
        auto &binding = *response.add_bindings();
        binding.set_role(expected_role);
        *binding.add_members() = expected_member;
        return response;
      });
  DatabaseAdminClient client(std::move(mock));
  auto response = client.GetIamPolicy(expected_database);
  EXPECT_STATUS_OK(response);
  ASSERT_EQ(1, response->bindings().size());
  ASSERT_EQ(expected_role, response->bindings().Get(0).role());
  ASSERT_EQ(1, response->bindings().Get(0).members().size());
  ASSERT_EQ(expected_member, response->bindings().Get(0).members().Get(0));
}

TEST(GoldenClientTest, TestIamPermissions) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_database(
      "/projects/test-project/instances/test-instance/databases/test-db");
  std::string expected_permission = "spanner.databases.read";
  EXPECT_CALL(*mock, TestIamPermissions)
      .WillOnce([expected_database, expected_permission](
                    ::google::iam::v1::TestIamPermissionsRequest const &r) {
        EXPECT_EQ(expected_database, r.resource());
        EXPECT_EQ(1, r.permissions().size());
        EXPECT_EQ(expected_permission, r.permissions().at(0));
        google::iam::v1::TestIamPermissionsResponse response;
        response.add_permissions(expected_permission);
        return response;
      });
  DatabaseAdminClient client(std::move(mock));
  auto response =
      client.TestIamPermissions(expected_database, {expected_permission});
  EXPECT_STATUS_OK(response);
  EXPECT_EQ(1, response->permissions_size());
  EXPECT_EQ(expected_permission, response->permissions(0));
}

TEST(GoldenClientTest, CreateBackup) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_instance(
      "/projects/test-project/instances/test-instance");
  std::string expected_database(
      "/projects/test-project/instances/test-instance/databases/test-database");
  std::string backup_id = "test-backup";
  std::string expected_backup_name =
      "/projects/test-project/instances/test-instance/backups/test-backup";
  std::chrono::system_clock::time_point expire_time =
      std::chrono::system_clock::now() + std::chrono::hours(7);
  EXPECT_CALL(*mock, CreateBackup)
      .WillOnce(
          [expected_database, expire_time, backup_id, expected_backup_name](
              ::google::test::admin::database::v1::CreateBackupRequest const
                  &r) {
            EXPECT_EQ(expected_database, r.backup().database());
            EXPECT_THAT(google::cloud::internal::ToProtoTimestamp(expire_time),
                        IsProtoEqual(r.backup().expire_time()));
            ::google::test::admin::database::v1::Backup backup;
            backup.set_name(expected_backup_name);
            backup.set_state(
                ::google::test::admin::database::v1::Backup::CREATING);
            return make_ready_future(make_status_or(backup));
          });
  DatabaseAdminClient client(std::move(mock));
  ::google::test::admin::database::v1::Backup backup;
  backup.set_database(expected_database);
  *backup.mutable_expire_time() =
      google::cloud::internal::ToProtoTimestamp(expire_time);
  auto fut = client.CreateBackup(expected_instance, backup, backup_id);
  ASSERT_EQ(std::future_status::ready, fut.wait_for(std::chrono::seconds(0)));
  auto response = fut.get();
  EXPECT_STATUS_OK(response);
  EXPECT_EQ(expected_backup_name, response->name());
  EXPECT_EQ(::google::test::admin::database::v1::Backup::CREATING,
            response->state());
}

TEST(GoldenClientTest, GetBackup) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_backup_name =
      "/projects/test-project/instances/test-instance/backups/test-backup";
  EXPECT_CALL(*mock, GetBackup)
      .WillOnce(
          [expected_backup_name](
              ::google::test::admin::database::v1::GetBackupRequest const &r) {
            EXPECT_EQ(expected_backup_name, r.name());
            ::google::test::admin::database::v1::Backup response;
            response.set_name(r.name());
            response.set_state(
                ::google::test::admin::database::v1::Backup::READY);
            return response;
          });
  DatabaseAdminClient client(std::move(mock));
  auto response = client.GetBackup(expected_backup_name);
  EXPECT_STATUS_OK(response);
  EXPECT_EQ(::google::test::admin::database::v1::Backup::READY,
            response->state());
  EXPECT_EQ(expected_backup_name, response->name());
}

TEST(GoldenClientTest, UpdateBackupExpireTime) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_backup_name =
      "/projects/test-project/instances/test-instance/backups/test-backup";
  std::chrono::system_clock::time_point expire_time =
      std::chrono::system_clock::now() + std::chrono::hours(7);
  auto proto_expire_time =
      google::cloud::internal::ToProtoTimestamp(expire_time);
  EXPECT_CALL(*mock, UpdateBackup)
      .WillOnce(
          [expected_backup_name, proto_expire_time](
              ::google::test::admin::database::v1::UpdateBackupRequest const
                  &r) {
            EXPECT_EQ(expected_backup_name, r.backup().name());
            EXPECT_THAT(proto_expire_time,
                        IsProtoEqual(r.backup().expire_time()));
            EXPECT_TRUE(
                ::google::protobuf::util::FieldMaskUtil::IsPathInFieldMask(
                    "expire_time", r.update_mask()));
            ::google::test::admin::database::v1::Backup response;
            response.set_name(r.backup().name());
            *response.mutable_expire_time() = r.backup().expire_time();
            response.set_state(
                ::google::test::admin::database::v1::Backup::READY);
            return response;
          });
  ::google::test::admin::database::v1::Backup backup;
  backup.set_name(expected_backup_name);
  *backup.mutable_expire_time() = proto_expire_time;
  google::protobuf::FieldMask update_mask;
  update_mask.add_paths("expire_time");
  DatabaseAdminClient client(std::move(mock));
  auto response = client.UpdateBackup(backup, update_mask);
  EXPECT_STATUS_OK(response);
  EXPECT_EQ(::google::test::admin::database::v1::Backup::READY,
            response->state());
  EXPECT_EQ(backup.name(), response->name());
  EXPECT_THAT(proto_expire_time, IsProtoEqual(response->expire_time()));
}

TEST(GoldenClientTest, DeleteBackup) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_backup_name =
      "/projects/test-project/instances/test-instance/backups/test-backup";
  EXPECT_CALL(*mock, DeleteBackup)
      .WillOnce(
          [expected_backup_name](
              ::google::test::admin::database::v1::DeleteBackupRequest const
                  &r) {
            EXPECT_EQ(expected_backup_name, r.name());
            return Status();
          });
  DatabaseAdminClient client(std::move(mock));
  auto response = client.DeleteBackup(expected_backup_name);
  EXPECT_STATUS_OK(response);
}

TEST(GoldenClientTest, ListBackups) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_instance(
      "/projects/test-project/instances/test-instance");
  EXPECT_CALL(*mock, ListBackups)
      .WillOnce([expected_instance](::google::test::admin::database::v1::
                                        ListBackupsRequest const &r) {
        EXPECT_EQ(expected_instance, r.parent());
        return ListBackupsRange(
            ::google::test::admin::database::v1::ListBackupsRequest{},
            [](::google::test::admin::database::v1::ListBackupsRequest const
                   &) {
              return StatusOr<
                  ::google::test::admin::database::v1::ListBackupsResponse>(
                  Status(StatusCode::kPermissionDenied, "uh-oh"));
            },
            [](::google::test::admin::database::v1::ListBackupsResponse const
                   &) {
              return std::vector<::google::test::admin::database::v1::Backup>{};
            });
      });
  DatabaseAdminClient client(mock);
  auto range = client.ListBackups(expected_instance);
  auto begin = range.begin();
  ASSERT_NE(begin, range.end());
  EXPECT_THAT(*begin, StatusIs(StatusCode::kPermissionDenied));
}

TEST(GoldenClientTest, RestoreDatabase) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_instance(
      "/projects/test-project/instances/test-instance");
  std::string expected_database(
      "/projects/test-project/instances/test-instance/databases/test-database");
  std::string expected_backup_name =
      "/projects/test-project/instances/test-instance/backups/test-backup";
  EXPECT_CALL(*mock, RestoreDatabase)
      .WillOnce([expected_backup_name, expected_database,
                 expected_instance](::google::test::admin::database::v1::
                                        RestoreDatabaseRequest const &r) {
        EXPECT_EQ(expected_instance, r.parent());
        EXPECT_EQ(expected_database, r.database_id());
        EXPECT_EQ(expected_backup_name, r.backup());
        ::google::test::admin::database::v1::Database database;
        database.set_name(expected_database);
        database.set_state(
            ::google::test::admin::database::v1::Database::READY_OPTIMIZING);
        return make_ready_future(make_status_or(database));
      });
  DatabaseAdminClient client(std::move(mock));
  auto fut = client.RestoreDatabase(expected_instance, expected_database,
                                    expected_backup_name);
  ASSERT_EQ(std::future_status::ready, fut.wait_for(std::chrono::seconds(0)));
  auto database = fut.get();
  EXPECT_STATUS_OK(database);
  EXPECT_EQ(expected_database, database->name());
  EXPECT_EQ(::google::test::admin::database::v1::Database::READY_OPTIMIZING,
            database->state());
}

TEST(GoldenClientTest, ListDatabaseOperations) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_instance(
      "/projects/test-project/instances/test-instance");
  EXPECT_CALL(*mock, ListDatabaseOperations)
      .WillOnce(
          [expected_instance](::google::test::admin::database::v1::
                                  ListDatabaseOperationsRequest const &r) {
            EXPECT_EQ(expected_instance, r.parent());
            return ListDatabaseOperationsRange(
                ::google::test::admin::database::v1::
                    ListDatabaseOperationsRequest{},
                [](::google::test::admin::database::v1::
                       ListDatabaseOperationsRequest const &) {
                  return StatusOr<::google::test::admin::database::v1::
                                      ListDatabaseOperationsResponse>(
                      Status(StatusCode::kPermissionDenied, "uh-oh"));
                },
                [](::google::test::admin::database::v1::
                       ListDatabaseOperationsResponse const &) {
                  return std::vector<google::longrunning::Operation>{};
                });
          });
  DatabaseAdminClient client(mock);
  auto range = client.ListDatabaseOperations(expected_instance);
  auto begin = range.begin();
  ASSERT_NE(begin, range.end());
  EXPECT_THAT(*begin, StatusIs(StatusCode::kPermissionDenied));
}

TEST(GoldenClientTest, ListBackupOperations) {
  auto mock = std::make_shared<MockDatabaseAdminConnection>();
  std::string expected_instance(
      "/projects/test-project/instances/test-instance");
  EXPECT_CALL(*mock, ListBackupOperations)
      .WillOnce([expected_instance](::google::test::admin::database::v1::
                                        ListBackupOperationsRequest const &r) {
        EXPECT_EQ(expected_instance, r.parent());
        return ListBackupOperationsRange(
            ::google::test::admin::database::v1::ListBackupOperationsRequest{},
            [](::google::test::admin::database::v1::
                   ListBackupOperationsRequest const &) {
              return StatusOr<::google::test::admin::database::v1::
                                  ListBackupOperationsResponse>(
                  Status(StatusCode::kPermissionDenied, "uh-oh"));
            },
            [](::google::test::admin::database::v1::
                   ListBackupOperationsResponse const &) {
              return std::vector<google::longrunning::Operation>{};
            });
      });
  DatabaseAdminClient client(mock);
  auto range = client.ListBackupOperations(expected_instance);
  auto begin = range.begin();
  ASSERT_NE(begin, range.end());
  EXPECT_THAT(*begin, StatusIs(StatusCode::kPermissionDenied));
}

} // namespace
} // namespace GOOGLE_CLOUD_CPP_NS
} // namespace golden
} // namespace cloud
} // namespace google
