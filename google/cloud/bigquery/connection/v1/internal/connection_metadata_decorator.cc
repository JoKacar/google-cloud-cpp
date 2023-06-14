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
// source: google/cloud/bigquery/connection/v1/connection.proto

#include "google/cloud/bigquery/connection/v1/internal/connection_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/bigquery/connection/v1/connection.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace bigquery_connection_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConnectionServiceMetadata::ConnectionServiceMetadata(
    std::shared_ptr<ConnectionServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceMetadata::CreateConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::CreateConnectionRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateConnection(context, request);
}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceMetadata::GetConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::GetConnectionRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetConnection(context, request);
}

StatusOr<google::cloud::bigquery::connection::v1::ListConnectionsResponse>
ConnectionServiceMetadata::ListConnections(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::ListConnectionsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListConnections(context, request);
}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceMetadata::UpdateConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::UpdateConnectionRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->UpdateConnection(context, request);
}

Status ConnectionServiceMetadata::DeleteConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::DeleteConnectionRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteConnection(context, request);
}

StatusOr<google::iam::v1::Policy> ConnectionServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> ConnectionServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ConnectionServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->TestIamPermissions(context, request);
}

void ConnectionServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void ConnectionServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace bigquery_connection_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
