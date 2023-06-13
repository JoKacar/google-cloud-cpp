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
// source: google/cloud/gkemulticloud/v1/attached_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_ATTACHED_CLUSTERS_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_ATTACHED_CLUSTERS_AUTH_DECORATOR_H

#include "google/cloud/gkemulticloud/v1/internal/attached_clusters_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AttachedClustersAuth : public AttachedClustersStub {
 public:
  ~AttachedClustersAuth() override = default;
  AttachedClustersAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<AttachedClustersStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAttachedCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAttachedCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportAttachedCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>
  GetAttachedCluster(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::GetAttachedClusterRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::ListAttachedClustersResponse>
  ListAttachedClusters(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::ListAttachedClustersRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAttachedCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AttachedServerConfig>
  GetAttachedServerConfig(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::GetAttachedServerConfigRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::
               GenerateAttachedClusterInstallManifestResponse>
  GenerateAttachedClusterInstallManifest(
      grpc::ClientContext& context,
      google::cloud::gkemulticloud::v1::
          GenerateAttachedClusterInstallManifestRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<AttachedClustersStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_ATTACHED_CLUSTERS_AUTH_DECORATOR_H
