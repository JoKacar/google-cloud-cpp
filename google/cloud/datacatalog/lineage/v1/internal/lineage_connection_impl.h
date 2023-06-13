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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_LINEAGE_V1_INTERNAL_LINEAGE_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_LINEAGE_V1_INTERNAL_LINEAGE_CONNECTION_IMPL_H

#include "google/cloud/datacatalog/lineage/v1/internal/lineage_retry_traits.h"
#include "google/cloud/datacatalog/lineage/v1/internal/lineage_stub.h"
#include "google/cloud/datacatalog/lineage/v1/lineage_connection.h"
#include "google/cloud/datacatalog/lineage/v1/lineage_connection_idempotency_policy.h"
#include "google/cloud/datacatalog/lineage/v1/lineage_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace datacatalog_lineage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class LineageConnectionImpl : public datacatalog_lineage_v1::LineageConnection {
 public:
  ~LineageConnectionImpl() override = default;

  LineageConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<datacatalog_lineage_v1_internal::LineageStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::datacatalog::lineage::v1::Process> CreateProcess(
      google::cloud::datacatalog::lineage::v1::CreateProcessRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::lineage::v1::Process> UpdateProcess(
      google::cloud::datacatalog::lineage::v1::UpdateProcessRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::lineage::v1::Process> GetProcess(
      google::cloud::datacatalog::lineage::v1::GetProcessRequest const& request)
      override;

  StreamRange<google::cloud::datacatalog::lineage::v1::Process> ListProcesses(
      google::cloud::datacatalog::lineage::v1::ListProcessesRequest request)
      override;

  future<StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>
  DeleteProcess(
      google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::lineage::v1::Run> CreateRun(
      google::cloud::datacatalog::lineage::v1::CreateRunRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::lineage::v1::Run> UpdateRun(
      google::cloud::datacatalog::lineage::v1::UpdateRunRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::lineage::v1::Run> GetRun(
      google::cloud::datacatalog::lineage::v1::GetRunRequest const& request)
      override;

  StreamRange<google::cloud::datacatalog::lineage::v1::Run> ListRuns(
      google::cloud::datacatalog::lineage::v1::ListRunsRequest request)
      override;

  future<StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>
  DeleteRun(google::cloud::datacatalog::lineage::v1::DeleteRunRequest const&
                request) override;

  StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
  CreateLineageEvent(
      google::cloud::datacatalog::lineage::v1::CreateLineageEventRequest const&
          request) override;

  StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
  GetLineageEvent(
      google::cloud::datacatalog::lineage::v1::GetLineageEventRequest const&
          request) override;

  StreamRange<google::cloud::datacatalog::lineage::v1::LineageEvent>
  ListLineageEvents(
      google::cloud::datacatalog::lineage::v1::ListLineageEventsRequest request)
      override;

  Status DeleteLineageEvent(
      google::cloud::datacatalog::lineage::v1::DeleteLineageEventRequest const&
          request) override;

  StreamRange<google::cloud::datacatalog::lineage::v1::Link> SearchLinks(
      google::cloud::datacatalog::lineage::v1::SearchLinksRequest request)
      override;

  StreamRange<google::cloud::datacatalog::lineage::v1::ProcessLinks>
  BatchSearchLinkProcesses(
      google::cloud::datacatalog::lineage::v1::BatchSearchLinkProcessesRequest
          request) override;

 private:
  std::unique_ptr<datacatalog_lineage_v1::LineageRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<datacatalog_lineage_v1::LineageRetryPolicyOption>()) {
      return options.get<datacatalog_lineage_v1::LineageRetryPolicyOption>()
          ->clone();
    }
    return options_.get<datacatalog_lineage_v1::LineageRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<datacatalog_lineage_v1::LineageBackoffPolicyOption>()) {
      return options.get<datacatalog_lineage_v1::LineageBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<datacatalog_lineage_v1::LineageBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<datacatalog_lineage_v1::LineageConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<datacatalog_lineage_v1::
                        LineageConnectionIdempotencyPolicyOption>()) {
      return options
          .get<datacatalog_lineage_v1::
                   LineageConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<datacatalog_lineage_v1::LineageConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<datacatalog_lineage_v1::LineagePollingPolicyOption>()) {
      return options.get<datacatalog_lineage_v1::LineagePollingPolicyOption>()
          ->clone();
    }
    return options_.get<datacatalog_lineage_v1::LineagePollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<datacatalog_lineage_v1_internal::LineageStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_lineage_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_LINEAGE_V1_INTERNAL_LINEAGE_CONNECTION_IMPL_H
