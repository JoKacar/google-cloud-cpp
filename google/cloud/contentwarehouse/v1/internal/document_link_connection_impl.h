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
// source: google/cloud/contentwarehouse/v1/document_link_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_DOCUMENT_LINK_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_DOCUMENT_LINK_CONNECTION_IMPL_H

#include "google/cloud/contentwarehouse/v1/document_link_connection.h"
#include "google/cloud/contentwarehouse/v1/document_link_connection_idempotency_policy.h"
#include "google/cloud/contentwarehouse/v1/document_link_options.h"
#include "google/cloud/contentwarehouse/v1/internal/document_link_retry_traits.h"
#include "google/cloud/contentwarehouse/v1/internal/document_link_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DocumentLinkServiceConnectionImpl
    : public contentwarehouse_v1::DocumentLinkServiceConnection {
 public:
  ~DocumentLinkServiceConnectionImpl() override = default;

  DocumentLinkServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<contentwarehouse_v1_internal::DocumentLinkServiceStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::contentwarehouse::v1::ListLinkedTargetsResponse>
  ListLinkedTargets(
      google::cloud::contentwarehouse::v1::ListLinkedTargetsRequest const&
          request) override;

  StreamRange<google::cloud::contentwarehouse::v1::DocumentLink>
  ListLinkedSources(
      google::cloud::contentwarehouse::v1::ListLinkedSourcesRequest request)
      override;

  StatusOr<google::cloud::contentwarehouse::v1::DocumentLink>
  CreateDocumentLink(
      google::cloud::contentwarehouse::v1::CreateDocumentLinkRequest const&
          request) override;

  Status DeleteDocumentLink(
      google::cloud::contentwarehouse::v1::DeleteDocumentLinkRequest const&
          request) override;

 private:
  std::unique_ptr<contentwarehouse_v1::DocumentLinkServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<contentwarehouse_v1::DocumentLinkServiceRetryPolicyOption>()) {
      return options
          .get<contentwarehouse_v1::DocumentLinkServiceRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<contentwarehouse_v1::DocumentLinkServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            contentwarehouse_v1::DocumentLinkServiceBackoffPolicyOption>()) {
      return options
          .get<contentwarehouse_v1::DocumentLinkServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<contentwarehouse_v1::DocumentLinkServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<
      contentwarehouse_v1::DocumentLinkServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<contentwarehouse_v1::
                     DocumentLinkServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<contentwarehouse_v1::
                   DocumentLinkServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<contentwarehouse_v1::
                 DocumentLinkServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<contentwarehouse_v1_internal::DocumentLinkServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_DOCUMENT_LINK_CONNECTION_IMPL_H
