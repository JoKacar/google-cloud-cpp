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
// source: google/cloud/baremetalsolution/v2/baremetalsolution.proto

#include "google/cloud/baremetalsolution/v2/internal/bare_metal_solution_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/baremetalsolution/v2/baremetalsolution.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace baremetalsolution_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BareMetalSolutionMetadata::BareMetalSolutionMetadata(
    std::shared_ptr<BareMetalSolutionStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::baremetalsolution::v2::ListInstancesResponse>
BareMetalSolutionMetadata::ListInstances(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListInstancesRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListInstances(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::Instance>
BareMetalSolutionMetadata::GetInstance(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetInstanceRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetInstance(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::UpdateInstanceRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("instance.name=", request.instance().name()));
  return child_->AsyncUpdateInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncResetInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::ResetInstanceRequest const& request) {
  SetMetadata(*context, absl::StrCat("name=", request.name()));
  return child_->AsyncResetInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncStartInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::StartInstanceRequest const& request) {
  SetMetadata(*context, absl::StrCat("name=", request.name()));
  return child_->AsyncStartInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncStopInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::StopInstanceRequest const& request) {
  SetMetadata(*context, absl::StrCat("name=", request.name()));
  return child_->AsyncStopInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncDetachLun(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::DetachLunRequest const& request) {
  SetMetadata(*context, absl::StrCat("instance=", request.instance()));
  return child_->AsyncDetachLun(cq, std::move(context), request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListVolumesResponse>
BareMetalSolutionMetadata::ListVolumes(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListVolumesRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListVolumes(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::Volume>
BareMetalSolutionMetadata::GetVolume(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetVolumeRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetVolume(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncUpdateVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::UpdateVolumeRequest const& request) {
  SetMetadata(*context, absl::StrCat("volume.name=", request.volume().name()));
  return child_->AsyncUpdateVolume(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncResizeVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::ResizeVolumeRequest const& request) {
  SetMetadata(*context, absl::StrCat("volume=", request.volume()));
  return child_->AsyncResizeVolume(cq, std::move(context), request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListNetworksResponse>
BareMetalSolutionMetadata::ListNetworks(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListNetworksRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListNetworks(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListNetworkUsageResponse>
BareMetalSolutionMetadata::ListNetworkUsage(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListNetworkUsageRequest const&
        request) {
  SetMetadata(context, absl::StrCat("location=", request.location()));
  return child_->ListNetworkUsage(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::Network>
BareMetalSolutionMetadata::GetNetwork(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetNetworkRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetNetwork(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncUpdateNetwork(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::UpdateNetworkRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("network.name=", request.network().name()));
  return child_->AsyncUpdateNetwork(cq, std::move(context), request);
}

StatusOr<google::cloud::baremetalsolution::v2::Lun>
BareMetalSolutionMetadata::GetLun(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetLunRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetLun(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListLunsResponse>
BareMetalSolutionMetadata::ListLuns(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListLunsRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListLuns(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::NfsShare>
BareMetalSolutionMetadata::GetNfsShare(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetNfsShareRequest const& request) {
  SetMetadata(context, absl::StrCat("name=", request.name()));
  return child_->GetNfsShare(context, request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListNfsSharesResponse>
BareMetalSolutionMetadata::ListNfsShares(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListNfsSharesRequest const& request) {
  SetMetadata(context, absl::StrCat("parent=", request.parent()));
  return child_->ListNfsShares(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncUpdateNfsShare(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("nfs_share.name=", request.nfs_share().name()));
  return child_->AsyncUpdateNfsShare(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> BareMetalSolutionMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void BareMetalSolutionMetadata::SetMetadata(grpc::ClientContext& context,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void BareMetalSolutionMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace baremetalsolution_v2_internal
}  // namespace cloud
}  // namespace google
