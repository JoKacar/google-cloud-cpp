// Copyright 2020 Google LLC
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

#include "generator/integration_tests/golden/database_admin_connection.gcpcxx.pb.h"
#include "generator/integration_tests/golden/internal/database_admin_stub_factory.gcpcxx.pb.h"
#include "google/cloud/internal/polling_loop.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden {
inline namespace GOOGLE_CLOUD_CPP_NS {

DatabaseAdminConnection::~DatabaseAdminConnection() = default;

ListDatabasesRange DatabaseAdminConnection::ListDatabases(
    ::google::test::admin::database::v1::ListDatabasesRequest request) {
  return ListDatabasesRange(
    std::move(request),
    [](::google::test::admin::database::v1::ListDatabasesRequest const&) {
      return ::google::test::admin::database::v1::ListDatabasesResponse();
    },
    [](::google::test::admin::database::v1::ListDatabasesResponse const&) {
      return std::vector<::google::test::admin::database::v1::Database>();
    });
}

future<StatusOr<::google::test::admin::database::v1::Database>>
DatabaseAdminConnection::CreateDatabase(
    ::google::test::admin::database::v1::CreateDatabaseRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<::google::test::admin::database::v1::Database>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<::google::test::admin::database::v1::Database>
DatabaseAdminConnection::GetDatabase(
    ::google::test::admin::database::v1::GetDatabaseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<::google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>
DatabaseAdminConnection::UpdateDatabaseDdl(
    ::google::test::admin::database::v1::UpdateDatabaseDdlRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<::google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

Status
DatabaseAdminConnection::DropDatabase(
    ::google::test::admin::database::v1::DropDatabaseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<::google::test::admin::database::v1::GetDatabaseDdlResponse>
DatabaseAdminConnection::GetDatabaseDdl(
    ::google::test::admin::database::v1::GetDatabaseDdlRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<::google::iam::v1::Policy>
DatabaseAdminConnection::SetIamPolicy(
    ::google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<::google::iam::v1::Policy>
DatabaseAdminConnection::GetIamPolicy(
    ::google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<::google::iam::v1::TestIamPermissionsResponse>
DatabaseAdminConnection::TestIamPermissions(
    ::google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<::google::test::admin::database::v1::Backup>>
DatabaseAdminConnection::CreateBackup(
    ::google::test::admin::database::v1::CreateBackupRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<::google::test::admin::database::v1::Backup>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<::google::test::admin::database::v1::Backup>
DatabaseAdminConnection::GetBackup(
    ::google::test::admin::database::v1::GetBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<::google::test::admin::database::v1::Backup>
DatabaseAdminConnection::UpdateBackup(
    ::google::test::admin::database::v1::UpdateBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status
DatabaseAdminConnection::DeleteBackup(
    ::google::test::admin::database::v1::DeleteBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

ListBackupsRange DatabaseAdminConnection::ListBackups(
    ::google::test::admin::database::v1::ListBackupsRequest request) {
  return ListBackupsRange(
    std::move(request),
    [](::google::test::admin::database::v1::ListBackupsRequest const&) {
      return ::google::test::admin::database::v1::ListBackupsResponse();
    },
    [](::google::test::admin::database::v1::ListBackupsResponse const&) {
      return std::vector<::google::test::admin::database::v1::Backup>();
    });
}

future<StatusOr<::google::test::admin::database::v1::Database>>
DatabaseAdminConnection::RestoreDatabase(
    ::google::test::admin::database::v1::RestoreDatabaseRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<::google::test::admin::database::v1::Database>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

ListDatabaseOperationsRange DatabaseAdminConnection::ListDatabaseOperations(
    ::google::test::admin::database::v1::ListDatabaseOperationsRequest request) {
  return ListDatabaseOperationsRange(
    std::move(request),
    [](::google::test::admin::database::v1::ListDatabaseOperationsRequest const&) {
      return ::google::test::admin::database::v1::ListDatabaseOperationsResponse();
    },
    [](::google::test::admin::database::v1::ListDatabaseOperationsResponse const&) {
      return std::vector<::google::longrunning::Operation>();
    });
}

ListBackupOperationsRange DatabaseAdminConnection::ListBackupOperations(
    ::google::test::admin::database::v1::ListBackupOperationsRequest request) {
  return ListBackupOperationsRange(
    std::move(request),
    [](::google::test::admin::database::v1::ListBackupOperationsRequest const&) {
      return ::google::test::admin::database::v1::ListBackupOperationsResponse();
    },
    [](::google::test::admin::database::v1::ListBackupOperationsResponse const&) {
      return std::vector<::google::longrunning::Operation>();
    });
}

namespace {
std::unique_ptr<RetryPolicy> DefaultRetryPolicy() {
  return LimitedTimeRetryPolicy(std::chrono::minutes(30)).clone();
}

std::unique_ptr<BackoffPolicy> DefaultBackoffPolicy() {
  auto constexpr kBackoffScaling = 2.0;
  return ExponentialBackoffPolicy(std::chrono::seconds(1),
                                  std::chrono::minutes(5), kBackoffScaling)
      .clone();
}

std::unique_ptr<PollingPolicy> DefaultPollingPolicy() {
  auto constexpr kBackoffScaling = 2.0;
  return GenericPollingPolicy<LimitedTimeRetryPolicy, ExponentialBackoffPolicy>(
             LimitedTimeRetryPolicy(std::chrono::minutes(30)),
             ExponentialBackoffPolicy(std::chrono::seconds(10),
                                      std::chrono::minutes(5), kBackoffScaling))
      .clone();
}

class DatabaseAdminConnectionImpl : public DatabaseAdminConnection {
 public:
  explicit DatabaseAdminConnectionImpl(
      std::shared_ptr<golden_internal::DatabaseAdminStub> stub,
      std::unique_ptr<RetryPolicy> retry_policy,
      std::unique_ptr<BackoffPolicy> backoff_policy,
      std::unique_ptr<PollingPolicy> polling_policy,
      std::unique_ptr<DatabaseAdminConnectionIdempotencyPolicy> idempotency_policy)
      : stub_(std::move(stub)),
        retry_policy_prototype_(std::move(retry_policy)),
        backoff_policy_prototype_(std::move(backoff_policy)),
        polling_policy_prototype_(std::move(polling_policy)),
        idempotency_policy_(std::move(idempotency_policy)) {}

  explicit DatabaseAdminConnectionImpl(
      std::shared_ptr<golden_internal::DatabaseAdminStub> stub)
      : DatabaseAdminConnectionImpl(
          std::move(stub),
          DefaultRetryPolicy(),
          DefaultBackoffPolicy(),
          DefaultPollingPolicy(),
          MakeDefaultDatabaseAdminConnectionIdempotencyPolicy()) {}

  ~DatabaseAdminConnectionImpl() override = default;

  ListDatabasesRange ListDatabases(
      ::google::test::admin::database::v1::ListDatabasesRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<RetryPolicy const>(retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListDatabases(request);
    char const* function_name = __func__;
    return ListDatabasesRange(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name]
          (::google::test::admin::database::v1::ListDatabasesRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     ::google::test::admin::database::v1::ListDatabasesRequest const& request) {
                return stub->ListDatabases(context, request);
              },
              r, function_name);
        },
        [](::google::test::admin::database::v1::ListDatabasesResponse r) {
          std::vector<::google::test::admin::database::v1::Database> result(r.databases().size());
          auto& messages = *r.mutable_databases();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  future<StatusOr<::google::test::admin::database::v1::Database>>
  CreateDatabase(
      ::google::test::admin::database::v1::CreateDatabaseRequest const& request) override {
    auto operation = google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateDatabase(request),
        [this](grpc::ClientContext& context,
               ::google::test::admin::database::v1::CreateDatabaseRequest const& request) {
          return stub_->CreateDatabase(context, request);
        },
        request, __func__);
    if (!operation) {
      return google::cloud::make_ready_future(
          StatusOr<::google::test::admin::database::v1::Database>(operation.status()));
    }

    return AwaitCreateDatabase(*std::move(operation));
}

  StatusOr<::google::test::admin::database::v1::Database>
  GetDatabase(
      ::google::test::admin::database::v1::GetDatabaseRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetDatabase(request),
        [this](grpc::ClientContext& context,
            ::google::test::admin::database::v1::GetDatabaseRequest const& request) {
          return stub_->GetDatabase(context, request);
        },
        request, __func__);
}

  future<StatusOr<::google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>
  UpdateDatabaseDdl(
      ::google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) override {
    auto operation = google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateDatabaseDdl(request),
        [this](grpc::ClientContext& context,
               ::google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) {
          return stub_->UpdateDatabaseDdl(context, request);
        },
        request, __func__);
    if (!operation) {
      return google::cloud::make_ready_future(
          StatusOr<::google::test::admin::database::v1::UpdateDatabaseDdlMetadata>(operation.status()));
    }

    return AwaitUpdateDatabaseDdl(*std::move(operation));
}

  Status
  DropDatabase(
      ::google::test::admin::database::v1::DropDatabaseRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DropDatabase(request),
        [this](grpc::ClientContext& context,
            ::google::test::admin::database::v1::DropDatabaseRequest const& request) {
          return stub_->DropDatabase(context, request);
        },
        request, __func__);
}

  StatusOr<::google::test::admin::database::v1::GetDatabaseDdlResponse>
  GetDatabaseDdl(
      ::google::test::admin::database::v1::GetDatabaseDdlRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetDatabaseDdl(request),
        [this](grpc::ClientContext& context,
            ::google::test::admin::database::v1::GetDatabaseDdlRequest const& request) {
          return stub_->GetDatabaseDdl(context, request);
        },
        request, __func__);
}

  StatusOr<::google::iam::v1::Policy>
  SetIamPolicy(
      ::google::iam::v1::SetIamPolicyRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->SetIamPolicy(request),
        [this](grpc::ClientContext& context,
            ::google::iam::v1::SetIamPolicyRequest const& request) {
          return stub_->SetIamPolicy(context, request);
        },
        request, __func__);
}

  StatusOr<::google::iam::v1::Policy>
  GetIamPolicy(
      ::google::iam::v1::GetIamPolicyRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetIamPolicy(request),
        [this](grpc::ClientContext& context,
            ::google::iam::v1::GetIamPolicyRequest const& request) {
          return stub_->GetIamPolicy(context, request);
        },
        request, __func__);
}

  StatusOr<::google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      ::google::iam::v1::TestIamPermissionsRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->TestIamPermissions(request),
        [this](grpc::ClientContext& context,
            ::google::iam::v1::TestIamPermissionsRequest const& request) {
          return stub_->TestIamPermissions(context, request);
        },
        request, __func__);
}

  future<StatusOr<::google::test::admin::database::v1::Backup>>
  CreateBackup(
      ::google::test::admin::database::v1::CreateBackupRequest const& request) override {
    auto operation = google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateBackup(request),
        [this](grpc::ClientContext& context,
               ::google::test::admin::database::v1::CreateBackupRequest const& request) {
          return stub_->CreateBackup(context, request);
        },
        request, __func__);
    if (!operation) {
      return google::cloud::make_ready_future(
          StatusOr<::google::test::admin::database::v1::Backup>(operation.status()));
    }

    return AwaitCreateBackup(*std::move(operation));
}

  StatusOr<::google::test::admin::database::v1::Backup>
  GetBackup(
      ::google::test::admin::database::v1::GetBackupRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetBackup(request),
        [this](grpc::ClientContext& context,
            ::google::test::admin::database::v1::GetBackupRequest const& request) {
          return stub_->GetBackup(context, request);
        },
        request, __func__);
}

  StatusOr<::google::test::admin::database::v1::Backup>
  UpdateBackup(
      ::google::test::admin::database::v1::UpdateBackupRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateBackup(request),
        [this](grpc::ClientContext& context,
            ::google::test::admin::database::v1::UpdateBackupRequest const& request) {
          return stub_->UpdateBackup(context, request);
        },
        request, __func__);
}

  Status
  DeleteBackup(
      ::google::test::admin::database::v1::DeleteBackupRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteBackup(request),
        [this](grpc::ClientContext& context,
            ::google::test::admin::database::v1::DeleteBackupRequest const& request) {
          return stub_->DeleteBackup(context, request);
        },
        request, __func__);
}

  ListBackupsRange ListBackups(
      ::google::test::admin::database::v1::ListBackupsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<RetryPolicy const>(retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListBackups(request);
    char const* function_name = __func__;
    return ListBackupsRange(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name]
          (::google::test::admin::database::v1::ListBackupsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     ::google::test::admin::database::v1::ListBackupsRequest const& request) {
                return stub->ListBackups(context, request);
              },
              r, function_name);
        },
        [](::google::test::admin::database::v1::ListBackupsResponse r) {
          std::vector<::google::test::admin::database::v1::Backup> result(r.backups().size());
          auto& messages = *r.mutable_backups();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  future<StatusOr<::google::test::admin::database::v1::Database>>
  RestoreDatabase(
      ::google::test::admin::database::v1::RestoreDatabaseRequest const& request) override {
    auto operation = google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->RestoreDatabase(request),
        [this](grpc::ClientContext& context,
               ::google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
          return stub_->RestoreDatabase(context, request);
        },
        request, __func__);
    if (!operation) {
      return google::cloud::make_ready_future(
          StatusOr<::google::test::admin::database::v1::Database>(operation.status()));
    }

    return AwaitRestoreDatabase(*std::move(operation));
}

  ListDatabaseOperationsRange ListDatabaseOperations(
      ::google::test::admin::database::v1::ListDatabaseOperationsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<RetryPolicy const>(retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListDatabaseOperations(request);
    char const* function_name = __func__;
    return ListDatabaseOperationsRange(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name]
          (::google::test::admin::database::v1::ListDatabaseOperationsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     ::google::test::admin::database::v1::ListDatabaseOperationsRequest const& request) {
                return stub->ListDatabaseOperations(context, request);
              },
              r, function_name);
        },
        [](::google::test::admin::database::v1::ListDatabaseOperationsResponse r) {
          std::vector<::google::longrunning::Operation> result(r.operations().size());
          auto& messages = *r.mutable_operations();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  ListBackupOperationsRange ListBackupOperations(
      ::google::test::admin::database::v1::ListBackupOperationsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<RetryPolicy const>(retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListBackupOperations(request);
    char const* function_name = __func__;
    return ListBackupOperationsRange(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name]
          (::google::test::admin::database::v1::ListBackupOperationsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     ::google::test::admin::database::v1::ListBackupOperationsRequest const& request) {
                return stub->ListBackupOperations(context, request);
              },
              r, function_name);
        },
        [](::google::test::admin::database::v1::ListBackupOperationsResponse r) {
          std::vector<::google::longrunning::Operation> result(r.operations().size());
          auto& messages = *r.mutable_operations();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

 private:
  template <typename MethodResponse, template<typename> class Extractor,
    typename Stub>
  future<StatusOr<MethodResponse>>
  AwaitLongrunningOperation(google::longrunning::Operation operation) {  // NOLINT
    using ResponseExtractor = Extractor<MethodResponse>;
    std::shared_ptr<Stub> cancel_stub(stub_);
    promise<typename ResponseExtractor::ReturnType> pr([cancel_stub, operation]() {
    grpc::ClientContext context;
    google::longrunning::CancelOperationRequest request;
    request.set_name(operation.name());
    cancel_stub->CancelOperation(context, request);
    });
    auto f = pr.get_future();
    std::thread t(
        [](std::shared_ptr<Stub> stub,
           google::longrunning::Operation operation,
           std::unique_ptr<PollingPolicy> polling_policy,
           google::cloud::promise<typename ResponseExtractor::ReturnType> promise,
           char const* location) mutable {
          auto result = google::cloud::internal::PollingLoop<ResponseExtractor>(
              std::move(polling_policy),
              [stub](grpc::ClientContext& context,
                     google::longrunning::GetOperationRequest const& request) {
                return stub->GetOperation(context, request);
              },
              std::move(operation), location);

          stub.reset();
          promise.set_value(std::move(result));
        },
        stub_, std::move(operation), polling_policy_prototype_->clone(),
        std::move(pr), __func__);
    t.detach();
    return f;
  }

  future<StatusOr<::google::test::admin::database::v1::Database>>
  AwaitCreateDatabase(
      google::longrunning::Operation operation) {
    return AwaitLongrunningOperation<
        ::google::test::admin::database::v1::Database,
        google::cloud::internal::PollingLoopResponseExtractor,
        golden_internal::DatabaseAdminStub>(std::move(operation));
  }

  future<StatusOr<::google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>
  AwaitUpdateDatabaseDdl(
      google::longrunning::Operation operation) {
    return AwaitLongrunningOperation<
        ::google::test::admin::database::v1::UpdateDatabaseDdlMetadata,
        google::cloud::internal::PollingLoopMetadataExtractor,
        golden_internal::DatabaseAdminStub>(std::move(operation));
  }

  future<StatusOr<::google::test::admin::database::v1::Backup>>
  AwaitCreateBackup(
      google::longrunning::Operation operation) {
    return AwaitLongrunningOperation<
        ::google::test::admin::database::v1::Backup,
        google::cloud::internal::PollingLoopResponseExtractor,
        golden_internal::DatabaseAdminStub>(std::move(operation));
  }

  future<StatusOr<::google::test::admin::database::v1::Database>>
  AwaitRestoreDatabase(
      google::longrunning::Operation operation) {
    return AwaitLongrunningOperation<
        ::google::test::admin::database::v1::Database,
        google::cloud::internal::PollingLoopResponseExtractor,
        golden_internal::DatabaseAdminStub>(std::move(operation));
  }

  std::shared_ptr<golden_internal::DatabaseAdminStub> stub_;
  std::unique_ptr<RetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
  std::unique_ptr<DatabaseAdminConnectionIdempotencyPolicy> idempotency_policy_;
};
}  // namespace

std::shared_ptr<DatabaseAdminConnection> MakeDatabaseAdminConnection(
    ConnectionOptions const& options) {
  return std::make_shared<DatabaseAdminConnectionImpl>(
      golden_internal::CreateDefaultDatabaseAdminStub(options));
}

std::shared_ptr<DatabaseAdminConnection> MakeDatabaseAdminConnection(
    ConnectionOptions const& options, std::unique_ptr<RetryPolicy> retry_policy,
    std::unique_ptr<BackoffPolicy> backoff_policy,
    std::unique_ptr<PollingPolicy> polling_policy,
    std::unique_ptr<DatabaseAdminConnectionIdempotencyPolicy> idempotency_policy) {
  return std::make_shared<DatabaseAdminConnectionImpl>(
      golden_internal::CreateDefaultDatabaseAdminStub(options),
      std::move(retry_policy), std::move(backoff_policy),
      std::move(polling_policy), std::move(idempotency_policy));
}

std::shared_ptr<DatabaseAdminConnection> MakeDatabaseAdminConnection(
    std::shared_ptr<golden_internal::DatabaseAdminStub> stub,
    std::unique_ptr<RetryPolicy> retry_policy,
    std::unique_ptr<BackoffPolicy> backoff_policy,
    std::unique_ptr<PollingPolicy> polling_policy,
    std::unique_ptr<DatabaseAdminConnectionIdempotencyPolicy> idempotency_policy) {
  return std::make_shared<DatabaseAdminConnectionImpl>(
      std::move(stub), std::move(retry_policy), std::move(backoff_policy),
      std::move(polling_policy), std::move(idempotency_policy));
}

}  // namespace GOOGLE_CLOUD_CPP_NS
}  // namespace golden
}  // namespace cloud
}  // namespace google

