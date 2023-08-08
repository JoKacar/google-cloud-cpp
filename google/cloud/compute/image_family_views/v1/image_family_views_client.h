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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_IMAGE_FAMILY_VIEWS_V1_IMAGE_FAMILY_VIEWS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_IMAGE_FAMILY_VIEWS_V1_IMAGE_FAMILY_VIEWS_CLIENT_H

#include "google/cloud/compute/image_family_views/v1/image_family_views_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_image_family_views_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the imageFamilyViews resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/imageFamilyViews
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class ImageFamilyViewsClient {
 public:
  explicit ImageFamilyViewsClient(
      ExperimentalTag, std::shared_ptr<ImageFamilyViewsConnection> connection,
      Options opts = {});
  ~ImageFamilyViewsClient();

  ///@{
  /// @name Copy and move support
  ImageFamilyViewsClient(ImageFamilyViewsClient const&) = default;
  ImageFamilyViewsClient& operator=(ImageFamilyViewsClient const&) = default;
  ImageFamilyViewsClient(ImageFamilyViewsClient&&) = default;
  ImageFamilyViewsClient& operator=(ImageFamilyViewsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ImageFamilyViewsClient const& a,
                         ImageFamilyViewsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ImageFamilyViewsClient const& a,
                         ImageFamilyViewsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns the latest image that is part of an image family, is not deprecated
  /// and is rolled out in the specified zone.
  ///
  /// @param project  Project ID for this request.
  /// @param zone  The name of the zone for this request.
  /// @param family  Name of the image family to search for.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.ImageFamilyView])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.image_family_views.v1.GetImageFamilyViewsRequest]: @googleapis_reference_link{google/cloud/compute/image_family_views/v1/image_family_views.proto#L50}
  /// [google.cloud.cpp.compute.v1.ImageFamilyView]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_055.proto#L26}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::ImageFamilyView>
  GetImageFamilyViews(std::string const& project, std::string const& zone,
                      std::string const& family, Options opts = {});

  // clang-format off
  ///
  /// Returns the latest image that is part of an image family, is not deprecated
  /// and is rolled out in the specified zone.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.image_family_views.v1.GetImageFamilyViewsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.ImageFamilyView])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.image_family_views.v1.GetImageFamilyViewsRequest]: @googleapis_reference_link{google/cloud/compute/image_family_views/v1/image_family_views.proto#L50}
  /// [google.cloud.cpp.compute.v1.ImageFamilyView]: @googleapis_reference_link{google/cloud/compute/v1/internal/common_file_055.proto#L26}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::ImageFamilyView>
  GetImageFamilyViews(google::cloud::cpp::compute::image_family_views::v1::
                          GetImageFamilyViewsRequest const& request,
                      Options opts = {});

 private:
  std::shared_ptr<ImageFamilyViewsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_image_family_views_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_IMAGE_FAMILY_VIEWS_V1_IMAGE_FAMILY_VIEWS_CLIENT_H
