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
// source: google/cloud/gkehub/v1/service.proto

#include "google/cloud/gkehub/internal/gke_hub_auth_decorator.h"
#include <google/cloud/gkehub/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gkehub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GkeHubAuth::GkeHubAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<GkeHubStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::gkehub::v1::ListMembershipsResponse>
GkeHubAuth::ListMemberships(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::ListMembershipsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListMemberships(context, request);
}

StatusOr<google::cloud::gkehub::v1::ListFeaturesResponse>
GkeHubAuth::ListFeatures(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::ListFeaturesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListFeatures(context, request);
}

StatusOr<google::cloud::gkehub::v1::Membership> GkeHubAuth::GetMembership(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::GetMembershipRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetMembership(context, request);
}

StatusOr<google::cloud::gkehub::v1::Feature> GkeHubAuth::GetFeature(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::GetFeatureRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetFeature(context, request);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubAuth::AsyncCreateMembership(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::CreateMembershipRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateMembership(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>> GkeHubAuth::AsyncCreateFeature(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::CreateFeatureRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateFeature(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
GkeHubAuth::AsyncDeleteMembership(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::DeleteMembershipRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteMembership(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>> GkeHubAuth::AsyncDeleteFeature(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::DeleteFeatureRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteFeature(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
GkeHubAuth::AsyncUpdateMembership(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::UpdateMembershipRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateMembership(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>> GkeHubAuth::AsyncUpdateFeature(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::UpdateFeatureRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateFeature(cq, *std::move(context), request);
      });
}

StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse>
GkeHubAuth::GenerateConnectManifest(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::GenerateConnectManifestRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GenerateConnectManifest(context, request);
}

future<StatusOr<google::longrunning::Operation>> GkeHubAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> GkeHubAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub_internal
}  // namespace cloud
}  // namespace google
