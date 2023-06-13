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
// source: google/cloud/kms/inventory/v1/key_tracking_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_KEY_TRACKING_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_KEY_TRACKING_CLIENT_H

#include "google/cloud/kms/inventory/v1/key_tracking_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace kms_inventory_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Returns information about the resources in an org that are protected by a
/// given Cloud KMS key via CMEK.
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
class KeyTrackingServiceClient {
 public:
  explicit KeyTrackingServiceClient(
      std::shared_ptr<KeyTrackingServiceConnection> connection,
      Options opts = {});
  ~KeyTrackingServiceClient();

  ///@{
  /// @name Copy and move support
  KeyTrackingServiceClient(KeyTrackingServiceClient const&) = default;
  KeyTrackingServiceClient& operator=(KeyTrackingServiceClient const&) =
      default;
  KeyTrackingServiceClient(KeyTrackingServiceClient&&) = default;
  KeyTrackingServiceClient& operator=(KeyTrackingServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(KeyTrackingServiceClient const& a,
                         KeyTrackingServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(KeyTrackingServiceClient const& a,
                         KeyTrackingServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns aggregate information about the resources protected by the given
  /// Cloud KMS [CryptoKey][google.cloud.kms.v1.CryptoKey]. Only resources within
  /// the same Cloud organization as the key will be returned. The project that
  /// holds the key must be part of an organization in order for this call to
  /// succeed.
  ///
  /// @param name  Required. The resource name of the
  ///  [CryptoKey][google.cloud.kms.v1.CryptoKey].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.kms.inventory.v1.ProtectedResourcesSummary])
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
  /// [google.cloud.kms.inventory.v1.GetProtectedResourcesSummaryRequest]: @googleapis_reference_link{google/cloud/kms/inventory/v1/key_tracking_service.proto#L66}
  /// [google.cloud.kms.inventory.v1.ProtectedResourcesSummary]: @googleapis_reference_link{google/cloud/kms/inventory/v1/key_tracking_service.proto#L79}
  ///
  // clang-format on
  StatusOr<google::cloud::kms::inventory::v1::ProtectedResourcesSummary>
  GetProtectedResourcesSummary(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Returns aggregate information about the resources protected by the given
  /// Cloud KMS [CryptoKey][google.cloud.kms.v1.CryptoKey]. Only resources within
  /// the same Cloud organization as the key will be returned. The project that
  /// holds the key must be part of an organization in order for this call to
  /// succeed.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.kms.inventory.v1.GetProtectedResourcesSummaryRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.kms.inventory.v1.ProtectedResourcesSummary])
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
  /// [google.cloud.kms.inventory.v1.GetProtectedResourcesSummaryRequest]: @googleapis_reference_link{google/cloud/kms/inventory/v1/key_tracking_service.proto#L66}
  /// [google.cloud.kms.inventory.v1.ProtectedResourcesSummary]: @googleapis_reference_link{google/cloud/kms/inventory/v1/key_tracking_service.proto#L79}
  ///
  // clang-format on
  StatusOr<google::cloud::kms::inventory::v1::ProtectedResourcesSummary>
  GetProtectedResourcesSummary(
      google::cloud::kms::inventory::v1::
          GetProtectedResourcesSummaryRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns metadata about the resources protected by the given Cloud KMS
  /// [CryptoKey][google.cloud.kms.v1.CryptoKey] in the given Cloud organization.
  ///
  /// @param scope  Required. Resource name of the organization.
  ///  Example: organizations/123
  /// @param crypto_key  Required. The resource name of the
  ///  [CryptoKey][google.cloud.kms.v1.CryptoKey].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.kms.inventory.v1.ProtectedResource], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.kms.inventory.v1.ProtectedResource]: @googleapis_reference_link{google/cloud/kms/inventory/v1/key_tracking_service.proto#L156}
  /// [google.cloud.kms.inventory.v1.SearchProtectedResourcesRequest]: @googleapis_reference_link{google/cloud/kms/inventory/v1/key_tracking_service.proto#L111}
  ///
  // clang-format on
  StreamRange<google::cloud::kms::inventory::v1::ProtectedResource>
  SearchProtectedResources(std::string const& scope,
                           std::string const& crypto_key, Options opts = {});

  // clang-format off
  ///
  /// Returns metadata about the resources protected by the given Cloud KMS
  /// [CryptoKey][google.cloud.kms.v1.CryptoKey] in the given Cloud organization.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.kms.inventory.v1.SearchProtectedResourcesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.kms.inventory.v1.ProtectedResource], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.kms.inventory.v1.ProtectedResource]: @googleapis_reference_link{google/cloud/kms/inventory/v1/key_tracking_service.proto#L156}
  /// [google.cloud.kms.inventory.v1.SearchProtectedResourcesRequest]: @googleapis_reference_link{google/cloud/kms/inventory/v1/key_tracking_service.proto#L111}
  ///
  // clang-format on
  StreamRange<google::cloud::kms::inventory::v1::ProtectedResource>
  SearchProtectedResources(
      google::cloud::kms::inventory::v1::SearchProtectedResourcesRequest
          request,
      Options opts = {});

 private:
  std::shared_ptr<KeyTrackingServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_inventory_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_KEY_TRACKING_CLIENT_H
