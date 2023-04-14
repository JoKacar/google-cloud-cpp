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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_VERSIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_VERSIONS_CONNECTION_H

#include "google/cloud/appengine/v1/internal/versions_retry_traits.h"
#include "google/cloud/appengine/v1/versions_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/appengine/v1/appengine.grpc.pb.h>
#include <google/appengine/v1/operation.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace appengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using VersionsRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    appengine_v1_internal::VersionsRetryTraits>;

using VersionsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        appengine_v1_internal::VersionsRetryTraits>;

using VersionsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        appengine_v1_internal::VersionsRetryTraits>;

/**
 * The `VersionsConnection` object for `VersionsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `VersionsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `VersionsClient`.
 *
 * To create a concrete instance, see `MakeVersionsConnection()`.
 *
 * For mocking, see `appengine_v1_mocks::MockVersionsConnection`.
 */
class VersionsConnection {
 public:
  virtual ~VersionsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::appengine::v1::Version> ListVersions(
      google::appengine::v1::ListVersionsRequest request);

  virtual StatusOr<google::appengine::v1::Version> GetVersion(
      google::appengine::v1::GetVersionRequest const& request);

  virtual future<StatusOr<google::appengine::v1::Version>> CreateVersion(
      google::appengine::v1::CreateVersionRequest const& request);

  virtual future<StatusOr<google::appengine::v1::Version>> UpdateVersion(
      google::appengine::v1::UpdateVersionRequest const& request);

  virtual future<StatusOr<google::appengine::v1::OperationMetadataV1>>
  DeleteVersion(google::appengine::v1::DeleteVersionRequest const& request);
};

/**
 * A factory function to construct an object of type `VersionsConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of VersionsClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `VersionsConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::appengine_v1::VersionsPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `VersionsConnection` created by
 * this function.
 */
std::shared_ptr<VersionsConnection> MakeVersionsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_VERSIONS_CONNECTION_H
