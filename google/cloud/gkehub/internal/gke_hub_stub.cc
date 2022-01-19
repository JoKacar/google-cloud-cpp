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

#include "google/cloud/gkehub/internal/gke_hub_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gkehub/v1/service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gkehub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GkeHubStub::~GkeHubStub() = default;

StatusOr<google::cloud::gkehub::v1::ListMembershipsResponse>
DefaultGkeHubStub::ListMemberships(
  grpc::ClientContext& client_context,
  google::cloud::gkehub::v1::ListMembershipsRequest const& request) {
    google::cloud::gkehub::v1::ListMembershipsResponse response;
    auto status =
        grpc_stub_->ListMemberships(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::cloud::gkehub::v1::ListFeaturesResponse>
DefaultGkeHubStub::ListFeatures(
  grpc::ClientContext& client_context,
  google::cloud::gkehub::v1::ListFeaturesRequest const& request) {
    google::cloud::gkehub::v1::ListFeaturesResponse response;
    auto status =
        grpc_stub_->ListFeatures(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::cloud::gkehub::v1::Membership>
DefaultGkeHubStub::GetMembership(
  grpc::ClientContext& client_context,
  google::cloud::gkehub::v1::GetMembershipRequest const& request) {
    google::cloud::gkehub::v1::Membership response;
    auto status =
        grpc_stub_->GetMembership(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::cloud::gkehub::v1::Feature>
DefaultGkeHubStub::GetFeature(
  grpc::ClientContext& client_context,
  google::cloud::gkehub::v1::GetFeatureRequest const& request) {
    google::cloud::gkehub::v1::Feature response;
    auto status =
        grpc_stub_->GetFeature(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultGkeHubStub::AsyncCreateMembership(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::CreateMembershipRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::gkehub::v1::CreateMembershipRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateMembership(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultGkeHubStub::AsyncCreateFeature(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::CreateFeatureRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::gkehub::v1::CreateFeatureRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateFeature(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultGkeHubStub::AsyncDeleteMembership(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::DeleteMembershipRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::gkehub::v1::DeleteMembershipRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteMembership(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultGkeHubStub::AsyncDeleteFeature(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::DeleteFeatureRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::gkehub::v1::DeleteFeatureRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteFeature(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultGkeHubStub::AsyncUpdateMembership(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::UpdateMembershipRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::gkehub::v1::UpdateMembershipRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateMembership(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultGkeHubStub::AsyncUpdateFeature(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::UpdateFeatureRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::gkehub::v1::UpdateFeatureRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateFeature(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse>
DefaultGkeHubStub::GenerateConnectManifest(
  grpc::ClientContext& client_context,
  google::cloud::gkehub::v1::GenerateConnectManifestRequest const& request) {
    google::cloud::gkehub::v1::GenerateConnectManifestResponse response;
    auto status =
        grpc_stub_->GenerateConnectManifest(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultGkeHubStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultGkeHubStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::longrunning::CancelOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncCancelOperation(context, request, cq);
      },
      request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub_internal
}  // namespace cloud
}  // namespace google
