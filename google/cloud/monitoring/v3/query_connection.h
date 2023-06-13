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
// source: google/monitoring/v3/query_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_QUERY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_QUERY_CONNECTION_H

#include "google/cloud/monitoring/v3/internal/query_retry_traits.h"
#include "google/cloud/monitoring/v3/query_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/monitoring/v3/query_service.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace monitoring_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using QueryServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        monitoring_v3_internal::QueryServiceRetryTraits>;

using QueryServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        monitoring_v3_internal::QueryServiceRetryTraits>;

using QueryServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        monitoring_v3_internal::QueryServiceRetryTraits>;

/**
 * The `QueryServiceConnection` object for `QueryServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `QueryServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `QueryServiceClient`.
 *
 * To create a concrete instance, see `MakeQueryServiceConnection()`.
 *
 * For mocking, see `monitoring_v3_mocks::MockQueryServiceConnection`.
 */
class QueryServiceConnection {
 public:
  virtual ~QueryServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::monitoring::v3::TimeSeriesData> QueryTimeSeries(
      google::monitoring::v3::QueryTimeSeriesRequest request);
};

/**
 * A factory function to construct an object of type `QueryServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of QueryServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `QueryServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::monitoring_v3::QueryServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `QueryServiceConnection` created by
 * this function.
 */
std::shared_ptr<QueryServiceConnection> MakeQueryServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_QUERY_CONNECTION_H
