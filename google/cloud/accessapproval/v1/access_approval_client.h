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
// source: google/cloud/accessapproval/v1/accessapproval.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_V1_ACCESS_APPROVAL_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_V1_ACCESS_APPROVAL_CLIENT_H

#include "google/cloud/accessapproval/v1/access_approval_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace accessapproval_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// This API allows a customer to manage accesses to cloud resources by
/// Google personnel. It defines the following resource model:
///
/// - The API has a collection of
///   [ApprovalRequest][google.cloud.accessapproval.v1.ApprovalRequest]
///   resources, named `approvalRequests/{approval_request}`
/// - The API has top-level settings per Project/Folder/Organization, named
///   `accessApprovalSettings`
///
/// The service also periodically emails a list of recipients, defined at the
/// Project/Folder/Organization level in the accessApprovalSettings, when there
/// is a pending ApprovalRequest for them to act on. The ApprovalRequests can
/// also optionally be published to a Pub/Sub topic owned by the customer
/// (contact support if you would like to enable Pub/Sub notifications).
///
/// ApprovalRequests can be approved or dismissed. Google personnel can only
/// access the indicated resource or resources if the request is approved
/// (subject to some exclusions:
/// https://cloud.google.com/access-approval/docs/overview#exclusions).
///
/// Note: Using Access Approval functionality will mean that Google may not be
/// able to meet the SLAs for your chosen products, as any support response
/// times may be dramatically increased. As such the SLAs do not apply to any
/// service disruption to the extent impacted by Customer's use of Access
/// Approval. Do not enable Access Approval for projects where you may require
/// high service availability and rapid response by Google Cloud Support.
///
/// After a request is approved or dismissed, no further action may be taken on
/// it. Requests with the requested_expiration in the past or with no activity
/// for 14 days are considered dismissed. When an approval expires, the request
/// is considered dismissed.
///
/// If a request is not approved or dismissed, we call it pending.
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
/// [google.cloud.accessapproval.v1.ApprovalRequest]:
/// @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L369}
///
class AccessApprovalClient {
 public:
  explicit AccessApprovalClient(
      std::shared_ptr<AccessApprovalConnection> connection, Options opts = {});
  ~AccessApprovalClient();

  ///@{
  /// @name Copy and move support
  AccessApprovalClient(AccessApprovalClient const&) = default;
  AccessApprovalClient& operator=(AccessApprovalClient const&) = default;
  AccessApprovalClient(AccessApprovalClient&&) = default;
  AccessApprovalClient& operator=(AccessApprovalClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(AccessApprovalClient const& a,
                         AccessApprovalClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AccessApprovalClient const& a,
                         AccessApprovalClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists approval requests associated with a project, folder, or organization.
  /// Approval requests can be filtered by state (pending, active, dismissed).
  /// The order is reverse chronological.
  ///
  /// @param parent  The parent resource. This may be "projects/{project}",
  ///  "folders/{folder}", or "organizations/{organization}".
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
  ///     [google.cloud.accessapproval.v1.ApprovalRequest], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.accessapproval.v1.ApprovalRequest]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L369}
  /// [google.cloud.accessapproval.v1.ListApprovalRequestsMessage]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L584}
  ///
  // clang-format on
  StreamRange<google::cloud::accessapproval::v1::ApprovalRequest>
  ListApprovalRequests(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists approval requests associated with a project, folder, or organization.
  /// Approval requests can be filtered by state (pending, active, dismissed).
  /// The order is reverse chronological.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.accessapproval.v1.ListApprovalRequestsMessage].
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
  ///     [google.cloud.accessapproval.v1.ApprovalRequest], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.accessapproval.v1.ApprovalRequest]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L369}
  /// [google.cloud.accessapproval.v1.ListApprovalRequestsMessage]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L584}
  ///
  // clang-format on
  StreamRange<google::cloud::accessapproval::v1::ApprovalRequest>
  ListApprovalRequests(
      google::cloud::accessapproval::v1::ListApprovalRequestsMessage request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets an approval request. Returns NOT_FOUND if the request does not exist.
  ///
  /// @param name  The name of the approval request to retrieve.
  ///  Format:
  ///  "{projects|folders|organizations}/{id}/approvalRequests/{approval_request}"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.accessapproval.v1.ApprovalRequest])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.accessapproval.v1.ApprovalRequest]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L369}
  /// [google.cloud.accessapproval.v1.GetApprovalRequestMessage]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L622}
  ///
  // clang-format on
  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  GetApprovalRequest(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets an approval request. Returns NOT_FOUND if the request does not exist.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.accessapproval.v1.GetApprovalRequestMessage].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.accessapproval.v1.ApprovalRequest])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.accessapproval.v1.ApprovalRequest]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L369}
  /// [google.cloud.accessapproval.v1.GetApprovalRequestMessage]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L622}
  ///
  // clang-format on
  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  GetApprovalRequest(
      google::cloud::accessapproval::v1::GetApprovalRequestMessage const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Approves a request and returns the updated ApprovalRequest.
  ///
  /// Returns NOT_FOUND if the request does not exist. Returns
  /// FAILED_PRECONDITION if the request exists but is not in a pending state.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.accessapproval.v1.ApproveApprovalRequestMessage].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.accessapproval.v1.ApprovalRequest])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.accessapproval.v1.ApprovalRequest]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L369}
  /// [google.cloud.accessapproval.v1.ApproveApprovalRequestMessage]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L632}
  ///
  // clang-format on
  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  ApproveApprovalRequest(
      google::cloud::accessapproval::v1::ApproveApprovalRequestMessage const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Dismisses a request. Returns the updated ApprovalRequest.
  ///
  /// NOTE: This does not deny access to the resource if another request has been
  /// made and approved. It is equivalent in effect to ignoring the request
  /// altogether.
  ///
  /// Returns NOT_FOUND if the request does not exist.
  ///
  /// Returns FAILED_PRECONDITION if the request exists but is not in a pending
  /// state.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.accessapproval.v1.DismissApprovalRequestMessage].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.accessapproval.v1.ApprovalRequest])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.accessapproval.v1.ApprovalRequest]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L369}
  /// [google.cloud.accessapproval.v1.DismissApprovalRequestMessage]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L643}
  ///
  // clang-format on
  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  DismissApprovalRequest(
      google::cloud::accessapproval::v1::DismissApprovalRequestMessage const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Invalidates an existing ApprovalRequest. Returns the updated
  /// ApprovalRequest.
  ///
  /// NOTE: This does not deny access to the resource if another request has been
  /// made and approved. It only invalidates a single approval.
  ///
  /// Returns FAILED_PRECONDITION if the request exists but is not in an approved
  /// state.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.accessapproval.v1.InvalidateApprovalRequestMessage].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.accessapproval.v1.ApprovalRequest])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.accessapproval.v1.ApprovalRequest]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L369}
  /// [google.cloud.accessapproval.v1.InvalidateApprovalRequestMessage]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L651}
  ///
  // clang-format on
  StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  InvalidateApprovalRequest(
      google::cloud::accessapproval::v1::InvalidateApprovalRequestMessage const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the settings associated with a project, folder, or organization.
  ///
  /// @param name  The name of the AccessApprovalSettings to retrieve.
  ///  Format: "{projects|folders|organizations}/{id}/accessApprovalSettings"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.accessapproval.v1.AccessApprovalSettings])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.accessapproval.v1.AccessApprovalSettings]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L496}
  /// [google.cloud.accessapproval.v1.GetAccessApprovalSettingsMessage]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L659}
  ///
  // clang-format on
  StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  GetAccessApprovalSettings(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets the settings associated with a project, folder, or organization.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.accessapproval.v1.GetAccessApprovalSettingsMessage].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.accessapproval.v1.AccessApprovalSettings])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.accessapproval.v1.AccessApprovalSettings]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L496}
  /// [google.cloud.accessapproval.v1.GetAccessApprovalSettingsMessage]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L659}
  ///
  // clang-format on
  StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  GetAccessApprovalSettings(
      google::cloud::accessapproval::v1::GetAccessApprovalSettingsMessage const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the settings associated with a project, folder, or organization.
  /// Settings to update are determined by the value of field_mask.
  ///
  /// @param settings  The new AccessApprovalSettings.
  /// @param update_mask  The update mask applies to the settings. Only the top level fields of
  ///  AccessApprovalSettings (notification_emails & enrolled_services) are
  ///  supported. For each field, if it is included, the currently stored value
  ///  will be entirely overwritten with the value of the field passed in this
  ///  request.
  ///  @n
  ///  For the `FieldMask` definition, see
  ///  https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#fieldmask
  ///  If this field is left unset, only the notification_emails field will be
  ///  updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.accessapproval.v1.AccessApprovalSettings])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.accessapproval.v1.AccessApprovalSettings]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L496}
  /// [google.cloud.accessapproval.v1.UpdateAccessApprovalSettingsMessage]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L668}
  ///
  // clang-format on
  StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  UpdateAccessApprovalSettings(
      google::cloud::accessapproval::v1::AccessApprovalSettings const& settings,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates the settings associated with a project, folder, or organization.
  /// Settings to update are determined by the value of field_mask.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.accessapproval.v1.UpdateAccessApprovalSettingsMessage].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.accessapproval.v1.AccessApprovalSettings])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.accessapproval.v1.AccessApprovalSettings]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L496}
  /// [google.cloud.accessapproval.v1.UpdateAccessApprovalSettingsMessage]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L668}
  ///
  // clang-format on
  StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  UpdateAccessApprovalSettings(
      google::cloud::accessapproval::v1::
          UpdateAccessApprovalSettingsMessage const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the settings associated with a project, folder, or organization.
  /// This will have the effect of disabling Access Approval for the project,
  /// folder, or organization, but only if all ancestors also have Access
  /// Approval disabled. If Access Approval is enabled at a higher level of the
  /// hierarchy, then Access Approval will still be enabled at this level as
  /// the settings are inherited.
  ///
  /// @param name  Name of the AccessApprovalSettings to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.accessapproval.v1.DeleteAccessApprovalSettingsMessage]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L686}
  ///
  // clang-format on
  Status DeleteAccessApprovalSettings(std::string const& name,
                                      Options opts = {});

  // clang-format off
  ///
  /// Deletes the settings associated with a project, folder, or organization.
  /// This will have the effect of disabling Access Approval for the project,
  /// folder, or organization, but only if all ancestors also have Access
  /// Approval disabled. If Access Approval is enabled at a higher level of the
  /// hierarchy, then Access Approval will still be enabled at this level as
  /// the settings are inherited.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.accessapproval.v1.DeleteAccessApprovalSettingsMessage].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.accessapproval.v1.DeleteAccessApprovalSettingsMessage]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L686}
  ///
  // clang-format on
  Status DeleteAccessApprovalSettings(
      google::cloud::accessapproval::v1::
          DeleteAccessApprovalSettingsMessage const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the service account that is used by Access Approval to access KMS
  /// keys for signing approved approval requests.
  ///
  /// @param name  Name of the AccessApprovalServiceAccount to retrieve.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.accessapproval.v1.AccessApprovalServiceAccount])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.accessapproval.v1.AccessApprovalServiceAccount]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L562}
  /// [google.cloud.accessapproval.v1.GetAccessApprovalServiceAccountMessage]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L694}
  ///
  // clang-format on
  StatusOr<google::cloud::accessapproval::v1::AccessApprovalServiceAccount>
  GetAccessApprovalServiceAccount(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the service account that is used by Access Approval to access KMS
  /// keys for signing approved approval requests.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.accessapproval.v1.GetAccessApprovalServiceAccountMessage].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.accessapproval.v1.AccessApprovalServiceAccount])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.accessapproval.v1.AccessApprovalServiceAccount]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L562}
  /// [google.cloud.accessapproval.v1.GetAccessApprovalServiceAccountMessage]: @googleapis_reference_link{google/cloud/accessapproval/v1/accessapproval.proto#L694}
  ///
  // clang-format on
  StatusOr<google::cloud::accessapproval::v1::AccessApprovalServiceAccount>
  GetAccessApprovalServiceAccount(
      google::cloud::accessapproval::v1::
          GetAccessApprovalServiceAccountMessage const& request,
      Options opts = {});

 private:
  std::shared_ptr<AccessApprovalConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accessapproval_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_V1_ACCESS_APPROVAL_CLIENT_H
