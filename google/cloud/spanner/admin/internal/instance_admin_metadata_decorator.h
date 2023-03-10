// Copyright 2021 Google LLC
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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_INSTANCE_ADMIN_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_INSTANCE_ADMIN_METADATA_DECORATOR_H

#include "google/cloud/spanner/admin/internal/instance_admin_stub.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstanceAdminMetadata : public InstanceAdminStub {
 public:
  ~InstanceAdminMetadata() override = default;
  explicit InstanceAdminMetadata(std::shared_ptr<InstanceAdminStub> child);

  StatusOr<google::spanner::admin::instance::v1::ListInstanceConfigsResponse>
  ListInstanceConfigs(
      grpc::ClientContext& context,
      google::spanner::admin::instance::v1::ListInstanceConfigsRequest const&
          request) override;

  StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
  GetInstanceConfig(
      grpc::ClientContext& context,
      google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstanceConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstanceConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
          request) override;

  Status DeleteInstanceConfig(
      grpc::ClientContext& context,
      google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
          request) override;

  StatusOr<google::spanner::admin::instance::v1::
               ListInstanceConfigOperationsResponse>
  ListInstanceConfigOperations(
      grpc::ClientContext& context,
      google::spanner::admin::instance::v1::
          ListInstanceConfigOperationsRequest const& request) override;

  StatusOr<google::spanner::admin::instance::v1::ListInstancesResponse>
  ListInstances(
      grpc::ClientContext& context,
      google::spanner::admin::instance::v1::ListInstancesRequest const& request)
      override;

  StatusOr<google::spanner::admin::instance::v1::Instance> GetInstance(
      grpc::ClientContext& context,
      google::spanner::admin::instance::v1::GetInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::spanner::admin::instance::v1::CreateInstanceRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::spanner::admin::instance::v1::UpdateInstanceRequest const&
          request) override;

  Status DeleteInstance(
      grpc::ClientContext& context,
      google::spanner::admin::instance::v1::DeleteInstanceRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

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

  std::shared_ptr<InstanceAdminStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_INSTANCE_ADMIN_METADATA_DECORATOR_H
