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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_DOCUMENT_LINK_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_DOCUMENT_LINK_TRACING_STUB_H

#include "google/cloud/contentwarehouse/v1/internal/document_link_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DocumentLinkServiceTracingStub : public DocumentLinkServiceStub {
 public:
  ~DocumentLinkServiceTracingStub() override = default;

  explicit DocumentLinkServiceTracingStub(
      std::shared_ptr<DocumentLinkServiceStub> child);

  StatusOr<google::cloud::contentwarehouse::v1::ListLinkedTargetsResponse>
  ListLinkedTargets(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::ListLinkedTargetsRequest const&
          request) override;

  StatusOr<google::cloud::contentwarehouse::v1::ListLinkedSourcesResponse>
  ListLinkedSources(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::ListLinkedSourcesRequest const&
          request) override;

  StatusOr<google::cloud::contentwarehouse::v1::DocumentLink>
  CreateDocumentLink(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::CreateDocumentLinkRequest const&
          request) override;

  Status DeleteDocumentLink(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::DeleteDocumentLinkRequest const&
          request) override;

 private:
  std::shared_ptr<DocumentLinkServiceStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<DocumentLinkServiceStub> MakeDocumentLinkServiceTracingStub(
    std::shared_ptr<DocumentLinkServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_DOCUMENT_LINK_TRACING_STUB_H
