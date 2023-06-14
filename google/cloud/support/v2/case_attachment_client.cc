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

#include "google/cloud/support/v2/case_attachment_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace support_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CaseAttachmentServiceClient::CaseAttachmentServiceClient(
    std::shared_ptr<CaseAttachmentServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
CaseAttachmentServiceClient::~CaseAttachmentServiceClient() = default;

StreamRange<google::cloud::support::v2::Attachment>
CaseAttachmentServiceClient::ListAttachments(std::string const& parent,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::support::v2::ListAttachmentsRequest request;
  request.set_parent(parent);
  return connection_->ListAttachments(request);
}

StreamRange<google::cloud::support::v2::Attachment>
CaseAttachmentServiceClient::ListAttachments(
    google::cloud::support::v2::ListAttachmentsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAttachments(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
