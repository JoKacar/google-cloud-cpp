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
// source: google/cloud/sql/v1/cloud_sql_connect.proto

#include "google/cloud/sql/v1/internal/sql_connect_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/sql/v1/cloud_sql_connect.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultSqlConnectServiceRestStub::DefaultSqlConnectServiceRestStub(
    Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultSqlConnectServiceRestStub::DefaultSqlConnectServiceRestStub(
    std::shared_ptr<rest_internal::RestClient> service, Options options)
    : service_(std::move(service)), options_(std::move(options)) {}

StatusOr<google::cloud::sql::v1::ConnectSettings>
DefaultSqlConnectServiceRestStub::GetConnectSettings(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::GetConnectSettingsRequest const& request) {
  auto const& opts = options_;
  return rest_internal::Get<google::cloud::sql::v1::ConnectSettings>(
      *service_, rest_context, request, true,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/",
                   "projects", "/", request.project(), "/", "instances", "/",
                   request.instance(), "/", "connectSettings"));
}

StatusOr<google::cloud::sql::v1::GenerateEphemeralCertResponse>
DefaultSqlConnectServiceRestStub::GenerateEphemeralCert(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::sql::v1::GenerateEphemeralCertRequest const& request) {
  auto const& opts = options_;
  return rest_internal::Post<
      google::cloud::sql::v1::GenerateEphemeralCertResponse>(
      *service_, rest_context, request, true,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", opts), "/",
                   "projects", "/", request.project(), "/", "instances", "/",
                   request.instance(), ":generateEphemeralCert"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("public_key", request.public_key()),
           std::make_pair("access_token", request.access_token())}));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google
