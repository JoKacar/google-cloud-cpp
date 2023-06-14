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
// source: google/cloud/support/v2/attachment_service.proto

#include "google/cloud/support/v2/internal/case_attachment_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace support_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CaseAttachmentServiceTracingConnection::CaseAttachmentServiceTracingConnection(
    std::shared_ptr<support_v2::CaseAttachmentServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::support::v2::Attachment>
CaseAttachmentServiceTracingConnection::ListAttachments(
    google::cloud::support::v2::ListAttachmentsRequest request) {
  auto span = internal::MakeSpan(
      "support_v2::CaseAttachmentServiceConnection::ListAttachments");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListAttachments(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::support::v2::Attachment>(std::move(span), std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<support_v2::CaseAttachmentServiceConnection>
MakeCaseAttachmentServiceTracingConnection(
    std::shared_ptr<support_v2::CaseAttachmentServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<CaseAttachmentServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
