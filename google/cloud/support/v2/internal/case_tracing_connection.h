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
// source: google/cloud/support/v2/case_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SUPPORT_V2_INTERNAL_CASE_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SUPPORT_V2_INTERNAL_CASE_TRACING_CONNECTION_H

#include "google/cloud/support/v2/case_connection.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace support_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CaseServiceTracingConnection : public support_v2::CaseServiceConnection {
 public:
  ~CaseServiceTracingConnection() override = default;

  explicit CaseServiceTracingConnection(
      std::shared_ptr<support_v2::CaseServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::support::v2::Case> GetCase(
      google::cloud::support::v2::GetCaseRequest const& request) override;

  StreamRange<google::cloud::support::v2::Case> ListCases(
      google::cloud::support::v2::ListCasesRequest request) override;

  StreamRange<google::cloud::support::v2::Case> SearchCases(
      google::cloud::support::v2::SearchCasesRequest request) override;

  StatusOr<google::cloud::support::v2::Case> CreateCase(
      google::cloud::support::v2::CreateCaseRequest const& request) override;

  StatusOr<google::cloud::support::v2::Case> UpdateCase(
      google::cloud::support::v2::UpdateCaseRequest const& request) override;

  StatusOr<google::cloud::support::v2::Case> EscalateCase(
      google::cloud::support::v2::EscalateCaseRequest const& request) override;

  StatusOr<google::cloud::support::v2::Case> CloseCase(
      google::cloud::support::v2::CloseCaseRequest const& request) override;

  StreamRange<google::cloud::support::v2::CaseClassification>
  SearchCaseClassifications(
      google::cloud::support::v2::SearchCaseClassificationsRequest request)
      override;

 private:
  std::shared_ptr<support_v2::CaseServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<support_v2::CaseServiceConnection>
MakeCaseServiceTracingConnection(
    std::shared_ptr<support_v2::CaseServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SUPPORT_V2_INTERNAL_CASE_TRACING_CONNECTION_H
