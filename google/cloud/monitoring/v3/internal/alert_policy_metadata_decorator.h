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
// source: google/monitoring/v3/alert_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_ALERT_POLICY_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_ALERT_POLICY_METADATA_DECORATOR_H

#include "google/cloud/monitoring/v3/internal/alert_policy_stub.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AlertPolicyServiceMetadata : public AlertPolicyServiceStub {
 public:
  ~AlertPolicyServiceMetadata() override = default;
  AlertPolicyServiceMetadata(
      std::shared_ptr<AlertPolicyServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata);

  StatusOr<google::monitoring::v3::ListAlertPoliciesResponse> ListAlertPolicies(
      grpc::ClientContext& context,
      google::monitoring::v3::ListAlertPoliciesRequest const& request) override;

  StatusOr<google::monitoring::v3::AlertPolicy> GetAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::GetAlertPolicyRequest const& request) override;

  StatusOr<google::monitoring::v3::AlertPolicy> CreateAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::CreateAlertPolicyRequest const& request) override;

  Status DeleteAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::DeleteAlertPolicyRequest const& request) override;

  StatusOr<google::monitoring::v3::AlertPolicy> UpdateAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::UpdateAlertPolicyRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<AlertPolicyServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_ALERT_POLICY_METADATA_DECORATOR_H
