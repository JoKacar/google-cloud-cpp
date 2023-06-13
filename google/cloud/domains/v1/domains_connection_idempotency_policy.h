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
// source: google/cloud/domains/v1/domains.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_DOMAINS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_DOMAINS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/domains/v1/domains.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace domains_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DomainsConnectionIdempotencyPolicy {
 public:
  virtual ~DomainsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<DomainsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency SearchDomains(
      google::cloud::domains::v1::SearchDomainsRequest const& request);

  virtual google::cloud::Idempotency RetrieveRegisterParameters(
      google::cloud::domains::v1::RetrieveRegisterParametersRequest const&
          request);

  virtual google::cloud::Idempotency RegisterDomain(
      google::cloud::domains::v1::RegisterDomainRequest const& request);

  virtual google::cloud::Idempotency RetrieveTransferParameters(
      google::cloud::domains::v1::RetrieveTransferParametersRequest const&
          request);

  virtual google::cloud::Idempotency TransferDomain(
      google::cloud::domains::v1::TransferDomainRequest const& request);

  virtual google::cloud::Idempotency ListRegistrations(
      google::cloud::domains::v1::ListRegistrationsRequest request);

  virtual google::cloud::Idempotency GetRegistration(
      google::cloud::domains::v1::GetRegistrationRequest const& request);

  virtual google::cloud::Idempotency UpdateRegistration(
      google::cloud::domains::v1::UpdateRegistrationRequest const& request);

  virtual google::cloud::Idempotency ConfigureManagementSettings(
      google::cloud::domains::v1::ConfigureManagementSettingsRequest const&
          request);

  virtual google::cloud::Idempotency ConfigureDnsSettings(
      google::cloud::domains::v1::ConfigureDnsSettingsRequest const& request);

  virtual google::cloud::Idempotency ConfigureContactSettings(
      google::cloud::domains::v1::ConfigureContactSettingsRequest const&
          request);

  virtual google::cloud::Idempotency ExportRegistration(
      google::cloud::domains::v1::ExportRegistrationRequest const& request);

  virtual google::cloud::Idempotency DeleteRegistration(
      google::cloud::domains::v1::DeleteRegistrationRequest const& request);

  virtual google::cloud::Idempotency RetrieveAuthorizationCode(
      google::cloud::domains::v1::RetrieveAuthorizationCodeRequest const&
          request);

  virtual google::cloud::Idempotency ResetAuthorizationCode(
      google::cloud::domains::v1::ResetAuthorizationCodeRequest const& request);
};

std::unique_ptr<DomainsConnectionIdempotencyPolicy>
MakeDefaultDomainsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace domains_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOMAINS_V1_DOMAINS_CONNECTION_IDEMPOTENCY_POLICY_H
