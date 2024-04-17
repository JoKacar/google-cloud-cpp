// Copyright 2024 Google LLC
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
// source: google/cloud/sql/v1/cloud_sql_iam_policies.proto

#include "google/cloud/sql/v1/internal/sql_iam_policies_rest_stub_factory.h"
#include "google/cloud/sql/v1/internal/sql_iam_policies_rest_logging_decorator.h"
#include "google/cloud/sql/v1/internal/sql_iam_policies_rest_metadata_decorator.h"
#include "google/cloud/sql/v1/internal/sql_iam_policies_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/internal/populate_rest_options.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include "google/cloud/rest_options.h"
#include "absl/strings/match.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<SqlIamPoliciesServiceRestStub>
CreateDefaultSqlIamPoliciesServiceRestStub(Options const& options) {
  auto opts = internal::PopulateRestOptions(options);
  std::shared_ptr<SqlIamPoliciesServiceRestStub> stub =
      std::make_shared<DefaultSqlIamPoliciesServiceRestStub>(std::move(opts));
  stub = std::make_shared<SqlIamPoliciesServiceRestMetadata>(std::move(stub));
  if (internal::Contains(options.get<TracingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for REST rpc calls";
    stub = std::make_shared<SqlIamPoliciesServiceRestLogging>(
        std::move(stub), options.get<RestTracingOptionsOption>(),
        options.get<TracingComponentsOption>());
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google
