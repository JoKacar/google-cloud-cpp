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

#include "google/cloud/bigquery/connection/v1/connection_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace bigquery_connection_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConnectionServiceClient::ConnectionServiceClient(
    std::shared_ptr<ConnectionServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ConnectionServiceClient::~ConnectionServiceClient() = default;

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceClient::CreateConnection(
    std::string const& parent,
    google::cloud::bigquery::connection::v1::Connection const& connection,
    std::string const& connection_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::connection::v1::CreateConnectionRequest request;
  request.set_parent(parent);
  *request.mutable_connection() = connection;
  request.set_connection_id(connection_id);
  return connection_->CreateConnection(request);
}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceClient::CreateConnection(
    google::cloud::bigquery::connection::v1::CreateConnectionRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateConnection(request);
}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceClient::GetConnection(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::connection::v1::GetConnectionRequest request;
  request.set_name(name);
  return connection_->GetConnection(request);
}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceClient::GetConnection(
    google::cloud::bigquery::connection::v1::GetConnectionRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetConnection(request);
}

StreamRange<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceClient::ListConnections(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::connection::v1::ListConnectionsRequest request;
  request.set_parent(parent);
  return connection_->ListConnections(request);
}

StreamRange<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceClient::ListConnections(
    google::cloud::bigquery::connection::v1::ListConnectionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListConnections(std::move(request));
}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceClient::UpdateConnection(
    std::string const& name,
    google::cloud::bigquery::connection::v1::Connection const& connection,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::connection::v1::UpdateConnectionRequest request;
  request.set_name(name);
  *request.mutable_connection() = connection;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateConnection(request);
}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceClient::UpdateConnection(
    google::cloud::bigquery::connection::v1::UpdateConnectionRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateConnection(request);
}

Status ConnectionServiceClient::DeleteConnection(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::bigquery::connection::v1::DeleteConnectionRequest request;
  request.set_name(name);
  return connection_->DeleteConnection(request);
}

Status ConnectionServiceClient::DeleteConnection(
    google::cloud::bigquery::connection::v1::DeleteConnectionRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteConnection(request);
}

StatusOr<google::iam::v1::Policy> ConnectionServiceClient::GetIamPolicy(
    std::string const& resource,
    google::iam::v1::GetPolicyOptions const& options, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest request;
  request.set_resource(resource);
  *request.mutable_options() = options;
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> ConnectionServiceClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> ConnectionServiceClient::SetIamPolicy(
    std::string const& resource, google::iam::v1::Policy const& policy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::SetIamPolicyRequest request;
  request.set_resource(resource);
  *request.mutable_policy() = policy;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> ConnectionServiceClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ConnectionServiceClient::TestIamPermissions(
    std::string const& resource, std::vector<std::string> const& permissions,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::TestIamPermissionsRequest request;
  request.set_resource(resource);
  *request.mutable_permissions() = {permissions.begin(), permissions.end()};
  return connection_->TestIamPermissions(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ConnectionServiceClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_connection_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
