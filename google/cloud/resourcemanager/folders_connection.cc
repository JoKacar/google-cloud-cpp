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
// source: google/cloud/resourcemanager/v3/folders.proto

#include "google/cloud/resourcemanager/folders_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include "google/cloud/resourcemanager/folders_options.h"
#include "google/cloud/resourcemanager/internal/folders_option_defaults.h"
#include "google/cloud/resourcemanager/internal/folders_stub_factory.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FoldersConnection::~FoldersConnection() = default;

StatusOr<google::cloud::resourcemanager::v3::Folder>
FoldersConnection::GetFolder(
    google::cloud::resourcemanager::v3::GetFolderRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::resourcemanager::v3::Folder> FoldersConnection::ListFolders(
    google::cloud::resourcemanager::v3::ListFoldersRequest request) {
  return google::cloud::internal::MakePaginationRange<StreamRange<
    google::cloud::resourcemanager::v3::Folder>>(
    std::move(request),
    [](google::cloud::resourcemanager::v3::ListFoldersRequest const&) {
      return StatusOr<google::cloud::resourcemanager::v3::ListFoldersResponse>{};
    },
    [](google::cloud::resourcemanager::v3::ListFoldersResponse const&) {
      return std::vector<google::cloud::resourcemanager::v3::Folder>();
    });
}

StreamRange<google::cloud::resourcemanager::v3::Folder> FoldersConnection::SearchFolders(
    google::cloud::resourcemanager::v3::SearchFoldersRequest request) {
  return google::cloud::internal::MakePaginationRange<StreamRange<
    google::cloud::resourcemanager::v3::Folder>>(
    std::move(request),
    [](google::cloud::resourcemanager::v3::SearchFoldersRequest const&) {
      return StatusOr<google::cloud::resourcemanager::v3::SearchFoldersResponse>{};
    },
    [](google::cloud::resourcemanager::v3::SearchFoldersResponse const&) {
      return std::vector<google::cloud::resourcemanager::v3::Folder>();
    });
}

future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
FoldersConnection::CreateFolder(
    google::cloud::resourcemanager::v3::CreateFolderRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::resourcemanager::v3::Folder>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
FoldersConnection::UpdateFolder(
    google::cloud::resourcemanager::v3::UpdateFolderRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::resourcemanager::v3::Folder>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
FoldersConnection::MoveFolder(
    google::cloud::resourcemanager::v3::MoveFolderRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::resourcemanager::v3::Folder>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
FoldersConnection::DeleteFolder(
    google::cloud::resourcemanager::v3::DeleteFolderRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::resourcemanager::v3::Folder>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
FoldersConnection::UndeleteFolder(
    google::cloud::resourcemanager::v3::UndeleteFolderRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::cloud::resourcemanager::v3::Folder>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::iam::v1::Policy>
FoldersConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy>
FoldersConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
FoldersConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

namespace {
class FoldersConnectionImpl : public FoldersConnection {
 public:
  FoldersConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<resourcemanager_internal::FoldersStub> stub,
      Options const& options)
      : background_(std::move(background)), stub_(std::move(stub)),
        retry_policy_prototype_(options.get<FoldersRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(options.get<FoldersBackoffPolicyOption>()->clone()),
        polling_policy_prototype_(options.get<FoldersPollingPolicyOption>()->clone()),
        idempotency_policy_(options.get<FoldersConnectionIdempotencyPolicyOption>()->clone()) {}

  ~FoldersConnectionImpl() override = default;

  StatusOr<google::cloud::resourcemanager::v3::Folder>
  GetFolder(
      google::cloud::resourcemanager::v3::GetFolderRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetFolder(request),
        [this](grpc::ClientContext& context,
            google::cloud::resourcemanager::v3::GetFolderRequest const& request) {
          return stub_->GetFolder(context, request);
        },
        request, __func__);
  }

  StreamRange<google::cloud::resourcemanager::v3::Folder> ListFolders(
      google::cloud::resourcemanager::v3::ListFoldersRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<FoldersRetryPolicy const>(retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListFolders(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<StreamRange<
        google::cloud::resourcemanager::v3::Folder>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name]
          (google::cloud::resourcemanager::v3::ListFoldersRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::resourcemanager::v3::ListFoldersRequest const& request) {
                return stub->ListFolders(context, request);
              },
              r, function_name);
        },
        [](google::cloud::resourcemanager::v3::ListFoldersResponse r) {
          std::vector<google::cloud::resourcemanager::v3::Folder> result(r.folders().size());
          auto& messages = *r.mutable_folders();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StreamRange<google::cloud::resourcemanager::v3::Folder> SearchFolders(
      google::cloud::resourcemanager::v3::SearchFoldersRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<FoldersRetryPolicy const>(retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->SearchFolders(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<StreamRange<
        google::cloud::resourcemanager::v3::Folder>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name]
          (google::cloud::resourcemanager::v3::SearchFoldersRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::resourcemanager::v3::SearchFoldersRequest const& request) {
                return stub->SearchFolders(context, request);
              },
              r, function_name);
        },
        [](google::cloud::resourcemanager::v3::SearchFoldersResponse r) {
          std::vector<google::cloud::resourcemanager::v3::Folder> result(r.folders().size());
          auto& messages = *r.mutable_folders();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
  CreateFolder(google::cloud::resourcemanager::v3::CreateFolderRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<google::cloud::resourcemanager::v3::Folder>(
          background_->cq(), request,
          [stub](google::cloud::CompletionQueue& cq,
                 std::unique_ptr<grpc::ClientContext> context,
                 google::cloud::resourcemanager::v3::CreateFolderRequest const& request) {
            return stub->AsyncCreateFolder(cq, std::move(context), request);
          },
          [stub](google::cloud::CompletionQueue& cq,
                 std::unique_ptr<grpc::ClientContext> context,
                 google::longrunning::GetOperationRequest const& request) {
            return stub->AsyncGetOperation(cq, std::move(context), request);
          },
          [stub](google::cloud::CompletionQueue& cq,
                 std::unique_ptr<grpc::ClientContext> context,
                 google::longrunning::CancelOperationRequest const& request) {
            return stub->AsyncCancelOperation(cq, std::move(context), request);
          },
          &google::cloud::internal::ExtractLongRunningResultResponse<google::cloud::resourcemanager::v3::Folder>,
          retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
          idempotency_policy_->CreateFolder(request),
          polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
  UpdateFolder(google::cloud::resourcemanager::v3::UpdateFolderRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<google::cloud::resourcemanager::v3::Folder>(
          background_->cq(), request,
          [stub](google::cloud::CompletionQueue& cq,
                 std::unique_ptr<grpc::ClientContext> context,
                 google::cloud::resourcemanager::v3::UpdateFolderRequest const& request) {
            return stub->AsyncUpdateFolder(cq, std::move(context), request);
          },
          [stub](google::cloud::CompletionQueue& cq,
                 std::unique_ptr<grpc::ClientContext> context,
                 google::longrunning::GetOperationRequest const& request) {
            return stub->AsyncGetOperation(cq, std::move(context), request);
          },
          [stub](google::cloud::CompletionQueue& cq,
                 std::unique_ptr<grpc::ClientContext> context,
                 google::longrunning::CancelOperationRequest const& request) {
            return stub->AsyncCancelOperation(cq, std::move(context), request);
          },
          &google::cloud::internal::ExtractLongRunningResultResponse<google::cloud::resourcemanager::v3::Folder>,
          retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
          idempotency_policy_->UpdateFolder(request),
          polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
  MoveFolder(google::cloud::resourcemanager::v3::MoveFolderRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<google::cloud::resourcemanager::v3::Folder>(
          background_->cq(), request,
          [stub](google::cloud::CompletionQueue& cq,
                 std::unique_ptr<grpc::ClientContext> context,
                 google::cloud::resourcemanager::v3::MoveFolderRequest const& request) {
            return stub->AsyncMoveFolder(cq, std::move(context), request);
          },
          [stub](google::cloud::CompletionQueue& cq,
                 std::unique_ptr<grpc::ClientContext> context,
                 google::longrunning::GetOperationRequest const& request) {
            return stub->AsyncGetOperation(cq, std::move(context), request);
          },
          [stub](google::cloud::CompletionQueue& cq,
                 std::unique_ptr<grpc::ClientContext> context,
                 google::longrunning::CancelOperationRequest const& request) {
            return stub->AsyncCancelOperation(cq, std::move(context), request);
          },
          &google::cloud::internal::ExtractLongRunningResultResponse<google::cloud::resourcemanager::v3::Folder>,
          retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
          idempotency_policy_->MoveFolder(request),
          polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
  DeleteFolder(google::cloud::resourcemanager::v3::DeleteFolderRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<google::cloud::resourcemanager::v3::Folder>(
          background_->cq(), request,
          [stub](google::cloud::CompletionQueue& cq,
                 std::unique_ptr<grpc::ClientContext> context,
                 google::cloud::resourcemanager::v3::DeleteFolderRequest const& request) {
            return stub->AsyncDeleteFolder(cq, std::move(context), request);
          },
          [stub](google::cloud::CompletionQueue& cq,
                 std::unique_ptr<grpc::ClientContext> context,
                 google::longrunning::GetOperationRequest const& request) {
            return stub->AsyncGetOperation(cq, std::move(context), request);
          },
          [stub](google::cloud::CompletionQueue& cq,
                 std::unique_ptr<grpc::ClientContext> context,
                 google::longrunning::CancelOperationRequest const& request) {
            return stub->AsyncCancelOperation(cq, std::move(context), request);
          },
          &google::cloud::internal::ExtractLongRunningResultResponse<google::cloud::resourcemanager::v3::Folder>,
          retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
          idempotency_policy_->DeleteFolder(request),
          polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::resourcemanager::v3::Folder>>
  UndeleteFolder(google::cloud::resourcemanager::v3::UndeleteFolderRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<google::cloud::resourcemanager::v3::Folder>(
          background_->cq(), request,
          [stub](google::cloud::CompletionQueue& cq,
                 std::unique_ptr<grpc::ClientContext> context,
                 google::cloud::resourcemanager::v3::UndeleteFolderRequest const& request) {
            return stub->AsyncUndeleteFolder(cq, std::move(context), request);
          },
          [stub](google::cloud::CompletionQueue& cq,
                 std::unique_ptr<grpc::ClientContext> context,
                 google::longrunning::GetOperationRequest const& request) {
            return stub->AsyncGetOperation(cq, std::move(context), request);
          },
          [stub](google::cloud::CompletionQueue& cq,
                 std::unique_ptr<grpc::ClientContext> context,
                 google::longrunning::CancelOperationRequest const& request) {
            return stub->AsyncCancelOperation(cq, std::move(context), request);
          },
          &google::cloud::internal::ExtractLongRunningResultResponse<google::cloud::resourcemanager::v3::Folder>,
          retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
          idempotency_policy_->UndeleteFolder(request),
          polling_policy_prototype_->clone(), __func__);
  }

  StatusOr<google::iam::v1::Policy>
  GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetIamPolicy(request),
        [this](grpc::ClientContext& context,
            google::iam::v1::GetIamPolicyRequest const& request) {
          return stub_->GetIamPolicy(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::v1::Policy>
  SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->SetIamPolicy(request),
        [this](grpc::ClientContext& context,
            google::iam::v1::SetIamPolicyRequest const& request) {
          return stub_->SetIamPolicy(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->TestIamPermissions(request),
        [this](grpc::ClientContext& context,
            google::iam::v1::TestIamPermissionsRequest const& request) {
          return stub_->TestIamPermissions(context, request);
        },
        request, __func__);
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<resourcemanager_internal::FoldersStub> stub_;
  std::unique_ptr<FoldersRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
  std::unique_ptr<FoldersConnectionIdempotencyPolicy> idempotency_policy_;
};
}  // namespace

std::shared_ptr<FoldersConnection> MakeFoldersConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
      FoldersPolicyOptionList>(options, __func__);
  options = resourcemanager_internal::FoldersDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = resourcemanager_internal::CreateDefaultFoldersStub(
    background->cq(), options);
  return std::make_shared<FoldersConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace resourcemanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<resourcemanager::FoldersConnection>
MakeFoldersConnection(
    std::shared_ptr<FoldersStub> stub, Options options) {
  options = FoldersDefaultOptions(std::move(options));
  return std::make_shared<resourcemanager::FoldersConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(),
      std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_internal
}  // namespace cloud
}  // namespace google
