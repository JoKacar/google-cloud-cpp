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
// source: google/cloud/compute/routes/v1/routes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTES_V1_ROUTES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTES_V1_ROUTES_CONNECTION_H

#include "google/cloud/compute/routes/v1/internal/routes_retry_traits.h"
#include "google/cloud/compute/routes/v1/routes_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/routes/v1/routes.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_routes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using RoutesRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    compute_routes_v1_internal::RoutesRetryTraits>;

using RoutesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_routes_v1_internal::RoutesRetryTraits>;

using RoutesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_routes_v1_internal::RoutesRetryTraits>;

/**
 * The `RoutesConnection` object for `RoutesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RoutesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `RoutesClient`.
 *
 * To create a concrete instance, see `MakeRoutesConnection()`.
 *
 * For mocking, see `compute_routes_v1_mocks::MockRoutesConnection`.
 */
class RoutesConnection {
 public:
  virtual ~RoutesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRoutes(
      google::cloud::cpp::compute::routes::v1::DeleteRoutesRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Route> GetRoutes(
      google::cloud::cpp::compute::routes::v1::GetRoutesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRoutes(
      google::cloud::cpp::compute::routes::v1::InsertRoutesRequest const&
          request);

  virtual StreamRange<google::cloud::cpp::compute::v1::Route> ListRoutes(
      google::cloud::cpp::compute::routes::v1::ListRoutesRequest request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_routes_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTES_V1_ROUTES_CONNECTION_H
