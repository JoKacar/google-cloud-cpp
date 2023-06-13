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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_DOCUMENT_LINK_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_DOCUMENT_LINK_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/contentwarehouse/v1/document_link_service.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace contentwarehouse_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DocumentLinkServiceConnectionIdempotencyPolicy {
 public:
  virtual ~DocumentLinkServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<DocumentLinkServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency ListLinkedTargets(
      google::cloud::contentwarehouse::v1::ListLinkedTargetsRequest const&
          request);

  virtual google::cloud::Idempotency ListLinkedSources(
      google::cloud::contentwarehouse::v1::ListLinkedSourcesRequest request);

  virtual google::cloud::Idempotency CreateDocumentLink(
      google::cloud::contentwarehouse::v1::CreateDocumentLinkRequest const&
          request);

  virtual google::cloud::Idempotency DeleteDocumentLink(
      google::cloud::contentwarehouse::v1::DeleteDocumentLinkRequest const&
          request);
};

std::unique_ptr<DocumentLinkServiceConnectionIdempotencyPolicy>
MakeDefaultDocumentLinkServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_DOCUMENT_LINK_CONNECTION_IDEMPOTENCY_POLICY_H
