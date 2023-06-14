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
// source:
// google/cloud/compute/global_organization_operations/v1/global_organization_operations.proto

#include "google/cloud/compute/global_organization_operations/v1/global_organization_operations_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_global_organization_operations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GlobalOrganizationOperationsClient::GlobalOrganizationOperationsClient(
    ExperimentalTag,
    std::shared_ptr<GlobalOrganizationOperationsConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
GlobalOrganizationOperationsClient::~GlobalOrganizationOperationsClient() =
    default;

Status GlobalOrganizationOperationsClient::DeleteGlobalOrganizationOperations(
    std::string const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::global_organization_operations::v1::
      DeleteGlobalOrganizationOperationsRequest request;
  request.set_operation(operation);
  return connection_->DeleteGlobalOrganizationOperations(request);
}

Status GlobalOrganizationOperationsClient::DeleteGlobalOrganizationOperations(
    google::cloud::cpp::compute::global_organization_operations::v1::
        DeleteGlobalOrganizationOperationsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteGlobalOrganizationOperations(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
GlobalOrganizationOperationsClient::GetGlobalOrganizationOperations(
    std::string const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::global_organization_operations::v1::
      GetGlobalOrganizationOperationsRequest request;
  request.set_operation(operation);
  return connection_->GetGlobalOrganizationOperations(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
GlobalOrganizationOperationsClient::GetGlobalOrganizationOperations(
    google::cloud::cpp::compute::global_organization_operations::v1::
        GetGlobalOrganizationOperationsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetGlobalOrganizationOperations(request);
}

StreamRange<google::cloud::cpp::compute::v1::Operation>
GlobalOrganizationOperationsClient::ListGlobalOrganizationOperations(
    google::cloud::cpp::compute::global_organization_operations::v1::
        ListGlobalOrganizationOperationsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListGlobalOrganizationOperations(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_organization_operations_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
