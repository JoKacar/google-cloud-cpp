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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_INTERNAL_VERSIONS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_INTERNAL_VERSIONS_CONNECTION_IMPL_H

#include "google/cloud/appengine/v1/internal/versions_retry_traits.h"
#include "google/cloud/appengine/v1/internal/versions_stub.h"
#include "google/cloud/appengine/v1/versions_connection.h"
#include "google/cloud/appengine/v1/versions_connection_idempotency_policy.h"
#include "google/cloud/appengine/v1/versions_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VersionsConnectionImpl : public appengine_v1::VersionsConnection {
 public:
  ~VersionsConnectionImpl() override = default;

  VersionsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<appengine_v1_internal::VersionsStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::appengine::v1::Version> ListVersions(
      google::appengine::v1::ListVersionsRequest request) override;

  StatusOr<google::appengine::v1::Version> GetVersion(
      google::appengine::v1::GetVersionRequest const& request) override;

  future<StatusOr<google::appengine::v1::Version>> CreateVersion(
      google::appengine::v1::CreateVersionRequest const& request) override;

  future<StatusOr<google::appengine::v1::Version>> UpdateVersion(
      google::appengine::v1::UpdateVersionRequest const& request) override;

  future<StatusOr<google::appengine::v1::OperationMetadataV1>> DeleteVersion(
      google::appengine::v1::DeleteVersionRequest const& request) override;

 private:
  std::unique_ptr<appengine_v1::VersionsRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<appengine_v1::VersionsRetryPolicyOption>()) {
      return options.get<appengine_v1::VersionsRetryPolicyOption>()->clone();
    }
    return options_.get<appengine_v1::VersionsRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<appengine_v1::VersionsBackoffPolicyOption>()) {
      return options.get<appengine_v1::VersionsBackoffPolicyOption>()->clone();
    }
    return options_.get<appengine_v1::VersionsBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<appengine_v1::VersionsConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<appengine_v1::VersionsConnectionIdempotencyPolicyOption>()) {
      return options
          .get<appengine_v1::VersionsConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<appengine_v1::VersionsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<appengine_v1::VersionsPollingPolicyOption>()) {
      return options.get<appengine_v1::VersionsPollingPolicyOption>()->clone();
    }
    return options_.get<appengine_v1::VersionsPollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<appengine_v1_internal::VersionsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_INTERNAL_VERSIONS_CONNECTION_IMPL_H
