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
// source: google/cloud/dialogflow/v2/environment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_ENVIRONMENTS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_ENVIRONMENTS_CONNECTION_IMPL_H

#include "google/cloud/dialogflow_es/environments_connection.h"
#include "google/cloud/dialogflow_es/environments_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_es/environments_options.h"
#include "google/cloud/dialogflow_es/internal/environments_retry_traits.h"
#include "google/cloud/dialogflow_es/internal/environments_stub.h"
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
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EnvironmentsConnectionImpl
    : public dialogflow_es::EnvironmentsConnection {
 public:
  ~EnvironmentsConnectionImpl() override = default;

  EnvironmentsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dialogflow_es_internal::EnvironmentsStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::dialogflow::v2::Environment> ListEnvironments(
      google::cloud::dialogflow::v2::ListEnvironmentsRequest request) override;

  StatusOr<google::cloud::dialogflow::v2::Environment> GetEnvironment(
      google::cloud::dialogflow::v2::GetEnvironmentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Environment> CreateEnvironment(
      google::cloud::dialogflow::v2::CreateEnvironmentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Environment> UpdateEnvironment(
      google::cloud::dialogflow::v2::UpdateEnvironmentRequest const& request)
      override;

  Status DeleteEnvironment(
      google::cloud::dialogflow::v2::DeleteEnvironmentRequest const& request)
      override;

  StreamRange<google::cloud::dialogflow::v2::EnvironmentHistory::Entry>
  GetEnvironmentHistory(
      google::cloud::dialogflow::v2::GetEnvironmentHistoryRequest request)
      override;

 private:
  std::unique_ptr<dialogflow_es::EnvironmentsRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dialogflow_es::EnvironmentsRetryPolicyOption>()) {
      return options.get<dialogflow_es::EnvironmentsRetryPolicyOption>()
          ->clone();
    }
    return options_.get<dialogflow_es::EnvironmentsRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dialogflow_es::EnvironmentsBackoffPolicyOption>()) {
      return options.get<dialogflow_es::EnvironmentsBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<dialogflow_es::EnvironmentsBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<dialogflow_es::EnvironmentsConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            dialogflow_es::EnvironmentsConnectionIdempotencyPolicyOption>()) {
      return options
          .get<dialogflow_es::EnvironmentsConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<dialogflow_es::EnvironmentsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dialogflow_es_internal::EnvironmentsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_ENVIRONMENTS_CONNECTION_IMPL_H
