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
// source: google/cloud/resourcemanager/v3/folders.proto

#include "google/cloud/resourcemanager/internal/folders_option_defaults.h"
#include "google/cloud/common_options.h"
#include "google/cloud/connection_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/internal/user_agent_prefix.h"
#include "google/cloud/options.h"
#include "google/cloud/resourcemanager/folders_connection.h"
#include "google/cloud/resourcemanager/folders_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options FoldersDefaultOptions(Options options) {
  if (!options.has<EndpointOption>()) {
    auto env = internal::GetEnv("GOOGLE_CLOUD_CPP_FOLDERS_ENDPOINT");
    options.set<EndpointOption>(env && !env->empty() ? *env : "cloudresourcemanager.googleapis.com");
  }
  if (!options.has<GrpcCredentialOption>()) {
    options.set<GrpcCredentialOption>(grpc::GoogleDefaultCredentials());
  }
  if (!options.has<TracingComponentsOption>()) {
    options.set<TracingComponentsOption>(internal::DefaultTracingComponents());
  }
  if (!options.has<GrpcTracingOptionsOption>()) {
    options.set<GrpcTracingOptionsOption>(internal::DefaultTracingOptions());
  }
  auto& products = options.lookup<UserAgentProductsOption>();
  products.insert(products.begin(), google::cloud::internal::UserAgentPrefix());

  if (!options.has<resourcemanager::FoldersRetryPolicyOption>()) {
    options.set<resourcemanager::FoldersRetryPolicyOption>(
        resourcemanager::FoldersLimitedTimeRetryPolicy(
            std::chrono::minutes(30)).clone());
  }
  if (!options.has<resourcemanager::FoldersBackoffPolicyOption>()) {
    options.set<resourcemanager::FoldersBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling).clone());
  }
  if (!options.has<resourcemanager::FoldersPollingPolicyOption>()) {
    options.set<resourcemanager::FoldersPollingPolicyOption>(
        GenericPollingPolicy<
            resourcemanager::FoldersRetryPolicyOption::Type,
            resourcemanager::FoldersBackoffPolicyOption::Type>(
            options.get<resourcemanager::FoldersRetryPolicyOption>()->clone(),
            options.get<resourcemanager::FoldersBackoffPolicyOption>()->clone())
            .clone());
  }
  if (!options.has<resourcemanager::FoldersConnectionIdempotencyPolicyOption>()) {
    options.set<resourcemanager::FoldersConnectionIdempotencyPolicyOption>(
        resourcemanager::MakeDefaultFoldersConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_internal
}  // namespace cloud
}  // namespace google
