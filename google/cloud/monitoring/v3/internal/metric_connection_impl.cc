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

#include "google/cloud/monitoring/v3/internal/metric_connection_impl.h"
#include "google/cloud/monitoring/v3/internal/metric_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_retry_loop.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MetricServiceConnectionImpl::MetricServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<monitoring_v3_internal::MetricServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      MetricServiceConnection::options())) {}

StreamRange<google::api::MonitoredResourceDescriptor>
MetricServiceConnectionImpl::ListMonitoredResourceDescriptors(
    google::monitoring::v3::ListMonitoredResourceDescriptorsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<monitoring_v3::MetricServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency =
      idempotency_policy()->ListMonitoredResourceDescriptors(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::api::MonitoredResourceDescriptor>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::monitoring::v3::ListMonitoredResourceDescriptorsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::monitoring::v3::
                       ListMonitoredResourceDescriptorsRequest const& request) {
              return stub->ListMonitoredResourceDescriptors(context, request);
            },
            r, function_name);
      },
      [](google::monitoring::v3::ListMonitoredResourceDescriptorsResponse r) {
        std::vector<google::api::MonitoredResourceDescriptor> result(
            r.resource_descriptors().size());
        auto& messages = *r.mutable_resource_descriptors();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::api::MonitoredResourceDescriptor>
MetricServiceConnectionImpl::GetMonitoredResourceDescriptor(
    google::monitoring::v3::GetMonitoredResourceDescriptorRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetMonitoredResourceDescriptor(request),
      [this](
          grpc::ClientContext& context,
          google::monitoring::v3::GetMonitoredResourceDescriptorRequest const&
              request) {
        return stub_->GetMonitoredResourceDescriptor(context, request);
      },
      request, __func__);
}

StreamRange<google::api::MetricDescriptor>
MetricServiceConnectionImpl::ListMetricDescriptors(
    google::monitoring::v3::ListMetricDescriptorsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<monitoring_v3::MetricServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListMetricDescriptors(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::api::MetricDescriptor>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::monitoring::v3::ListMetricDescriptorsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::monitoring::v3::ListMetricDescriptorsRequest const&
                       request) {
              return stub->ListMetricDescriptors(context, request);
            },
            r, function_name);
      },
      [](google::monitoring::v3::ListMetricDescriptorsResponse r) {
        std::vector<google::api::MetricDescriptor> result(
            r.metric_descriptors().size());
        auto& messages = *r.mutable_metric_descriptors();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::api::MetricDescriptor>
MetricServiceConnectionImpl::GetMetricDescriptor(
    google::monitoring::v3::GetMetricDescriptorRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetMetricDescriptor(request),
      [this](
          grpc::ClientContext& context,
          google::monitoring::v3::GetMetricDescriptorRequest const& request) {
        return stub_->GetMetricDescriptor(context, request);
      },
      request, __func__);
}

StatusOr<google::api::MetricDescriptor>
MetricServiceConnectionImpl::CreateMetricDescriptor(
    google::monitoring::v3::CreateMetricDescriptorRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateMetricDescriptor(request),
      [this](grpc::ClientContext& context,
             google::monitoring::v3::CreateMetricDescriptorRequest const&
                 request) {
        return stub_->CreateMetricDescriptor(context, request);
      },
      request, __func__);
}

Status MetricServiceConnectionImpl::DeleteMetricDescriptor(
    google::monitoring::v3::DeleteMetricDescriptorRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteMetricDescriptor(request),
      [this](grpc::ClientContext& context,
             google::monitoring::v3::DeleteMetricDescriptorRequest const&
                 request) {
        return stub_->DeleteMetricDescriptor(context, request);
      },
      request, __func__);
}

StreamRange<google::monitoring::v3::TimeSeries>
MetricServiceConnectionImpl::ListTimeSeries(
    google::monitoring::v3::ListTimeSeriesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<monitoring_v3::MetricServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListTimeSeries(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::monitoring::v3::TimeSeries>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::monitoring::v3::ListTimeSeriesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::monitoring::v3::ListTimeSeriesRequest const& request) {
              return stub->ListTimeSeries(context, request);
            },
            r, function_name);
      },
      [](google::monitoring::v3::ListTimeSeriesResponse r) {
        std::vector<google::monitoring::v3::TimeSeries> result(
            r.time_series().size());
        auto& messages = *r.mutable_time_series();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

Status MetricServiceConnectionImpl::CreateTimeSeries(
    google::monitoring::v3::CreateTimeSeriesRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateTimeSeries(request),
      [this](grpc::ClientContext& context,
             google::monitoring::v3::CreateTimeSeriesRequest const& request) {
        return stub_->CreateTimeSeries(context, request);
      },
      request, __func__);
}

Status MetricServiceConnectionImpl::CreateServiceTimeSeries(
    google::monitoring::v3::CreateTimeSeriesRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateServiceTimeSeries(request),
      [this](grpc::ClientContext& context,
             google::monitoring::v3::CreateTimeSeriesRequest const& request) {
        return stub_->CreateServiceTimeSeries(context, request);
      },
      request, __func__);
}

future<Status> MetricServiceConnectionImpl::AsyncCreateTimeSeries(
    google::monitoring::v3::CreateTimeSeriesRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateTimeSeries(request), background_->cq(),
      [stub](CompletionQueue& cq, std::shared_ptr<grpc::ClientContext> context,
             google::monitoring::v3::CreateTimeSeriesRequest const& request) {
        return stub->AsyncCreateTimeSeries(cq, std::move(context), request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
