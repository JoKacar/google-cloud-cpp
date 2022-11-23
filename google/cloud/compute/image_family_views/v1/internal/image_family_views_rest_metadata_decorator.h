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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_IMAGE_FAMILY_VIEWS_V1_INTERNAL_IMAGE_FAMILY_VIEWS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_IMAGE_FAMILY_VIEWS_V1_INTERNAL_IMAGE_FAMILY_VIEWS_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/image_family_views/v1/internal/image_family_views_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/image_family_views/v1/image_family_views.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_image_family_views_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ImageFamilyViewsRestMetadata : public ImageFamilyViewsRestStub {
 public:
  ~ImageFamilyViewsRestMetadata() override = default;
  explicit ImageFamilyViewsRestMetadata(
      std::shared_ptr<ImageFamilyViewsRestStub> child);

  StatusOr<google::cloud::cpp::compute::v1::ImageFamilyView>
  GetImageFamilyViews(google::cloud::rest_internal::RestContext& rest_context,
                      google::cloud::cpp::compute::image_family_views::v1::
                          GetImageFamilyViewsRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<ImageFamilyViewsRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_image_family_views_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_IMAGE_FAMILY_VIEWS_V1_INTERNAL_IMAGE_FAMILY_VIEWS_REST_METADATA_DECORATOR_H
