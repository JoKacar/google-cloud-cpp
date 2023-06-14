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
// source:
// google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto

#include "google/cloud/compute/interconnect_attachments/v1/interconnect_attachments_connection.h"
#include "google/cloud/compute/interconnect_attachments/v1/interconnect_attachments_options.h"
#include "google/cloud/compute/interconnect_attachments/v1/internal/interconnect_attachments_option_defaults.h"
#include "google/cloud/compute/interconnect_attachments/v1/internal/interconnect_attachments_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_interconnect_attachments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InterconnectAttachmentsConnection::~InterconnectAttachmentsConnection() =
    default;

StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachmentAggregatedList>
InterconnectAttachmentsConnection::AggregatedListInterconnectAttachments(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        AggregatedListInterconnectAttachmentsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsConnection::DeleteInterconnectAttachments(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        DeleteInterconnectAttachmentsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachment>
InterconnectAttachmentsConnection::GetInterconnectAttachments(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        GetInterconnectAttachmentsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsConnection::InsertInterconnectAttachments(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        InsertInterconnectAttachmentsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::InterconnectAttachment>
InterconnectAttachmentsConnection::ListInterconnectAttachments(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        ListInterconnectAttachmentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::InterconnectAttachment>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsConnection::PatchInterconnectAttachments(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        PatchInterconnectAttachmentsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InterconnectAttachmentsConnection::SetLabels(
    google::cloud::cpp::compute::interconnect_attachments::v1::
        SetLabelsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_attachments_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
