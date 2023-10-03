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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/v1/internal/golden_thing_admin_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <generator/integration_tests/test.pb.h>
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultGoldenThingAdminRestStub::DefaultGoldenThingAdminRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<rest_internal::LongrunningEndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultGoldenThingAdminRestStub::DefaultGoldenThingAdminRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations,
    Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

StatusOr<google::test::admin::database::v1::ListDatabasesResponse>
DefaultGoldenThingAdminRestStub::ListDatabases(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ListDatabasesRequest const& request) {
  auto const& opts = options_;
  return rest_internal::Get<google::test::admin::database::v1::ListDatabasesResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.parent(), "/", "databases"),
      rest_internal::TrimEmptyQueryParameters({std::make_pair("page_size", std::to_string(request.page_size())),
        std::make_pair("page_token", request.page_token())}));
}

future<StatusOr<google::longrunning::Operation>>
DefaultGoldenThingAdminRestStub::AsyncCreateDatabase(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::test::admin::database::v1::CreateDatabaseRequest const& request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{[](auto p, auto service, auto request, auto rest_context, auto opts) {
      p.set_value(rest_internal::Post<google::longrunning::Operation>(
          *service, *rest_context, request, false,
          absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.parent(), "/", "databases"),
      rest_internal::TrimEmptyQueryParameters({std::make_pair("create_statement", request.create_statement())})));
  }, std::move(p), service_, request, std::move(rest_context), options_};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable {
      t.join();
    });
    return f.get();
  });
}

StatusOr<google::test::admin::database::v1::Database>
DefaultGoldenThingAdminRestStub::GetDatabase(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::GetDatabaseRequest const& request) {
  auto const& opts = options_;
  return rest_internal::Get<google::test::admin::database::v1::Database>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.name()));
}

future<StatusOr<google::longrunning::Operation>>
DefaultGoldenThingAdminRestStub::AsyncUpdateDatabaseDdl(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{[](auto p, auto service, auto request, auto rest_context, auto opts) {
      p.set_value(rest_internal::Patch<google::longrunning::Operation>(
          *service, *rest_context, request, false,
          absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.database(), "/", "ddl"),
      rest_internal::TrimEmptyQueryParameters({std::make_pair("operation_id", request.operation_id())})));
  }, std::move(p), service_, request, std::move(rest_context), options_};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable {
      t.join();
    });
    return f.get();
  });
}

Status DefaultGoldenThingAdminRestStub::DropDatabase(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::DropDatabaseRequest const& request) {
  auto const& opts = options_;
  return rest_internal::Delete(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.database()));
}

StatusOr<google::test::admin::database::v1::GetDatabaseDdlResponse>
DefaultGoldenThingAdminRestStub::GetDatabaseDdl(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::GetDatabaseDdlRequest const& request) {
  auto const& opts = options_;
  return rest_internal::Get<google::test::admin::database::v1::GetDatabaseDdlResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.database(), "/", "ddl"));
}

StatusOr<google::iam::v1::Policy>
DefaultGoldenThingAdminRestStub::SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::iam::v1::SetIamPolicyRequest const& request) {
  auto const& opts = options_;
  return rest_internal::Post<google::iam::v1::Policy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.resource(), ":setIamPolicy"));
}

StatusOr<google::iam::v1::Policy>
DefaultGoldenThingAdminRestStub::GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::iam::v1::GetIamPolicyRequest const& request) {
  auto const& opts = options_;
  return rest_internal::Post<google::iam::v1::Policy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.resource(), ":getIamPolicy"));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultGoldenThingAdminRestStub::TestIamPermissions(
      google::cloud::rest_internal::RestContext& rest_context,
      google::iam::v1::TestIamPermissionsRequest const& request) {
  auto const& opts = options_;
  return rest_internal::Post<google::iam::v1::TestIamPermissionsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.resource(), ":testIamPermissions"));
}

future<StatusOr<google::longrunning::Operation>>
DefaultGoldenThingAdminRestStub::AsyncCreateBackup(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::test::admin::database::v1::CreateBackupRequest const& request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{[](auto p, auto service, auto request, auto rest_context, auto opts) {
      p.set_value(rest_internal::Post<google::longrunning::Operation>(
          *service, *rest_context, request.backup(), false,
          absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.parent(), "/", "backups"),
      rest_internal::TrimEmptyQueryParameters({std::make_pair("backup_id", request.backup_id())})));
  }, std::move(p), service_, request, std::move(rest_context), options_};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable {
      t.join();
    });
    return f.get();
  });
}

StatusOr<google::test::admin::database::v1::Backup>
DefaultGoldenThingAdminRestStub::GetBackup(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::GetBackupRequest const& request) {
  auto const& opts = options_;
  return rest_internal::Get<google::test::admin::database::v1::Backup>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.name()));
}

StatusOr<google::test::admin::database::v1::Backup>
DefaultGoldenThingAdminRestStub::UpdateBackup(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::UpdateBackupRequest const& request) {
  auto const& opts = options_;
  return rest_internal::Patch<google::test::admin::database::v1::Backup>(
      *service_, rest_context, request.backup(), false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.backup().name()));
}

Status DefaultGoldenThingAdminRestStub::DeleteBackup(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::DeleteBackupRequest const& request) {
  auto const& opts = options_;
  return rest_internal::Delete(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.name()));
}

StatusOr<google::test::admin::database::v1::ListBackupsResponse>
DefaultGoldenThingAdminRestStub::ListBackups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ListBackupsRequest const& request) {
  auto const& opts = options_;
  return rest_internal::Get<google::test::admin::database::v1::ListBackupsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.parent(), "/", "backups"),
      rest_internal::TrimEmptyQueryParameters({std::make_pair("filter", request.filter()),
        std::make_pair("page_size", std::to_string(request.page_size())),
        std::make_pair("page_token", request.page_token())}));
}

future<StatusOr<google::longrunning::Operation>>
DefaultGoldenThingAdminRestStub::AsyncRestoreDatabase(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{[](auto p, auto service, auto request, auto rest_context, auto opts) {
      p.set_value(rest_internal::Post<google::longrunning::Operation>(
          *service, *rest_context, request, false,
          absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.parent(), "/", "databases", ":restore"),
      rest_internal::TrimEmptyQueryParameters({std::make_pair("database_id", request.database_id()),
        std::make_pair("backup", request.backup())})));
  }, std::move(p), service_, request, std::move(rest_context), options_};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable {
      t.join();
    });
    return f.get();
  });
}

StatusOr<google::test::admin::database::v1::ListDatabaseOperationsResponse>
DefaultGoldenThingAdminRestStub::ListDatabaseOperations(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ListDatabaseOperationsRequest const& request) {
  auto const& opts = options_;
  return rest_internal::Get<google::test::admin::database::v1::ListDatabaseOperationsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.parent(), "/", "databaseOperations"),
      rest_internal::TrimEmptyQueryParameters({std::make_pair("filter", request.filter()),
        std::make_pair("page_size", std::to_string(request.page_size())),
        std::make_pair("page_token", request.page_token())}));
}

StatusOr<google::test::admin::database::v1::ListBackupOperationsResponse>
DefaultGoldenThingAdminRestStub::ListBackupOperations(
      google::cloud::rest_internal::RestContext& rest_context,
      google::test::admin::database::v1::ListBackupOperationsRequest const& request) {
  auto const& opts = options_;
  return rest_internal::Get<google::test::admin::database::v1::ListBackupOperationsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.parent(), "/", "backupOperations"),
      rest_internal::TrimEmptyQueryParameters({std::make_pair("filter", request.filter()),
        std::make_pair("page_size", std::to_string(request.page_size())),
        std::make_pair("page_token", request.page_token())}));
}

future<StatusOr<google::test::admin::database::v1::Database>>
DefaultGoldenThingAdminRestStub::AsyncGetDatabase(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::test::admin::database::v1::GetDatabaseRequest const& request) {
  promise<StatusOr<google::test::admin::database::v1::Database>> p;
  future<StatusOr<google::test::admin::database::v1::Database>> f = p.get_future();
  std::thread t{[](auto p, auto service, auto request, auto rest_context, auto opts) {
      p.set_value(rest_internal::Get<google::test::admin::database::v1::Database>(
          *service, *rest_context, request, false,
          absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.name())));
  }, std::move(p), service_, request, std::move(rest_context), options_};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable {
      t.join();
    });
    return f.get();
  });
}

future<Status>
DefaultGoldenThingAdminRestStub::AsyncDropDatabase(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::test::admin::database::v1::DropDatabaseRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{[](auto p, auto service, auto request, auto rest_context, auto opts) {
      p.set_value(rest_internal::Delete<google::protobuf::Empty>(
          *service, *rest_context, request, false,
          absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/", request.database())));
  }, std::move(p), service_, request, std::move(rest_context), options_};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable {
      t.join();
    });
    return f.get().status();
  });
}

future<StatusOr<google::longrunning::Operation>>
DefaultGoldenThingAdminRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::longrunning::GetOperationRequest const& request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{[](auto p, auto operations, auto request, auto rest_context, auto opts) {
      p.set_value(rest_internal::Get<google::longrunning::Operation>(
          *operations, *rest_context, request, false,
          absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts) ,"/", request.name())));
  }, std::move(p), operations_, request, std::move(rest_context), options_};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable {
      t.join();
    });
    return f.get();
  });
}

future<Status>
DefaultGoldenThingAdminRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::longrunning::CancelOperationRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{[](auto p, auto operations, auto request, auto rest_context, auto opts) {
      p.set_value(rest_internal::Post<google::protobuf::Empty>(
          *operations, *rest_context, request, false,
          absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts) ,"/", request.name(), ":cancel")));
  }, std::move(p), operations_, request, std::move(rest_context), options_};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable {
      t.join();
    });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google
