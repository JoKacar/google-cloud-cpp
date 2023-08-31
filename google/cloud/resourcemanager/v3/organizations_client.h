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
// source: google/cloud/resourcemanager/v3/organizations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_ORGANIZATIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_ORGANIZATIONS_CLIENT_H

#include "google/cloud/resourcemanager/v3/organizations_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Allows users to manage their organization resources.
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
class OrganizationsClient {
 public:
  explicit OrganizationsClient(
      std::shared_ptr<OrganizationsConnection> connection, Options opts = {});
  ~OrganizationsClient();

  ///@{
  /// @name Copy and move support
  OrganizationsClient(OrganizationsClient const&) = default;
  OrganizationsClient& operator=(OrganizationsClient const&) = default;
  OrganizationsClient(OrganizationsClient&&) = default;
  OrganizationsClient& operator=(OrganizationsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(OrganizationsClient const& a,
                         OrganizationsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(OrganizationsClient const& a,
                         OrganizationsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Fetches an organization resource identified by the specified resource name.
  ///
  /// @param name  Required. The resource name of the Organization to fetch. This is the
  ///  organization's relative path in the API, formatted as
  ///  "organizations/[organizationId]". For example, "organizations/1234".
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.resourcemanager.v3.Organization])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.resourcemanager.v3.GetOrganizationRequest]: @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L176}
  /// [google.cloud.resourcemanager.v3.Organization]: @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L112}
  ///
  // clang-format on
  StatusOr<google::cloud::resourcemanager::v3::Organization> GetOrganization(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Fetches an organization resource identified by the specified resource name.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.resourcemanager.v3.GetOrganizationRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.resourcemanager.v3.Organization])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.resourcemanager.v3.GetOrganizationRequest]: @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L176}
  /// [google.cloud.resourcemanager.v3.Organization]: @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L112}
  ///
  // clang-format on
  StatusOr<google::cloud::resourcemanager::v3::Organization> GetOrganization(
      google::cloud::resourcemanager::v3::GetOrganizationRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Searches organization resources that are visible to the user and satisfy
  /// the specified filter. This method returns organizations in an unspecified
  /// order. New organizations do not necessarily appear at the end of the
  /// results, and may take a small amount of time to appear.
  ///
  /// Search will only return organizations on which the user has the permission
  /// `resourcemanager.organizations.get`
  ///
  /// @param query  Optional. An optional query string used to filter the Organizations to
  ///  return in the response. Query rules are case-insensitive.
  ///  @n
  ///  ```
  ///  | Field            | Description                                |
  ///  |------------------|--------------------------------------------|
  ///  | directoryCustomerId, owner.directoryCustomerId | Filters by directory
  ///  customer id. |
  ///  | domain           | Filters by domain.                         |
  ///  ```
  ///  @n
  ///  Organizations may be queried by `directoryCustomerId` or by
  ///  `domain`, where the domain is a G Suite domain, for example:
  ///  @n
  ///  * Query `directorycustomerid:123456789` returns Organization
  ///  resources with `owner.directory_customer_id` equal to `123456789`.
  ///  * Query `domain:google.com` returns Organization resources corresponding
  ///  to the domain `google.com`.
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
  ///     [google.cloud.resourcemanager.v3.Organization], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.resourcemanager.v3.Organization]: @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L112}
  /// [google.cloud.resourcemanager.v3.SearchOrganizationsRequest]: @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L189}
  ///
  // clang-format on
  StreamRange<google::cloud::resourcemanager::v3::Organization>
  SearchOrganizations(std::string const& query, Options opts = {});

  // clang-format off
  ///
  /// Searches organization resources that are visible to the user and satisfy
  /// the specified filter. This method returns organizations in an unspecified
  /// order. New organizations do not necessarily appear at the end of the
  /// results, and may take a small amount of time to appear.
  ///
  /// Search will only return organizations on which the user has the permission
  /// `resourcemanager.organizations.get`
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.resourcemanager.v3.SearchOrganizationsRequest].
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
  ///     [google.cloud.resourcemanager.v3.Organization], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.resourcemanager.v3.Organization]: @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L112}
  /// [google.cloud.resourcemanager.v3.SearchOrganizationsRequest]: @googleapis_reference_link{google/cloud/resourcemanager/v3/organizations.proto#L189}
  ///
  // clang-format on
  StreamRange<google::cloud::resourcemanager::v3::Organization>
  SearchOrganizations(
      google::cloud::resourcemanager::v3::SearchOrganizationsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the access control policy for an organization resource. The policy may
  /// be empty if no such policy or resource exists. The `resource` field should
  /// be the organization's resource name, for example: "organizations/123".
  ///
  /// Authorization requires the IAM permission
  /// `resourcemanager.organizations.getIamPolicy` on the specified organization.
  ///
  /// @param resource  REQUIRED: The resource for which the policy is being requested.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.GetIamPolicyRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]: @googleapis_reference_link{google/iam/v1/policy.proto#L102}
  ///
  // clang-format on
  StatusOr<google::iam::v1::Policy> GetIamPolicy(std::string const& resource,
                                                 Options opts = {});

  // clang-format off
  ///
  /// Gets the access control policy for an organization resource. The policy may
  /// be empty if no such policy or resource exists. The `resource` field should
  /// be the organization's resource name, for example: "organizations/123".
  ///
  /// Authorization requires the IAM permission
  /// `resourcemanager.organizations.getIamPolicy` on the specified organization.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v1.GetIamPolicyRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.GetIamPolicyRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]: @googleapis_reference_link{google/iam/v1/policy.proto#L102}
  ///
  // clang-format on
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Sets the access control policy on an organization resource. Replaces any
  /// existing policy. The `resource` field should be the organization's resource
  /// name, for example: "organizations/123".
  ///
  /// Authorization requires the IAM permission
  /// `resourcemanager.organizations.setIamPolicy` on the specified organization.
  ///
  /// @param resource  REQUIRED: The resource for which the policy is being specified.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.Policy]: @googleapis_reference_link{google/iam/v1/policy.proto#L102}
  /// [google.iam.v1.SetIamPolicyRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  ///
  // clang-format on
  StatusOr<google::iam::v1::Policy> SetIamPolicy(std::string const& resource,
                                                 Options opts = {});

  // clang-format off
  ///
  /// Sets the access control policy on an organization resource. Replaces any
  /// existing policy. The `resource` field should be the organization's resource
  /// name, for example: "organizations/123".
  ///
  /// Authorization requires the IAM permission
  /// `resourcemanager.organizations.setIamPolicy` on the specified organization.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v1.SetIamPolicyRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.Policy]: @googleapis_reference_link{google/iam/v1/policy.proto#L102}
  /// [google.iam.v1.SetIamPolicyRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  ///
  // clang-format on
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request, Options opts = {});

  // clang-format off
  ///
  /// Returns the permissions that a caller has on the specified organization.
  /// The `resource` field should be the organization's resource name,
  /// for example: "organizations/123".
  ///
  /// There are no permissions required for making this API call.
  ///
  /// @param resource  REQUIRED: The resource for which the policy detail is being requested.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param permissions  The set of permissions to check for the `resource`. Permissions with
  ///  wildcards (such as '*' or 'storage.*') are not allowed. For more
  ///  information see
  ///  [IAM Overview](https://cloud.google.com/iam/docs/overview#permissions).
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.TestIamPermissionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.TestIamPermissionsRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  // clang-format on
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      std::string const& resource, std::vector<std::string> const& permissions,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the permissions that a caller has on the specified organization.
  /// The `resource` field should be the organization's resource name,
  /// for example: "organizations/123".
  ///
  /// There are no permissions required for making this API call.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.iam.v1.TestIamPermissionsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.iam.v1.TestIamPermissionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.iam.v1.TestIamPermissionsRequest]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]: @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  // clang-format on
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<OrganizationsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_ORGANIZATIONS_CLIENT_H
