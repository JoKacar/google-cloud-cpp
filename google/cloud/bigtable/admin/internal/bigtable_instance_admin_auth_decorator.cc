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
// source: google/bigtable/admin/v2/bigtable_instance_admin.proto

#include "google/cloud/bigtable/admin/internal/bigtable_instance_admin_auth_decorator.h"
#include <google/bigtable/admin/v2/bigtable_instance_admin.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigtableInstanceAdminAuth::BigtableInstanceAdminAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<BigtableInstanceAdminStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminAuth::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::admin::v2::CreateInstanceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateInstance(cq, *std::move(context), request);
      });
}

StatusOr<google::bigtable::admin::v2::Instance>
BigtableInstanceAdminAuth::GetInstance(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::GetInstanceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetInstance(context, request);
}

StatusOr<google::bigtable::admin::v2::ListInstancesResponse>
BigtableInstanceAdminAuth::ListInstances(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::ListInstancesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInstances(context, request);
}

StatusOr<google::bigtable::admin::v2::Instance>
BigtableInstanceAdminAuth::UpdateInstance(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::Instance const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateInstance(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminAuth::AsyncPartialUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::admin::v2::PartialUpdateInstanceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncPartialUpdateInstance(cq, *std::move(context),
                                                 request);
      });
}

Status BigtableInstanceAdminAuth::DeleteInstance(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::DeleteInstanceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteInstance(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminAuth::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::admin::v2::CreateClusterRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateCluster(cq, *std::move(context), request);
      });
}

StatusOr<google::bigtable::admin::v2::Cluster>
BigtableInstanceAdminAuth::GetCluster(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::GetClusterRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCluster(context, request);
}

StatusOr<google::bigtable::admin::v2::ListClustersResponse>
BigtableInstanceAdminAuth::ListClusters(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::ListClustersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListClusters(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminAuth::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::admin::v2::Cluster const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateCluster(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminAuth::AsyncPartialUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::admin::v2::PartialUpdateClusterRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncPartialUpdateCluster(cq, *std::move(context),
                                                request);
      });
}

Status BigtableInstanceAdminAuth::DeleteCluster(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::DeleteClusterRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCluster(context, request);
}

StatusOr<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminAuth::CreateAppProfile(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::CreateAppProfileRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateAppProfile(context, request);
}

StatusOr<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminAuth::GetAppProfile(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::GetAppProfileRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAppProfile(context, request);
}

StatusOr<google::bigtable::admin::v2::ListAppProfilesResponse>
BigtableInstanceAdminAuth::ListAppProfiles(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::ListAppProfilesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAppProfiles(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminAuth::AsyncUpdateAppProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::admin::v2::UpdateAppProfileRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateAppProfile(cq, *std::move(context), request);
      });
}

Status BigtableInstanceAdminAuth::DeleteAppProfile(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::DeleteAppProfileRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteAppProfile(context, request);
}

StatusOr<google::iam::v1::Policy> BigtableInstanceAdminAuth::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> BigtableInstanceAdminAuth::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableInstanceAdminAuth::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, request);
}

StatusOr<google::bigtable::admin::v2::ListHotTabletsResponse>
BigtableInstanceAdminAuth::ListHotTablets(
    grpc::ClientContext& context,
    google::bigtable::admin::v2::ListHotTabletsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListHotTablets(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> BigtableInstanceAdminAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
