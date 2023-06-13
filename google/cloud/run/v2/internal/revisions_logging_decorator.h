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
// source: google/cloud/run/v2/revision.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_REVISIONS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_REVISIONS_LOGGING_DECORATOR_H

#include "google/cloud/run/v2/internal/revisions_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace run_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RevisionsLogging : public RevisionsStub {
 public:
  ~RevisionsLogging() override = default;
  RevisionsLogging(std::shared_ptr<RevisionsStub> child,
                   TracingOptions tracing_options,
                   std::set<std::string> components);

  StatusOr<google::cloud::run::v2::Revision> GetRevision(
      grpc::ClientContext& context,
      google::cloud::run::v2::GetRevisionRequest const& request) override;

  StatusOr<google::cloud::run::v2::ListRevisionsResponse> ListRevisions(
      grpc::ClientContext& context,
      google::cloud::run::v2::ListRevisionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRevision(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::run::v2::DeleteRevisionRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<RevisionsStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // RevisionsLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_REVISIONS_LOGGING_DECORATOR_H
