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
// source:
// google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_PUBLIC_DELEGATED_PREFIXES_V1_GLOBAL_PUBLIC_DELEGATED_PREFIXES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_PUBLIC_DELEGATED_PREFIXES_V1_GLOBAL_PUBLIC_DELEGATED_PREFIXES_CONNECTION_H

#include "google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes_connection_idempotency_policy.h"
#include "google/cloud/compute/global_public_delegated_prefixes/v1/internal/global_public_delegated_prefixes_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_public_delegated_prefixes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using GlobalPublicDelegatedPrefixesRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        compute_global_public_delegated_prefixes_v1_internal::
            GlobalPublicDelegatedPrefixesRetryTraits>;

using GlobalPublicDelegatedPrefixesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_global_public_delegated_prefixes_v1_internal::
            GlobalPublicDelegatedPrefixesRetryTraits>;

using GlobalPublicDelegatedPrefixesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_global_public_delegated_prefixes_v1_internal::
            GlobalPublicDelegatedPrefixesRetryTraits>;

/**
 * The `GlobalPublicDelegatedPrefixesConnection` object for
 * `GlobalPublicDelegatedPrefixesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `GlobalPublicDelegatedPrefixesClient`. This allows users to inject
 * custom behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `GlobalPublicDelegatedPrefixesClient`.
 *
 * To create a concrete instance, see
 * `MakeGlobalPublicDelegatedPrefixesConnection()`.
 *
 * For mocking, see
 * `compute_global_public_delegated_prefixes_v1_mocks::MockGlobalPublicDelegatedPrefixesConnection`.
 */
class GlobalPublicDelegatedPrefixesConnection {
 public:
  virtual ~GlobalPublicDelegatedPrefixesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          DeleteGlobalPublicDelegatedPrefixesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  GetGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          GetGlobalPublicDelegatedPrefixesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          InsertGlobalPublicDelegatedPrefixesRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  ListGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          ListGlobalPublicDelegatedPrefixesRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          PatchGlobalPublicDelegatedPrefixesRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_public_delegated_prefixes_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_PUBLIC_DELEGATED_PREFIXES_V1_GLOBAL_PUBLIC_DELEGATED_PREFIXES_CONNECTION_H
