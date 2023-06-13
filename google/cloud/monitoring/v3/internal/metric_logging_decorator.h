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
// source: google/monitoring/v3/metric_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_METRIC_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_METRIC_LOGGING_DECORATOR_H

#include "google/cloud/monitoring/v3/internal/metric_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MetricServiceLogging : public MetricServiceStub {
 public:
  ~MetricServiceLogging() override = default;
  MetricServiceLogging(std::shared_ptr<MetricServiceStub> child,
                       TracingOptions tracing_options,
                       std::set<std::string> components);

  StatusOr<google::monitoring::v3::ListMonitoredResourceDescriptorsResponse>
  ListMonitoredResourceDescriptors(
      grpc::ClientContext& context,
      google::monitoring::v3::ListMonitoredResourceDescriptorsRequest const&
          request) override;

  StatusOr<google::api::MonitoredResourceDescriptor>
  GetMonitoredResourceDescriptor(
      grpc::ClientContext& context,
      google::monitoring::v3::GetMonitoredResourceDescriptorRequest const&
          request) override;

  StatusOr<google::monitoring::v3::ListMetricDescriptorsResponse>
  ListMetricDescriptors(
      grpc::ClientContext& context,
      google::monitoring::v3::ListMetricDescriptorsRequest const& request)
      override;

  StatusOr<google::api::MetricDescriptor> GetMetricDescriptor(
      grpc::ClientContext& context,
      google::monitoring::v3::GetMetricDescriptorRequest const& request)
      override;

  StatusOr<google::api::MetricDescriptor> CreateMetricDescriptor(
      grpc::ClientContext& context,
      google::monitoring::v3::CreateMetricDescriptorRequest const& request)
      override;

  Status DeleteMetricDescriptor(
      grpc::ClientContext& context,
      google::monitoring::v3::DeleteMetricDescriptorRequest const& request)
      override;

  StatusOr<google::monitoring::v3::ListTimeSeriesResponse> ListTimeSeries(
      grpc::ClientContext& context,
      google::monitoring::v3::ListTimeSeriesRequest const& request) override;

  Status CreateTimeSeries(
      grpc::ClientContext& context,
      google::monitoring::v3::CreateTimeSeriesRequest const& request) override;

  Status CreateServiceTimeSeries(
      grpc::ClientContext& context,
      google::monitoring::v3::CreateTimeSeriesRequest const& request) override;

  future<Status> AsyncCreateTimeSeries(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::monitoring::v3::CreateTimeSeriesRequest const& request) override;

 private:
  std::shared_ptr<MetricServiceStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // MetricServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_METRIC_LOGGING_DECORATOR_H
