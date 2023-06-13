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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_INTERNAL_INTERCONNECT_ATTACHMENTS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_INTERNAL_INTERCONNECT_ATTACHMENTS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/interconnect_attachments/v1/interconnect_attachments_connection.h"
#include "google/cloud/compute/interconnect_attachments/v1/interconnect_attachments_connection_idempotency_policy.h"
#include "google/cloud/compute/interconnect_attachments/v1/interconnect_attachments_options.h"
#include "google/cloud/compute/interconnect_attachments/v1/internal/interconnect_attachments_rest_stub.h"
#include "google/cloud/compute/interconnect_attachments/v1/internal/interconnect_attachments_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_interconnect_attachments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InterconnectAttachmentsRestConnectionImpl
    : public compute_interconnect_attachments_v1::
          InterconnectAttachmentsConnection {
 public:
  ~InterconnectAttachmentsRestConnectionImpl() override = default;

  InterconnectAttachmentsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_interconnect_attachments_v1_internal::
                          InterconnectAttachmentsRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<
      google::cloud::cpp::compute::v1::InterconnectAttachmentAggregatedList>
  AggregatedListInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          AggregatedListInterconnectAttachmentsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          DeleteInterconnectAttachmentsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachment>
  GetInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          GetInterconnectAttachmentsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          InsertInterconnectAttachmentsRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::InterconnectAttachment>
  ListInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          ListInterconnectAttachmentsRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchInterconnectAttachments(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          PatchInterconnectAttachmentsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::interconnect_attachments::v1::
          SetLabelsRequest const& request) override;

 private:
  std::unique_ptr<
      compute_interconnect_attachments_v1::InterconnectAttachmentsRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_interconnect_attachments_v1::
                        InterconnectAttachmentsRetryPolicyOption>()) {
      return options
          .get<compute_interconnect_attachments_v1::
                   InterconnectAttachmentsRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_interconnect_attachments_v1::
                 InterconnectAttachmentsRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_interconnect_attachments_v1::
                        InterconnectAttachmentsBackoffPolicyOption>()) {
      return options
          .get<compute_interconnect_attachments_v1::
                   InterconnectAttachmentsBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_interconnect_attachments_v1::
                 InterconnectAttachmentsBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<compute_interconnect_attachments_v1::
                      InterconnectAttachmentsConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            compute_interconnect_attachments_v1::
                InterconnectAttachmentsConnectionIdempotencyPolicyOption>()) {
      return options
          .get<compute_interconnect_attachments_v1::
                   InterconnectAttachmentsConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_interconnect_attachments_v1::
                 InterconnectAttachmentsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_interconnect_attachments_v1::
                        InterconnectAttachmentsPollingPolicyOption>()) {
      return options
          .get<compute_interconnect_attachments_v1::
                   InterconnectAttachmentsPollingPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_interconnect_attachments_v1::
                 InterconnectAttachmentsPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_interconnect_attachments_v1_internal::
                      InterconnectAttachmentsRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_attachments_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_INTERNAL_INTERCONNECT_ATTACHMENTS_REST_CONNECTION_IMPL_H
