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
// source: google/cloud/dialogflow/v2/document.proto

#include "google/cloud/dialogflow_es/internal/documents_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/document.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentsMetadata::DocumentsMetadata(
    std::shared_ptr<DocumentsStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::dialogflow::v2::ListDocumentsResponse>
DocumentsMetadata::ListDocuments(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListDocumentsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListDocuments(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Document>
DocumentsMetadata::GetDocument(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetDocumentRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetDocument(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsMetadata::AsyncCreateDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::CreateDocumentRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateDocument(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsMetadata::AsyncImportDocuments(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::ImportDocumentsRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncImportDocuments(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsMetadata::AsyncDeleteDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::DeleteDocumentRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteDocument(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsMetadata::AsyncUpdateDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::UpdateDocumentRequest const& request) {
  SetMetadata(*context, "document.name=" + request.document().name());
  return child_->AsyncUpdateDocument(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsMetadata::AsyncReloadDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::ReloadDocumentRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncReloadDocument(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsMetadata::AsyncExportDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::ExportDocumentRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncExportDocument(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> DocumentsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void DocumentsMetadata::SetMetadata(grpc::ClientContext& context,
                                    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void DocumentsMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
