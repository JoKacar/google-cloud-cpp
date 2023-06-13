// Copyright 2021 Google LLC
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
// source: google/cloud/secretmanager/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_V1_INTERNAL_SECRET_MANAGER_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_V1_INTERNAL_SECRET_MANAGER_CONNECTION_IMPL_H

#include "google/cloud/secretmanager/v1/internal/secret_manager_retry_traits.h"
#include "google/cloud/secretmanager/v1/internal/secret_manager_stub.h"
#include "google/cloud/secretmanager/v1/secret_manager_connection.h"
#include "google/cloud/secretmanager/v1/secret_manager_connection_idempotency_policy.h"
#include "google/cloud/secretmanager/v1/secret_manager_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace secretmanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SecretManagerServiceConnectionImpl
    : public secretmanager_v1::SecretManagerServiceConnection {
 public:
  ~SecretManagerServiceConnectionImpl() override = default;

  SecretManagerServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<secretmanager_v1_internal::SecretManagerServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::secretmanager::v1::Secret> ListSecrets(
      google::cloud::secretmanager::v1::ListSecretsRequest request) override;

  StatusOr<google::cloud::secretmanager::v1::Secret> CreateSecret(
      google::cloud::secretmanager::v1::CreateSecretRequest const& request)
      override;

  StatusOr<google::cloud::secretmanager::v1::SecretVersion> AddSecretVersion(
      google::cloud::secretmanager::v1::AddSecretVersionRequest const& request)
      override;

  StatusOr<google::cloud::secretmanager::v1::Secret> GetSecret(
      google::cloud::secretmanager::v1::GetSecretRequest const& request)
      override;

  StatusOr<google::cloud::secretmanager::v1::Secret> UpdateSecret(
      google::cloud::secretmanager::v1::UpdateSecretRequest const& request)
      override;

  Status DeleteSecret(
      google::cloud::secretmanager::v1::DeleteSecretRequest const& request)
      override;

  StreamRange<google::cloud::secretmanager::v1::SecretVersion>
  ListSecretVersions(google::cloud::secretmanager::v1::ListSecretVersionsRequest
                         request) override;

  StatusOr<google::cloud::secretmanager::v1::SecretVersion> GetSecretVersion(
      google::cloud::secretmanager::v1::GetSecretVersionRequest const& request)
      override;

  StatusOr<google::cloud::secretmanager::v1::AccessSecretVersionResponse>
  AccessSecretVersion(
      google::cloud::secretmanager::v1::AccessSecretVersionRequest const&
          request) override;

  StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  DisableSecretVersion(
      google::cloud::secretmanager::v1::DisableSecretVersionRequest const&
          request) override;

  StatusOr<google::cloud::secretmanager::v1::SecretVersion> EnableSecretVersion(
      google::cloud::secretmanager::v1::EnableSecretVersionRequest const&
          request) override;

  StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  DestroySecretVersion(
      google::cloud::secretmanager::v1::DestroySecretVersionRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::unique_ptr<secretmanager_v1::SecretManagerServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<secretmanager_v1::SecretManagerServiceRetryPolicyOption>()) {
      return options
          .get<secretmanager_v1::SecretManagerServiceRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<secretmanager_v1::SecretManagerServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<secretmanager_v1::SecretManagerServiceBackoffPolicyOption>()) {
      return options
          .get<secretmanager_v1::SecretManagerServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<secretmanager_v1::SecretManagerServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<
      secretmanager_v1::SecretManagerServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<secretmanager_v1::
                     SecretManagerServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<secretmanager_v1::
                   SecretManagerServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<secretmanager_v1::
                 SecretManagerServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<secretmanager_v1_internal::SecretManagerServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace secretmanager_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_V1_INTERNAL_SECRET_MANAGER_CONNECTION_IMPL_H
