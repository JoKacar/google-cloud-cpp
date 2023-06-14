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
// source: google/cloud/networkconnectivity/v1/hub.proto

#include "google/cloud/networkconnectivity/v1/internal/hub_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/networkconnectivity/v1/hub.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace networkconnectivity_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

HubServiceStub::~HubServiceStub() = default;

StatusOr<google::cloud::networkconnectivity::v1::ListHubsResponse>
DefaultHubServiceStub::ListHubs(
    grpc::ClientContext& client_context,
    google::cloud::networkconnectivity::v1::ListHubsRequest const& request) {
  google::cloud::networkconnectivity::v1::ListHubsResponse response;
  auto status = grpc_stub_->ListHubs(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networkconnectivity::v1::Hub>
DefaultHubServiceStub::GetHub(
    grpc::ClientContext& client_context,
    google::cloud::networkconnectivity::v1::GetHubRequest const& request) {
  google::cloud::networkconnectivity::v1::Hub response;
  auto status = grpc_stub_->GetHub(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultHubServiceStub::AsyncCreateHub(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::CreateHubRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkconnectivity::v1::CreateHubRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkconnectivity::v1::CreateHubRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateHub(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultHubServiceStub::AsyncUpdateHub(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::UpdateHubRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkconnectivity::v1::UpdateHubRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkconnectivity::v1::UpdateHubRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateHub(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultHubServiceStub::AsyncDeleteHub(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::DeleteHubRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkconnectivity::v1::DeleteHubRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkconnectivity::v1::DeleteHubRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteHub(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::networkconnectivity::v1::ListSpokesResponse>
DefaultHubServiceStub::ListSpokes(
    grpc::ClientContext& client_context,
    google::cloud::networkconnectivity::v1::ListSpokesRequest const& request) {
  google::cloud::networkconnectivity::v1::ListSpokesResponse response;
  auto status = grpc_stub_->ListSpokes(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::networkconnectivity::v1::Spoke>
DefaultHubServiceStub::GetSpoke(
    grpc::ClientContext& client_context,
    google::cloud::networkconnectivity::v1::GetSpokeRequest const& request) {
  google::cloud::networkconnectivity::v1::Spoke response;
  auto status = grpc_stub_->GetSpoke(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultHubServiceStub::AsyncCreateSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::CreateSpokeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkconnectivity::v1::CreateSpokeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkconnectivity::v1::CreateSpokeRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateSpoke(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultHubServiceStub::AsyncUpdateSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::UpdateSpokeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkconnectivity::v1::UpdateSpokeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkconnectivity::v1::UpdateSpokeRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateSpoke(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultHubServiceStub::AsyncDeleteSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::DeleteSpokeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::networkconnectivity::v1::DeleteSpokeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::networkconnectivity::v1::DeleteSpokeRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteSpoke(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultHubServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultHubServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
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
}  // namespace networkconnectivity_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
