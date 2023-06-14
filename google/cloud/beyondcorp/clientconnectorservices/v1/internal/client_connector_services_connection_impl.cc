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

#include "google/cloud/beyondcorp/clientconnectorservices/v1/internal/client_connector_services_connection_impl.h"
#include "google/cloud/beyondcorp/clientconnectorservices/v1/internal/client_connector_services_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace beyondcorp_clientconnectorservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ClientConnectorServicesServiceConnectionImpl::
    ClientConnectorServicesServiceConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<beyondcorp_clientconnectorservices_v1_internal::
                            ClientConnectorServicesServiceStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          ClientConnectorServicesServiceConnection::options())) {}

StreamRange<google::cloud::beyondcorp::clientconnectorservices::v1::
                ClientConnectorService>
ClientConnectorServicesServiceConnectionImpl::ListClientConnectorServices(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        ListClientConnectorServicesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<beyondcorp_clientconnectorservices_v1::
                          ClientConnectorServicesServiceRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListClientConnectorServices(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorService>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::beyondcorp::clientconnectorservices::v1::
                          ListClientConnectorServicesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::beyondcorp::clientconnectorservices::v1::
                       ListClientConnectorServicesRequest const& request) {
              return stub->ListClientConnectorServices(context, request);
            },
            r, function_name);
      },
      [](google::cloud::beyondcorp::clientconnectorservices::v1::
             ListClientConnectorServicesResponse r) {
        std::vector<google::cloud::beyondcorp::clientconnectorservices::v1::
                        ClientConnectorService>
            result(r.client_connector_services().size());
        auto& messages = *r.mutable_client_connector_services();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
             ClientConnectorService>
ClientConnectorServicesServiceConnectionImpl::GetClientConnectorService(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        GetClientConnectorServiceRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetClientConnectorService(request),
      [this](grpc::ClientContext& context,
             google::cloud::beyondcorp::clientconnectorservices::v1::
                 GetClientConnectorServiceRequest const& request) {
        return stub_->GetClientConnectorService(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                    ClientConnectorService>>
ClientConnectorServicesServiceConnectionImpl::CreateClientConnectorService(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        CreateClientConnectorServiceRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::clientconnectorservices::v1::
          ClientConnectorService>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::clientconnectorservices::v1::
                 CreateClientConnectorServiceRequest const& request) {
        return stub->AsyncCreateClientConnectorService(cq, std::move(context),
                                                       request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::beyondcorp::clientconnectorservices::v1::
              ClientConnectorService>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateClientConnectorService(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                    ClientConnectorService>>
ClientConnectorServicesServiceConnectionImpl::UpdateClientConnectorService(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        UpdateClientConnectorServiceRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::clientconnectorservices::v1::
          ClientConnectorService>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::clientconnectorservices::v1::
                 UpdateClientConnectorServiceRequest const& request) {
        return stub->AsyncUpdateClientConnectorService(cq, std::move(context),
                                                       request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::beyondcorp::clientconnectorservices::v1::
              ClientConnectorService>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateClientConnectorService(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                    ClientConnectorServiceOperationMetadata>>
ClientConnectorServicesServiceConnectionImpl::DeleteClientConnectorService(
    google::cloud::beyondcorp::clientconnectorservices::v1::
        DeleteClientConnectorServiceRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::clientconnectorservices::v1::
          ClientConnectorServiceOperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::clientconnectorservices::v1::
                 DeleteClientConnectorServiceRequest const& request) {
        return stub->AsyncDeleteClientConnectorService(cq, std::move(context),
                                                       request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::beyondcorp::clientconnectorservices::v1::
              ClientConnectorServiceOperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteClientConnectorService(request),
      polling_policy(), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_clientconnectorservices_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
