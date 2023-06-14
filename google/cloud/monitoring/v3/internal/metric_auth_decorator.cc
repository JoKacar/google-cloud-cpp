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

#include "google/cloud/monitoring/v3/internal/metric_auth_decorator.h"
#include <google/monitoring/v3/metric_service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MetricServiceAuth::MetricServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<MetricServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::monitoring::v3::ListMonitoredResourceDescriptorsResponse>
MetricServiceAuth::ListMonitoredResourceDescriptors(
    grpc::ClientContext& context,
    google::monitoring::v3::ListMonitoredResourceDescriptorsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListMonitoredResourceDescriptors(context, request);
}

StatusOr<google::api::MonitoredResourceDescriptor>
MetricServiceAuth::GetMonitoredResourceDescriptor(
    grpc::ClientContext& context,
    google::monitoring::v3::GetMonitoredResourceDescriptorRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetMonitoredResourceDescriptor(context, request);
}

StatusOr<google::monitoring::v3::ListMetricDescriptorsResponse>
MetricServiceAuth::ListMetricDescriptors(
    grpc::ClientContext& context,
    google::monitoring::v3::ListMetricDescriptorsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListMetricDescriptors(context, request);
}

StatusOr<google::api::MetricDescriptor> MetricServiceAuth::GetMetricDescriptor(
    grpc::ClientContext& context,
    google::monitoring::v3::GetMetricDescriptorRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetMetricDescriptor(context, request);
}

StatusOr<google::api::MetricDescriptor>
MetricServiceAuth::CreateMetricDescriptor(
    grpc::ClientContext& context,
    google::monitoring::v3::CreateMetricDescriptorRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateMetricDescriptor(context, request);
}

Status MetricServiceAuth::DeleteMetricDescriptor(
    grpc::ClientContext& context,
    google::monitoring::v3::DeleteMetricDescriptorRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteMetricDescriptor(context, request);
}

StatusOr<google::monitoring::v3::ListTimeSeriesResponse>
MetricServiceAuth::ListTimeSeries(
    grpc::ClientContext& context,
    google::monitoring::v3::ListTimeSeriesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTimeSeries(context, request);
}

Status MetricServiceAuth::CreateTimeSeries(
    grpc::ClientContext& context,
    google::monitoring::v3::CreateTimeSeriesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateTimeSeries(context, request);
}

Status MetricServiceAuth::CreateServiceTimeSeries(
    grpc::ClientContext& context,
    google::monitoring::v3::CreateTimeSeriesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateServiceTimeSeries(context, request);
}

future<Status> MetricServiceAuth::AsyncCreateTimeSeries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::monitoring::v3::CreateTimeSeriesRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCreateTimeSeries(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
