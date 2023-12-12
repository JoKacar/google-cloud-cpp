// Copyright 2021 Google LLC
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
// source: google/cloud/tasks/v2/cloudtasks.proto

#include "google/cloud/tasks/v2/internal/cloud_tasks_stub_factory.h"
#include "google/cloud/tasks/v2/internal/cloud_tasks_auth_decorator.h"
#include "google/cloud/tasks/v2/internal/cloud_tasks_logging_decorator.h"
#include "google/cloud/tasks/v2/internal/cloud_tasks_metadata_decorator.h"
#include "google/cloud/tasks/v2/internal/cloud_tasks_stub.h"
#include "google/cloud/tasks/v2/internal/cloud_tasks_tracing_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/internal/credentials_impl.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/service_endpoint.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include <google/cloud/tasks/v2/cloudtasks.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace tasks_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<CloudTasksStub> CreateDefaultCloudTasksStub(
    google::cloud::CompletionQueue cq, Options& options) {
  auto endpoint = internal::DetermineServiceEndpoint(
      internal::GetEnv("GOOGLE_CLOUD_CPP_CLOUD_TASKS_ENDPOINT"),
      internal::FetchOption<EndpointOption>(options),
      "cloudtasks.googleapis.com", options);

  std::shared_ptr<CloudTasksStub> stub;
  std::shared_ptr<internal::GrpcAuthenticationStrategy> auth;
  if (!endpoint.ok()) {
    Options error_options = options;
    error_options.set<google::cloud::UnifiedCredentialsOption>(
        internal::MakeErrorCredentials(endpoint.status()));
    auth = internal::CreateAuthenticationStrategy(CompletionQueue{},
                                                  error_options);
  } else {
    options.set<EndpointOption>(*endpoint);
    auth = internal::CreateAuthenticationStrategy(std::move(cq), options);
    auto channel =
        auth->CreateChannel(*endpoint, internal::MakeChannelArguments(options));
    auto service_grpc_stub =
        google::cloud::tasks::v2::CloudTasks::NewStub(channel);
    stub =
        std::make_shared<DefaultCloudTasksStub>(std::move(service_grpc_stub));
  }
  if (auth->RequiresConfigureContext()) {
    stub = std::make_shared<CloudTasksAuth>(std::move(auth), std::move(stub));
  }
  stub = std::make_shared<CloudTasksMetadata>(
      std::move(stub), std::multimap<std::string, std::string>{});
  if (internal::Contains(options.get<TracingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for gRPC calls";
    stub = std::make_shared<CloudTasksLogging>(
        std::move(stub), options.get<GrpcTracingOptionsOption>(),
        options.get<TracingComponentsOption>());
  }
  if (internal::TracingEnabled(options)) {
    stub = MakeCloudTasksTracingStub(std::move(stub));
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tasks_v2_internal
}  // namespace cloud
}  // namespace google
