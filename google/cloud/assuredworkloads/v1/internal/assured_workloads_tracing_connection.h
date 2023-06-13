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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_V1_INTERNAL_ASSURED_WORKLOADS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_V1_INTERNAL_ASSURED_WORKLOADS_TRACING_CONNECTION_H

#include "google/cloud/assuredworkloads/v1/assured_workloads_connection.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace assuredworkloads_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class AssuredWorkloadsServiceTracingConnection
    : public assuredworkloads_v1::AssuredWorkloadsServiceConnection {
 public:
  ~AssuredWorkloadsServiceTracingConnection() override = default;

  explicit AssuredWorkloadsServiceTracingConnection(
      std::shared_ptr<assuredworkloads_v1::AssuredWorkloadsServiceConnection>
          child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
  CreateWorkload(
      google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::Workload> UpdateWorkload(
      google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request)
      override;

  StatusOr<
      google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse>
  RestrictAllowedResources(
      google::cloud::assuredworkloads::v1::
          RestrictAllowedResourcesRequest const& request) override;

  Status DeleteWorkload(
      google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::Workload> GetWorkload(
      google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request)
      override;

  StreamRange<google::cloud::assuredworkloads::v1::Workload> ListWorkloads(
      google::cloud::assuredworkloads::v1::ListWorkloadsRequest request)
      override;

  StreamRange<google::cloud::assuredworkloads::v1::Violation> ListViolations(
      google::cloud::assuredworkloads::v1::ListViolationsRequest request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::Violation> GetViolation(
      google::cloud::assuredworkloads::v1::GetViolationRequest const& request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse>
  AcknowledgeViolation(
      google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest const&
          request) override;

 private:
  std::shared_ptr<assuredworkloads_v1::AssuredWorkloadsServiceConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<assuredworkloads_v1::AssuredWorkloadsServiceConnection>
MakeAssuredWorkloadsServiceTracingConnection(
    std::shared_ptr<assuredworkloads_v1::AssuredWorkloadsServiceConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_V1_INTERNAL_ASSURED_WORKLOADS_TRACING_CONNECTION_H
