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
// source: google/cloud/compute/networks/v1/networks.proto

#include "google/cloud/compute/networks/v1/internal/networks_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_networks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworksRestLogging::NetworksRestLogging(
    std::shared_ptr<NetworksRestStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworksRestLogging::AsyncAddPeering(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::networks::v1::AddPeeringRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::networks::v1::AddPeeringRequest const&
                 request) {
        return child_->AsyncAddPeering(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworksRestLogging::AsyncDeleteNetwork(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::networks::v1::DeleteNetworkRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> rest_context,
          google::cloud::cpp::compute::networks::v1::DeleteNetworkRequest const&
              request) {
        return child_->AsyncDeleteNetwork(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Network>
NetworksRestLogging::GetNetwork(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::networks::v1::GetNetworkRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::networks::v1::GetNetworkRequest const&
                 request) { return child_->GetNetwork(rest_context, request); },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::NetworksGetEffectiveFirewallsResponse>
NetworksRestLogging::GetEffectiveFirewalls(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::networks::v1::
        GetEffectiveFirewallsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::networks::v1::
                 GetEffectiveFirewallsRequest const& request) {
        return child_->GetEffectiveFirewalls(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworksRestLogging::AsyncInsertNetwork(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::networks::v1::InsertNetworkRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> rest_context,
          google::cloud::cpp::compute::networks::v1::InsertNetworkRequest const&
              request) {
        return child_->AsyncInsertNetwork(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::NetworkList>
NetworksRestLogging::ListNetworks(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::networks::v1::ListNetworksRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::networks::v1::ListNetworksRequest const&
              request) { return child_->ListNetworks(rest_context, request); },
      rest_context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::ExchangedPeeringRoutesList>
NetworksRestLogging::ListPeeringRoutes(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::networks::v1::ListPeeringRoutesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::networks::v1::
                 ListPeeringRoutesRequest const& request) {
        return child_->ListPeeringRoutes(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworksRestLogging::AsyncPatchNetwork(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::networks::v1::PatchNetworkRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> rest_context,
          google::cloud::cpp::compute::networks::v1::PatchNetworkRequest const&
              request) {
        return child_->AsyncPatchNetwork(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworksRestLogging::AsyncRemovePeering(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::networks::v1::RemovePeeringRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> rest_context,
          google::cloud::cpp::compute::networks::v1::RemovePeeringRequest const&
              request) {
        return child_->AsyncRemovePeering(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworksRestLogging::AsyncSwitchToCustomMode(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::networks::v1::SwitchToCustomModeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::networks::v1::
                 SwitchToCustomModeRequest const& request) {
        return child_->AsyncSwitchToCustomMode(cq, std::move(rest_context),
                                               request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworksRestLogging::AsyncUpdatePeering(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::networks::v1::UpdatePeeringRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> rest_context,
          google::cloud::cpp::compute::networks::v1::UpdatePeeringRequest const&
              request) {
        return child_->AsyncUpdatePeering(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworksRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetGlobalOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::global_operations::v1::
                 GetGlobalOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<Status> NetworksRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteGlobalOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteGlobalOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_networks_v1_internal
}  // namespace cloud
}  // namespace google
