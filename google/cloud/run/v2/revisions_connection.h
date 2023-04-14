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
// source: google/cloud/run/v2/revision.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_REVISIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_REVISIONS_CONNECTION_H

#include "google/cloud/run/v2/internal/revisions_retry_traits.h"
#include "google/cloud/run/v2/revisions_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/run/v2/revision.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace run_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using RevisionsRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    run_v2_internal::RevisionsRetryTraits>;

using RevisionsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        run_v2_internal::RevisionsRetryTraits>;

using RevisionsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        run_v2_internal::RevisionsRetryTraits>;

/**
 * The `RevisionsConnection` object for `RevisionsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RevisionsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `RevisionsClient`.
 *
 * To create a concrete instance, see `MakeRevisionsConnection()`.
 *
 * For mocking, see `run_v2_mocks::MockRevisionsConnection`.
 */
class RevisionsConnection {
 public:
  virtual ~RevisionsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::run::v2::Revision> GetRevision(
      google::cloud::run::v2::GetRevisionRequest const& request);

  virtual StreamRange<google::cloud::run::v2::Revision> ListRevisions(
      google::cloud::run::v2::ListRevisionsRequest request);

  virtual future<StatusOr<google::cloud::run::v2::Revision>> DeleteRevision(
      google::cloud::run::v2::DeleteRevisionRequest const& request);
};

/**
 * A factory function to construct an object of type `RevisionsConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of RevisionsClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `RevisionsConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::run_v2::RevisionsPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `RevisionsConnection` created by
 * this function.
 */
std::shared_ptr<RevisionsConnection> MakeRevisionsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_REVISIONS_CONNECTION_H
