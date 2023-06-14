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
// source: google/cloud/bigquery/analyticshub/v1/analyticshub.proto

#include "google/cloud/bigquery/analyticshub/v1/internal/analytics_hub_stub_factory.h"
#include "google/cloud/bigquery/analyticshub/v1/internal/analytics_hub_auth_decorator.h"
#include "google/cloud/bigquery/analyticshub/v1/internal/analytics_hub_logging_decorator.h"
#include "google/cloud/bigquery/analyticshub/v1/internal/analytics_hub_metadata_decorator.h"
#include "google/cloud/bigquery/analyticshub/v1/internal/analytics_hub_stub.h"
#include "google/cloud/bigquery/analyticshub/v1/internal/analytics_hub_tracing_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include <google/cloud/bigquery/analyticshub/v1/analyticshub.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace bigquery_analyticshub_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<AnalyticsHubServiceStub> CreateDefaultAnalyticsHubServiceStub(
    google::cloud::CompletionQueue cq, Options const& options) {
  auto auth = google::cloud::internal::CreateAuthenticationStrategy(
      std::move(cq), options);
  auto channel = auth->CreateChannel(options.get<EndpointOption>(),
                                     internal::MakeChannelArguments(options));
  auto service_grpc_stub =
      google::cloud::bigquery::analyticshub::v1::AnalyticsHubService::NewStub(
          channel);
  std::shared_ptr<AnalyticsHubServiceStub> stub =
      std::make_shared<DefaultAnalyticsHubServiceStub>(
          std::move(service_grpc_stub));

  if (auth->RequiresConfigureContext()) {
    stub = std::make_shared<AnalyticsHubServiceAuth>(std::move(auth),
                                                     std::move(stub));
  }
  stub = std::make_shared<AnalyticsHubServiceMetadata>(
      std::move(stub), std::multimap<std::string, std::string>{});
  if (internal::Contains(options.get<TracingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for gRPC calls";
    stub = std::make_shared<AnalyticsHubServiceLogging>(
        std::move(stub), options.get<GrpcTracingOptionsOption>(),
        options.get<TracingComponentsOption>());
  }
  if (internal::TracingEnabled(options)) {
    stub = MakeAnalyticsHubServiceTracingStub(std::move(stub));
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_analyticshub_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
