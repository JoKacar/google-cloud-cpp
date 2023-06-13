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
// source: google/cloud/dialogflow/v2/session_entity_type.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_SESSION_ENTITY_TYPES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_SESSION_ENTITY_TYPES_CONNECTION_H

#include "google/cloud/dialogflow_es/internal/session_entity_types_retry_traits.h"
#include "google/cloud/dialogflow_es/session_entity_types_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/v2/session_entity_type.pb.h>
#include <memory>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using SessionEntityTypesRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        dialogflow_es_internal::SessionEntityTypesRetryTraits>;

using SessionEntityTypesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        dialogflow_es_internal::SessionEntityTypesRetryTraits>;

using SessionEntityTypesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        dialogflow_es_internal::SessionEntityTypesRetryTraits>;

/**
 * The `SessionEntityTypesConnection` object for `SessionEntityTypesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `SessionEntityTypesClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `SessionEntityTypesClient`.
 *
 * To create a concrete instance, see `MakeSessionEntityTypesConnection()`.
 *
 * For mocking, see `dialogflow_es_mocks::MockSessionEntityTypesConnection`.
 */
class SessionEntityTypesConnection {
 public:
  virtual ~SessionEntityTypesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::dialogflow::v2::SessionEntityType>
  ListSessionEntityTypes(
      google::cloud::dialogflow::v2::ListSessionEntityTypesRequest request);

  virtual StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  GetSessionEntityType(
      google::cloud::dialogflow::v2::GetSessionEntityTypeRequest const&
          request);

  virtual StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  CreateSessionEntityType(
      google::cloud::dialogflow::v2::CreateSessionEntityTypeRequest const&
          request);

  virtual StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
  UpdateSessionEntityType(
      google::cloud::dialogflow::v2::UpdateSessionEntityTypeRequest const&
          request);

  virtual Status DeleteSessionEntityType(
      google::cloud::dialogflow::v2::DeleteSessionEntityTypeRequest const&
          request);
};

/**
 * A factory function to construct an object of type
 * `SessionEntityTypesConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * SessionEntityTypesClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `SessionEntityTypesConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dialogflow_es::SessionEntityTypesPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `SessionEntityTypesConnection`
 * created by this function.
 */
std::shared_ptr<SessionEntityTypesConnection> MakeSessionEntityTypesConnection(
    std::string const& location, Options options = {});

/**
 * A backwards-compatible version of the previous factory function.  Unless
 * the service also offers a global endpoint, the default value of the
 * `EndpointOption` may be useless, in which case it must be overridden.
 *
 * @deprecated Please use the `location` overload instead.
 */
std::shared_ptr<SessionEntityTypesConnection> MakeSessionEntityTypesConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_SESSION_ENTITY_TYPES_CONNECTION_H
