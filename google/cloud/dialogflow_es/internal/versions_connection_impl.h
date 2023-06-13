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
// source: google/cloud/dialogflow/v2/version.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_VERSIONS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_VERSIONS_CONNECTION_IMPL_H

#include "google/cloud/dialogflow_es/internal/versions_retry_traits.h"
#include "google/cloud/dialogflow_es/internal/versions_stub.h"
#include "google/cloud/dialogflow_es/versions_connection.h"
#include "google/cloud/dialogflow_es/versions_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_es/versions_options.h"
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

class VersionsConnectionImpl : public dialogflow_es::VersionsConnection {
 public:
  ~VersionsConnectionImpl() override = default;

  VersionsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dialogflow_es_internal::VersionsStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::dialogflow::v2::Version> ListVersions(
      google::cloud::dialogflow::v2::ListVersionsRequest request) override;

  StatusOr<google::cloud::dialogflow::v2::Version> GetVersion(
      google::cloud::dialogflow::v2::GetVersionRequest const& request) override;

  StatusOr<google::cloud::dialogflow::v2::Version> CreateVersion(
      google::cloud::dialogflow::v2::CreateVersionRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Version> UpdateVersion(
      google::cloud::dialogflow::v2::UpdateVersionRequest const& request)
      override;

  Status DeleteVersion(
      google::cloud::dialogflow::v2::DeleteVersionRequest const& request)
      override;

 private:
  std::unique_ptr<dialogflow_es::VersionsRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dialogflow_es::VersionsRetryPolicyOption>()) {
      return options.get<dialogflow_es::VersionsRetryPolicyOption>()->clone();
    }
    return options_.get<dialogflow_es::VersionsRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dialogflow_es::VersionsBackoffPolicyOption>()) {
      return options.get<dialogflow_es::VersionsBackoffPolicyOption>()->clone();
    }
    return options_.get<dialogflow_es::VersionsBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<dialogflow_es::VersionsConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<dialogflow_es::VersionsConnectionIdempotencyPolicyOption>()) {
      return options
          .get<dialogflow_es::VersionsConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<dialogflow_es::VersionsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dialogflow_es_internal::VersionsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_VERSIONS_CONNECTION_IMPL_H
