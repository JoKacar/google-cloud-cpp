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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_INTERNAL_GKE_HUB_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_INTERNAL_GKE_HUB_AUTH_DECORATOR_H

#include "google/cloud/gkehub/internal/gke_hub_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace gkehub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GkeHubAuth : public GkeHubStub {
 public:
  ~GkeHubAuth() override = default;
  GkeHubAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<GkeHubStub> child);

  StatusOr<google::cloud::gkehub::v1::ListMembershipsResponse> ListMemberships(
      grpc::ClientContext& context,
      google::cloud::gkehub::v1::ListMembershipsRequest const& request) override;

  StatusOr<google::cloud::gkehub::v1::ListFeaturesResponse> ListFeatures(
      grpc::ClientContext& context,
      google::cloud::gkehub::v1::ListFeaturesRequest const& request) override;

  StatusOr<google::cloud::gkehub::v1::Membership> GetMembership(
      grpc::ClientContext& context,
      google::cloud::gkehub::v1::GetMembershipRequest const& request) override;

  StatusOr<google::cloud::gkehub::v1::Feature> GetFeature(
      grpc::ClientContext& context,
      google::cloud::gkehub::v1::GetFeatureRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateMembership(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::CreateMembershipRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateFeature(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::CreateFeatureRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteMembership(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::DeleteMembershipRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFeature(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::DeleteFeatureRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateMembership(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::UpdateMembershipRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateFeature(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::UpdateFeatureRequest const& request) override;

  StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse> GenerateConnectManifest(
      grpc::ClientContext& context,
      google::cloud::gkehub::v1::GenerateConnectManifestRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;
 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<GkeHubStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_INTERNAL_GKE_HUB_AUTH_DECORATOR_H
