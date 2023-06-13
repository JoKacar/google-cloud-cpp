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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_IMAGE_FAMILY_VIEWS_V1_INTERNAL_IMAGE_FAMILY_VIEWS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_IMAGE_FAMILY_VIEWS_V1_INTERNAL_IMAGE_FAMILY_VIEWS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/image_family_views/v1/image_family_views_connection.h"
#include "google/cloud/compute/image_family_views/v1/image_family_views_connection_idempotency_policy.h"
#include "google/cloud/compute/image_family_views/v1/image_family_views_options.h"
#include "google/cloud/compute/image_family_views/v1/internal/image_family_views_rest_stub.h"
#include "google/cloud/compute/image_family_views/v1/internal/image_family_views_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_image_family_views_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ImageFamilyViewsRestConnectionImpl
    : public compute_image_family_views_v1::ImageFamilyViewsConnection {
 public:
  ~ImageFamilyViewsRestConnectionImpl() override = default;

  ImageFamilyViewsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          compute_image_family_views_v1_internal::ImageFamilyViewsRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::cpp::compute::v1::ImageFamilyView>
  GetImageFamilyViews(google::cloud::cpp::compute::image_family_views::v1::
                          GetImageFamilyViewsRequest const& request) override;

 private:
  std::unique_ptr<compute_image_family_views_v1::ImageFamilyViewsRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_image_family_views_v1::
                        ImageFamilyViewsRetryPolicyOption>()) {
      return options
          .get<compute_image_family_views_v1::
                   ImageFamilyViewsRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_image_family_views_v1::ImageFamilyViewsRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_image_family_views_v1::
                        ImageFamilyViewsBackoffPolicyOption>()) {
      return options
          .get<compute_image_family_views_v1::
                   ImageFamilyViewsBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_image_family_views_v1::
                 ImageFamilyViewsBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<compute_image_family_views_v1::
                      ImageFamilyViewsConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_image_family_views_v1::
                        ImageFamilyViewsConnectionIdempotencyPolicyOption>()) {
      return options
          .get<compute_image_family_views_v1::
                   ImageFamilyViewsConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_image_family_views_v1::
                 ImageFamilyViewsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<
      compute_image_family_views_v1_internal::ImageFamilyViewsRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_image_family_views_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_IMAGE_FAMILY_VIEWS_V1_INTERNAL_IMAGE_FAMILY_VIEWS_REST_CONNECTION_IMPL_H
