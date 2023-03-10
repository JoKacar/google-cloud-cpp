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
// source: google/monitoring/metricsscope/v1/metrics_scopes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_METRICSSCOPE_V1_INTERNAL_METRICS_SCOPES_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_METRICSSCOPE_V1_INTERNAL_METRICS_SCOPES_METADATA_DECORATOR_H

#include "google/cloud/monitoring/metricsscope/v1/internal/metrics_scopes_stub.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace monitoring_metricsscope_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MetricsScopesMetadata : public MetricsScopesStub {
 public:
  ~MetricsScopesMetadata() override = default;
  explicit MetricsScopesMetadata(std::shared_ptr<MetricsScopesStub> child);

  StatusOr<google::monitoring::metricsscope::v1::MetricsScope> GetMetricsScope(
      grpc::ClientContext& context,
      google::monitoring::metricsscope::v1::GetMetricsScopeRequest const&
          request) override;

  StatusOr<google::monitoring::metricsscope::v1::
               ListMetricsScopesByMonitoredProjectResponse>
  ListMetricsScopesByMonitoredProject(
      grpc::ClientContext& context,
      google::monitoring::metricsscope::v1::
          ListMetricsScopesByMonitoredProjectRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateMonitoredProject(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::monitoring::metricsscope::v1::CreateMonitoredProjectRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteMonitoredProject(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::monitoring::metricsscope::v1::DeleteMonitoredProjectRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<MetricsScopesStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_metricsscope_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_METRICSSCOPE_V1_INTERNAL_METRICS_SCOPES_METADATA_DECORATOR_H
