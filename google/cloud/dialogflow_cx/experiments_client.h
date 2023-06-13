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
// source: google/cloud/dialogflow/cx/v3/experiment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_EXPERIMENTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_EXPERIMENTS_CLIENT_H

#include "google/cloud/dialogflow_cx/experiments_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing
/// [Experiments][google.cloud.dialogflow.cx.v3.Experiment].
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
/// [google.cloud.dialogflow.cx.v3.Experiment]:
/// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
///
class ExperimentsClient {
 public:
  explicit ExperimentsClient(std::shared_ptr<ExperimentsConnection> connection,
                             Options opts = {});
  ~ExperimentsClient();

  ///@{
  /// @name Copy and move support
  ExperimentsClient(ExperimentsClient const&) = default;
  ExperimentsClient& operator=(ExperimentsClient const&) = default;
  ExperimentsClient(ExperimentsClient&&) = default;
  ExperimentsClient& operator=(ExperimentsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ExperimentsClient const& a,
                         ExperimentsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ExperimentsClient const& a,
                         ExperimentsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns the list of all experiments in the specified
  /// [Environment][google.cloud.dialogflow.cx.v3.Environment].
  ///
  /// @param parent  Required. The [Environment][google.cloud.dialogflow.cx.v3.Environment] to
  ///  list all environments for. Format:
  ///  @n
  ///  @code
  ///  projects/<Project ID>/locations/<Location ID>/agents/<Agent ID>/environments/<Environment ID>
  ///  @endcode
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
  ///     [google.cloud.dialogflow.cx.v3.Experiment], or rather,
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
  /// [google.cloud.dialogflow.cx.v3.Experiment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  /// [google.cloud.dialogflow.cx.v3.ListExperimentsRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L405}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::cx::v3::Experiment> ListExperiments(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Returns the list of all experiments in the specified
  /// [Environment][google.cloud.dialogflow.cx.v3.Environment].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.ListExperimentsRequest].
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
  ///     [google.cloud.dialogflow.cx.v3.Experiment], or rather,
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
  /// [google.cloud.dialogflow.cx.v3.Experiment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  /// [google.cloud.dialogflow.cx.v3.ListExperimentsRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L405}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::cx::v3::Experiment> ListExperiments(
      google::cloud::dialogflow::cx::v3::ListExperimentsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment].
  ///
  /// @param name  Required. The name of the
  ///  [Environment][google.cloud.dialogflow.cx.v3.Environment]. Format:
  ///  `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/environments/<Environment ID>/experiments/<Experiment ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Experiment])
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
  /// [google.cloud.dialogflow.cx.v3.Experiment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  /// [google.cloud.dialogflow.cx.v3.GetExperimentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L441}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> GetExperiment(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.GetExperimentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Experiment])
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
  /// [google.cloud.dialogflow.cx.v3.Experiment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  /// [google.cloud.dialogflow.cx.v3.GetExperimentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L441}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> GetExperiment(
      google::cloud::dialogflow::cx::v3::GetExperimentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an [Experiment][google.cloud.dialogflow.cx.v3.Experiment] in the
  /// specified [Environment][google.cloud.dialogflow.cx.v3.Environment].
  ///
  /// @param parent  Required. The [Agent][google.cloud.dialogflow.cx.v3.Agent] to create an
  ///  [Environment][google.cloud.dialogflow.cx.v3.Environment] for. Format:
  ///  `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/environments/<Environment ID>`.
  /// @param experiment  Required. The experiment to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Experiment])
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
  /// [google.cloud.dialogflow.cx.v3.CreateExperimentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L456}
  /// [google.cloud.dialogflow.cx.v3.Experiment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> CreateExperiment(
      std::string const& parent,
      google::cloud::dialogflow::cx::v3::Experiment const& experiment,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an [Experiment][google.cloud.dialogflow.cx.v3.Experiment] in the
  /// specified [Environment][google.cloud.dialogflow.cx.v3.Environment].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.CreateExperimentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Experiment])
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
  /// [google.cloud.dialogflow.cx.v3.CreateExperimentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L456}
  /// [google.cloud.dialogflow.cx.v3.Experiment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> CreateExperiment(
      google::cloud::dialogflow::cx::v3::CreateExperimentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment].
  ///
  /// @param experiment  Required. The experiment to update.
  /// @param update_mask  Required. The mask to control which fields get updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Experiment])
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
  /// [google.cloud.dialogflow.cx.v3.Experiment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  /// [google.cloud.dialogflow.cx.v3.UpdateExperimentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L474}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> UpdateExperiment(
      google::cloud::dialogflow::cx::v3::Experiment const& experiment,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.UpdateExperimentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Experiment])
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
  /// [google.cloud.dialogflow.cx.v3.Experiment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  /// [google.cloud.dialogflow.cx.v3.UpdateExperimentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L474}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> UpdateExperiment(
      google::cloud::dialogflow::cx::v3::UpdateExperimentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment].
  ///
  /// @param name  Required. The name of the
  ///  [Environment][google.cloud.dialogflow.cx.v3.Environment] to delete. Format:
  ///  `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/environments/<Environment ID>/experiments/<Experiment ID>`.
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
  /// [google.cloud.dialogflow.cx.v3.DeleteExperimentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L485}
  /// [google.cloud.dialogflow.cx.v3.Experiment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  // clang-format on
  Status DeleteExperiment(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.DeleteExperimentRequest].
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
  /// [google.cloud.dialogflow.cx.v3.DeleteExperimentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L485}
  /// [google.cloud.dialogflow.cx.v3.Experiment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  ///
  // clang-format on
  Status DeleteExperiment(
      google::cloud::dialogflow::cx::v3::DeleteExperimentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Starts the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment]. This rpc only
  /// changes the state of experiment from PENDING to RUNNING.
  ///
  /// @param name  Required. Resource name of the experiment to start.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/environments/<Environment ID>/experiments/<Experiment ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Experiment])
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
  /// [google.cloud.dialogflow.cx.v3.Experiment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  /// [google.cloud.dialogflow.cx.v3.StartExperimentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L500}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> StartExperiment(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Starts the specified
  /// [Experiment][google.cloud.dialogflow.cx.v3.Experiment]. This rpc only
  /// changes the state of experiment from PENDING to RUNNING.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.StartExperimentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Experiment])
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
  /// [google.cloud.dialogflow.cx.v3.Experiment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  /// [google.cloud.dialogflow.cx.v3.StartExperimentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L500}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> StartExperiment(
      google::cloud::dialogflow::cx::v3::StartExperimentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Stops the specified [Experiment][google.cloud.dialogflow.cx.v3.Experiment].
  /// This rpc only changes the state of experiment from RUNNING to DONE.
  ///
  /// @param name  Required. Resource name of the experiment to stop.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/environments/<Environment ID>/experiments/<Experiment ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Experiment])
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
  /// [google.cloud.dialogflow.cx.v3.Experiment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  /// [google.cloud.dialogflow.cx.v3.StopExperimentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L514}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> StopExperiment(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Stops the specified [Experiment][google.cloud.dialogflow.cx.v3.Experiment].
  /// This rpc only changes the state of experiment from RUNNING to DONE.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.cx.v3.StopExperimentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.cx.v3.Experiment])
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
  /// [google.cloud.dialogflow.cx.v3.Experiment]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L116}
  /// [google.cloud.dialogflow.cx.v3.StopExperimentRequest]: @googleapis_reference_link{google/cloud/dialogflow/cx/v3/experiment.proto#L514}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> StopExperiment(
      google::cloud::dialogflow::cx::v3::StopExperimentRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ExperimentsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_EXPERIMENTS_CLIENT_H
