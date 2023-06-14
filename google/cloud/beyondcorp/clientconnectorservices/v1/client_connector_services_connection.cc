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

#include "google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_connection.h"
#include "google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_options.h"
#include "google/cloud/beyondcorp/clientconnectorservices/v1/internal/client_connector_services_connection_impl.h"
#include "google/cloud/beyondcorp/clientconnectorservices/v1/internal/client_connector_services_option_defaults.h"
#include "google/cloud/beyondcorp/clientconnectorservices/v1/internal/client_connector_services_stub_factory.h"
#include "google/cloud/beyondcorp/clientconnectorservices/v1/internal/client_connector_services_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace beyondcorp_clientconnectorservices_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ClientConnectorServicesServiceConnection::
    ~ClientConnectorServicesServiceConnection() = default;

StreamRange<google::cloud::beyondcorp::clientconnectorservices::v1::
                ClientConnectorService>
ClientConnectorServicesServiceConnection::ListClientConnectorServices(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        ListClientConnectorServicesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorService>>();
}

StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
             ClientConnectorService>
ClientConnectorServicesServiceConnection::GetClientConnectorService(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        GetClientConnectorServiceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                    ClientConnectorService>>
ClientConnectorServicesServiceConnection::CreateClientConnectorService(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        CreateClientConnectorServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                   ClientConnectorService>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                    ClientConnectorService>>
ClientConnectorServicesServiceConnection::UpdateClientConnectorService(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        UpdateClientConnectorServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                   ClientConnectorService>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                    ClientConnectorServiceOperationMetadata>>
ClientConnectorServicesServiceConnection::DeleteClientConnectorService(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        DeleteClientConnectorServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                   ClientConnectorServiceOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<ClientConnectorServicesServiceConnection>
MakeClientConnectorServicesServiceConnection(Options options) {
  internal::CheckExpectedOptions<
      CommonOptionList, GrpcOptionList, UnifiedCredentialsOptionList,
      ClientConnectorServicesServicePolicyOptionList>(options, __func__);
  options = beyondcorp_clientconnectorservices_v1_internal::
      ClientConnectorServicesServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = beyondcorp_clientconnectorservices_v1_internal::
      CreateDefaultClientConnectorServicesServiceStub(background->cq(),
                                                      options);
  return beyondcorp_clientconnectorservices_v1_internal::
      MakeClientConnectorServicesServiceTracingConnection(
          std::make_shared<beyondcorp_clientconnectorservices_v1_internal::
                               ClientConnectorServicesServiceConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_clientconnectorservices_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
