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
// source: google/cloud/compute/firewall_policies/v1/firewall_policies.proto

#include "google/cloud/compute/firewall_policies/v1/internal/firewall_policies_rest_stub_factory.h"
#include "google/cloud/compute/firewall_policies/v1/internal/firewall_policies_rest_logging_decorator.h"
#include "google/cloud/compute/firewall_policies/v1/internal/firewall_policies_rest_metadata_decorator.h"
#include "google/cloud/compute/firewall_policies/v1/internal/firewall_policies_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/rest_options.h"
#include "google/cloud/internal/rest_stub_factory_helpers.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_firewall_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<FirewallPoliciesRestStub> CreateDefaultFirewallPoliciesRestStub(
    Options& options) {
  Options stub_creation_opts = rest_internal::DetermineStubCreationOptions(
      internal::GetEnv("GOOGLE_CLOUD_CPP_FIREWALL_POLICIES_ENDPOINT"),
      "compute.googleapis.com", options);

  std::shared_ptr<FirewallPoliciesRestStub> stub =
      std::make_shared<DefaultFirewallPoliciesRestStub>(
          std::move(stub_creation_opts));
  stub = std::make_shared<FirewallPoliciesRestMetadata>(std::move(stub));
  if (internal::Contains(options.get<TracingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for REST rpc calls";
    stub = std::make_shared<FirewallPoliciesRestLogging>(
        std::move(stub), options.get<RestTracingOptionsOption>(),
        options.get<TracingComponentsOption>());
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_firewall_policies_v1_internal
}  // namespace cloud
}  // namespace google
