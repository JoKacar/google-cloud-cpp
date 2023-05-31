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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_IMAGES_V1_INTERNAL_IMAGES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_IMAGES_V1_INTERNAL_IMAGES_TRACING_CONNECTION_H

#include "google/cloud/compute/images/v1/images_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_images_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ImagesTracingConnection
    : public compute_images_v1::ImagesConnection {
 public:
  ~ImagesTracingConnection() override = default;

  explicit ImagesTracingConnection(
    std::shared_ptr<compute_images_v1::ImagesConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteImages(google::cloud::cpp::compute::images::v1::DeleteImagesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  Deprecate(google::cloud::cpp::compute::images::v1::DeprecateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Image>
  GetImages(google::cloud::cpp::compute::images::v1::GetImagesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Image>
  GetFromFamily(google::cloud::cpp::compute::images::v1::GetFromFamilyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy>
  GetIamPolicy(google::cloud::cpp::compute::images::v1::GetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertImages(google::cloud::cpp::compute::images::v1::InsertImagesRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::Image>
  ListImages(google::cloud::cpp::compute::images::v1::ListImagesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchImages(google::cloud::cpp::compute::images::v1::PatchImagesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy>
  SetIamPolicy(google::cloud::cpp::compute::images::v1::SetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetLabels(google::cloud::cpp::compute::images::v1::SetLabelsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::images::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<compute_images_v1::ImagesConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_images_v1::ImagesConnection>
MakeImagesTracingConnection(
    std::shared_ptr<compute_images_v1::ImagesConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_images_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_IMAGES_V1_INTERNAL_IMAGES_TRACING_CONNECTION_H
