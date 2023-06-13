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
// source: google/api/servicecontrol/v2/service_controller.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICECONTROL_V2_SERVICE_CONTROLLER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICECONTROL_V2_SERVICE_CONTROLLER_CONNECTION_H

#include "google/cloud/servicecontrol/v2/internal/service_controller_retry_traits.h"
#include "google/cloud/servicecontrol/v2/service_controller_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/api/servicecontrol/v2/service_controller.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace servicecontrol_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ServiceControllerRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        servicecontrol_v2_internal::ServiceControllerRetryTraits>;

using ServiceControllerLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        servicecontrol_v2_internal::ServiceControllerRetryTraits>;

using ServiceControllerLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        servicecontrol_v2_internal::ServiceControllerRetryTraits>;

/**
 * The `ServiceControllerConnection` object for `ServiceControllerClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ServiceControllerClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `ServiceControllerClient`.
 *
 * To create a concrete instance, see `MakeServiceControllerConnection()`.
 *
 * For mocking, see `servicecontrol_v2_mocks::MockServiceControllerConnection`.
 */
class ServiceControllerConnection {
 public:
  virtual ~ServiceControllerConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::api::servicecontrol::v2::CheckResponse> Check(
      google::api::servicecontrol::v2::CheckRequest const& request);

  virtual StatusOr<google::api::servicecontrol::v2::ReportResponse> Report(
      google::api::servicecontrol::v2::ReportRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `ServiceControllerConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * ServiceControllerClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ServiceControllerConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::servicecontrol_v2::ServiceControllerPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `ServiceControllerConnection` created
 * by this function.
 */
std::shared_ptr<ServiceControllerConnection> MakeServiceControllerConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicecontrol_v2
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICECONTROL_V2_SERVICE_CONTROLLER_CONNECTION_H
