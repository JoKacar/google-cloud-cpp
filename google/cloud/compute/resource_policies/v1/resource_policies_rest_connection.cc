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
// source: google/cloud/compute/resource_policies/v1/resource_policies.proto

#include "google/cloud/compute/resource_policies/v1/resource_policies_rest_connection.h"
#include "google/cloud/compute/resource_policies/v1/internal/resource_policies_option_defaults.h"
#include "google/cloud/compute/resource_policies/v1/internal/resource_policies_rest_connection_impl.h"
#include "google/cloud/compute/resource_policies/v1/internal/resource_policies_rest_stub_factory.h"
#include "google/cloud/compute/resource_policies/v1/internal/resource_policies_tracing_connection.h"
#include "google/cloud/compute/resource_policies/v1/resource_policies_options.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/rest_background_threads_impl.h"
#include "google/cloud/internal/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_resource_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<ResourcePoliciesConnection> MakeResourcePoliciesConnectionRest(
    Options options) {
  internal::CheckExpectedOptions<
      CommonOptionList, RestOptionList, UnifiedCredentialsOptionList,
      rest_internal::TargetApiVersionOption, ResourcePoliciesPolicyOptionList>(
      options, __func__);
  options =
      compute_resource_policies_v1_internal::ResourcePoliciesDefaultOptions(
          std::move(options));
  auto background = std::make_unique<
      rest_internal::AutomaticallyCreatedRestBackgroundThreads>();
  auto stub = compute_resource_policies_v1_internal::
      CreateDefaultResourcePoliciesRestStub(options);
  return compute_resource_policies_v1_internal::
      MakeResourcePoliciesTracingConnection(
          std::make_shared<compute_resource_policies_v1_internal::
                               ResourcePoliciesRestConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_resource_policies_v1
}  // namespace cloud
}  // namespace google
