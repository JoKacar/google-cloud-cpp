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
// source: google/cloud/orchestration/airflow/service/v1/environments.proto

#include "google/cloud/composer/v1/environments_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace composer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EnvironmentsClient::EnvironmentsClient(
    std::shared_ptr<EnvironmentsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
EnvironmentsClient::~EnvironmentsClient() = default;

future<
    StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
EnvironmentsClient::CreateEnvironment(
    std::string const& parent,
    google::cloud::orchestration::airflow::service::v1::Environment const&
        environment,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::orchestration::airflow::service::v1::CreateEnvironmentRequest
      request;
  request.set_parent(parent);
  *request.mutable_environment() = environment;
  return connection_->CreateEnvironment(request);
}

future<
    StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
EnvironmentsClient::CreateEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        CreateEnvironmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEnvironment(request);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
EnvironmentsClient::GetEnvironment(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::orchestration::airflow::service::v1::GetEnvironmentRequest
      request;
  request.set_name(name);
  return connection_->GetEnvironment(request);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
EnvironmentsClient::GetEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        GetEnvironmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEnvironment(request);
}

StreamRange<google::cloud::orchestration::airflow::service::v1::Environment>
EnvironmentsClient::ListEnvironments(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::orchestration::airflow::service::v1::ListEnvironmentsRequest
      request;
  request.set_parent(parent);
  return connection_->ListEnvironments(request);
}

StreamRange<google::cloud::orchestration::airflow::service::v1::Environment>
EnvironmentsClient::ListEnvironments(
    google::cloud::orchestration::airflow::service::v1::ListEnvironmentsRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListEnvironments(std::move(request));
}

future<
    StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
EnvironmentsClient::UpdateEnvironment(
    std::string const& name,
    google::cloud::orchestration::airflow::service::v1::Environment const&
        environment,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::orchestration::airflow::service::v1::UpdateEnvironmentRequest
      request;
  request.set_name(name);
  *request.mutable_environment() = environment;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateEnvironment(request);
}

future<
    StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
EnvironmentsClient::UpdateEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        UpdateEnvironmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateEnvironment(request);
}

future<StatusOr<
    google::cloud::orchestration::airflow::service::v1::OperationMetadata>>
EnvironmentsClient::DeleteEnvironment(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::orchestration::airflow::service::v1::DeleteEnvironmentRequest
      request;
  request.set_name(name);
  return connection_->DeleteEnvironment(request);
}

future<StatusOr<
    google::cloud::orchestration::airflow::service::v1::OperationMetadata>>
EnvironmentsClient::DeleteEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        DeleteEnvironmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEnvironment(request);
}

future<StatusOr<
    google::cloud::orchestration::airflow::service::v1::SaveSnapshotResponse>>
EnvironmentsClient::SaveSnapshot(
    google::cloud::orchestration::airflow::service::v1::
        SaveSnapshotRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SaveSnapshot(request);
}

future<StatusOr<
    google::cloud::orchestration::airflow::service::v1::LoadSnapshotResponse>>
EnvironmentsClient::LoadSnapshot(
    google::cloud::orchestration::airflow::service::v1::
        LoadSnapshotRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->LoadSnapshot(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
