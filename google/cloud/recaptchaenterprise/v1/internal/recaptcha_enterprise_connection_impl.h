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
// source: google/cloud/recaptchaenterprise/v1/recaptchaenterprise.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECAPTCHAENTERPRISE_V1_INTERNAL_RECAPTCHA_ENTERPRISE_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECAPTCHAENTERPRISE_V1_INTERNAL_RECAPTCHA_ENTERPRISE_CONNECTION_IMPL_H

#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_retry_traits.h"
#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_stub.h"
#include "google/cloud/recaptchaenterprise/v1/recaptcha_enterprise_connection.h"
#include "google/cloud/recaptchaenterprise/v1/recaptcha_enterprise_connection_idempotency_policy.h"
#include "google/cloud/recaptchaenterprise/v1/recaptcha_enterprise_options.h"
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
namespace recaptchaenterprise_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RecaptchaEnterpriseServiceConnectionImpl
    : public recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection {
 public:
  ~RecaptchaEnterpriseServiceConnectionImpl() override = default;

  RecaptchaEnterpriseServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          recaptchaenterprise_v1_internal::RecaptchaEnterpriseServiceStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::recaptchaenterprise::v1::Assessment> CreateAssessment(
      google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&
          request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::AnnotateAssessmentResponse>
  AnnotateAssessment(
      google::cloud::recaptchaenterprise::v1::AnnotateAssessmentRequest const&
          request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::Key> CreateKey(
      google::cloud::recaptchaenterprise::v1::CreateKeyRequest const& request)
      override;

  StreamRange<google::cloud::recaptchaenterprise::v1::Key> ListKeys(
      google::cloud::recaptchaenterprise::v1::ListKeysRequest request) override;

  StatusOr<
      google::cloud::recaptchaenterprise::v1::RetrieveLegacySecretKeyResponse>
  RetrieveLegacySecretKey(
      google::cloud::recaptchaenterprise::v1::
          RetrieveLegacySecretKeyRequest const& request) override;

  StatusOr<google::cloud::recaptchaenterprise::v1::Key> GetKey(
      google::cloud::recaptchaenterprise::v1::GetKeyRequest const& request)
      override;

  StatusOr<google::cloud::recaptchaenterprise::v1::Key> UpdateKey(
      google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const& request)
      override;

  Status DeleteKey(
      google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const& request)
      override;

  StatusOr<google::cloud::recaptchaenterprise::v1::Key> MigrateKey(
      google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const& request)
      override;

  StatusOr<google::cloud::recaptchaenterprise::v1::Metrics> GetMetrics(
      google::cloud::recaptchaenterprise::v1::GetMetricsRequest const& request)
      override;

  StreamRange<google::cloud::recaptchaenterprise::v1::RelatedAccountGroup>
  ListRelatedAccountGroups(
      google::cloud::recaptchaenterprise::v1::ListRelatedAccountGroupsRequest
          request) override;

  StreamRange<
      google::cloud::recaptchaenterprise::v1::RelatedAccountGroupMembership>
  ListRelatedAccountGroupMemberships(
      google::cloud::recaptchaenterprise::v1::
          ListRelatedAccountGroupMembershipsRequest request) override;

  StreamRange<
      google::cloud::recaptchaenterprise::v1::RelatedAccountGroupMembership>
  SearchRelatedAccountGroupMemberships(
      google::cloud::recaptchaenterprise::v1::
          SearchRelatedAccountGroupMembershipsRequest request) override;

 private:
  std::unique_ptr<recaptchaenterprise_v1::RecaptchaEnterpriseServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<recaptchaenterprise_v1::
                        RecaptchaEnterpriseServiceRetryPolicyOption>()) {
      return options
          .get<recaptchaenterprise_v1::
                   RecaptchaEnterpriseServiceRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<recaptchaenterprise_v1::
                 RecaptchaEnterpriseServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<recaptchaenterprise_v1::
                        RecaptchaEnterpriseServiceBackoffPolicyOption>()) {
      return options
          .get<recaptchaenterprise_v1::
                   RecaptchaEnterpriseServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<recaptchaenterprise_v1::
                 RecaptchaEnterpriseServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<recaptchaenterprise_v1::
                      RecaptchaEnterpriseServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            recaptchaenterprise_v1::
                RecaptchaEnterpriseServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<
              recaptchaenterprise_v1::
                  RecaptchaEnterpriseServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<recaptchaenterprise_v1::
                 RecaptchaEnterpriseServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<
      recaptchaenterprise_v1_internal::RecaptchaEnterpriseServiceStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recaptchaenterprise_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECAPTCHAENTERPRISE_V1_INTERNAL_RECAPTCHA_ENTERPRISE_CONNECTION_IMPL_H
