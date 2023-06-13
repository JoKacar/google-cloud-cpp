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
// source: google/cloud/datacatalog/lineage/v1/lineage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_LINEAGE_V1_INTERNAL_LINEAGE_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_LINEAGE_V1_INTERNAL_LINEAGE_LOGGING_DECORATOR_H

#include "google/cloud/datacatalog/lineage/v1/internal/lineage_stub.h"
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
namespace datacatalog_lineage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class LineageLogging : public LineageStub {
 public:
  ~LineageLogging() override = default;
  LineageLogging(std::shared_ptr<LineageStub> child,
                 TracingOptions tracing_options,
                 std::set<std::string> components);

  StatusOr<google::cloud::datacatalog::lineage::v1::Process> CreateProcess(
      grpc::ClientContext& context,
      google::cloud::datacatalog::lineage::v1::CreateProcessRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::lineage::v1::Process> UpdateProcess(
      grpc::ClientContext& context,
      google::cloud::datacatalog::lineage::v1::UpdateProcessRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::lineage::v1::Process> GetProcess(
      grpc::ClientContext& context,
      google::cloud::datacatalog::lineage::v1::GetProcessRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::lineage::v1::ListProcessesResponse>
  ListProcesses(
      grpc::ClientContext& context,
      google::cloud::datacatalog::lineage::v1::ListProcessesRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteProcess(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::lineage::v1::Run> CreateRun(
      grpc::ClientContext& context,
      google::cloud::datacatalog::lineage::v1::CreateRunRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::lineage::v1::Run> UpdateRun(
      grpc::ClientContext& context,
      google::cloud::datacatalog::lineage::v1::UpdateRunRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::lineage::v1::Run> GetRun(
      grpc::ClientContext& context,
      google::cloud::datacatalog::lineage::v1::GetRunRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::lineage::v1::ListRunsResponse> ListRuns(
      grpc::ClientContext& context,
      google::cloud::datacatalog::lineage::v1::ListRunsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRun(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::datacatalog::lineage::v1::DeleteRunRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
  CreateLineageEvent(
      grpc::ClientContext& context,
      google::cloud::datacatalog::lineage::v1::CreateLineageEventRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
  GetLineageEvent(
      grpc::ClientContext& context,
      google::cloud::datacatalog::lineage::v1::GetLineageEventRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::lineage::v1::ListLineageEventsResponse>
  ListLineageEvents(
      grpc::ClientContext& context,
      google::cloud::datacatalog::lineage::v1::ListLineageEventsRequest const&
          request) override;

  Status DeleteLineageEvent(
      grpc::ClientContext& context,
      google::cloud::datacatalog::lineage::v1::DeleteLineageEventRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::lineage::v1::SearchLinksResponse>
  SearchLinks(grpc::ClientContext& context,
              google::cloud::datacatalog::lineage::v1::SearchLinksRequest const&
                  request) override;

  StatusOr<
      google::cloud::datacatalog::lineage::v1::BatchSearchLinkProcessesResponse>
  BatchSearchLinkProcesses(
      grpc::ClientContext& context,
      google::cloud::datacatalog::lineage::v1::
          BatchSearchLinkProcessesRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<LineageStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // LineageLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_lineage_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_LINEAGE_V1_INTERNAL_LINEAGE_LOGGING_DECORATOR_H
