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
// source: google/cloud/compute/networks/v1/networks.proto

#include "google/cloud/compute/networks/v1/networks_rest_connection.h"
#include "google/cloud/compute/networks/v1/internal/networks_option_defaults.h"
#include "google/cloud/compute/networks/v1/internal/networks_rest_connection_impl.h"
#include "google/cloud/compute/networks/v1/internal/networks_rest_stub_factory.h"
#include "google/cloud/compute/networks/v1/internal/networks_tracing_connection.h"
#include "google/cloud/compute/networks/v1/networks_options.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/rest_background_threads_impl.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_networks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<NetworksConnection> MakeNetworksConnectionRest(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, RestOptionList,
                                 UnifiedCredentialsOptionList,
                                 NetworksPolicyOptionList>(options, __func__);
  options =
      compute_networks_v1_internal::NetworksDefaultOptions(std::move(options));
  auto background = std::make_unique<
      rest_internal::AutomaticallyCreatedRestBackgroundThreads>();
  auto stub =
      compute_networks_v1_internal::CreateDefaultNetworksRestStub(options);
  return compute_networks_v1_internal::MakeNetworksTracingConnection(
      std::make_shared<
          compute_networks_v1_internal::NetworksRestConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_networks_v1
}  // namespace cloud
}  // namespace google
