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
// source: google/cloud/dialogflow/cx/v3/agent.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_AGENTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_AGENTS_CLIENT_H

#include "google/cloud/dialogflow_cx/agents_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing [Agents][google.cloud.dialogflow.cx.v3.Agent].
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
/// [google.cloud.dialogflow.cx.v3.Agent]:
/// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L185}
///
class AgentsClient {
 public:
  explicit AgentsClient(std::shared_ptr<AgentsConnection> connection,
                        Options opts = {});
  ~AgentsClient();

  ///@{
  /// @name Copy and move support
  AgentsClient(AgentsClient const&) = default;
  AgentsClient& operator=(AgentsClient const&) = default;
  AgentsClient(AgentsClient&&) = default;
  AgentsClient& operator=(AgentsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(AgentsClient const& a, AgentsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AgentsClient const& a, AgentsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns the list of all agents in the specified location.
  ///
  /// @param parent  Required. The location to list all agents for.
  ///  Format: `projects/<Project ID>/locations/<Location ID>`.
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
  ///     [google.cloud.dialogflow.cx.v3.Agent], or rather,
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
  /// [google.cloud.dialogflow.cx.v3.Agent]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L185}
  /// [google.cloud.dialogflow.cx.v3.ListAgentsRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L279}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::cx::v3::Agent> ListAgents(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Returns the list of all agents in the specified location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.ListAgentsRequest].
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
  ///     [google.cloud.dialogflow.cx.v3.Agent], or rather,
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
  /// [google.cloud.dialogflow.cx.v3.Agent]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L185}
  /// [google.cloud.dialogflow.cx.v3.ListAgentsRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L279}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::cx::v3::Agent> ListAgents(
      google::cloud::dialogflow::cx::v3::ListAgentsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified agent.
  ///
  /// @param name  Required. The name of the agent.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Agent])
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
  /// [google.cloud.dialogflow.cx.v3.Agent]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L185}
  /// [google.cloud.dialogflow.cx.v3.GetAgentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L311}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Agent> GetAgent(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified agent.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.GetAgentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Agent])
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
  /// [google.cloud.dialogflow.cx.v3.Agent]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L185}
  /// [google.cloud.dialogflow.cx.v3.GetAgentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L311}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Agent> GetAgent(
      google::cloud::dialogflow::cx::v3::GetAgentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an agent in the specified location.
  ///
  /// Note: You should always train flows prior to sending them queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param parent  Required. The location to create a agent for.
  ///  Format: `projects/<Project ID>/locations/<Location ID>`.
  /// @param agent  Required. The agent to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Agent])
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
  /// [google.cloud.dialogflow.cx.v3.Agent]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L185}
  /// [google.cloud.dialogflow.cx.v3.CreateAgentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L324}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Agent> CreateAgent(
      std::string const& parent,
      google::cloud::dialogflow::cx::v3::Agent const& agent, Options opts = {});

  // clang-format off
  ///
  /// Creates an agent in the specified location.
  ///
  /// Note: You should always train flows prior to sending them queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.CreateAgentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Agent])
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
  /// [google.cloud.dialogflow.cx.v3.Agent]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L185}
  /// [google.cloud.dialogflow.cx.v3.CreateAgentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L324}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Agent> CreateAgent(
      google::cloud::dialogflow::cx::v3::CreateAgentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified agent.
  ///
  /// Note: You should always train flows prior to sending them queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param agent  Required. The agent to update.
  /// @param update_mask  The mask to control which fields get updated. If the mask is not present,
  ///  all fields will be updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Agent])
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
  /// [google.cloud.dialogflow.cx.v3.Agent]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L185}
  /// [google.cloud.dialogflow.cx.v3.UpdateAgentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L340}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Agent> UpdateAgent(
      google::cloud::dialogflow::cx::v3::Agent const& agent,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates the specified agent.
  ///
  /// Note: You should always train flows prior to sending them queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.UpdateAgentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Agent])
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
  /// [google.cloud.dialogflow.cx.v3.Agent]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L185}
  /// [google.cloud.dialogflow.cx.v3.UpdateAgentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L340}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Agent> UpdateAgent(
      google::cloud::dialogflow::cx::v3::UpdateAgentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified agent.
  ///
  /// @param name  Required. The name of the agent to delete.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.DeleteAgentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L351}
  ///
  // clang-format on
  Status DeleteAgent(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified agent.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.DeleteAgentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.cx.v3.DeleteAgentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L351}
  ///
  // clang-format on
  Status DeleteAgent(
      google::cloud::dialogflow::cx::v3::DeleteAgentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Exports the specified agent to a binary file.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`: An empty [Struct
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#struct)
  /// - `response`:
  /// [ExportAgentResponse][google.cloud.dialogflow.cx.v3.ExportAgentResponse]
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.ExportAgentRequest].
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
  ///     [google.cloud.dialogflow.cx.v3.ExportAgentResponse] proto message.
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
  /// [google.cloud.dialogflow.cx.v3.ExportAgentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L364}
  /// [google.cloud.dialogflow.cx.v3.ExportAgentResponse]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L415}
  ///
  // clang-format on
  future<StatusOr<google::cloud::dialogflow::cx::v3::ExportAgentResponse>>
  ExportAgent(
      google::cloud::dialogflow::cx::v3::ExportAgentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Restores the specified agent from a binary file.
  ///
  /// Replaces the current agent with a new one. Note that all existing resources
  /// in agent (e.g. intents, entity types, flows) will be removed.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`: An empty [Struct
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#struct)
  /// - `response`: An [Empty
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#empty)
  ///
  /// Note: You should always train flows prior to sending them queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.RestoreAgentRequest].
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
  ///     [google.protobuf.Struct] proto message.
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
  /// [google.cloud.dialogflow.cx.v3.RestoreAgentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L430}
  /// [google.protobuf.Struct]: @googleapis_reference_link{google/protobuf/struct.proto#L51}
  ///
  // clang-format on
  future<StatusOr<google::protobuf::Struct>> RestoreAgent(
      google::cloud::dialogflow::cx::v3::RestoreAgentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Validates the specified agent and creates or updates validation results.
  /// The agent in draft version is validated. Please call this API after the
  /// training is completed to get the complete validation results.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.ValidateAgentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.AgentValidationResult])
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
  /// [google.cloud.dialogflow.cx.v3.AgentValidationResult]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L511}
  /// [google.cloud.dialogflow.cx.v3.ValidateAgentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L478}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
  ValidateAgent(
      google::cloud::dialogflow::cx::v3::ValidateAgentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the latest agent validation result. Agent validation is performed
  /// when ValidateAgent is called.
  ///
  /// @param name  Required. The agent name.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/validationResult`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.AgentValidationResult])
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
  /// [google.cloud.dialogflow.cx.v3.AgentValidationResult]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L511}
  /// [google.cloud.dialogflow.cx.v3.GetAgentValidationResultRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L494}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
  GetAgentValidationResult(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets the latest agent validation result. Agent validation is performed
  /// when ValidateAgent is called.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.GetAgentValidationResultRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.AgentValidationResult])
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
  /// [google.cloud.dialogflow.cx.v3.AgentValidationResult]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L511}
  /// [google.cloud.dialogflow.cx.v3.GetAgentValidationResultRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/agent.proto#L494}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::AgentValidationResult>
  GetAgentValidationResult(
      google::cloud::dialogflow::cx::v3::GetAgentValidationResultRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<AgentsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_AGENTS_CLIENT_H
