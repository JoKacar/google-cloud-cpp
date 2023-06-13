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
// source: google/cloud/dialogflow/v2/context.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONTEXTS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONTEXTS_LOGGING_DECORATOR_H

#include "google/cloud/dialogflow_es/internal/contexts_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ContextsLogging : public ContextsStub {
 public:
  ~ContextsLogging() override = default;
  ContextsLogging(std::shared_ptr<ContextsStub> child,
                  TracingOptions tracing_options,
                  std::set<std::string> components);

  StatusOr<google::cloud::dialogflow::v2::ListContextsResponse> ListContexts(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::ListContextsRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Context> GetContext(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::GetContextRequest const& request) override;

  StatusOr<google::cloud::dialogflow::v2::Context> CreateContext(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::CreateContextRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Context> UpdateContext(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::UpdateContextRequest const& request)
      override;

  Status DeleteContext(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::DeleteContextRequest const& request)
      override;

  Status DeleteAllContexts(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::DeleteAllContextsRequest const& request)
      override;

 private:
  std::shared_ptr<ContextsStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // ContextsLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONTEXTS_LOGGING_DECORATOR_H
