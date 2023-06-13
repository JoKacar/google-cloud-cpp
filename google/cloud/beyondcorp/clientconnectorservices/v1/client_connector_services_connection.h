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
// source:
// google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTCONNECTORSERVICES_V1_CLIENT_CONNECTOR_SERVICES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTCONNECTORSERVICES_V1_CLIENT_CONNECTOR_SERVICES_CONNECTION_H

#include "google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_connection_idempotency_policy.h"
#include "google/cloud/beyondcorp/clientconnectorservices/v1/internal/client_connector_services_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace beyondcorp_clientconnectorservices_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ClientConnectorServicesServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        beyondcorp_clientconnectorservices_v1_internal::
            ClientConnectorServicesServiceRetryTraits>;

using ClientConnectorServicesServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        beyondcorp_clientconnectorservices_v1_internal::
            ClientConnectorServicesServiceRetryTraits>;

using ClientConnectorServicesServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        beyondcorp_clientconnectorservices_v1_internal::
            ClientConnectorServicesServiceRetryTraits>;

/**
 * The `ClientConnectorServicesServiceConnection` object for
 * `ClientConnectorServicesServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ClientConnectorServicesServiceClient`. This allows users to inject
 * custom behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `ClientConnectorServicesServiceClient`.
 *
 * To create a concrete instance, see
 * `MakeClientConnectorServicesServiceConnection()`.
 *
 * For mocking, see
 * `beyondcorp_clientconnectorservices_v1_mocks::MockClientConnectorServicesServiceConnection`.
 */
class ClientConnectorServicesServiceConnection {
 public:
  virtual ~ClientConnectorServicesServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::beyondcorp::clientconnectorservices::v1::
                          ClientConnectorService>
  ListClientConnectorServices(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          ListClientConnectorServicesRequest request);

  virtual StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                       ClientConnectorService>
  GetClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          GetClientConnectorServiceRequest const& request);

  virtual future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::
                              v1::ClientConnectorService>>
  CreateClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          CreateClientConnectorServiceRequest const& request);

  virtual future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::
                              v1::ClientConnectorService>>
  UpdateClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          UpdateClientConnectorServiceRequest const& request);

  virtual future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::
                              v1::ClientConnectorServiceOperationMetadata>>
  DeleteClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          DeleteClientConnectorServiceRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `ClientConnectorServicesServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * ClientConnectorServicesServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ClientConnectorServicesServiceConnection`. Expected options are any
 * of the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * -
 * `google::cloud::beyondcorp_clientconnectorservices_v1::ClientConnectorServicesServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the
 * `ClientConnectorServicesServiceConnection` created by this function.
 */
std::shared_ptr<ClientConnectorServicesServiceConnection>
MakeClientConnectorServicesServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_clientconnectorservices_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTCONNECTORSERVICES_V1_CLIENT_CONNECTOR_SERVICES_CONNECTION_H
