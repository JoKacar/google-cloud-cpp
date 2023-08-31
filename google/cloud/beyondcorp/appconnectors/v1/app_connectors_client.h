// Copyright 2022 Google LLC
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
// source: google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPCONNECTORS_V1_APP_CONNECTORS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPCONNECTORS_V1_APP_CONNECTORS_CLIENT_H

#include "google/cloud/beyondcorp/appconnectors/v1/app_connectors_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_appconnectors_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// API Overview:
///
/// The `beyondcorp.googleapis.com` service implements the Google Cloud
/// BeyondCorp API.
///
/// Data Model:
///
/// The AppConnectorsService exposes the following resource:
///
/// * AppConnectors, named as follows:
///   `projects/{project_id}/locations/{location_id}/appConnectors/{app_connector_id}`.
///
/// The AppConnectorsService provides methods to manage
/// (create/read/update/delete) BeyondCorp AppConnectors.
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
class AppConnectorsServiceClient {
 public:
  explicit AppConnectorsServiceClient(
      std::shared_ptr<AppConnectorsServiceConnection> connection,
      Options opts = {});
  ~AppConnectorsServiceClient();

  ///@{
  /// @name Copy and move support
  AppConnectorsServiceClient(AppConnectorsServiceClient const&) = default;
  AppConnectorsServiceClient& operator=(AppConnectorsServiceClient const&) =
      default;
  AppConnectorsServiceClient(AppConnectorsServiceClient&&) = default;
  AppConnectorsServiceClient& operator=(AppConnectorsServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(AppConnectorsServiceClient const& a,
                         AppConnectorsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AppConnectorsServiceClient const& a,
                         AppConnectorsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists AppConnectors in a given project and location.
  ///
  /// @param parent  Required. The resource name of the AppConnector location using the form:
  ///  `projects/{project_id}/locations/{location_id}`
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
  ///     [google.cloud.beyondcorp.appconnectors.v1.AppConnector], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnectors.v1.AppConnector]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L332}
  /// [google.cloud.beyondcorp.appconnectors.v1.ListAppConnectorsRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L130}
  ///
  // clang-format on
  StreamRange<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
  ListAppConnectors(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists AppConnectors in a given project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.appconnectors.v1.ListAppConnectorsRequest].
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
  ///     [google.cloud.beyondcorp.appconnectors.v1.AppConnector], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnectors.v1.AppConnector]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L332}
  /// [google.cloud.beyondcorp.appconnectors.v1.ListAppConnectorsRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L130}
  ///
  // clang-format on
  StreamRange<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
  ListAppConnectors(
      google::cloud::beyondcorp::appconnectors::v1::ListAppConnectorsRequest
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single AppConnector.
  ///
  /// @param name  Required. BeyondCorp AppConnector name using the form:
  ///  `projects/{project_id}/locations/{location_id}/appConnectors/{app_connector_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.beyondcorp.appconnectors.v1.AppConnector])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnectors.v1.AppConnector]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L332}
  /// [google.cloud.beyondcorp.appconnectors.v1.GetAppConnectorRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L176}
  ///
  // clang-format on
  StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
  GetAppConnector(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single AppConnector.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.appconnectors.v1.GetAppConnectorRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.beyondcorp.appconnectors.v1.AppConnector])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnectors.v1.AppConnector]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L332}
  /// [google.cloud.beyondcorp.appconnectors.v1.GetAppConnectorRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L176}
  ///
  // clang-format on
  StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
  GetAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                      GetAppConnectorRequest const& request,
                  Options opts = {});

  // clang-format off
  ///
  /// Creates a new AppConnector in a given project and location.
  ///
  /// @param parent  Required. The resource project name of the AppConnector location using the
  ///  form: `projects/{project_id}/locations/{location_id}`
  /// @param app_connector  Required. A BeyondCorp AppConnector resource.
  /// @param app_connector_id  Optional. User-settable AppConnector resource ID.
  ///  @n
  ///   * Must start with a letter.
  ///   * Must contain between 4-63 characters from `/[a-z][0-9]-/`.
  ///   * Must end with a number or a letter.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.appconnectors.v1.AppConnector] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnectors.v1.AppConnector]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L332}
  /// [google.cloud.beyondcorp.appconnectors.v1.CreateAppConnectorRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L188}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  CreateAppConnector(
      std::string const& parent,
      google::cloud::beyondcorp::appconnectors::v1::AppConnector const&
          app_connector,
      std::string const& app_connector_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a new AppConnector in a given project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.appconnectors.v1.CreateAppConnectorRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.appconnectors.v1.AppConnector] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnectors.v1.AppConnector]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L332}
  /// [google.cloud.beyondcorp.appconnectors.v1.CreateAppConnectorRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L188}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  CreateAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                         CreateAppConnectorRequest const& request,
                     Options opts = {});

  // clang-format off
  ///
  /// Updates the parameters of a single AppConnector.
  ///
  /// @param app_connector  Required. AppConnector message with updated fields. Only supported fields
  ///  specified in update_mask are updated.
  /// @param update_mask  Required. Mask of fields to update. At least one path must be supplied in
  ///  this field. The elements of the repeated paths field may only include these
  ///  fields from [BeyondCorp.AppConnector]:
  ///  * `labels`
  ///  * `display_name`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.appconnectors.v1.AppConnector] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnectors.v1.AppConnector]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L332}
  /// [google.cloud.beyondcorp.appconnectors.v1.UpdateAppConnectorRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L229}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  UpdateAppConnector(
      google::cloud::beyondcorp::appconnectors::v1::AppConnector const&
          app_connector,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates the parameters of a single AppConnector.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.appconnectors.v1.UpdateAppConnectorRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.appconnectors.v1.AppConnector] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnectors.v1.AppConnector]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L332}
  /// [google.cloud.beyondcorp.appconnectors.v1.UpdateAppConnectorRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L229}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  UpdateAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                         UpdateAppConnectorRequest const& request,
                     Options opts = {});

  // clang-format off
  ///
  /// Deletes a single AppConnector.
  ///
  /// @param name  Required. BeyondCorp AppConnector name using the form:
  ///  `projects/{project_id}/locations/{location_id}/appConnectors/{app_connector_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.appconnectors.v1.AppConnectorOperationMetadata] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnectors.v1.AppConnectorOperationMetadata]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L408}
  /// [google.cloud.beyondcorp.appconnectors.v1.DeleteAppConnectorRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L263}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::
                      AppConnectorOperationMetadata>>
  DeleteAppConnector(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a single AppConnector.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.appconnectors.v1.DeleteAppConnectorRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.appconnectors.v1.AppConnectorOperationMetadata] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnectors.v1.AppConnectorOperationMetadata]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L408}
  /// [google.cloud.beyondcorp.appconnectors.v1.DeleteAppConnectorRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L263}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::
                      AppConnectorOperationMetadata>>
  DeleteAppConnector(google::cloud::beyondcorp::appconnectors::v1::
                         DeleteAppConnectorRequest const& request,
                     Options opts = {});

  // clang-format off
  ///
  /// Report status for a given connector.
  ///
  /// @param app_connector  Required. BeyondCorp Connector name using the form:
  ///  `projects/{project_id}/locations/{location_id}/connectors/{connector}`
  /// @param resource_info  Required. Resource info of the connector.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.appconnectors.v1.AppConnector] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnectors.v1.AppConnector]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L332}
  /// [google.cloud.beyondcorp.appconnectors.v1.ReportStatusRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L294}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  ReportStatus(std::string const& app_connector,
               google::cloud::beyondcorp::appconnectors::v1::ResourceInfo const&
                   resource_info,
               Options opts = {});

  // clang-format off
  ///
  /// Report status for a given connector.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.appconnectors.v1.ReportStatusRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.appconnectors.v1.AppConnector] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.appconnectors.v1.AppConnector]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L332}
  /// [google.cloud.beyondcorp.appconnectors.v1.ReportStatusRequest]: @googleapis_reference_link{google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto#L294}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>>
  ReportStatus(
      google::cloud::beyondcorp::appconnectors::v1::ReportStatusRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<AppConnectorsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appconnectors_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPCONNECTORS_V1_APP_CONNECTORS_CLIENT_H
