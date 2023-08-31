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
// source: google/cloud/contentwarehouse/v1/ruleset_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_RULE_SET_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_RULE_SET_CLIENT_H

#include "google/cloud/contentwarehouse/v1/rule_set_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace contentwarehouse_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service to manage customer specific RuleSets.
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
class RuleSetServiceClient {
 public:
  explicit RuleSetServiceClient(
      std::shared_ptr<RuleSetServiceConnection> connection, Options opts = {});
  ~RuleSetServiceClient();

  ///@{
  /// @name Copy and move support
  RuleSetServiceClient(RuleSetServiceClient const&) = default;
  RuleSetServiceClient& operator=(RuleSetServiceClient const&) = default;
  RuleSetServiceClient(RuleSetServiceClient&&) = default;
  RuleSetServiceClient& operator=(RuleSetServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(RuleSetServiceClient const& a,
                         RuleSetServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RuleSetServiceClient const& a,
                         RuleSetServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a ruleset.
  ///
  /// @param parent  Required. The parent name.
  ///  Format: projects/{project_number}/locations/{location}.
  /// @param rule_set  Required. The rule set to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.RuleSet])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.CreateRuleSetRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/ruleset_service_request.proto#L32}
  /// [google.cloud.contentwarehouse.v1.RuleSet]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/rule_engine.proto#L32}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::RuleSet> CreateRuleSet(
      std::string const& parent,
      google::cloud::contentwarehouse::v1::RuleSet const& rule_set,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a ruleset.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.CreateRuleSetRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.RuleSet])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.CreateRuleSetRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/ruleset_service_request.proto#L32}
  /// [google.cloud.contentwarehouse.v1.RuleSet]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/rule_engine.proto#L32}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::RuleSet> CreateRuleSet(
      google::cloud::contentwarehouse::v1::CreateRuleSetRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets a ruleset. Returns NOT_FOUND if the ruleset does not exist.
  ///
  /// @param name  Required. The name of the rule set to retrieve.
  ///  Format:
  ///  projects/{project_number}/locations/{location}/ruleSets/{rule_set_id}.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.RuleSet])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.GetRuleSetRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/ruleset_service_request.proto#L47}
  /// [google.cloud.contentwarehouse.v1.RuleSet]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/rule_engine.proto#L32}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::RuleSet> GetRuleSet(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets a ruleset. Returns NOT_FOUND if the ruleset does not exist.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.GetRuleSetRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.RuleSet])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.GetRuleSetRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/ruleset_service_request.proto#L47}
  /// [google.cloud.contentwarehouse.v1.RuleSet]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/rule_engine.proto#L32}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::RuleSet> GetRuleSet(
      google::cloud::contentwarehouse::v1::GetRuleSetRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a ruleset. Returns INVALID_ARGUMENT if the name of the ruleset
  /// is non-empty and does not equal the existing name.
  ///
  /// @param name  Required. The name of the rule set to update.
  ///  Format:
  ///  projects/{project_number}/locations/{location}/ruleSets/{rule_set_id}.
  /// @param rule_set  Required. The rule set to update.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.RuleSet])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.RuleSet]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/rule_engine.proto#L32}
  /// [google.cloud.contentwarehouse.v1.UpdateRuleSetRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/ruleset_service_request.proto#L60}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::RuleSet> UpdateRuleSet(
      std::string const& name,
      google::cloud::contentwarehouse::v1::RuleSet const& rule_set,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a ruleset. Returns INVALID_ARGUMENT if the name of the ruleset
  /// is non-empty and does not equal the existing name.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.UpdateRuleSetRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.RuleSet])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.RuleSet]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/rule_engine.proto#L32}
  /// [google.cloud.contentwarehouse.v1.UpdateRuleSetRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/ruleset_service_request.proto#L60}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::RuleSet> UpdateRuleSet(
      google::cloud::contentwarehouse::v1::UpdateRuleSetRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a ruleset. Returns NOT_FOUND if the document does not exist.
  ///
  /// @param name  Required. The name of the rule set to delete.
  ///  Format:
  ///  projects/{project_number}/locations/{location}/ruleSets/{rule_set_id}.
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
  /// [google.cloud.contentwarehouse.v1.DeleteRuleSetRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/ruleset_service_request.proto#L76}
  ///
  // clang-format on
  Status DeleteRuleSet(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a ruleset. Returns NOT_FOUND if the document does not exist.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.DeleteRuleSetRequest].
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
  /// [google.cloud.contentwarehouse.v1.DeleteRuleSetRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/ruleset_service_request.proto#L76}
  ///
  // clang-format on
  Status DeleteRuleSet(
      google::cloud::contentwarehouse::v1::DeleteRuleSetRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists rulesets.
  ///
  /// @param parent  Required. The parent, which owns this collection of document.
  ///  Format: projects/{project_number}/locations/{location}.
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
  ///     [google.cloud.contentwarehouse.v1.RuleSet], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.ListRuleSetsRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/ruleset_service_request.proto#L89}
  /// [google.cloud.contentwarehouse.v1.RuleSet]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/rule_engine.proto#L32}
  ///
  // clang-format on
  StreamRange<google::cloud::contentwarehouse::v1::RuleSet> ListRuleSets(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists rulesets.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.ListRuleSetsRequest].
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
  ///     [google.cloud.contentwarehouse.v1.RuleSet], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.ListRuleSetsRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/ruleset_service_request.proto#L89}
  /// [google.cloud.contentwarehouse.v1.RuleSet]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/rule_engine.proto#L32}
  ///
  // clang-format on
  StreamRange<google::cloud::contentwarehouse::v1::RuleSet> ListRuleSets(
      google::cloud::contentwarehouse::v1::ListRuleSetsRequest request,
      Options opts = {});

 private:
  std::shared_ptr<RuleSetServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_RULE_SET_CLIENT_H
