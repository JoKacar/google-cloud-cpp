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
// source: google/cloud/compute/images/v1/images.proto

#include "google/cloud/compute/images/v1/images_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_images_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ImagesClient::ImagesClient(ExperimentalTag,
                           std::shared_ptr<ImagesConnection> connection,
                           Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ImagesClient::~ImagesClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesClient::DeleteImages(std::string const& project, std::string const& image,
                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::images::v1::DeleteImagesRequest request;
  request.set_project(project);
  request.set_image(image);
  return connection_->DeleteImages(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesClient::DeleteImages(
    google::cloud::cpp::compute::images::v1::DeleteImagesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteImages(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesClient::Deprecate(
    std::string const& project, std::string const& image,
    google::cloud::cpp::compute::v1::DeprecationStatus const&
        deprecation_status_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::images::v1::DeprecateRequest request;
  request.set_project(project);
  request.set_image(image);
  *request.mutable_deprecation_status_resource() = deprecation_status_resource;
  return connection_->Deprecate(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesClient::Deprecate(
    google::cloud::cpp::compute::images::v1::DeprecateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Deprecate(request);
}

StatusOr<google::cloud::cpp::compute::v1::Image> ImagesClient::GetImages(
    std::string const& project, std::string const& image, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::images::v1::GetImagesRequest request;
  request.set_project(project);
  request.set_image(image);
  return connection_->GetImages(request);
}

StatusOr<google::cloud::cpp::compute::v1::Image> ImagesClient::GetImages(
    google::cloud::cpp::compute::images::v1::GetImagesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetImages(request);
}

StatusOr<google::cloud::cpp::compute::v1::Image> ImagesClient::GetFromFamily(
    std::string const& project, std::string const& family, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::images::v1::GetFromFamilyRequest request;
  request.set_project(project);
  request.set_family(family);
  return connection_->GetFromFamily(request);
}

StatusOr<google::cloud::cpp::compute::v1::Image> ImagesClient::GetFromFamily(
    google::cloud::cpp::compute::images::v1::GetFromFamilyRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetFromFamily(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy> ImagesClient::GetIamPolicy(
    std::string const& project, std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::images::v1::GetIamPolicyRequest request;
  request.set_project(project);
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy> ImagesClient::GetIamPolicy(
    google::cloud::cpp::compute::images::v1::GetIamPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesClient::InsertImages(
    std::string const& project,
    google::cloud::cpp::compute::v1::Image const& image_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::images::v1::InsertImagesRequest request;
  request.set_project(project);
  *request.mutable_image_resource() = image_resource;
  return connection_->InsertImages(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesClient::InsertImages(
    google::cloud::cpp::compute::images::v1::InsertImagesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertImages(request);
}

StreamRange<google::cloud::cpp::compute::v1::Image> ImagesClient::ListImages(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::images::v1::ListImagesRequest request;
  request.set_project(project);
  return connection_->ListImages(request);
}

StreamRange<google::cloud::cpp::compute::v1::Image> ImagesClient::ListImages(
    google::cloud::cpp::compute::images::v1::ListImagesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListImages(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesClient::PatchImages(
    std::string const& project, std::string const& image,
    google::cloud::cpp::compute::v1::Image const& image_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::images::v1::PatchImagesRequest request;
  request.set_project(project);
  request.set_image(image);
  *request.mutable_image_resource() = image_resource;
  return connection_->PatchImages(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesClient::PatchImages(
    google::cloud::cpp::compute::images::v1::PatchImagesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchImages(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy> ImagesClient::SetIamPolicy(
    std::string const& project, std::string const& resource,
    google::cloud::cpp::compute::v1::GlobalSetPolicyRequest const&
        global_set_policy_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::images::v1::SetIamPolicyRequest request;
  request.set_project(project);
  request.set_resource(resource);
  *request.mutable_global_set_policy_request_resource() =
      global_set_policy_request_resource;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy> ImagesClient::SetIamPolicy(
    google::cloud::cpp::compute::images::v1::SetIamPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesClient::SetLabels(
    std::string const& project, std::string const& resource,
    google::cloud::cpp::compute::v1::GlobalSetLabelsRequest const&
        global_set_labels_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::images::v1::SetLabelsRequest request;
  request.set_project(project);
  request.set_resource(resource);
  *request.mutable_global_set_labels_request_resource() =
      global_set_labels_request_resource;
  return connection_->SetLabels(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesClient::SetLabels(
    google::cloud::cpp::compute::images::v1::SetLabelsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetLabels(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ImagesClient::TestIamPermissions(
    std::string const& project, std::string const& resource,
    google::cloud::cpp::compute::v1::TestPermissionsRequest const&
        test_permissions_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::images::v1::TestIamPermissionsRequest request;
  request.set_project(project);
  request.set_resource(resource);
  *request.mutable_test_permissions_request_resource() =
      test_permissions_request_resource;
  return connection_->TestIamPermissions(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ImagesClient::TestIamPermissions(
    google::cloud::cpp::compute::images::v1::TestIamPermissionsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_images_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
