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
// source: google/identity/accesscontextmanager/v1/access_context_manager.proto

#include "google/cloud/accesscontextmanager/v1/internal/access_context_manager_auth_decorator.h"
#include <google/identity/accesscontextmanager/v1/access_context_manager.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace accesscontextmanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AccessContextManagerAuth::AccessContextManagerAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<AccessContextManagerStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::identity::accesscontextmanager::v1::ListAccessPoliciesResponse>
AccessContextManagerAuth::ListAccessPolicies(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::ListAccessPoliciesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAccessPolicies(context, request);
}

StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>
AccessContextManagerAuth::GetAccessPolicy(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::GetAccessPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAccessPolicy(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncCreateAccessPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::AccessPolicy const& request) {
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
        return child->AsyncCreateAccessPolicy(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncUpdateAccessPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::UpdateAccessPolicyRequest const&
        request) {
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
        return child->AsyncUpdateAccessPolicy(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncDeleteAccessPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::DeleteAccessPolicyRequest const&
        request) {
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
        return child->AsyncDeleteAccessPolicy(cq, *std::move(context), request);
      });
}

StatusOr<google::identity::accesscontextmanager::v1::ListAccessLevelsResponse>
AccessContextManagerAuth::ListAccessLevels(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::ListAccessLevelsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAccessLevels(context, request);
}

StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>
AccessContextManagerAuth::GetAccessLevel(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::GetAccessLevelRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAccessLevel(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncCreateAccessLevel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::CreateAccessLevelRequest const&
        request) {
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
        return child->AsyncCreateAccessLevel(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncUpdateAccessLevel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::UpdateAccessLevelRequest const&
        request) {
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
        return child->AsyncUpdateAccessLevel(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncDeleteAccessLevel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::DeleteAccessLevelRequest const&
        request) {
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
        return child->AsyncDeleteAccessLevel(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncReplaceAccessLevels(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        ReplaceAccessLevelsRequest const& request) {
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
        return child->AsyncReplaceAccessLevels(cq, *std::move(context),
                                               request);
      });
}

StatusOr<
    google::identity::accesscontextmanager::v1::ListServicePerimetersResponse>
AccessContextManagerAuth::ListServicePerimeters(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        ListServicePerimetersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListServicePerimeters(context, request);
}

StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>
AccessContextManagerAuth::GetServicePerimeter(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        GetServicePerimeterRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetServicePerimeter(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncCreateServicePerimeter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        CreateServicePerimeterRequest const& request) {
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
        return child->AsyncCreateServicePerimeter(cq, *std::move(context),
                                                  request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncUpdateServicePerimeter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        UpdateServicePerimeterRequest const& request) {
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
        return child->AsyncUpdateServicePerimeter(cq, *std::move(context),
                                                  request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncDeleteServicePerimeter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        DeleteServicePerimeterRequest const& request) {
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
        return child->AsyncDeleteServicePerimeter(cq, *std::move(context),
                                                  request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncReplaceServicePerimeters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        ReplaceServicePerimetersRequest const& request) {
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
        return child->AsyncReplaceServicePerimeters(cq, *std::move(context),
                                                    request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncCommitServicePerimeters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        CommitServicePerimetersRequest const& request) {
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
        return child->AsyncCommitServicePerimeters(cq, *std::move(context),
                                                   request);
      });
}

StatusOr<google::identity::accesscontextmanager::v1::
             ListGcpUserAccessBindingsResponse>
AccessContextManagerAuth::ListGcpUserAccessBindings(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        ListGcpUserAccessBindingsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListGcpUserAccessBindings(context, request);
}

StatusOr<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>
AccessContextManagerAuth::GetGcpUserAccessBinding(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        GetGcpUserAccessBindingRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetGcpUserAccessBinding(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncCreateGcpUserAccessBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        CreateGcpUserAccessBindingRequest const& request) {
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
        return child->AsyncCreateGcpUserAccessBinding(cq, *std::move(context),
                                                      request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncUpdateGcpUserAccessBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        UpdateGcpUserAccessBindingRequest const& request) {
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
        return child->AsyncUpdateGcpUserAccessBinding(cq, *std::move(context),
                                                      request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncDeleteGcpUserAccessBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        DeleteGcpUserAccessBindingRequest const& request) {
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
        return child->AsyncDeleteGcpUserAccessBinding(cq, *std::move(context),
                                                      request);
      });
}

StatusOr<google::iam::v1::Policy> AccessContextManagerAuth::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> AccessContextManagerAuth::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
AccessContextManagerAuth::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerAuth::AsyncGetOperation(
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

future<Status> AccessContextManagerAuth::AsyncCancelOperation(
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
}  // namespace accesscontextmanager_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
