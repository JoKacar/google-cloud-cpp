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

#include "google/cloud/compute/image_family_views/v1/internal/image_family_views_rest_connection_impl.h"
#include "google/cloud/compute/image_family_views/v1/internal/image_family_views_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_image_family_views_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ImageFamilyViewsRestConnectionImpl::ImageFamilyViewsRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<
        compute_image_family_views_v1_internal::ImageFamilyViewsRestStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ImageFamilyViewsConnection::options())) {}

StatusOr<google::cloud::cpp::compute::v1::ImageFamilyView>
ImageFamilyViewsRestConnectionImpl::GetImageFamilyViews(
    google::cloud::cpp::compute::image_family_views::v1::
        GetImageFamilyViewsRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetImageFamilyViews(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::image_family_views::v1::
                 GetImageFamilyViewsRequest const& request) {
        return stub_->GetImageFamilyViews(rest_context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_image_family_views_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
