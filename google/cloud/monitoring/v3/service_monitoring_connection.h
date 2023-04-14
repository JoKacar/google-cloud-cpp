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
// source: google/monitoring/v3/service_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_SERVICE_MONITORING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_SERVICE_MONITORING_CONNECTION_H

#include "google/cloud/monitoring/v3/internal/service_monitoring_retry_traits.h"
#include "google/cloud/monitoring/v3/service_monitoring_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/monitoring/v3/service_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ServiceMonitoringServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        monitoring_v3_internal::ServiceMonitoringServiceRetryTraits>;

using ServiceMonitoringServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        monitoring_v3_internal::ServiceMonitoringServiceRetryTraits>;

using ServiceMonitoringServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        monitoring_v3_internal::ServiceMonitoringServiceRetryTraits>;

/**
 * The `ServiceMonitoringServiceConnection` object for
 * `ServiceMonitoringServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ServiceMonitoringServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `ServiceMonitoringServiceClient`.
 *
 * To create a concrete instance, see
 * `MakeServiceMonitoringServiceConnection()`.
 *
 * For mocking, see
 * `monitoring_v3_mocks::MockServiceMonitoringServiceConnection`.
 */
class ServiceMonitoringServiceConnection {
 public:
  virtual ~ServiceMonitoringServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::monitoring::v3::Service> CreateService(
      google::monitoring::v3::CreateServiceRequest const& request);

  virtual StatusOr<google::monitoring::v3::Service> GetService(
      google::monitoring::v3::GetServiceRequest const& request);

  virtual StreamRange<google::monitoring::v3::Service> ListServices(
      google::monitoring::v3::ListServicesRequest request);

  virtual StatusOr<google::monitoring::v3::Service> UpdateService(
      google::monitoring::v3::UpdateServiceRequest const& request);

  virtual Status DeleteService(
      google::monitoring::v3::DeleteServiceRequest const& request);

  virtual StatusOr<google::monitoring::v3::ServiceLevelObjective>
  CreateServiceLevelObjective(
      google::monitoring::v3::CreateServiceLevelObjectiveRequest const&
          request);

  virtual StatusOr<google::monitoring::v3::ServiceLevelObjective>
  GetServiceLevelObjective(
      google::monitoring::v3::GetServiceLevelObjectiveRequest const& request);

  virtual StreamRange<google::monitoring::v3::ServiceLevelObjective>
  ListServiceLevelObjectives(
      google::monitoring::v3::ListServiceLevelObjectivesRequest request);

  virtual StatusOr<google::monitoring::v3::ServiceLevelObjective>
  UpdateServiceLevelObjective(
      google::monitoring::v3::UpdateServiceLevelObjectiveRequest const&
          request);

  virtual Status DeleteServiceLevelObjective(
      google::monitoring::v3::DeleteServiceLevelObjectiveRequest const&
          request);
};

/**
 * A factory function to construct an object of type
 * `ServiceMonitoringServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * ServiceMonitoringServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ServiceMonitoringServiceConnection`. Expected options are any of
 * the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::monitoring_v3::ServiceMonitoringServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `ServiceMonitoringServiceConnection`
 * created by this function.
 */
std::shared_ptr<ServiceMonitoringServiceConnection>
MakeServiceMonitoringServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_SERVICE_MONITORING_CONNECTION_H
