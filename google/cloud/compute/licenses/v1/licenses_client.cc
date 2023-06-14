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
// source: google/cloud/compute/licenses/v1/licenses.proto

#include "google/cloud/compute/licenses/v1/licenses_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_licenses_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LicensesClient::LicensesClient(ExperimentalTag,
                               std::shared_ptr<LicensesConnection> connection,
                               Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
LicensesClient::~LicensesClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesClient::DeleteLicenses(std::string const& project,
                               std::string const& license, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::licenses::v1::DeleteLicensesRequest request;
  request.set_project(project);
  request.set_license(license);
  return connection_->DeleteLicenses(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesClient::DeleteLicenses(
    google::cloud::cpp::compute::licenses::v1::DeleteLicensesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteLicenses(request);
}

StatusOr<google::cloud::cpp::compute::v1::License> LicensesClient::GetLicenses(
    std::string const& project, std::string const& license, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::licenses::v1::GetLicensesRequest request;
  request.set_project(project);
  request.set_license(license);
  return connection_->GetLicenses(request);
}

StatusOr<google::cloud::cpp::compute::v1::License> LicensesClient::GetLicenses(
    google::cloud::cpp::compute::licenses::v1::GetLicensesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLicenses(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy> LicensesClient::GetIamPolicy(
    std::string const& project, std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::licenses::v1::GetIamPolicyRequest request;
  request.set_project(project);
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy> LicensesClient::GetIamPolicy(
    google::cloud::cpp::compute::licenses::v1::GetIamPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesClient::InsertLicenses(
    std::string const& project,
    google::cloud::cpp::compute::v1::License const& license_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::licenses::v1::InsertLicensesRequest request;
  request.set_project(project);
  *request.mutable_license_resource() = license_resource;
  return connection_->InsertLicenses(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesClient::InsertLicenses(
    google::cloud::cpp::compute::licenses::v1::InsertLicensesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertLicenses(request);
}

StreamRange<google::cloud::cpp::compute::v1::License>
LicensesClient::ListLicenses(std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::licenses::v1::ListLicensesRequest request;
  request.set_project(project);
  return connection_->ListLicenses(request);
}

StreamRange<google::cloud::cpp::compute::v1::License>
LicensesClient::ListLicenses(
    google::cloud::cpp::compute::licenses::v1::ListLicensesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLicenses(std::move(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy> LicensesClient::SetIamPolicy(
    std::string const& project, std::string const& resource,
    google::cloud::cpp::compute::v1::GlobalSetPolicyRequest const&
        global_set_policy_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::licenses::v1::SetIamPolicyRequest request;
  request.set_project(project);
  request.set_resource(resource);
  *request.mutable_global_set_policy_request_resource() =
      global_set_policy_request_resource;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy> LicensesClient::SetIamPolicy(
    google::cloud::cpp::compute::licenses::v1::SetIamPolicyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
LicensesClient::TestIamPermissions(
    std::string const& project, std::string const& resource,
    google::cloud::cpp::compute::v1::TestPermissionsRequest const&
        test_permissions_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::licenses::v1::TestIamPermissionsRequest request;
  request.set_project(project);
  request.set_resource(resource);
  *request.mutable_test_permissions_request_resource() =
      test_permissions_request_resource;
  return connection_->TestIamPermissions(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
LicensesClient::TestIamPermissions(
    google::cloud::cpp::compute::licenses::v1::TestIamPermissionsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_licenses_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
