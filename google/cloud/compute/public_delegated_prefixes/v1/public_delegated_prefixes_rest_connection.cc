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
// source:
// google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto

#include "google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes_rest_connection.h"
#include "google/cloud/compute/public_delegated_prefixes/v1/internal/public_delegated_prefixes_option_defaults.h"
#include "google/cloud/compute/public_delegated_prefixes/v1/internal/public_delegated_prefixes_rest_connection_impl.h"
#include "google/cloud/compute/public_delegated_prefixes/v1/internal/public_delegated_prefixes_rest_stub_factory.h"
#include "google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes_options.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/rest_background_threads_impl.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_public_delegated_prefixes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<PublicDelegatedPrefixesConnection>
MakePublicDelegatedPrefixesConnectionRest(ExperimentalTag, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, RestOptionList,
                                 UnifiedCredentialsOptionList,
                                 PublicDelegatedPrefixesPolicyOptionList>(
      options, __func__);
  options = compute_public_delegated_prefixes_v1_internal::
      PublicDelegatedPrefixesDefaultOptions(std::move(options));
  auto background = std::make_unique<
      rest_internal::AutomaticallyCreatedRestBackgroundThreads>();
  auto stub = compute_public_delegated_prefixes_v1_internal::
      CreateDefaultPublicDelegatedPrefixesRestStub(options);
  return std::make_shared<compute_public_delegated_prefixes_v1_internal::
                              PublicDelegatedPrefixesRestConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_delegated_prefixes_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
