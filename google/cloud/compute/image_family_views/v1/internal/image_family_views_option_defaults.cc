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

#include "google/cloud/compute/image_family_views/v1/internal/image_family_views_option_defaults.h"
#include "google/cloud/compute/image_family_views/v1/image_family_views_connection.h"
#include "google/cloud/compute/image_family_views/v1/image_family_views_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_image_family_views_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ImageFamilyViewsDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_IMAGE_FAMILY_VIEWS_ENDPOINT",
      "", "GOOGLE_CLOUD_CPP_IMAGE_FAMILY_VIEWS_AUTHORITY",
      "compute.googleapis.com");
  options = google::cloud::internal::PopulateGrpcOptions(
      std::move(options), "");
  if (!options.has<compute_image_family_views_v1::ImageFamilyViewsRetryPolicyOption>()) {
    options.set<compute_image_family_views_v1::ImageFamilyViewsRetryPolicyOption>(
        compute_image_family_views_v1::ImageFamilyViewsLimitedTimeRetryPolicy(
            std::chrono::minutes(30)).clone());
  }
  if (!options.has<compute_image_family_views_v1::ImageFamilyViewsBackoffPolicyOption>()) {
    options.set<compute_image_family_views_v1::ImageFamilyViewsBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling).clone());
  }
  if (!options.has<compute_image_family_views_v1::ImageFamilyViewsConnectionIdempotencyPolicyOption>()) {
    options.set<compute_image_family_views_v1::ImageFamilyViewsConnectionIdempotencyPolicyOption>(
        compute_image_family_views_v1::MakeDefaultImageFamilyViewsConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_image_family_views_v1_internal
}  // namespace cloud
}  // namespace google
