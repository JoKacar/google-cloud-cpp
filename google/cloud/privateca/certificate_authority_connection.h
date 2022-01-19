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
// source: google/cloud/security/privateca/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVATECA_CERTIFICATE_AUTHORITY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVATECA_CERTIFICATE_AUTHORITY_CONNECTION_H

#include "google/cloud/privateca/certificate_authority_connection_idempotency_policy.h"
#include "google/cloud/privateca/internal/certificate_authority_retry_traits.h"
#include "google/cloud/privateca/internal/certificate_authority_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace privateca {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using CertificateAuthorityServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        privateca_internal::CertificateAuthorityServiceRetryTraits>;

using CertificateAuthorityServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        privateca_internal::CertificateAuthorityServiceRetryTraits>;

using CertificateAuthorityServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        privateca_internal::CertificateAuthorityServiceRetryTraits>;

class CertificateAuthorityServiceConnection {
 public:
  virtual ~CertificateAuthorityServiceConnection() = 0;

  virtual StatusOr<google::cloud::security::privateca::v1::Certificate>
  CreateCertificate(
      google::cloud::security::privateca::v1::CreateCertificateRequest const&
          request);

  virtual StatusOr<google::cloud::security::privateca::v1::Certificate>
  GetCertificate(
      google::cloud::security::privateca::v1::GetCertificateRequest const&
          request);

  virtual StreamRange<google::cloud::security::privateca::v1::Certificate>
  ListCertificates(
      google::cloud::security::privateca::v1::ListCertificatesRequest request);

  virtual StatusOr<google::cloud::security::privateca::v1::Certificate>
  RevokeCertificate(
      google::cloud::security::privateca::v1::RevokeCertificateRequest const&
          request);

  virtual StatusOr<google::cloud::security::privateca::v1::Certificate>
  UpdateCertificate(
      google::cloud::security::privateca::v1::UpdateCertificateRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
  ActivateCertificateAuthority(
      google::cloud::security::privateca::v1::
          ActivateCertificateAuthorityRequest const& request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
  CreateCertificateAuthority(
      google::cloud::security::privateca::v1::
          CreateCertificateAuthorityRequest const& request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
  DisableCertificateAuthority(
      google::cloud::security::privateca::v1::
          DisableCertificateAuthorityRequest const& request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
  EnableCertificateAuthority(
      google::cloud::security::privateca::v1::
          EnableCertificateAuthorityRequest const& request);

  virtual StatusOr<google::cloud::security::privateca::v1::
                       FetchCertificateAuthorityCsrResponse>
  FetchCertificateAuthorityCsr(
      google::cloud::security::privateca::v1::
          FetchCertificateAuthorityCsrRequest const& request);

  virtual StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>
  GetCertificateAuthority(google::cloud::security::privateca::v1::
                              GetCertificateAuthorityRequest const& request);

  virtual StreamRange<
      google::cloud::security::privateca::v1::CertificateAuthority>
  ListCertificateAuthorities(
      google::cloud::security::privateca::v1::ListCertificateAuthoritiesRequest
          request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
  UndeleteCertificateAuthority(
      google::cloud::security::privateca::v1::
          UndeleteCertificateAuthorityRequest const& request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
  DeleteCertificateAuthority(
      google::cloud::security::privateca::v1::
          DeleteCertificateAuthorityRequest const& request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
  UpdateCertificateAuthority(
      google::cloud::security::privateca::v1::
          UpdateCertificateAuthorityRequest const& request);

  virtual future<StatusOr<google::cloud::security::privateca::v1::CaPool>>
  CreateCaPool(
      google::cloud::security::privateca::v1::CreateCaPoolRequest const&
          request);

  virtual future<StatusOr<google::cloud::security::privateca::v1::CaPool>>
  UpdateCaPool(
      google::cloud::security::privateca::v1::UpdateCaPoolRequest const&
          request);

  virtual StatusOr<google::cloud::security::privateca::v1::CaPool> GetCaPool(
      google::cloud::security::privateca::v1::GetCaPoolRequest const& request);

  virtual StreamRange<google::cloud::security::privateca::v1::CaPool>
  ListCaPools(
      google::cloud::security::privateca::v1::ListCaPoolsRequest request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>
  DeleteCaPool(
      google::cloud::security::privateca::v1::DeleteCaPoolRequest const&
          request);

  virtual StatusOr<google::cloud::security::privateca::v1::FetchCaCertsResponse>
  FetchCaCerts(
      google::cloud::security::privateca::v1::FetchCaCertsRequest const&
          request);

  virtual StatusOr<
      google::cloud::security::privateca::v1::CertificateRevocationList>
  GetCertificateRevocationList(
      google::cloud::security::privateca::v1::
          GetCertificateRevocationListRequest const& request);

  virtual StreamRange<
      google::cloud::security::privateca::v1::CertificateRevocationList>
  ListCertificateRevocationLists(
      google::cloud::security::privateca::v1::
          ListCertificateRevocationListsRequest request);

  virtual future<StatusOr<
      google::cloud::security::privateca::v1::CertificateRevocationList>>
  UpdateCertificateRevocationList(
      google::cloud::security::privateca::v1::
          UpdateCertificateRevocationListRequest const& request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>
  CreateCertificateTemplate(
      google::cloud::security::privateca::v1::
          CreateCertificateTemplateRequest const& request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>
  DeleteCertificateTemplate(
      google::cloud::security::privateca::v1::
          DeleteCertificateTemplateRequest const& request);

  virtual StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>
  GetCertificateTemplate(google::cloud::security::privateca::v1::
                             GetCertificateTemplateRequest const& request);

  virtual StreamRange<
      google::cloud::security::privateca::v1::CertificateTemplate>
  ListCertificateTemplates(
      google::cloud::security::privateca::v1::ListCertificateTemplatesRequest
          request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>
  UpdateCertificateTemplate(
      google::cloud::security::privateca::v1::
          UpdateCertificateTemplateRequest const& request);
};

std::shared_ptr<CertificateAuthorityServiceConnection>
MakeCertificateAuthorityServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privateca
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace privateca_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<privateca::CertificateAuthorityServiceConnection>
MakeCertificateAuthorityServiceConnection(
    std::shared_ptr<CertificateAuthorityServiceStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privateca_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVATECA_CERTIFICATE_AUTHORITY_CONNECTION_H
