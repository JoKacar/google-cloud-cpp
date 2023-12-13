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
// google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto

#include "google/cloud/compute/public_advertised_prefixes/v1/internal/public_advertised_prefixes_rest_stub_factory.h"
#include "google/cloud/compute/public_advertised_prefixes/v1/internal/public_advertised_prefixes_rest_logging_decorator.h"
#include "google/cloud/compute/public_advertised_prefixes/v1/internal/public_advertised_prefixes_rest_metadata_decorator.h"
#include "google/cloud/compute/public_advertised_prefixes/v1/internal/public_advertised_prefixes_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/internal/credentials_impl.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/rest_options.h"
#include "google/cloud/internal/service_endpoint.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include "google/cloud/rest_options.h"
#include "absl/strings/match.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_public_advertised_prefixes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<PublicAdvertisedPrefixesRestStub>
CreateDefaultPublicAdvertisedPrefixesRestStub(Options& options) {
  Options stub_creation_opts = options;
  if (!options.has<UnifiedCredentialsOption>()) {
    stub_creation_opts.set<UnifiedCredentialsOption>(
        MakeGoogleDefaultCredentials(internal::MakeAuthOptions(options)));
  }
  auto lro_endpoint = internal::DetermineServiceEndpoint(
      {},
      internal::FetchOption<rest_internal::LongrunningEndpointOption>(options),
      "https://longrunning.googleapis.com", options);

  auto service_endpoint = internal::DetermineServiceEndpoint(
      internal::GetEnv("GOOGLE_CLOUD_CPP_PUBLIC_ADVERTISED_PREFIXES_ENDPOINT"),
      internal::FetchOption<EndpointOption>(options), "compute.googleapis.com",
      options);

  if (!lro_endpoint.ok() || !service_endpoint.ok()) {
    if (!service_endpoint.ok()) {
      options.unset<EndpointOption>();
      stub_creation_opts.set<UnifiedCredentialsOption>(
          internal::MakeErrorCredentials(std::move(service_endpoint).status()));
    } else {
      options.unset<rest_internal::LongrunningEndpointOption>();
      stub_creation_opts.set<UnifiedCredentialsOption>(
          internal::MakeErrorCredentials(std::move(lro_endpoint).status()));
    }
  } else {
    if (!absl::StartsWithIgnoreCase(*lro_endpoint, "http")) {
      stub_creation_opts.set<rest_internal::LongrunningEndpointOption>(
          absl::StrCat("https://", *lro_endpoint));
    } else {
      stub_creation_opts.set<rest_internal::LongrunningEndpointOption>(
          *lro_endpoint);
    }

    if (!absl::StartsWithIgnoreCase(*service_endpoint, "http")) {
      stub_creation_opts.set<EndpointOption>(
          absl::StrCat("https://", *service_endpoint));
    } else {
      stub_creation_opts.set<EndpointOption>(*service_endpoint);
    }
    options.set<EndpointOption>(*service_endpoint);
    options.set<rest_internal::LongrunningEndpointOption>(*lro_endpoint);
  }

  std::shared_ptr<PublicAdvertisedPrefixesRestStub> stub =
      std::make_shared<DefaultPublicAdvertisedPrefixesRestStub>(
          std::move(stub_creation_opts));
  stub =
      std::make_shared<PublicAdvertisedPrefixesRestMetadata>(std::move(stub));
  if (internal::Contains(options.get<TracingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for REST rpc calls";
    stub = std::make_shared<PublicAdvertisedPrefixesRestLogging>(
        std::move(stub), options.get<RestTracingOptionsOption>(),
        options.get<TracingComponentsOption>());
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_advertised_prefixes_v1_internal
}  // namespace cloud
}  // namespace google
