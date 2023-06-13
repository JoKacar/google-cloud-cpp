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
// source: google/cloud/confidentialcomputing/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONFIDENTIALCOMPUTING_V1_INTERNAL_CONFIDENTIAL_COMPUTING_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONFIDENTIALCOMPUTING_V1_INTERNAL_CONFIDENTIAL_COMPUTING_CONNECTION_IMPL_H

#include "google/cloud/confidentialcomputing/v1/confidential_computing_connection.h"
#include "google/cloud/confidentialcomputing/v1/confidential_computing_connection_idempotency_policy.h"
#include "google/cloud/confidentialcomputing/v1/confidential_computing_options.h"
#include "google/cloud/confidentialcomputing/v1/internal/confidential_computing_retry_traits.h"
#include "google/cloud/confidentialcomputing/v1/internal/confidential_computing_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace confidentialcomputing_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConfidentialComputingConnectionImpl
    : public confidentialcomputing_v1::ConfidentialComputingConnection {
 public:
  ~ConfidentialComputingConnectionImpl() override = default;

  ConfidentialComputingConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          confidentialcomputing_v1_internal::ConfidentialComputingStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::confidentialcomputing::v1::Challenge> CreateChallenge(
      google::cloud::confidentialcomputing::v1::CreateChallengeRequest const&
          request) override;

  StatusOr<google::cloud::confidentialcomputing::v1::VerifyAttestationResponse>
  VerifyAttestation(
      google::cloud::confidentialcomputing::v1::VerifyAttestationRequest const&
          request) override;

 private:
  std::unique_ptr<confidentialcomputing_v1::ConfidentialComputingRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<confidentialcomputing_v1::
                        ConfidentialComputingRetryPolicyOption>()) {
      return options
          .get<confidentialcomputing_v1::
                   ConfidentialComputingRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<confidentialcomputing_v1::ConfidentialComputingRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<confidentialcomputing_v1::
                        ConfidentialComputingBackoffPolicyOption>()) {
      return options
          .get<confidentialcomputing_v1::
                   ConfidentialComputingBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<confidentialcomputing_v1::
                 ConfidentialComputingBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<confidentialcomputing_v1::
                      ConfidentialComputingConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            confidentialcomputing_v1::
                ConfidentialComputingConnectionIdempotencyPolicyOption>()) {
      return options
          .get<confidentialcomputing_v1::
                   ConfidentialComputingConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<confidentialcomputing_v1::
                 ConfidentialComputingConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<confidentialcomputing_v1_internal::ConfidentialComputingStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace confidentialcomputing_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONFIDENTIALCOMPUTING_V1_INTERNAL_CONFIDENTIAL_COMPUTING_CONNECTION_IMPL_H
