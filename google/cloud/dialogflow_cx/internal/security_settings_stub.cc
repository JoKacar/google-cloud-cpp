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
// source: google/cloud/dialogflow/cx/v3/security_settings.proto

#include "google/cloud/dialogflow_cx/internal/security_settings_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/security_settings.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecuritySettingsServiceStub::~SecuritySettingsServiceStub() = default;

StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
DefaultSecuritySettingsServiceStub::CreateSecuritySettings(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::CreateSecuritySettingsRequest const&
        request) {
  google::cloud::dialogflow::cx::v3::SecuritySettings response;
  auto status =
      grpc_stub_->CreateSecuritySettings(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
DefaultSecuritySettingsServiceStub::GetSecuritySettings(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::GetSecuritySettingsRequest const&
        request) {
  google::cloud::dialogflow::cx::v3::SecuritySettings response;
  auto status =
      grpc_stub_->GetSecuritySettings(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
DefaultSecuritySettingsServiceStub::UpdateSecuritySettings(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::UpdateSecuritySettingsRequest const&
        request) {
  google::cloud::dialogflow::cx::v3::SecuritySettings response;
  auto status =
      grpc_stub_->UpdateSecuritySettings(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::ListSecuritySettingsResponse>
DefaultSecuritySettingsServiceStub::ListSecuritySettings(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::ListSecuritySettingsRequest const&
        request) {
  google::cloud::dialogflow::cx::v3::ListSecuritySettingsResponse response;
  auto status =
      grpc_stub_->ListSecuritySettings(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultSecuritySettingsServiceStub::DeleteSecuritySettings(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::DeleteSecuritySettingsRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteSecuritySettings(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
