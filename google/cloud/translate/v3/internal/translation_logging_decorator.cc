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
// source: google/cloud/translate/v3/translation_service.proto

#include "google/cloud/translate/v3/internal/translation_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/translate/v3/translation_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace translate_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TranslationServiceLogging::TranslationServiceLogging(
    std::shared_ptr<TranslationServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::translation::v3::TranslateTextResponse>
TranslationServiceLogging::TranslateText(
    grpc::ClientContext& context,
    google::cloud::translation::v3::TranslateTextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::translation::v3::TranslateTextRequest const& request) {
        return child_->TranslateText(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
TranslationServiceLogging::DetectLanguage(
    grpc::ClientContext& context,
    google::cloud::translation::v3::DetectLanguageRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::translation::v3::DetectLanguageRequest const&
                 request) { return child_->DetectLanguage(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::SupportedLanguages>
TranslationServiceLogging::GetSupportedLanguages(
    grpc::ClientContext& context,
    google::cloud::translation::v3::GetSupportedLanguagesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::translation::v3::GetSupportedLanguagesRequest const&
                 request) {
        return child_->GetSupportedLanguages(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
TranslationServiceLogging::TranslateDocument(
    grpc::ClientContext& context,
    google::cloud::translation::v3::TranslateDocumentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::translation::v3::TranslateDocumentRequest const&
                 request) {
        return child_->TranslateDocument(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncBatchTranslateText(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::translation::v3::BatchTranslateTextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::translation::v3::BatchTranslateTextRequest const&
                 request) {
        return child_->AsyncBatchTranslateText(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncBatchTranslateDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::translation::v3::BatchTranslateDocumentRequest const&
              request) {
        return child_->AsyncBatchTranslateDocument(cq, std::move(context),
                                                   request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncCreateGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::translation::v3::CreateGlossaryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::translation::v3::CreateGlossaryRequest const&
                 request) {
        return child_->AsyncCreateGlossary(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::ListGlossariesResponse>
TranslationServiceLogging::ListGlossaries(
    grpc::ClientContext& context,
    google::cloud::translation::v3::ListGlossariesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::translation::v3::ListGlossariesRequest const&
                 request) { return child_->ListGlossaries(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::translation::v3::Glossary>
TranslationServiceLogging::GetGlossary(
    grpc::ClientContext& context,
    google::cloud::translation::v3::GetGlossaryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::translation::v3::GetGlossaryRequest const& request) {
        return child_->GetGlossary(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncDeleteGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::translation::v3::DeleteGlossaryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::translation::v3::DeleteGlossaryRequest const&
                 request) {
        return child_->AsyncDeleteGlossary(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> TranslationServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_v3_internal
}  // namespace cloud
}  // namespace google
