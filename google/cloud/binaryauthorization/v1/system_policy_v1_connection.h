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
// source: google/cloud/binaryauthorization/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_SYSTEM_POLICY_V1_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_SYSTEM_POLICY_V1_CONNECTION_H

#include "google/cloud/binaryauthorization/v1/internal/system_policy_v1_retry_traits.h"
#include "google/cloud/binaryauthorization/v1/system_policy_v1_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/binaryauthorization/v1/service.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace binaryauthorization_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using SystemPolicyV1RetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        binaryauthorization_v1_internal::SystemPolicyV1RetryTraits>;

using SystemPolicyV1LimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        binaryauthorization_v1_internal::SystemPolicyV1RetryTraits>;

using SystemPolicyV1LimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        binaryauthorization_v1_internal::SystemPolicyV1RetryTraits>;

/**
 * The `SystemPolicyV1Connection` object for `SystemPolicyV1Client`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `SystemPolicyV1Client`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `SystemPolicyV1Client`.
 *
 * To create a concrete instance, see `MakeSystemPolicyV1Connection()`.
 *
 * For mocking, see
 * `binaryauthorization_v1_mocks::MockSystemPolicyV1Connection`.
 */
class SystemPolicyV1Connection {
 public:
  virtual ~SystemPolicyV1Connection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::binaryauthorization::v1::Policy>
  GetSystemPolicy(
      google::cloud::binaryauthorization::v1::GetSystemPolicyRequest const&
          request);
};

/**
 * A factory function to construct an object of type `SystemPolicyV1Connection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of SystemPolicyV1Client.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `SystemPolicyV1Connection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::binaryauthorization_v1::SystemPolicyV1PolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `SystemPolicyV1Connection` created by
 * this function.
 */
std::shared_ptr<SystemPolicyV1Connection> MakeSystemPolicyV1Connection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_SYSTEM_POLICY_V1_CONNECTION_H
