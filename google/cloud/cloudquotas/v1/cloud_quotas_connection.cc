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
// source: google/api/cloudquotas/v1/cloudquotas.proto

#include "google/cloud/cloudquotas/v1/cloud_quotas_connection.h"
#include "google/cloud/cloudquotas/v1/cloud_quotas_options.h"
#include "google/cloud/cloudquotas/v1/internal/cloud_quotas_connection_impl.h"
#include "google/cloud/cloudquotas/v1/internal/cloud_quotas_option_defaults.h"
#include "google/cloud/cloudquotas/v1/internal/cloud_quotas_stub_factory.h"
#include "google/cloud/cloudquotas/v1/internal/cloud_quotas_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace cloudquotas_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudQuotasConnection::~CloudQuotasConnection() = default;

StreamRange<google::api::cloudquotas::v1::QuotaInfo>
CloudQuotasConnection::ListQuotaInfos(
    google::api::cloudquotas::v1::
        ListQuotaInfosRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::api::cloudquotas::v1::QuotaInfo>>();
}

StatusOr<google::api::cloudquotas::v1::QuotaInfo>
CloudQuotasConnection::GetQuotaInfo(
    google::api::cloudquotas::v1::GetQuotaInfoRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::api::cloudquotas::v1::QuotaPreference>
CloudQuotasConnection::ListQuotaPreferences(
    google::api::cloudquotas::v1::
        ListQuotaPreferencesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::api::cloudquotas::v1::QuotaPreference>>();
}

StatusOr<google::api::cloudquotas::v1::QuotaPreference>
CloudQuotasConnection::GetQuotaPreference(
    google::api::cloudquotas::v1::GetQuotaPreferenceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::api::cloudquotas::v1::QuotaPreference>
CloudQuotasConnection::CreateQuotaPreference(
    google::api::cloudquotas::v1::CreateQuotaPreferenceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::api::cloudquotas::v1::QuotaPreference>
CloudQuotasConnection::UpdateQuotaPreference(
    google::api::cloudquotas::v1::UpdateQuotaPreferenceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<CloudQuotasConnection> MakeCloudQuotasConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 CloudQuotasPolicyOptionList>(options,
                                                              __func__);
  options =
      cloudquotas_v1_internal::CloudQuotasDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = cloudquotas_v1_internal::CreateDefaultCloudQuotasStub(
      std::move(auth), options);
  return cloudquotas_v1_internal::MakeCloudQuotasTracingConnection(
      std::make_shared<cloudquotas_v1_internal::CloudQuotasConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudquotas_v1
}  // namespace cloud
}  // namespace google
