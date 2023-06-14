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

#include "google/cloud/accesscontextmanager/v1/internal/access_context_manager_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/identity/accesscontextmanager/v1/access_context_manager.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace accesscontextmanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AccessContextManagerLogging::AccessContextManagerLogging(
    std::shared_ptr<AccessContextManagerStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::identity::accesscontextmanager::v1::ListAccessPoliciesResponse>
AccessContextManagerLogging::ListAccessPolicies(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::ListAccessPoliciesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::identity::accesscontextmanager::v1::
                 ListAccessPoliciesRequest const& request) {
        return child_->ListAccessPolicies(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>
AccessContextManagerLogging::GetAccessPolicy(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::GetAccessPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::identity::accesscontextmanager::v1::
                 GetAccessPolicyRequest const& request) {
        return child_->GetAccessPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncCreateAccessPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::AccessPolicy const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::identity::accesscontextmanager::v1::AccessPolicy const&
                 request) {
        return child_->AsyncCreateAccessPolicy(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncUpdateAccessPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::UpdateAccessPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::identity::accesscontextmanager::v1::
                 UpdateAccessPolicyRequest const& request) {
        return child_->AsyncUpdateAccessPolicy(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncDeleteAccessPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::DeleteAccessPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::identity::accesscontextmanager::v1::
                 DeleteAccessPolicyRequest const& request) {
        return child_->AsyncDeleteAccessPolicy(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::identity::accesscontextmanager::v1::ListAccessLevelsResponse>
AccessContextManagerLogging::ListAccessLevels(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::ListAccessLevelsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::identity::accesscontextmanager::v1::
                 ListAccessLevelsRequest const& request) {
        return child_->ListAccessLevels(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>
AccessContextManagerLogging::GetAccessLevel(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::GetAccessLevelRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::identity::accesscontextmanager::v1::
                 GetAccessLevelRequest const& request) {
        return child_->GetAccessLevel(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncCreateAccessLevel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::CreateAccessLevelRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::identity::accesscontextmanager::v1::
                 CreateAccessLevelRequest const& request) {
        return child_->AsyncCreateAccessLevel(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncUpdateAccessLevel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::UpdateAccessLevelRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::identity::accesscontextmanager::v1::
                 UpdateAccessLevelRequest const& request) {
        return child_->AsyncUpdateAccessLevel(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncDeleteAccessLevel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::DeleteAccessLevelRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::identity::accesscontextmanager::v1::
                 DeleteAccessLevelRequest const& request) {
        return child_->AsyncDeleteAccessLevel(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncReplaceAccessLevels(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        ReplaceAccessLevelsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::identity::accesscontextmanager::v1::
                 ReplaceAccessLevelsRequest const& request) {
        return child_->AsyncReplaceAccessLevels(cq, std::move(context),
                                                request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<
    google::identity::accesscontextmanager::v1::ListServicePerimetersResponse>
AccessContextManagerLogging::ListServicePerimeters(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        ListServicePerimetersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::identity::accesscontextmanager::v1::
                 ListServicePerimetersRequest const& request) {
        return child_->ListServicePerimeters(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>
AccessContextManagerLogging::GetServicePerimeter(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        GetServicePerimeterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::identity::accesscontextmanager::v1::
                 GetServicePerimeterRequest const& request) {
        return child_->GetServicePerimeter(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncCreateServicePerimeter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        CreateServicePerimeterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::identity::accesscontextmanager::v1::
                 CreateServicePerimeterRequest const& request) {
        return child_->AsyncCreateServicePerimeter(cq, std::move(context),
                                                   request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncUpdateServicePerimeter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        UpdateServicePerimeterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::identity::accesscontextmanager::v1::
                 UpdateServicePerimeterRequest const& request) {
        return child_->AsyncUpdateServicePerimeter(cq, std::move(context),
                                                   request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncDeleteServicePerimeter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        DeleteServicePerimeterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::identity::accesscontextmanager::v1::
                 DeleteServicePerimeterRequest const& request) {
        return child_->AsyncDeleteServicePerimeter(cq, std::move(context),
                                                   request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncReplaceServicePerimeters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        ReplaceServicePerimetersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::identity::accesscontextmanager::v1::
                 ReplaceServicePerimetersRequest const& request) {
        return child_->AsyncReplaceServicePerimeters(cq, std::move(context),
                                                     request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncCommitServicePerimeters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        CommitServicePerimetersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::identity::accesscontextmanager::v1::
                 CommitServicePerimetersRequest const& request) {
        return child_->AsyncCommitServicePerimeters(cq, std::move(context),
                                                    request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::identity::accesscontextmanager::v1::
             ListGcpUserAccessBindingsResponse>
AccessContextManagerLogging::ListGcpUserAccessBindings(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        ListGcpUserAccessBindingsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::identity::accesscontextmanager::v1::
                 ListGcpUserAccessBindingsRequest const& request) {
        return child_->ListGcpUserAccessBindings(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>
AccessContextManagerLogging::GetGcpUserAccessBinding(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        GetGcpUserAccessBindingRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::identity::accesscontextmanager::v1::
                 GetGcpUserAccessBindingRequest const& request) {
        return child_->GetGcpUserAccessBinding(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncCreateGcpUserAccessBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        CreateGcpUserAccessBindingRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::identity::accesscontextmanager::v1::
                 CreateGcpUserAccessBindingRequest const& request) {
        return child_->AsyncCreateGcpUserAccessBinding(cq, std::move(context),
                                                       request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncUpdateGcpUserAccessBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        UpdateGcpUserAccessBindingRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::identity::accesscontextmanager::v1::
                 UpdateGcpUserAccessBindingRequest const& request) {
        return child_->AsyncUpdateGcpUserAccessBinding(cq, std::move(context),
                                                       request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncDeleteGcpUserAccessBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::identity::accesscontextmanager::v1::
        DeleteGcpUserAccessBindingRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::identity::accesscontextmanager::v1::
                 DeleteGcpUserAccessBindingRequest const& request) {
        return child_->AsyncDeleteGcpUserAccessBinding(cq, std::move(context),
                                                       request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> AccessContextManagerLogging::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> AccessContextManagerLogging::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
AccessContextManagerLogging::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> AccessContextManagerLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accesscontextmanager_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
