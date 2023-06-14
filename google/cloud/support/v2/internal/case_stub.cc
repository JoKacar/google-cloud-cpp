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
// source: google/cloud/support/v2/case_service.proto

#include "google/cloud/support/v2/internal/case_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/support/v2/case_service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace support_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CaseServiceStub::~CaseServiceStub() = default;

StatusOr<google::cloud::support::v2::Case> DefaultCaseServiceStub::GetCase(
    grpc::ClientContext& client_context,
    google::cloud::support::v2::GetCaseRequest const& request) {
  google::cloud::support::v2::Case response;
  auto status = grpc_stub_->GetCase(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::support::v2::ListCasesResponse>
DefaultCaseServiceStub::ListCases(
    grpc::ClientContext& client_context,
    google::cloud::support::v2::ListCasesRequest const& request) {
  google::cloud::support::v2::ListCasesResponse response;
  auto status = grpc_stub_->ListCases(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::support::v2::SearchCasesResponse>
DefaultCaseServiceStub::SearchCases(
    grpc::ClientContext& client_context,
    google::cloud::support::v2::SearchCasesRequest const& request) {
  google::cloud::support::v2::SearchCasesResponse response;
  auto status = grpc_stub_->SearchCases(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::support::v2::Case> DefaultCaseServiceStub::CreateCase(
    grpc::ClientContext& client_context,
    google::cloud::support::v2::CreateCaseRequest const& request) {
  google::cloud::support::v2::Case response;
  auto status = grpc_stub_->CreateCase(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::support::v2::Case> DefaultCaseServiceStub::UpdateCase(
    grpc::ClientContext& client_context,
    google::cloud::support::v2::UpdateCaseRequest const& request) {
  google::cloud::support::v2::Case response;
  auto status = grpc_stub_->UpdateCase(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::support::v2::Case> DefaultCaseServiceStub::EscalateCase(
    grpc::ClientContext& client_context,
    google::cloud::support::v2::EscalateCaseRequest const& request) {
  google::cloud::support::v2::Case response;
  auto status = grpc_stub_->EscalateCase(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::support::v2::Case> DefaultCaseServiceStub::CloseCase(
    grpc::ClientContext& client_context,
    google::cloud::support::v2::CloseCaseRequest const& request) {
  google::cloud::support::v2::Case response;
  auto status = grpc_stub_->CloseCase(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::support::v2::SearchCaseClassificationsResponse>
DefaultCaseServiceStub::SearchCaseClassifications(
    grpc::ClientContext& client_context,
    google::cloud::support::v2::SearchCaseClassificationsRequest const&
        request) {
  google::cloud::support::v2::SearchCaseClassificationsResponse response;
  auto status = grpc_stub_->SearchCaseClassifications(&client_context, request,
                                                      &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
