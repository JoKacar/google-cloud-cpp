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
// source: google/cloud/certificatemanager/v1/certificate_manager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_V1_CERTIFICATE_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_V1_CERTIFICATE_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/certificatemanager/v1/certificate_manager.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace certificatemanager_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CertificateManagerConnectionIdempotencyPolicy {
 public:
  virtual ~CertificateManagerConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<CertificateManagerConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ListCertificates(
      google::cloud::certificatemanager::v1::ListCertificatesRequest request);

  virtual google::cloud::Idempotency GetCertificate(
      google::cloud::certificatemanager::v1::GetCertificateRequest const&
          request);

  virtual google::cloud::Idempotency CreateCertificate(
      google::cloud::certificatemanager::v1::CreateCertificateRequest const&
          request);

  virtual google::cloud::Idempotency UpdateCertificate(
      google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
          request);

  virtual google::cloud::Idempotency DeleteCertificate(
      google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
          request);

  virtual google::cloud::Idempotency ListCertificateMaps(
      google::cloud::certificatemanager::v1::ListCertificateMapsRequest
          request);

  virtual google::cloud::Idempotency GetCertificateMap(
      google::cloud::certificatemanager::v1::GetCertificateMapRequest const&
          request);

  virtual google::cloud::Idempotency CreateCertificateMap(
      google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&
          request);

  virtual google::cloud::Idempotency UpdateCertificateMap(
      google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&
          request);

  virtual google::cloud::Idempotency DeleteCertificateMap(
      google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&
          request);

  virtual google::cloud::Idempotency ListCertificateMapEntries(
      google::cloud::certificatemanager::v1::ListCertificateMapEntriesRequest
          request);

  virtual google::cloud::Idempotency GetCertificateMapEntry(
      google::cloud::certificatemanager::v1::
          GetCertificateMapEntryRequest const& request);

  virtual google::cloud::Idempotency CreateCertificateMapEntry(
      google::cloud::certificatemanager::v1::
          CreateCertificateMapEntryRequest const& request);

  virtual google::cloud::Idempotency UpdateCertificateMapEntry(
      google::cloud::certificatemanager::v1::
          UpdateCertificateMapEntryRequest const& request);

  virtual google::cloud::Idempotency DeleteCertificateMapEntry(
      google::cloud::certificatemanager::v1::
          DeleteCertificateMapEntryRequest const& request);

  virtual google::cloud::Idempotency ListDnsAuthorizations(
      google::cloud::certificatemanager::v1::ListDnsAuthorizationsRequest
          request);

  virtual google::cloud::Idempotency GetDnsAuthorization(
      google::cloud::certificatemanager::v1::GetDnsAuthorizationRequest const&
          request);

  virtual google::cloud::Idempotency CreateDnsAuthorization(
      google::cloud::certificatemanager::v1::
          CreateDnsAuthorizationRequest const& request);

  virtual google::cloud::Idempotency UpdateDnsAuthorization(
      google::cloud::certificatemanager::v1::
          UpdateDnsAuthorizationRequest const& request);

  virtual google::cloud::Idempotency DeleteDnsAuthorization(
      google::cloud::certificatemanager::v1::
          DeleteDnsAuthorizationRequest const& request);

  virtual google::cloud::Idempotency ListCertificateIssuanceConfigs(
      google::cloud::certificatemanager::v1::
          ListCertificateIssuanceConfigsRequest request);

  virtual google::cloud::Idempotency GetCertificateIssuanceConfig(
      google::cloud::certificatemanager::v1::
          GetCertificateIssuanceConfigRequest const& request);

  virtual google::cloud::Idempotency CreateCertificateIssuanceConfig(
      google::cloud::certificatemanager::v1::
          CreateCertificateIssuanceConfigRequest const& request);

  virtual google::cloud::Idempotency DeleteCertificateIssuanceConfig(
      google::cloud::certificatemanager::v1::
          DeleteCertificateIssuanceConfigRequest const& request);
};

std::unique_ptr<CertificateManagerConnectionIdempotencyPolicy>
MakeDefaultCertificateManagerConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace certificatemanager_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_V1_CERTIFICATE_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H
