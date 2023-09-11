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
// source: google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_VPN_GATEWAYS_V1_INTERNAL_TARGET_VPN_GATEWAYS_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_VPN_GATEWAYS_V1_INTERNAL_TARGET_VPN_GATEWAYS_REST_LOGGING_DECORATOR_H

#include "google/cloud/compute/target_vpn_gateways/v1/internal/target_vpn_gateways_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <google/cloud/compute/target_vpn_gateways/v1/target_vpn_gateways.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace compute_target_vpn_gateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TargetVpnGatewaysRestLogging : public TargetVpnGatewaysRestStub {
 public:
  ~TargetVpnGatewaysRestLogging() override = default;
  TargetVpnGatewaysRestLogging(std::shared_ptr<TargetVpnGatewaysRestStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> components);

  StatusOr<google::cloud::cpp::compute::v1::TargetVpnGatewayAggregatedList>
  AggregatedListTargetVpnGateways(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::target_vpn_gateways::v1::
          AggregatedListTargetVpnGatewaysRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteTargetVpnGateway(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_vpn_gateways::v1::
          DeleteTargetVpnGatewayRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetVpnGateway>
  GetTargetVpnGateway(google::cloud::rest_internal::RestContext& rest_context,
                      google::cloud::cpp::compute::target_vpn_gateways::v1::
                          GetTargetVpnGatewayRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertTargetVpnGateway(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_vpn_gateways::v1::
          InsertTargetVpnGatewayRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetVpnGatewayList>
  ListTargetVpnGateways(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::target_vpn_gateways::v1::
          ListTargetVpnGatewaysRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetLabels(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_vpn_gateways::v1::
          SetLabelsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<TargetVpnGatewaysRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_vpn_gateways_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_VPN_GATEWAYS_V1_INTERNAL_TARGET_VPN_GATEWAYS_REST_LOGGING_DECORATOR_H
