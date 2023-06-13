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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_FOLDERS_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_FOLDERS_METADATA_DECORATOR_H

#include "google/cloud/resourcemanager/v3/internal/folders_stub.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class FoldersMetadata : public FoldersStub {
 public:
  ~FoldersMetadata() override = default;
  FoldersMetadata(std::shared_ptr<FoldersStub> child,
                  std::multimap<std::string, std::string> fixed_metadata);

  StatusOr<google::cloud::resourcemanager::v3::Folder> GetFolder(
      grpc::ClientContext& context,
      google::cloud::resourcemanager::v3::GetFolderRequest const& request)
      override;

  StatusOr<google::cloud::resourcemanager::v3::ListFoldersResponse> ListFolders(
      grpc::ClientContext& context,
      google::cloud::resourcemanager::v3::ListFoldersRequest const& request)
      override;

  StatusOr<google::cloud::resourcemanager::v3::SearchFoldersResponse>
  SearchFolders(grpc::ClientContext& context,
                google::cloud::resourcemanager::v3::SearchFoldersRequest const&
                    request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateFolder(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::resourcemanager::v3::CreateFolderRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateFolder(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::resourcemanager::v3::UpdateFolderRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncMoveFolder(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::resourcemanager::v3::MoveFolderRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFolder(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::resourcemanager::v3::DeleteFolderRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUndeleteFolder(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::resourcemanager::v3::UndeleteFolderRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<FoldersStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_FOLDERS_METADATA_DECORATOR_H
