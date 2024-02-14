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
// source: google/cloud/edgenetwork/v1/service.proto

#include "google/cloud/edgenetwork/v1/internal/edge_network_connection_impl.h"
#include "google/cloud/edgenetwork/v1/internal/edge_network_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace edgenetwork_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<edgenetwork_v1::EdgeNetworkRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<edgenetwork_v1::EdgeNetworkRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<edgenetwork_v1::EdgeNetworkBackoffPolicyOption>()->clone();
}

std::unique_ptr<edgenetwork_v1::EdgeNetworkConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<edgenetwork_v1::EdgeNetworkConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<edgenetwork_v1::EdgeNetworkPollingPolicyOption>()->clone();
}

}  // namespace

EdgeNetworkConnectionImpl::EdgeNetworkConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<edgenetwork_v1_internal::EdgeNetworkStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      EdgeNetworkConnection::options())) {}

StatusOr<google::cloud::edgenetwork::v1::InitializeZoneResponse>
EdgeNetworkConnectionImpl::InitializeZone(
    google::cloud::edgenetwork::v1::InitializeZoneRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InitializeZone(request),
      [this](grpc::ClientContext& context,
             google::cloud::edgenetwork::v1::InitializeZoneRequest const&
                 request) { return stub_->InitializeZone(context, request); },
      request, __func__);
}

StreamRange<google::cloud::edgenetwork::v1::Zone>
EdgeNetworkConnectionImpl::ListZones(
    google::cloud::edgenetwork::v1::ListZonesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListZones(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::edgenetwork::v1::Zone>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<edgenetwork_v1::EdgeNetworkRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::edgenetwork::v1::ListZonesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::edgenetwork::v1::ListZonesRequest const&
                       request) { return stub->ListZones(context, request); },
            r, function_name);
      },
      [](google::cloud::edgenetwork::v1::ListZonesResponse r) {
        std::vector<google::cloud::edgenetwork::v1::Zone> result(
            r.zones().size());
        auto& messages = *r.mutable_zones();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::edgenetwork::v1::Zone>
EdgeNetworkConnectionImpl::GetZone(
    google::cloud::edgenetwork::v1::GetZoneRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetZone(request),
      [this](grpc::ClientContext& context,
             google::cloud::edgenetwork::v1::GetZoneRequest const& request) {
        return stub_->GetZone(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::edgenetwork::v1::Network>
EdgeNetworkConnectionImpl::ListNetworks(
    google::cloud::edgenetwork::v1::ListNetworksRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListNetworks(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::edgenetwork::v1::Network>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<edgenetwork_v1::EdgeNetworkRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::edgenetwork::v1::ListNetworksRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::edgenetwork::v1::ListNetworksRequest const&
                       request) {
              return stub->ListNetworks(context, request);
            },
            r, function_name);
      },
      [](google::cloud::edgenetwork::v1::ListNetworksResponse r) {
        std::vector<google::cloud::edgenetwork::v1::Network> result(
            r.networks().size());
        auto& messages = *r.mutable_networks();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::edgenetwork::v1::Network>
EdgeNetworkConnectionImpl::GetNetwork(
    google::cloud::edgenetwork::v1::GetNetworkRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetNetwork(request),
      [this](grpc::ClientContext& context,
             google::cloud::edgenetwork::v1::GetNetworkRequest const& request) {
        return stub_->GetNetwork(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseNetworkResponse>
EdgeNetworkConnectionImpl::DiagnoseNetwork(
    google::cloud::edgenetwork::v1::DiagnoseNetworkRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DiagnoseNetwork(request),
      [this](grpc::ClientContext& context,
             google::cloud::edgenetwork::v1::DiagnoseNetworkRequest const&
                 request) { return stub_->DiagnoseNetwork(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::edgenetwork::v1::Network>>
EdgeNetworkConnectionImpl::CreateNetwork(
    google::cloud::edgenetwork::v1::CreateNetworkRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateNetwork(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgenetwork::v1::Network>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::edgenetwork::v1::CreateNetworkRequest const& request) {
        return stub->AsyncCreateNetwork(cq, std::move(context), options,
                                        request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::edgenetwork::v1::Network>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkConnectionImpl::DeleteNetwork(
    google::cloud::edgenetwork::v1::DeleteNetworkRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteNetwork(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgenetwork::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::edgenetwork::v1::DeleteNetworkRequest const& request) {
        return stub->AsyncDeleteNetwork(cq, std::move(context), options,
                                        request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::edgenetwork::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::edgenetwork::v1::Subnet>
EdgeNetworkConnectionImpl::ListSubnets(
    google::cloud::edgenetwork::v1::ListSubnetsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListSubnets(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::edgenetwork::v1::Subnet>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<edgenetwork_v1::EdgeNetworkRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::edgenetwork::v1::ListSubnetsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::edgenetwork::v1::ListSubnetsRequest const&
                       request) { return stub->ListSubnets(context, request); },
            r, function_name);
      },
      [](google::cloud::edgenetwork::v1::ListSubnetsResponse r) {
        std::vector<google::cloud::edgenetwork::v1::Subnet> result(
            r.subnets().size());
        auto& messages = *r.mutable_subnets();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::edgenetwork::v1::Subnet>
EdgeNetworkConnectionImpl::GetSubnet(
    google::cloud::edgenetwork::v1::GetSubnetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetSubnet(request),
      [this](grpc::ClientContext& context,
             google::cloud::edgenetwork::v1::GetSubnetRequest const& request) {
        return stub_->GetSubnet(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::edgenetwork::v1::Subnet>>
EdgeNetworkConnectionImpl::CreateSubnet(
    google::cloud::edgenetwork::v1::CreateSubnetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateSubnet(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgenetwork::v1::Subnet>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::edgenetwork::v1::CreateSubnetRequest const& request) {
        return stub->AsyncCreateSubnet(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::edgenetwork::v1::Subnet>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::edgenetwork::v1::Subnet>>
EdgeNetworkConnectionImpl::UpdateSubnet(
    google::cloud::edgenetwork::v1::UpdateSubnetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateSubnet(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgenetwork::v1::Subnet>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::edgenetwork::v1::UpdateSubnetRequest const& request) {
        return stub->AsyncUpdateSubnet(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::edgenetwork::v1::Subnet>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkConnectionImpl::DeleteSubnet(
    google::cloud::edgenetwork::v1::DeleteSubnetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteSubnet(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgenetwork::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::edgenetwork::v1::DeleteSubnetRequest const& request) {
        return stub->AsyncDeleteSubnet(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::edgenetwork::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::edgenetwork::v1::Interconnect>
EdgeNetworkConnectionImpl::ListInterconnects(
    google::cloud::edgenetwork::v1::ListInterconnectsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListInterconnects(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::edgenetwork::v1::Interconnect>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<edgenetwork_v1::EdgeNetworkRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::edgenetwork::v1::ListInterconnectsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::edgenetwork::v1::ListInterconnectsRequest const&
                    request) {
              return stub->ListInterconnects(context, request);
            },
            r, function_name);
      },
      [](google::cloud::edgenetwork::v1::ListInterconnectsResponse r) {
        std::vector<google::cloud::edgenetwork::v1::Interconnect> result(
            r.interconnects().size());
        auto& messages = *r.mutable_interconnects();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::edgenetwork::v1::Interconnect>
EdgeNetworkConnectionImpl::GetInterconnect(
    google::cloud::edgenetwork::v1::GetInterconnectRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetInterconnect(request),
      [this](grpc::ClientContext& context,
             google::cloud::edgenetwork::v1::GetInterconnectRequest const&
                 request) { return stub_->GetInterconnect(context, request); },
      request, __func__);
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseInterconnectResponse>
EdgeNetworkConnectionImpl::DiagnoseInterconnect(
    google::cloud::edgenetwork::v1::DiagnoseInterconnectRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DiagnoseInterconnect(request),
      [this](grpc::ClientContext& context,
             google::cloud::edgenetwork::v1::DiagnoseInterconnectRequest const&
                 request) {
        return stub_->DiagnoseInterconnect(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::edgenetwork::v1::InterconnectAttachment>
EdgeNetworkConnectionImpl::ListInterconnectAttachments(
    google::cloud::edgenetwork::v1::ListInterconnectAttachmentsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListInterconnectAttachments(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::edgenetwork::v1::InterconnectAttachment>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<edgenetwork_v1::EdgeNetworkRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::edgenetwork::v1::
              ListInterconnectAttachmentsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::edgenetwork::v1::
                       ListInterconnectAttachmentsRequest const& request) {
              return stub->ListInterconnectAttachments(context, request);
            },
            r, function_name);
      },
      [](google::cloud::edgenetwork::v1::ListInterconnectAttachmentsResponse
             r) {
        std::vector<google::cloud::edgenetwork::v1::InterconnectAttachment>
            result(r.interconnect_attachments().size());
        auto& messages = *r.mutable_interconnect_attachments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>
EdgeNetworkConnectionImpl::GetInterconnectAttachment(
    google::cloud::edgenetwork::v1::GetInterconnectAttachmentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetInterconnectAttachment(request),
      [this](grpc::ClientContext& context,
             google::cloud::edgenetwork::v1::
                 GetInterconnectAttachmentRequest const& request) {
        return stub_->GetInterconnectAttachment(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>>
EdgeNetworkConnectionImpl::CreateInterconnectAttachment(
    google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateInterconnectAttachment(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgenetwork::v1::InterconnectAttachment>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::edgenetwork::v1::
                         CreateInterconnectAttachmentRequest const& request) {
        return stub->AsyncCreateInterconnectAttachment(cq, std::move(context),
                                                       options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::edgenetwork::v1::InterconnectAttachment>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkConnectionImpl::DeleteInterconnectAttachment(
    google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteInterconnectAttachment(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgenetwork::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::edgenetwork::v1::
                         DeleteInterconnectAttachmentRequest const& request) {
        return stub->AsyncDeleteInterconnectAttachment(cq, std::move(context),
                                                       options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::edgenetwork::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::edgenetwork::v1::Router>
EdgeNetworkConnectionImpl::ListRouters(
    google::cloud::edgenetwork::v1::ListRoutersRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListRouters(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::edgenetwork::v1::Router>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<edgenetwork_v1::EdgeNetworkRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::edgenetwork::v1::ListRoutersRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::edgenetwork::v1::ListRoutersRequest const&
                       request) { return stub->ListRouters(context, request); },
            r, function_name);
      },
      [](google::cloud::edgenetwork::v1::ListRoutersResponse r) {
        std::vector<google::cloud::edgenetwork::v1::Router> result(
            r.routers().size());
        auto& messages = *r.mutable_routers();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::edgenetwork::v1::Router>
EdgeNetworkConnectionImpl::GetRouter(
    google::cloud::edgenetwork::v1::GetRouterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetRouter(request),
      [this](grpc::ClientContext& context,
             google::cloud::edgenetwork::v1::GetRouterRequest const& request) {
        return stub_->GetRouter(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseRouterResponse>
EdgeNetworkConnectionImpl::DiagnoseRouter(
    google::cloud::edgenetwork::v1::DiagnoseRouterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DiagnoseRouter(request),
      [this](grpc::ClientContext& context,
             google::cloud::edgenetwork::v1::DiagnoseRouterRequest const&
                 request) { return stub_->DiagnoseRouter(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::edgenetwork::v1::Router>>
EdgeNetworkConnectionImpl::CreateRouter(
    google::cloud::edgenetwork::v1::CreateRouterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateRouter(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgenetwork::v1::Router>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::edgenetwork::v1::CreateRouterRequest const& request) {
        return stub->AsyncCreateRouter(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::edgenetwork::v1::Router>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::edgenetwork::v1::Router>>
EdgeNetworkConnectionImpl::UpdateRouter(
    google::cloud::edgenetwork::v1::UpdateRouterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateRouter(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgenetwork::v1::Router>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::edgenetwork::v1::UpdateRouterRequest const& request) {
        return stub->AsyncUpdateRouter(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::edgenetwork::v1::Router>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::edgenetwork::v1::OperationMetadata>>
EdgeNetworkConnectionImpl::DeleteRouter(
    google::cloud::edgenetwork::v1::DeleteRouterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteRouter(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgenetwork::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::edgenetwork::v1::DeleteRouterRequest const& request) {
        return stub->AsyncDeleteRouter(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::edgenetwork::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgenetwork_v1_internal
}  // namespace cloud
}  // namespace google
