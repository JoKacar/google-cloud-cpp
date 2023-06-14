// Copyright 2023 Google LLC
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
// source: google/cloud/aiplatform/v1/vizier_service.proto

#include "google/cloud/aiplatform/v1/internal/vizier_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/vizier_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VizierServiceStub::~VizierServiceStub() = default;

StatusOr<google::cloud::aiplatform::v1::Study>
DefaultVizierServiceStub::CreateStudy(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::CreateStudyRequest const& request) {
  google::cloud::aiplatform::v1::Study response;
  auto status = grpc_stub_->CreateStudy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::Study>
DefaultVizierServiceStub::GetStudy(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::GetStudyRequest const& request) {
  google::cloud::aiplatform::v1::Study response;
  auto status = grpc_stub_->GetStudy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListStudiesResponse>
DefaultVizierServiceStub::ListStudies(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::ListStudiesRequest const& request) {
  google::cloud::aiplatform::v1::ListStudiesResponse response;
  auto status = grpc_stub_->ListStudies(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultVizierServiceStub::DeleteStudy(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::DeleteStudyRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteStudy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::aiplatform::v1::Study>
DefaultVizierServiceStub::LookupStudy(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::LookupStudyRequest const& request) {
  google::cloud::aiplatform::v1::Study response;
  auto status = grpc_stub_->LookupStudy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVizierServiceStub::AsyncSuggestTrials(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::SuggestTrialsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::SuggestTrialsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::SuggestTrialsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncSuggestTrials(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::Trial>
DefaultVizierServiceStub::CreateTrial(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::CreateTrialRequest const& request) {
  google::cloud::aiplatform::v1::Trial response;
  auto status = grpc_stub_->CreateTrial(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::Trial>
DefaultVizierServiceStub::GetTrial(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::GetTrialRequest const& request) {
  google::cloud::aiplatform::v1::Trial response;
  auto status = grpc_stub_->GetTrial(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListTrialsResponse>
DefaultVizierServiceStub::ListTrials(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::ListTrialsRequest const& request) {
  google::cloud::aiplatform::v1::ListTrialsResponse response;
  auto status = grpc_stub_->ListTrials(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::Trial>
DefaultVizierServiceStub::AddTrialMeasurement(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::AddTrialMeasurementRequest const& request) {
  google::cloud::aiplatform::v1::Trial response;
  auto status =
      grpc_stub_->AddTrialMeasurement(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::Trial>
DefaultVizierServiceStub::CompleteTrial(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::CompleteTrialRequest const& request) {
  google::cloud::aiplatform::v1::Trial response;
  auto status = grpc_stub_->CompleteTrial(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultVizierServiceStub::DeleteTrial(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::DeleteTrialRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteTrial(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultVizierServiceStub::AsyncCheckTrialEarlyStoppingState(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::
                 CheckTrialEarlyStoppingStateRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCheckTrialEarlyStoppingState(context, request,
                                                             cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::Trial>
DefaultVizierServiceStub::StopTrial(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::StopTrialRequest const& request) {
  google::cloud::aiplatform::v1::Trial response;
  auto status = grpc_stub_->StopTrial(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListOptimalTrialsResponse>
DefaultVizierServiceStub::ListOptimalTrials(
    grpc::ClientContext& client_context,
    google::cloud::aiplatform::v1::ListOptimalTrialsRequest const& request) {
  google::cloud::aiplatform::v1::ListOptimalTrialsResponse response;
  auto status =
      grpc_stub_->ListOptimalTrials(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVizierServiceStub::AsyncGetOperation(
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

future<Status> DefaultVizierServiceStub::AsyncCancelOperation(
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
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
