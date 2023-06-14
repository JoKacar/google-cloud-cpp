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
// source: google/cloud/compute/image_family_views/v1/image_family_views.proto

#include "google/cloud/compute/image_family_views/v1/image_family_views_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_image_family_views_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ImageFamilyViewsClient::ImageFamilyViewsClient(
    ExperimentalTag, std::shared_ptr<ImageFamilyViewsConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ImageFamilyViewsClient::~ImageFamilyViewsClient() = default;

StatusOr<google::cloud::cpp::compute::v1::ImageFamilyView>
ImageFamilyViewsClient::GetImageFamilyViews(std::string const& project,
                                            std::string const& zone,
                                            std::string const& family,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::image_family_views::v1::
      GetImageFamilyViewsRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_family(family);
  return connection_->GetImageFamilyViews(request);
}

StatusOr<google::cloud::cpp::compute::v1::ImageFamilyView>
ImageFamilyViewsClient::GetImageFamilyViews(
    google::cloud::cpp::compute::image_family_views::v1::
        GetImageFamilyViewsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetImageFamilyViews(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_image_family_views_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
