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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_V1_CERTIFICATE_MANAGER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_V1_CERTIFICATE_MANAGER_CONNECTION_H

#include "google/cloud/certificatemanager/v1/certificate_manager_connection_idempotency_policy.h"
#include "google/cloud/certificatemanager/v1/internal/certificate_manager_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/certificatemanager/v1/certificate_manager.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace certificatemanager_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using CertificateManagerRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        certificatemanager_v1_internal::CertificateManagerRetryTraits>;

using CertificateManagerLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        certificatemanager_v1_internal::CertificateManagerRetryTraits>;

using CertificateManagerLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        certificatemanager_v1_internal::CertificateManagerRetryTraits>;

/**
 * The `CertificateManagerConnection` object for `CertificateManagerClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CertificateManagerClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `CertificateManagerClient`.
 *
 * To create a concrete instance, see `MakeCertificateManagerConnection()`.
 *
 * For mocking, see
 * `certificatemanager_v1_mocks::MockCertificateManagerConnection`.
 */
class CertificateManagerConnection {
 public:
  virtual ~CertificateManagerConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::certificatemanager::v1::Certificate>
  ListCertificates(
      google::cloud::certificatemanager::v1::ListCertificatesRequest request);

  virtual StatusOr<google::cloud::certificatemanager::v1::Certificate>
  GetCertificate(
      google::cloud::certificatemanager::v1::GetCertificateRequest const&
          request);

  virtual future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>
  CreateCertificate(
      google::cloud::certificatemanager::v1::CreateCertificateRequest const&
          request);

  virtual future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>
  UpdateCertificate(
      google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
  DeleteCertificate(
      google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
          request);

  virtual StreamRange<google::cloud::certificatemanager::v1::CertificateMap>
  ListCertificateMaps(
      google::cloud::certificatemanager::v1::ListCertificateMapsRequest
          request);

  virtual StatusOr<google::cloud::certificatemanager::v1::CertificateMap>
  GetCertificateMap(
      google::cloud::certificatemanager::v1::GetCertificateMapRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>
  CreateCertificateMap(
      google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>
  UpdateCertificateMap(
      google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
  DeleteCertificateMap(
      google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&
          request);

  virtual StreamRange<
      google::cloud::certificatemanager::v1::CertificateMapEntry>
  ListCertificateMapEntries(
      google::cloud::certificatemanager::v1::ListCertificateMapEntriesRequest
          request);

  virtual StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>
  GetCertificateMapEntry(google::cloud::certificatemanager::v1::
                             GetCertificateMapEntryRequest const& request);

  virtual future<
      StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>
  CreateCertificateMapEntry(
      google::cloud::certificatemanager::v1::
          CreateCertificateMapEntryRequest const& request);

  virtual future<
      StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>
  UpdateCertificateMapEntry(
      google::cloud::certificatemanager::v1::
          UpdateCertificateMapEntryRequest const& request);

  virtual future<
      StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
  DeleteCertificateMapEntry(
      google::cloud::certificatemanager::v1::
          DeleteCertificateMapEntryRequest const& request);

  virtual StreamRange<google::cloud::certificatemanager::v1::DnsAuthorization>
  ListDnsAuthorizations(
      google::cloud::certificatemanager::v1::ListDnsAuthorizationsRequest
          request);

  virtual StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>
  GetDnsAuthorization(
      google::cloud::certificatemanager::v1::GetDnsAuthorizationRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>
  CreateDnsAuthorization(google::cloud::certificatemanager::v1::
                             CreateDnsAuthorizationRequest const& request);

  virtual future<
      StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>
  UpdateDnsAuthorization(google::cloud::certificatemanager::v1::
                             UpdateDnsAuthorizationRequest const& request);

  virtual future<
      StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
  DeleteDnsAuthorization(google::cloud::certificatemanager::v1::
                             DeleteDnsAuthorizationRequest const& request);

  virtual StreamRange<
      google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
  ListCertificateIssuanceConfigs(
      google::cloud::certificatemanager::v1::
          ListCertificateIssuanceConfigsRequest request);

  virtual StatusOr<
      google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
  GetCertificateIssuanceConfig(
      google::cloud::certificatemanager::v1::
          GetCertificateIssuanceConfigRequest const& request);

  virtual future<StatusOr<
      google::cloud::certificatemanager::v1::CertificateIssuanceConfig>>
  CreateCertificateIssuanceConfig(
      google::cloud::certificatemanager::v1::
          CreateCertificateIssuanceConfigRequest const& request);

  virtual future<
      StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
  DeleteCertificateIssuanceConfig(
      google::cloud::certificatemanager::v1::
          DeleteCertificateIssuanceConfigRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `CertificateManagerConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * CertificateManagerClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CertificateManagerConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::certificatemanager_v1::CertificateManagerPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CertificateManagerConnection`
 * created by this function.
 */
std::shared_ptr<CertificateManagerConnection> MakeCertificateManagerConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace certificatemanager_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_V1_CERTIFICATE_MANAGER_CONNECTION_H
