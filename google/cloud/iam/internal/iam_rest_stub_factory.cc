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
// source: google/iam/admin/v1/iam.proto

#include "google/cloud/iam/internal/iam_rest_stub_factory.h"
//#include "google/cloud/iam/internal/iam_auth_decorator.h"
#include "google/cloud/iam/internal/iam_rest_logging_decorator.h"
#include "google/cloud/iam/internal/iam_rest_metadata_decorator.h"
#include "google/cloud/iam/internal/iam_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include "google/cloud/rest_options.h"
//#include <google/iam/admin/v1/iam.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iam_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<IAMRestStub> CreateDefaultIAMRestStub(Options options) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  //  auto auth = google::cloud::internal::CreateAuthenticationStrategy(
  //      std::move(cq), options);
  //  auto channel = auth->CreateChannel(options.get<EndpointOption>(),
  //                                     internal::MakeChannelArguments(options));
  //  auto service_grpc_stub = google::iam::admin::v1::IAM::NewStub(channel);
  if (!options.has<UnifiedCredentialsOption>()) {
    options.set<UnifiedCredentialsOption>(MakeGoogleDefaultCredentials());
  }
  std::shared_ptr<IAMRestStub> stub =
      std::make_shared<DefaultIAMRestStub>(options);
  //
  //  if (auth->RequiresConfigureContext()) {
  //    stub = std::make_shared<IAMAuth>(std::move(auth), std::move(stub));
  //  }
  stub = std::make_shared<IAMRestMetadata>(std::move(stub));
  if (internal::Contains(options.get<TracingComponentsOption>(), "http")) {
    GCP_LOG(INFO) << "Enabled logging for HTTP calls";
    stub = std::make_shared<IAMRestLogging>(
        std::move(stub), options.get<RestTracingOptionsOption>(),
        options.get<TracingComponentsOption>());
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google
