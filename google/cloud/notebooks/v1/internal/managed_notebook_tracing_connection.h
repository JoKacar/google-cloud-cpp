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
// source: google/cloud/notebooks/v1/managed_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V1_INTERNAL_MANAGED_NOTEBOOK_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V1_INTERNAL_MANAGED_NOTEBOOK_TRACING_CONNECTION_H

#include "google/cloud/notebooks/v1/managed_notebook_connection.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace notebooks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ManagedNotebookServiceTracingConnection
    : public notebooks_v1::ManagedNotebookServiceConnection {
 public:
  ~ManagedNotebookServiceTracingConnection() override = default;

  explicit ManagedNotebookServiceTracingConnection(
      std::shared_ptr<notebooks_v1::ManagedNotebookServiceConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::notebooks::v1::Runtime> ListRuntimes(
      google::cloud::notebooks::v1::ListRuntimesRequest request) override;

  StatusOr<google::cloud::notebooks::v1::Runtime> GetRuntime(
      google::cloud::notebooks::v1::GetRuntimeRequest const& request) override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> CreateRuntime(
      google::cloud::notebooks::v1::CreateRuntimeRequest const& request)
      override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> UpdateRuntime(
      google::cloud::notebooks::v1::UpdateRuntimeRequest const& request)
      override;

  future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
  DeleteRuntime(google::cloud::notebooks::v1::DeleteRuntimeRequest const&
                    request) override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> StartRuntime(
      google::cloud::notebooks::v1::StartRuntimeRequest const& request)
      override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> StopRuntime(
      google::cloud::notebooks::v1::StopRuntimeRequest const& request) override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> SwitchRuntime(
      google::cloud::notebooks::v1::SwitchRuntimeRequest const& request)
      override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> ResetRuntime(
      google::cloud::notebooks::v1::ResetRuntimeRequest const& request)
      override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> UpgradeRuntime(
      google::cloud::notebooks::v1::UpgradeRuntimeRequest const& request)
      override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> ReportRuntimeEvent(
      google::cloud::notebooks::v1::ReportRuntimeEventRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v1::RefreshRuntimeTokenInternalResponse>
  RefreshRuntimeTokenInternal(
      google::cloud::notebooks::v1::RefreshRuntimeTokenInternalRequest const&
          request) override;

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> DiagnoseRuntime(
      google::cloud::notebooks::v1::DiagnoseRuntimeRequest const& request)
      override;

 private:
  std::shared_ptr<notebooks_v1::ManagedNotebookServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<notebooks_v1::ManagedNotebookServiceConnection>
MakeManagedNotebookServiceTracingConnection(
    std::shared_ptr<notebooks_v1::ManagedNotebookServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V1_INTERNAL_MANAGED_NOTEBOOK_TRACING_CONNECTION_H
