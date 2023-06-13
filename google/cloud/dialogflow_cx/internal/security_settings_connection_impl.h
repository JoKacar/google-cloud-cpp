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
// source: google/cloud/dialogflow/cx/v3/security_settings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SECURITY_SETTINGS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SECURITY_SETTINGS_CONNECTION_IMPL_H

#include "google/cloud/dialogflow_cx/internal/security_settings_retry_traits.h"
#include "google/cloud/dialogflow_cx/internal/security_settings_stub.h"
#include "google/cloud/dialogflow_cx/security_settings_connection.h"
#include "google/cloud/dialogflow_cx/security_settings_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_cx/security_settings_options.h"
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
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SecuritySettingsServiceConnectionImpl
    : public dialogflow_cx::SecuritySettingsServiceConnection {
 public:
  ~SecuritySettingsServiceConnectionImpl() override = default;

  SecuritySettingsServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dialogflow_cx_internal::SecuritySettingsServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
  CreateSecuritySettings(
      google::cloud::dialogflow::cx::v3::CreateSecuritySettingsRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
  GetSecuritySettings(
      google::cloud::dialogflow::cx::v3::GetSecuritySettingsRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
  UpdateSecuritySettings(
      google::cloud::dialogflow::cx::v3::UpdateSecuritySettingsRequest const&
          request) override;

  StreamRange<google::cloud::dialogflow::cx::v3::SecuritySettings>
  ListSecuritySettings(
      google::cloud::dialogflow::cx::v3::ListSecuritySettingsRequest request)
      override;

  Status DeleteSecuritySettings(
      google::cloud::dialogflow::cx::v3::DeleteSecuritySettingsRequest const&
          request) override;

 private:
  std::unique_ptr<dialogflow_cx::SecuritySettingsServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<dialogflow_cx::SecuritySettingsServiceRetryPolicyOption>()) {
      return options
          .get<dialogflow_cx::SecuritySettingsServiceRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<dialogflow_cx::SecuritySettingsServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<dialogflow_cx::SecuritySettingsServiceBackoffPolicyOption>()) {
      return options
          .get<dialogflow_cx::SecuritySettingsServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<dialogflow_cx::SecuritySettingsServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<
      dialogflow_cx::SecuritySettingsServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            dialogflow_cx::
                SecuritySettingsServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<dialogflow_cx::
                   SecuritySettingsServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<dialogflow_cx::
                 SecuritySettingsServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dialogflow_cx_internal::SecuritySettingsServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SECURITY_SETTINGS_CONNECTION_IMPL_H
