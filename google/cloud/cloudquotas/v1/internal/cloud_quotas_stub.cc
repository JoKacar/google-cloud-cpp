// Copyright 2024 Google LLC
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
// source: google/api/cloudquotas/v1/cloudquotas.proto

#include "google/cloud/cloudquotas/v1/internal/cloud_quotas_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/api/cloudquotas/v1/cloudquotas.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace cloudquotas_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudQuotasStub::~CloudQuotasStub() = default;

StatusOr<google::api::cloudquotas::v1::ListQuotaInfosResponse>
DefaultCloudQuotasStub::ListQuotaInfos(
    grpc::ClientContext& context,
    google::api::cloudquotas::v1::ListQuotaInfosRequest const& request) {
  google::api::cloudquotas::v1::ListQuotaInfosResponse response;
  auto status = grpc_stub_->ListQuotaInfos(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::api::cloudquotas::v1::QuotaInfo>
DefaultCloudQuotasStub::GetQuotaInfo(
    grpc::ClientContext& context,
    google::api::cloudquotas::v1::GetQuotaInfoRequest const& request) {
  google::api::cloudquotas::v1::QuotaInfo response;
  auto status = grpc_stub_->GetQuotaInfo(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::api::cloudquotas::v1::ListQuotaPreferencesResponse>
DefaultCloudQuotasStub::ListQuotaPreferences(
    grpc::ClientContext& context,
    google::api::cloudquotas::v1::ListQuotaPreferencesRequest const& request) {
  google::api::cloudquotas::v1::ListQuotaPreferencesResponse response;
  auto status = grpc_stub_->ListQuotaPreferences(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::api::cloudquotas::v1::QuotaPreference>
DefaultCloudQuotasStub::GetQuotaPreference(
    grpc::ClientContext& context,
    google::api::cloudquotas::v1::GetQuotaPreferenceRequest const& request) {
  google::api::cloudquotas::v1::QuotaPreference response;
  auto status = grpc_stub_->GetQuotaPreference(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::api::cloudquotas::v1::QuotaPreference>
DefaultCloudQuotasStub::CreateQuotaPreference(
    grpc::ClientContext& context,
    google::api::cloudquotas::v1::CreateQuotaPreferenceRequest const& request) {
  google::api::cloudquotas::v1::QuotaPreference response;
  auto status = grpc_stub_->CreateQuotaPreference(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::api::cloudquotas::v1::QuotaPreference>
DefaultCloudQuotasStub::UpdateQuotaPreference(
    grpc::ClientContext& context,
    google::api::cloudquotas::v1::UpdateQuotaPreferenceRequest const& request) {
  google::api::cloudquotas::v1::QuotaPreference response;
  auto status = grpc_stub_->UpdateQuotaPreference(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudquotas_v1_internal
}  // namespace cloud
}  // namespace google
