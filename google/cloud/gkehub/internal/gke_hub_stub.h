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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_INTERNAL_GKE_HUB_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_INTERNAL_GKE_HUB_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/gkehub/v1/service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gkehub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GkeHubStub {
 public:
  virtual ~GkeHubStub() = 0;

  virtual StatusOr<google::cloud::gkehub::v1::ListMembershipsResponse> ListMemberships(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::ListMembershipsRequest const& request) = 0;

  virtual StatusOr<google::cloud::gkehub::v1::ListFeaturesResponse> ListFeatures(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::ListFeaturesRequest const& request) = 0;

  virtual StatusOr<google::cloud::gkehub::v1::Membership> GetMembership(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::GetMembershipRequest const& request) = 0;

  virtual StatusOr<google::cloud::gkehub::v1::Feature> GetFeature(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::GetFeatureRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateMembership(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::CreateMembershipRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateFeature(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::CreateFeatureRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteMembership(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::DeleteMembershipRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteFeature(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::DeleteFeatureRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateMembership(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::UpdateMembershipRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateFeature(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gkehub::v1::UpdateFeatureRequest const& request) = 0;

  virtual StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse> GenerateConnectManifest(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::GenerateConnectManifestRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultGkeHubStub : public GkeHubStub {
 public:
  DefaultGkeHubStub(
      std::unique_ptr<google::cloud::gkehub::v1::GkeHub::StubInterface> grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface> operations)
      : grpc_stub_(std::move(grpc_stub)),
        operations_(std::move(operations)) {}

  StatusOr<google::cloud::gkehub::v1::ListMembershipsResponse>
  ListMemberships(
    grpc::ClientContext& client_context,
    google::cloud::gkehub::v1::ListMembershipsRequest const& request) override;

  StatusOr<google::cloud::gkehub::v1::ListFeaturesResponse>
  ListFeatures(
    grpc::ClientContext& client_context,
    google::cloud::gkehub::v1::ListFeaturesRequest const& request) override;

  StatusOr<google::cloud::gkehub::v1::Membership>
  GetMembership(
    grpc::ClientContext& client_context,
    google::cloud::gkehub::v1::GetMembershipRequest const& request) override;

  StatusOr<google::cloud::gkehub::v1::Feature>
  GetFeature(
    grpc::ClientContext& client_context,
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

  StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse>
  GenerateConnectManifest(
    grpc::ClientContext& client_context,
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
  std::unique_ptr<google::cloud::gkehub::v1::GkeHub::StubInterface> grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_INTERNAL_GKE_HUB_STUB_H
